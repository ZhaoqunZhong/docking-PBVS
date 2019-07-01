/****************************************************************************
** Meta object code from reading C++ file 'paramsetwdgt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/tools/gparam/paramsetwdgt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paramsetwdgt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gparam__ParamSetWdgt_t {
    QByteArrayData data[15];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gparam__ParamSetWdgt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gparam__ParamSetWdgt_t qt_meta_stringdata_gparam__ParamSetWdgt = {
    {
QT_MOC_LITERAL(0, 0, 20), // "gparam::ParamSetWdgt"
QT_MOC_LITERAL(1, 21, 12), // "paramChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "idx"
QT_MOC_LITERAL(4, 39, 12), // "okBtnPressed"
QT_MOC_LITERAL(5, 52, 16), // "cancelBtnPressed"
QT_MOC_LITERAL(6, 69, 15), // "applyBtnPressed"
QT_MOC_LITERAL(7, 85, 21), // "advancedParamsToogled"
QT_MOC_LITERAL(8, 107, 15), // "advancedToggled"
QT_MOC_LITERAL(9, 123, 7), // "checked"
QT_MOC_LITERAL(10, 131, 9), // "okPressed"
QT_MOC_LITERAL(11, 141, 13), // "cancelPressed"
QT_MOC_LITERAL(12, 155, 12), // "applyPressed"
QT_MOC_LITERAL(13, 168, 16), // "findSignalSender"
QT_MOC_LITERAL(14, 185, 16) // "paramSetModified"

    },
    "gparam::ParamSetWdgt\0paramChanged\0\0"
    "idx\0okBtnPressed\0cancelBtnPressed\0"
    "applyBtnPressed\0advancedParamsToogled\0"
    "advancedToggled\0checked\0okPressed\0"
    "cancelPressed\0applyPressed\0findSignalSender\0"
    "paramSetModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gparam__ParamSetWdgt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   78,    2, 0x08 /* Private */,
      10,    0,   81,    2, 0x08 /* Private */,
      11,    0,   82,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gparam::ParamSetWdgt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamSetWdgt *_t = static_cast<ParamSetWdgt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->okBtnPressed(); break;
        case 2: _t->cancelBtnPressed(); break;
        case 3: _t->applyBtnPressed(); break;
        case 4: _t->advancedParamsToogled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->advancedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->okPressed(); break;
        case 7: _t->cancelPressed(); break;
        case 8: _t->applyPressed(); break;
        case 9: _t->findSignalSender(); break;
        case 10: _t->paramSetModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParamSetWdgt::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetWdgt::paramChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ParamSetWdgt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetWdgt::okBtnPressed)) {
                *result = 1;
            }
        }
        {
            typedef void (ParamSetWdgt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetWdgt::cancelBtnPressed)) {
                *result = 2;
            }
        }
        {
            typedef void (ParamSetWdgt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetWdgt::applyBtnPressed)) {
                *result = 3;
            }
        }
        {
            typedef void (ParamSetWdgt::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetWdgt::advancedParamsToogled)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject gparam::ParamSetWdgt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gparam__ParamSetWdgt.data,
      qt_meta_data_gparam__ParamSetWdgt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gparam::ParamSetWdgt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gparam::ParamSetWdgt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gparam__ParamSetWdgt.stringdata0))
        return static_cast<void*>(const_cast< ParamSetWdgt*>(this));
    return QWidget::qt_metacast(_clname);
}

int gparam::ParamSetWdgt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void gparam::ParamSetWdgt::paramChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gparam::ParamSetWdgt::okBtnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gparam::ParamSetWdgt::cancelBtnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gparam::ParamSetWdgt::applyBtnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gparam::ParamSetWdgt::advancedParamsToogled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
