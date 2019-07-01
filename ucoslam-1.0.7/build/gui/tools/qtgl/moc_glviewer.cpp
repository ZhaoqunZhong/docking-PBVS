/****************************************************************************
** Meta object code from reading C++ file 'glviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/tools/qtgl/glviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qtgl__GlViewer_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qtgl__GlViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qtgl__GlViewer_t qt_meta_stringdata_qtgl__GlViewer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "qtgl::GlViewer"
QT_MOC_LITERAL(1, 15, 12), // "mousePressed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 42, 10), // "mouseMoved"
QT_MOC_LITERAL(5, 53, 16), // "viewPointChanged"
QT_MOC_LITERAL(6, 70, 7), // "resized"
QT_MOC_LITERAL(7, 78, 23), // "on_combo_item_activated"
QT_MOC_LITERAL(8, 102, 15) // "slot_toggleAxis"

    },
    "qtgl::GlViewer\0mousePressed\0\0QMouseEvent*\0"
    "mouseMoved\0viewPointChanged\0resized\0"
    "on_combo_item_activated\0slot_toggleAxis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qtgl__GlViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,
       6,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void qtgl::GlViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GlViewer *_t = static_cast<GlViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressed((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseMoved((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->viewPointChanged(); break;
        case 3: _t->resized(); break;
        case 4: _t->on_combo_item_activated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slot_toggleAxis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GlViewer::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GlViewer::mousePressed)) {
                *result = 0;
            }
        }
        {
            typedef void (GlViewer::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GlViewer::mouseMoved)) {
                *result = 1;
            }
        }
        {
            typedef void (GlViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GlViewer::viewPointChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GlViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GlViewer::resized)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject qtgl::GlViewer::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_qtgl__GlViewer.data,
      qt_meta_data_qtgl__GlViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qtgl::GlViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qtgl::GlViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qtgl__GlViewer.stringdata0))
        return static_cast<void*>(const_cast< GlViewer*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int qtgl::GlViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void qtgl::GlViewer::mousePressed(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qtgl::GlViewer::mouseMoved(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qtgl::GlViewer::viewPointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void qtgl::GlViewer::resized()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
