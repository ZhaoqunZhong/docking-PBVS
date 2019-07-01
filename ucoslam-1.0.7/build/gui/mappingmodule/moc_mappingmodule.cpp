/****************************************************************************
** Meta object code from reading C++ file 'mappingmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/mappingmodule/mappingmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mappingmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MappingModule_t {
    QByteArrayData data[18];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MappingModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MappingModule_t qt_meta_stringdata_MappingModule = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MappingModule"
QT_MOC_LITERAL(1, 14, 11), // "on_activate"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "on_deactivate"
QT_MOC_LITERAL(4, 41, 15), // "on_globalaction"
QT_MOC_LITERAL(5, 57, 16), // "gparam::ParamSet"
QT_MOC_LITERAL(6, 74, 8), // "paramset"
QT_MOC_LITERAL(7, 83, 28), // "on_ControlPanelParamsChanged"
QT_MOC_LITERAL(8, 112, 19), // "on_MapParamsChanged"
QT_MOC_LITERAL(9, 132, 13), // "updateMapView"
QT_MOC_LITERAL(10, 146, 17), // "onParamsOkPressed"
QT_MOC_LITERAL(11, 164, 16), // "on_new_fromvideo"
QT_MOC_LITERAL(12, 181, 18), // "on_openExistingMap"
QT_MOC_LITERAL(13, 200, 10), // "on_saveMap"
QT_MOC_LITERAL(14, 211, 10), // "onNewImage"
QT_MOC_LITERAL(15, 222, 8), // "cv::Mat&"
QT_MOC_LITERAL(16, 231, 5), // "image"
QT_MOC_LITERAL(17, 237, 11) // "on_resetMap"

    },
    "MappingModule\0on_activate\0\0on_deactivate\0"
    "on_globalaction\0gparam::ParamSet\0"
    "paramset\0on_ControlPanelParamsChanged\0"
    "on_MapParamsChanged\0updateMapView\0"
    "onParamsOkPressed\0on_new_fromvideo\0"
    "on_openExistingMap\0on_saveMap\0onNewImage\0"
    "cv::Mat&\0image\0on_resetMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MappingModule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
       9,    0,   85,    2, 0x0a /* Public */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,

       0        // eod
};

void MappingModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MappingModule *_t = static_cast<MappingModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_activate(); break;
        case 1: _t->on_deactivate(); break;
        case 2: _t->on_globalaction((*reinterpret_cast< const gparam::ParamSet(*)>(_a[1]))); break;
        case 3: _t->on_ControlPanelParamsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_MapParamsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateMapView(); break;
        case 6: _t->onParamsOkPressed(); break;
        case 7: _t->on_new_fromvideo(); break;
        case 8: _t->on_openExistingMap(); break;
        case 9: _t->on_saveMap(); break;
        case 10: _t->onNewImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 11: _t->on_resetMap(); break;
        default: ;
        }
    }
}

const QMetaObject MappingModule::staticMetaObject = {
    { &AppModule::staticMetaObject, qt_meta_stringdata_MappingModule.data,
      qt_meta_data_MappingModule,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MappingModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MappingModule::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MappingModule.stringdata0))
        return static_cast<void*>(const_cast< MappingModule*>(this));
    return AppModule::qt_metacast(_clname);
}

int MappingModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AppModule::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
