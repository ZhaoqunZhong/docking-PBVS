/****************************************************************************
** Meta object code from reading C++ file 'paramsetdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/tools/gparam/paramsetdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paramsetdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gparam__ParamSetDialog_t {
    QByteArrayData data[13];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gparam__ParamSetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gparam__ParamSetDialog_t qt_meta_stringdata_gparam__ParamSetDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "gparam::ParamSetDialog"
QT_MOC_LITERAL(1, 23, 12), // "paramChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "idx"
QT_MOC_LITERAL(4, 41, 12), // "okBtnPressed"
QT_MOC_LITERAL(5, 54, 16), // "cancelBtnPressed"
QT_MOC_LITERAL(6, 71, 15), // "applyBtnPressed"
QT_MOC_LITERAL(7, 87, 21), // "advancedParamsToogled"
QT_MOC_LITERAL(8, 109, 9), // "okPressed"
QT_MOC_LITERAL(9, 119, 13), // "cancelPressed"
QT_MOC_LITERAL(10, 133, 12), // "applyPressed"
QT_MOC_LITERAL(11, 146, 16), // "paramSetModified"
QT_MOC_LITERAL(12, 163, 24) // "on_advancedParamsToogled"

    },
    "gparam::ParamSetDialog\0paramChanged\0"
    "\0idx\0okBtnPressed\0cancelBtnPressed\0"
    "applyBtnPressed\0advancedParamsToogled\0"
    "okPressed\0cancelPressed\0applyPressed\0"
    "paramSetModified\0on_advancedParamsToogled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gparam__ParamSetDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    0,   68,    2, 0x06 /* Public */,
       6,    0,   69,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void gparam::ParamSetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParamSetDialog *_t = static_cast<ParamSetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paramChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->okBtnPressed(); break;
        case 2: _t->cancelBtnPressed(); break;
        case 3: _t->applyBtnPressed(); break;
        case 4: _t->advancedParamsToogled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->okPressed(); break;
        case 6: _t->cancelPressed(); break;
        case 7: _t->applyPressed(); break;
        case 8: _t->paramSetModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_advancedParamsToogled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParamSetDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetDialog::paramChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (ParamSetDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetDialog::okBtnPressed)) {
                *result = 1;
            }
        }
        {
            typedef void (ParamSetDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetDialog::cancelBtnPressed)) {
                *result = 2;
            }
        }
        {
            typedef void (ParamSetDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetDialog::applyBtnPressed)) {
                *result = 3;
            }
        }
        {
            typedef void (ParamSetDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParamSetDialog::advancedParamsToogled)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject gparam::ParamSetDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gparam__ParamSetDialog.data,
      qt_meta_data_gparam__ParamSetDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gparam::ParamSetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gparam::ParamSetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gparam__ParamSetDialog.stringdata0))
        return static_cast<void*>(const_cast< ParamSetDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int gparam::ParamSetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void gparam::ParamSetDialog::paramChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gparam::ParamSetDialog::okBtnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void gparam::ParamSetDialog::cancelBtnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void gparam::ParamSetDialog::applyBtnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void gparam::ParamSetDialog::advancedParamsToogled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
