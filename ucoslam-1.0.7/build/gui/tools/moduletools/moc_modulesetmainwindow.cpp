/****************************************************************************
** Meta object code from reading C++ file 'modulesetmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/tools/moduletools/modulesetmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulesetmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModuleSetMainWindow_t {
    QByteArrayData data[19];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModuleSetMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModuleSetMainWindow_t qt_meta_stringdata_ModuleSetMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ModuleSetMainWindow"
QT_MOC_LITERAL(1, 20, 23), // "global_action_triggered"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "gparam::ParamSet"
QT_MOC_LITERAL(4, 62, 8), // "paramset"
QT_MOC_LITERAL(5, 71, 16), // "on_global_action"
QT_MOC_LITERAL(6, 88, 19), // "on_module_activated"
QT_MOC_LITERAL(7, 108, 11), // "std::string"
QT_MOC_LITERAL(8, 120, 10), // "moduleName"
QT_MOC_LITERAL(9, 131, 10), // "ModuleInfo"
QT_MOC_LITERAL(10, 142, 5), // "minfo"
QT_MOC_LITERAL(11, 148, 8), // "QAction*"
QT_MOC_LITERAL(12, 157, 27), // "on_progress_message_emitted"
QT_MOC_LITERAL(13, 185, 11), // "action_name"
QT_MOC_LITERAL(14, 197, 5), // "value"
QT_MOC_LITERAL(15, 203, 7), // "message"
QT_MOC_LITERAL(16, 211, 13), // "minScaleRange"
QT_MOC_LITERAL(17, 225, 13), // "maxScaleRange"
QT_MOC_LITERAL(18, 239, 26) // "on_remove_progress_message"

    },
    "ModuleSetMainWindow\0global_action_triggered\0"
    "\0gparam::ParamSet\0paramset\0on_global_action\0"
    "on_module_activated\0std::string\0"
    "moduleName\0ModuleInfo\0minfo\0QAction*\0"
    "on_progress_message_emitted\0action_name\0"
    "value\0message\0minScaleRange\0maxScaleRange\0"
    "on_remove_progress_message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModuleSetMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       6,    2,   60,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x08 /* Private */,
      12,    5,   68,    2, 0x08 /* Private */,
      12,    4,   79,    2, 0x28 /* Private | MethodCloned */,
      12,    3,   88,    2, 0x28 /* Private | MethodCloned */,
      18,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,   17,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, 0x80000000 | 7, QMetaType::Int,   13,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, 0x80000000 | 7,   13,   14,   15,
    QMetaType::Void,

       0        // eod
};

void ModuleSetMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModuleSetMainWindow *_t = static_cast<ModuleSetMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->global_action_triggered((*reinterpret_cast< const gparam::ParamSet(*)>(_a[1]))); break;
        case 1: _t->on_global_action((*reinterpret_cast< const gparam::ParamSet(*)>(_a[1]))); break;
        case 2: _t->on_module_activated((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< ModuleInfo(*)>(_a[2]))); break;
        case 3: _t->on_module_activated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->on_progress_message_emitted((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->on_progress_message_emitted((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->on_progress_message_emitted((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< std::string(*)>(_a[3]))); break;
        case 7: _t->on_remove_progress_message(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModuleSetMainWindow::*_t)(const gparam::ParamSet & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModuleSetMainWindow::global_action_triggered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ModuleSetMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModuleSetMainWindow.data,
      qt_meta_data_ModuleSetMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModuleSetMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleSetMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleSetMainWindow.stringdata0))
        return static_cast<void*>(const_cast< ModuleSetMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ModuleSetMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ModuleSetMainWindow::global_action_triggered(const gparam::ParamSet & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
