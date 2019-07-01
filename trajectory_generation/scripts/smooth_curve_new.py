import math
import matplotlib.pyplot as plt
import numpy as np
#import bezier
import numpy.polynomial.polynomial as poly

"""
Problem Description:
    Given current pose A(0, 0, 0) and goal pose B(x, y, theta), 
    Need to connect them with lines and curves with smoothly-changing curvature
    In this simplified version, we will try to use lines and cubic curves
    Steps:
    1. Draw a line along the goal pose l1, find its intersection point C with l0 = x-axis
    2. Draw a line l2 that is perpendicular to the angle bisector of l0 and l1
    3. Choose a point D on l2, find the closer of A/B to D, say it is A
    4. Find a piecewise cubic curve C1 from l0 to D whose tangent at D is perpendicular to l2
    5. Make a reflection of C1 w.r.t l2
"""
  
        
class ParametizedPolynomialCurve(object):
    """
    Parametized Polynomial Curve Object y = f(x)
        x = P1(t)
        y = P2(t)
        where P1 and P2 are polynomials of t

       In matrix expression, 
       coefs is a 2*N matrix of coefficients.
       T = ([pow(t,i) for i in range(N)]).Transpose
       [[x], [y]] = matrix_mul(coefs, T)
    """
    def __init__(self, coefs, bounds = [-10,10]):
        self.bounds = (min([t for t in bounds]), max([t for t in bounds]))
        self.type = 'parametized polynomial'
        self.coefs = coefs
        self.degree = len(coefs[0])-1
        self.mesh = []
        self.coef_x = coefs[0]
        self.coef_y = coefs[1]

    def coord_at(self, t):
        x = poly.polyval(t, self.coef_x)
        y = poly.polyval(t, self.coef_y)
        return (x,y)

    def pose_at(self, t):
        point = self.coord_at(t)
        vel = self.velocity_at(t)
        theta = math.atan2(vel[1], vel[0])
        return (point[0], point[1], theta)

    def velocity_at(self, t):
        vel_coef_x = poly.polyder(self.coef_x)
        vel_coef_y = poly.polyder(self.coef_y)
        vel_x = poly.polyval(t, vel_coef_x)
        vel_y = poly.polyval(t, vel_coef_y)
        return (vel_x, vel_y)
    
    def speed_at(self, t):
        vel_x, vel_y = self.velocity_at(t)
        speed = pow(vel_x*vel_x + vel_y*vel_y ,0.5)
        return speed

    def acceleration_at(self, t):
        vel_coef_x = poly.polyder(self.coef_x)
        vel_coef_y = poly.polyder(self.coef_y)
        acc_coef_x = poly.polyder(vel_coef_x)
        acc_coef_y = poly.polyder(vel_coef_y)
        acc_x = poly.polyval(t, acc_coef_x)
        acc_y = poly.polyval(t, acc_coef_y)
        return (acc_x, acc_y)

    def curvature_at(self, t):
        vel = self.velocity_at(t)
        acc = self.acceleration_at(t)
        result = abs(vel[0]*acc[1]-vel[1]*acc[0])/pow(norm(vel), 3)
        return result

    """
    def vel_curve(self):
        vel_coef_x = poly.polyder(self.coef_x)
        vel_coef_y = poly.polyder(self.coef_y)
        vel_coefs = [vel_coef_x, vel_coef_y]
        bounds = self.bounds
        return ParametizedPolynomialCurve(vel_coefs, bounds)

    def acc_curve(self):
        vel_coef_x = poly.polyder(self.coef_x)
        vel_coef_y = poly.polyder(self.coef_y)
        acc_coef_x = poly.polyder(vel_coef_x)
        acc_coef_y = poly.polyder(vel_coef_y)
        acc_coefs = [acc_coef_x, acc_coef_y]
        bounds = self.bounds
        return ParametizedPolynomialCurve(acc_coefs, bounds)
    """
    def generate_mesh(self, bounds = [], resolution = 100):
        min_t, max_t = self.bounds[0], self.bounds[1]
        grid_size = 1.0/resolution
        result = []
        num_of_grids = int(math.ceil((max_t - min_t)/grid_size))
        for i in range(num_of_grids):
            t = min_t + i*grid_size
            p = self.pose_at(t)
            c = self.curvature_at(t)
            result.append((p, c))
        #self.mesh = result
        return result
  
class LinearCurve(ParametizedPolynomialCurve):
    def __init__(self, coefs, bounds = [-10,10]):
        coefs = [coefs[0][0:2], coefs[1][0:2]]  # truncate the coefs matrix to desired size of 2*2
        super(LinearCurve, self).__init__(coefs, bounds)
        self.type = 'linear'
        a, b = coefs[0]  # x = a + b*t
        c, d = coefs[1] # y = c + d*t
        if b != 0:
            self.slope = d*1.0/b
            self.intercept = c + d*(-a*1.0/b)
        else:
            self.slope = float('inf')
            self.intercept = float('inf')

    def y_at_x(self, x):
        """
        if self.coef_x[1] == 0:
           
            if x == self.coef_x[0]:
                raise Exception('Vertical Line at this x. Y can be any value')
            else:
                raise Exception('Vertical Line not at this x. No corresponding value')
            
            return float('inf')
        else:
        """
        y = self.slope * x + self.intercept
        return y

    def intersection(self, l2):
        if self.coef_x[1] == 0 and l2.coef_x[1] == 0:
            if self.coef_x[0] == l2.coef_x[0]:
                raise Exception('Same Line. Infinite Intersections')
            else:
                raise Exception('Paralell Lines. No Intersection.')

        elif self.coef_x[1] == 0 and l2.coef_x[1]!= 0:
            x = self.coef_x[0]
            y = l2.y_at_x(x)
            return (x, y)

        elif self.coef_x[1] != 0 and l2.coef_x[1] == 0:
            x = l2.coef_x[0]
            y = self.y_at_x(x)
            return (x, y)

        else:
            b1 = self.intercept
            a1 = self.slope
            b2 = l2.intercept
            a2 = l2.slope
            if a1 == a2:
                if b1 == b2:
                    raise Exception('Same Line, Infinite Intersections')
                else:
                    raise Exception('Paralell Lines, No Intersection')
            else: 
                x = (b2-b1)/(a1-a2)
                y = (a1*b2 - a2*b1)/(a1 - a2)
            return (x,y)

        return(float('inf'), float('inf'))
	"""
    def closest_point(self, point):
        x0, y0 = point
        a, b = self.coef_x
        c, d = self.coef_y
        # by solving min: (a + bt - x)^2 + (c + dt -y)^2 => b*(a + bt - x)+d*(c + dt -y)=0
        t = (b*x0 - b*a + d*y0 - d*c)/(b*b + d*d)   

        if t < self.bounds[0]:
            point_H = self.coord_at(self.bounds[0])
        elif t > self.bounds[1]:
            point_H = self.coord_at(self.bounds[1])
        else:
            point_H = self.coord_at(t)
        return point_H, dist(point, point_H)
	"""
    def reflection(self, pose):
        point = (pose[0], pose[1])

        if self.slope == float('inf'):
            x = 2*self.coef_x[0] - pose[0]
            y = pose[1]
            if len(pose) == 2:
                image = (x,y)
            elif len(pose) == 3:
                image = (x, y, math.pi-pose[2])
            return image
        else:
            theta0 = math.atan2(self.slope,1)
            if len(pose) == 3:
                image = (0,0,0)
                if self.slope == 0:
                    image = (pose[0], 2*self.intercept - pose[1], -pose[2])
                else:
                    l2 = line_from_point_slope(point, -1/self.slope)
                    H = self.intersection(l2)
                    image = (2*H[0]-pose[0], 2*H[1]-pose[1], 2*theta0 - pose[2])
            elif len(pose) == 2:
                image = (0,0)
                if self.slope == 0:
                    image = (pose[0], 2*self.intercept - pose[1])
                else:
                    l2 = line_from_point_slope(point, -1/self.slope)
                    H = self.intersection(l2)
                    image = (2*H[0]-pose[0], 2*H[1]-pose[1])
            return image


class CubicCurve(ParametizedPolynomialCurve):
    def __init__(self, coefs, bounds = [-10,10]):
        super(CubicCurve, self).__init__(coefs, bounds)
        self.type = 'cubic'

def tangent_cubic_curve_from_origin(goal_pose):
    x, y, theta = float(goal_pose[0]), float(goal_pose[1]), float(goal_pose[2])
    # if goal_pose is on X-axis
    if y == 0:
        raise Exception('Goal Pose already on X-axis. Need to rotate first.')
    # Otherwise
    b = x - 3*y/math.tan(theta)
    a = pow(math.tan(theta), 3)/(27*y*y)
    print(" y = a * (x - b)^3 :", a, b)
    bounds = [b, x]
    coefs = [[0,1,0], [-a*pow(b, 3), 3*a*b*b, -3*a*b, a]]
    return CubicCurve(coefs, bounds)

def symmetric_curve_to_y_axis(start_pose, resolution = 100):
    x0 = float(start_pose[0]) 
    y0 = float(start_pose[1])
    #x0, y0, tmp0 = start_pose
    # goal_pose = (0,0, pi/2)

    coef0 = [[0, x0],[0, y0]]
    if x0 == 0:
        return LinearCurve(coef0, [0,1]).generate_mesh()

    l0 = LinearCurve(coef0, [x0,0]) # line from (x0, y0) to origin
    point_M = (x0*0.5, y0*0.5) # Middle point of (x0, y0) and origin
    coef1 = [[x0 * 0.5, -y0], [y0*0.5, x0]] 
    l1 = LinearCurve(coef1)
    y = (x0**2 + y0**2)*y0*1.5/(x0**2 + 3.0* y0**2)
    a = x0*1.0/(3.0*y0*y**2)
    coef = [[0,0,0,a], [0,1,0,0]]         # curve x = a*y^3  (y=t, x = a*t^3)
    #print(coef)
    #print("This point should be origin",l1.reflection(start_pose))
    C1 = CubicCurve(coef, [0,y])
    
    T_range = np.linspace(y, 0, int(resolution * 0.5))

    C = []
    for i in range(len(T_range)):
        t = T_range[i]
        p = C1.pose_at(t)
        k = C1.curvature_at(t)
        q = l1.reflection(p)
        q = (q[0], q[1], math.pi + q[2])   # fix orientation because the sequence is reversed for this half
        C.insert(0, [q,k])
        C.append([p, k])

    return C


def diff(tuple1, tuple2):
    return (tuple1[0] - tuple2[0], tuple1[1] - tuple2[1])

def norm(tuple):
    return pow(tuple[0]**2 + tuple[1]**2, 0.5)

def dist(tuple1, tuple2):
    return norm(diff(tuple1, tuple2))

def average(tuple1, tuple2):
    a = tuple([(tuple1[i]+tuple2[i])*0.5 for i in range(min(len(tuple1), len(tuple2)))])
    return a

def interpolation(tuple1, tuple2, t):
    a = tuple([tuple1[i]*t+tuple2[i]*(1-t) for i in range(min(len(tuple1), len(tuple2)))])
    return a

def line_from_point_slope(point, k, bounds = [-10,10]):
    coefs = [[float(point[0]),1], [float(point[1]), k]]
    return LinearCurve(coefs, bounds)

def line_through_two_points(point_A, point_B):
    bounds = (0,1)
    coefs = [[point_A[0], point_B[0]-point_A[0]],
            [point_A[1], point_B[1]-point_A[1]]]
    return LinearCurve(coefs, bounds)

def line_through_pose(pose, bounds = [-10,10]):
    x0, y0, theta0 = pose
    coefs = [[x0, math.cos(theta0)],
             [y0, math.sin(theta0)]]
    return LinearCurve(coefs, bounds)
"""
def smooth_curve_to_pose(goal_pose, resolution = 100):

    # Here we only deal with cases with x0 > 0.
    x0, y0, theta0 = float(goal_pose[0]), float(goal_pose[1]), float(goal_pose[2])
    point_G = (x0, y0)

    k0 = math.tan(theta0)
    l1 = line_from_point_slope((0,0), y0*1.0/x0)
    l2 = line_from_point_slope(point_G, k0)


    # 1. if y0 < 0, turn to a case with y0 > 0  
    if y0 < 0:
        alternative_pose = (x0, -y0, -theta0)
        temp_curve = smooth_curve_to_pose(alternative_pose, resolution)
        # Reflection w.r.t. X-axis
        C = []
        for data in temp_curve:
            point, k = data
            point1 = (point[0], -point[1], -point[2])
            C.append((point1, k))
        return C   

    # 2. if y0 > 0 and k0 < 0, turn to a case with y0 > 0 and k0 > 0
    if y0 > 0 and k0 < 0:
        phi = math.atan2(y0, x0)
        theta1 = 2*phi - theta0
        if math.tan(theta1) > 0:
            alternative_pose = l1.reflection(goal_pose)
            #print(alternative_pose)
            temp_curve = smooth_curve_to_pose(alternative_pose, resolution)
            # Reflection w.r.t. l1
            C = []
            for data in temp_curve:
                point, k = data
                point1 = l1.reflection(point)
                C.append((point1, k))
        elif x0 + k0*y0 >0:
            l3 = line_from_point_slope((0,0), -1/k0)
            point_D = l3.intersection(l2)
            #print(point_D)
            bounds = np.linspace(0, x0, resolution*0.2)
            C = []
            for x in bounds:
                if x <= point_D[0]:
                    C.append(((x, l3.y_at_x(x), l3.slope), l3.curvature_at(x)))
                else:
                    C.append(((x, l2.y_at_x(x),l2.slope), l2.curvature_at(x)))
        elif x0 + k0*y0 < 0:
            raise Exception('Case')

        return C

    if k0 == 0 and y0 != 0:
        raise Exception('Case not covered yet')

    # Else: point B = where Line(G) intersects X-axis

    # 4. For the following cases, x0, y0, theta0 > 0
    x_B = x0 - y0/k0
    point_B = (x_B, 0)

    # Case 1: x_B = 0, rotate to theta0 and go straight
    if x_B == 0:
        bounds = [0, x0]
        return line_from_point_slope((x0, y0), math.tan(theta0)).generate_mesh(bounds, resolution)

    # Case 3: x_B < 0, rotate first
    if x_B < 0:
        theta1 = math.atan2(y0, x0)
        if theta1 <= math.pi/4:
            alternative_pose = l1.reflection((x0, y0, theta0))
            temp_curve = smooth_curve_to_pose(alternative_pose, resolution)
            C = []
            for data in temp_curve:
                pose, k = data
                pose1 = l1.reflection(pose)
                C.append((pose1, k))
            return C
        elif theta1 > math.pi/4:
            l = line_from_point_slope((0,0), 1)
            alternative_pose = l.reflection((x0, y0, theta0))
            temp_curve = smooth_curve_to_pose(alternative_pose, resolution)
            C = []
            for data in temp_curve:
                pose, k = data
                pose1 = (pose[1], pose[0], math.pi/2 - pose[2])
                C.append((pose1, k))
            return C
    # Case 4: x_B > 0
    #=======================Simplest Case=========================
    if x_B > 0 and x_B < x0:
        theta3 = (theta0 + math.pi)/2
        k3 = math.tan(theta3)
        l3 = line_from_point_slope(point_B, k3)
        point_H = l3.reflection(point_G)
        x_H = point_H[0]
        # Case 3.1: OB <= BG
        if x_H <= 0:
            a = -pow(1+3*k3*k3, 2)/(27*pow(k3, 5)*pow(x_B, 2)) 
            coefs1 = [0,0,0,a]
            bounds1 = [0 , 3*k3*k3*x_B/(1+3*k3*k3)]
            curve = CubicCurve(params1, bounds1)
            C1 = curve.generate_mesh(bounds1, resolution = resolution*0.4)
            C = C1
            for data in reversed(C1):
                point, k = data
                point1 = l3.reflection(point)
                C.append((point1,k))
            point_D = l3.reflection((0,0))
            
            line_segment = [((x, l2.value_at(x), theta0),0) for x in np.linspace(point_D[0], x0, resolution*0.2)]
            C.extend(line_segment)
            return C
        # Case 3.2: OB > BG
        elif x_H > 0: 
            a = -pow(1+3*k3*k3, 2)/(27*pow(k3, 5)*pow(x_B-x_H, 2)) 
            temp_coefs = [0,0,0,a]
            temp_bounds = [0, 3*k3*k3*(x_B-x_H)/(1+3*k3*k3)]
            temp_curve = CubicCurve(temp_params, temp_bounds)
            line_segment = [((x, 0, 0), 0) for x in np.linspace(0, x_H, resolution*0.2)]
            curve = []
            C1 = temp_curve.generate_mesh(bounds = temp_bounds, resolution = resolution*0.4)
            for data in reversed(C1):
                # translation of temp_curve
                pose, k = data
                point1 = (pose[0]+x_H, pose[1], pose[2])
                curve.insert(0, (point1,k))
                # reflection of point1
                point2 = l3.reflection(point1)
                curve.append((point2, k))
            C = line_segment
            C.extend(curve)
            return C
    
    raise Exception("Case not covered yet. Wait for updates.")
    # Case 5: 
"""
def smooth_curve_between_poses(start_pose, goal_pose, resolution = 1000):
    x0, y0, theta0 = float(start_pose[0]), float(start_pose[1]),float(start_pose[2])
    x1, y1, theta1 = float(goal_pose[0]), float(goal_pose[1]),float(goal_pose[2])
    translation = np.array([[1,0,0,0],
                            [-x1, 1,0, 0],
                            [-y1, 0, 1, 0],
                            [0,0,0,1]])
    rotation = np.array([[1,0,0,0],
                        [0, math.cos(math.pi/2-theta1), -math.sin(math.pi/2-theta1), 0],
                        [0, math.sin(math.pi/2-theta1), math.cos(math.pi/2-theta1), 0],
                        [math.pi/2-theta1,0,0,1]])
    transformation = np.matmul(rotation, translation)
    reverse = np.linalg.inv(transformation)
    v1 = np.array([1,x0, y0, theta0])
    v2 = np.matmul(transformation, v1)
    alternative_start = (v2[1], v2[2], v2[3])
    #print(alternative_start)
    temp_curve = symmetric_curve_to_y_axis(alternative_start, resolution)
    des_curve = []

    for data in temp_curve:
        pose = data[0]
        v = np.array([1, pose[0], pose[1], pose[2]])
        #v[3] = angle_transition(v[3])
        k = data[1]
        new_v = np.matmul(reverse, v)
        new_v[3] = angle_transition(new_v[3])
        new_pose = list(new_v[1:])
        des_curve.append((new_pose, k))

    print("Starting Orientation:", des_curve[0][0][2])
    angle_to_rotate = angle_transition(des_curve[0][0][2] - start_pose[2])
    print("Need to Rotate:", angle_to_rotate)
    return des_curve, angle_to_rotate

def closest_point(actual_pose, smooth_curve):
    sq_dists = [pow(actual_pose[0] - data[0][0], 2) + pow(actual_pose[1] - data[0][1], 2) for data in smooth_curve]
    min_dist = min(sq_dists)
    index = sq_dists.index(min_dist)
    closest_point = smooth_curve[index]   
    x_diff = actual_pose[0] - closest_point[0][0]
    if x_diff > 0:

        sign = 1
    else:
        sign = -1    
    signed_dist = sign * pow(min_dist, 0.5)
    return signed_dist, closest_point, index

def angle_transition(angle):
    angle = angle % (2*math.pi)
    if angle > math.pi:
        angle -= 2*math.pi
    elif angle < -math.pi:
        angle += 2*math.pi
    return angle



    

if __name__ == "__main__":

    bounds = [-5, 5]
    # goal pose is expressed in (x, y, theta), theta in radians
    start_pose = (-1, -2, 1)
    goal_pose = (0, 0, math.pi/2)
    resolution = 1000
    actual_pose = (1.5, 0.3)
    # ======================== Get the Solution !!!============================

    curve, angle_to_rotate = smooth_curve_between_poses(start_pose, goal_pose, resolution)
    print("Number of data points: ", len(curve))

    # ======================== Find closest point on curve ====================
    min_dist, closest, index = closest_point(actual_pose, curve)
    print("Min dist and Closest point", min_dist, closest, index)

    # =========================================================================

    # The codes below are only for plotting, can be ignored.
    # Plot the solution
    
    l0 = line_through_pose(start_pose)
    l1 = line_through_pose(curve[0][0])
    l2 = line_through_pose(goal_pose)

    fig = plt.figure()
    ax = fig.add_subplot(1,1,1)

    pose,z = zip(*curve)
    x, y, theta = zip(*pose)
    #ax.plot(actual_pose[0], actual_pose[1], marker = 'x', label = 'actual pose')
    ax.plot(x, y, 'k', label = 'CURVE')
    ax.plot(x, z, 'r', label = 'CURVATURE')
    #ax.plot(x, theta, label = 'orientation')
    
    x = np.linspace(-3,3,100)

    ax.plot(x, l0.y_at_x(x), 'orange', linestyle='dashed', label = 'line through start pose')
    ax.plot(x, l1.y_at_x(x), 'orange', linestyle='dashed', label = 'line through start of curve')
    ax.plot(x, l2.y_at_x(x), 'orange', linestyle='dashed', label = 'line through goal pose')
    ax.plot(goal_pose[0], goal_pose[1], marker = 'x', label = 'goal pose')
    
    ax.plot(start_pose[0], start_pose[1], marker = 'x', label = 'start pose')

    ax.set_xlim([-3, 3])
    ax.set_ylim([-3, 3])
    plt.grid(True)
    plt.legend()
    plt.show()

