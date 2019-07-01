/****************************************************************************
** Meta object code from reading C++ file 'appmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/tools/moduletools/appmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AppModule_t {
    QByteArrayData data[16];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppModule_t qt_meta_stringdata_AppModule = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AppModule"
QT_MOC_LITERAL(1, 10, 22), // "notify_action_progress"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "std::string"
QT_MOC_LITERAL(4, 46, 11), // "action_name"
QT_MOC_LITERAL(5, 58, 12), // "completeness"
QT_MOC_LITERAL(6, 71, 7), // "message"
QT_MOC_LITERAL(7, 79, 13), // "minScaleRange"
QT_MOC_LITERAL(8, 93, 13), // "maxScaleRange"
QT_MOC_LITERAL(9, 107, 23), // "global_action_triggered"
QT_MOC_LITERAL(10, 131, 16), // "gparam::ParamSet"
QT_MOC_LITERAL(11, 148, 8), // "paramset"
QT_MOC_LITERAL(12, 157, 9), // "activated"
QT_MOC_LITERAL(13, 167, 11), // "deactivated"
QT_MOC_LITERAL(14, 179, 8), // "activate"
QT_MOC_LITERAL(15, 188, 10) // "deactivate"

    },
    "AppModule\0notify_action_progress\0\0"
    "std::string\0action_name\0completeness\0"
    "message\0minScaleRange\0maxScaleRange\0"
    "global_action_triggered\0gparam::ParamSet\0"
    "paramset\0activated\0deactivated\0activate\0"
    "deactivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppModule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   54,    2, 0x06 /* Public */,
       1,    4,   65,    2, 0x26 /* Public | MethodCloned */,
       1,    3,   74,    2, 0x26 /* Public | MethodCloned */,
       9,    1,   81,    2, 0x06 /* Public */,
      12,    0,   84,    2, 0x06 /* Public */,
      13,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AppModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppModule *_t = static_cast<AppModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notify_action_progress((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->notify_action_progress((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->notify_action_progress((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 3: _t->global_action_triggered((*reinterpret_cast< const gparam::ParamSet(*)>(_a[1]))); break;
        case 4: _t->activated(); break;
        case 5: _t->deactivated(); break;
        case 6: _t->activate(); break;
        case 7: _t->deactivate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AppModule::*_t)(std::string , int , std::string , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppModule::notify_action_progress)) {
                *result = 0;
            }
        }
        {
            typedef void (AppModule::*_t)(const gparam::ParamSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppModule::global_action_triggered)) {
                *result = 3;
            }
        }
        {
            typedef void (AppModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppModule::activated)) {
                *result = 4;
            }
        }
        {
            typedef void (AppModule::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppModule::deactivated)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject AppModule::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppModule.data,
      qt_meta_data_AppModule,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppModule::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppModule.stringdata0))
        return static_cast<void*>(const_cast< AppModule*>(this));
    return QObject::qt_metacast(_clname);
}

int AppModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AppModule::notify_action_progress(std::string _t1, int _t2, std::string _t3, int _t4, int _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void AppModule::global_action_triggered(const gparam::ParamSet & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AppModule::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void AppModule::deactivated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
