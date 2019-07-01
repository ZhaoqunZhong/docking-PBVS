/****************************************************************************
** Meta object code from reading C++ file 'modulecalibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/modulecalibration/modulecalibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulecalibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModuleCalibration_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModuleCalibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModuleCalibration_t qt_meta_stringdata_ModuleCalibration = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ModuleCalibration"
QT_MOC_LITERAL(1, 18, 16), // "on_global_action"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "gparam::ParamSet"
QT_MOC_LITERAL(4, 53, 8), // "paramset"
QT_MOC_LITERAL(5, 62, 11), // "on_NewImage"
QT_MOC_LITERAL(6, 74, 8), // "cv::Mat&"
QT_MOC_LITERAL(7, 83, 3), // "img"
QT_MOC_LITERAL(8, 87, 13), // "on_deactivate"
QT_MOC_LITERAL(9, 101, 11), // "on_activate"
QT_MOC_LITERAL(10, 113, 17), // "on_vplayer_opened"
QT_MOC_LITERAL(11, 131, 13), // "on_addCurrent"
QT_MOC_LITERAL(12, 145, 9), // "on_addAll"
QT_MOC_LITERAL(13, 155, 18) // "on_downloadPattern"

    },
    "ModuleCalibration\0on_global_action\0\0"
    "gparam::ParamSet\0paramset\0on_NewImage\0"
    "cv::Mat&\0img\0on_deactivate\0on_activate\0"
    "on_vplayer_opened\0on_addCurrent\0"
    "on_addAll\0on_downloadPattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModuleCalibration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModuleCalibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModuleCalibration *_t = static_cast<ModuleCalibration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_global_action((*reinterpret_cast< const gparam::ParamSet(*)>(_a[1]))); break;
        case 1: _t->on_NewImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 2: _t->on_deactivate(); break;
        case 3: _t->on_activate(); break;
        case 4: _t->on_vplayer_opened(); break;
        case 5: _t->on_addCurrent(); break;
        case 6: _t->on_addAll(); break;
        case 7: _t->on_downloadPattern(); break;
        default: ;
        }
    }
}

const QMetaObject ModuleCalibration::staticMetaObject = {
    { &AppModule::staticMetaObject, qt_meta_stringdata_ModuleCalibration.data,
      qt_meta_data_ModuleCalibration,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModuleCalibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModuleCalibration::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModuleCalibration.stringdata0))
        return static_cast<void*>(const_cast< ModuleCalibration*>(this));
    return AppModule::qt_metacast(_clname);
}

int ModuleCalibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AppModule::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
