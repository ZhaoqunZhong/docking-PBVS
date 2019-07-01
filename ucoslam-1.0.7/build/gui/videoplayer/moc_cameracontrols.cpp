/****************************************************************************
** Meta object code from reading C++ file 'cameracontrols.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/videoplayer/cameracontrols.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameracontrols.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cameracontrols_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cameracontrols_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cameracontrols_t qt_meta_stringdata_cameracontrols = {
    {
QT_MOC_LITERAL(0, 0, 14), // "cameracontrols"
QT_MOC_LITERAL(1, 15, 17), // "resolutionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "resolution"
QT_MOC_LITERAL(4, 45, 9), // "reconnect"
QT_MOC_LITERAL(5, 55, 4), // "idex"
QT_MOC_LITERAL(6, 60, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 82, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(8, 114, 5) // "index"

    },
    "cameracontrols\0resolutionChanged\0\0"
    "resolution\0reconnect\0idex\0"
    "on_pushButton_clicked\0"
    "on_comboBox_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cameracontrols[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   42,    2, 0x08 /* Private */,
       7,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void cameracontrols::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cameracontrols *_t = static_cast<cameracontrols *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resolutionChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->reconnect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (cameracontrols::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cameracontrols::resolutionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (cameracontrols::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&cameracontrols::reconnect)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject cameracontrols::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_cameracontrols.data,
      qt_meta_data_cameracontrols,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cameracontrols::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cameracontrols::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cameracontrols.stringdata0))
        return static_cast<void*>(const_cast< cameracontrols*>(this));
    return QWidget::qt_metacast(_clname);
}

int cameracontrols::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void cameracontrols::resolutionChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cameracontrols::reconnect(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
