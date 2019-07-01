/****************************************************************************
** Meta object code from reading C++ file 'videoplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gui/videoplayer/videoplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoPlayer_t {
    QByteArrayData data[31];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoPlayer_t qt_meta_stringdata_VideoPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoPlayer"
QT_MOC_LITERAL(1, 12, 8), // "newImage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "cv::Mat&"
QT_MOC_LITERAL(4, 31, 18), // "openedImageOrVideo"
QT_MOC_LITERAL(5, 50, 5), // "reset"
QT_MOC_LITERAL(6, 56, 13), // "on_deactivate"
QT_MOC_LITERAL(7, 70, 11), // "on_activate"
QT_MOC_LITERAL(8, 82, 13), // "openVideoFile"
QT_MOC_LITERAL(9, 96, 17), // "openVideoFilePath"
QT_MOC_LITERAL(10, 114, 4), // "path"
QT_MOC_LITERAL(11, 119, 10), // "openImages"
QT_MOC_LITERAL(12, 130, 15), // "openVideoCamera"
QT_MOC_LITERAL(13, 146, 7), // "toogled"
QT_MOC_LITERAL(14, 154, 8), // "setImage"
QT_MOC_LITERAL(15, 163, 8), // "img2Show"
QT_MOC_LITERAL(16, 172, 11), // "updateImage"
QT_MOC_LITERAL(17, 184, 13), // "playNextFrame"
QT_MOC_LITERAL(18, 198, 13), // "releaseReader"
QT_MOC_LITERAL(19, 212, 22), // "cameraReconnectRequest"
QT_MOC_LITERAL(20, 235, 3), // "idx"
QT_MOC_LITERAL(21, 239, 10), // "resolution"
QT_MOC_LITERAL(22, 250, 11), // "setMaxSpeed"
QT_MOC_LITERAL(23, 262, 5), // "yesno"
QT_MOC_LITERAL(24, 268, 12), // "setSliderPos"
QT_MOC_LITERAL(25, 281, 3), // "pos"
QT_MOC_LITERAL(26, 285, 22), // "playPauseButtonClicked"
QT_MOC_LITERAL(27, 308, 14), // "sliderReleased"
QT_MOC_LITERAL(28, 323, 12), // "valueChanged"
QT_MOC_LITERAL(29, 336, 11), // "closeCamera"
QT_MOC_LITERAL(30, 348, 16) // "saveCurrentImage"

    },
    "VideoPlayer\0newImage\0\0cv::Mat&\0"
    "openedImageOrVideo\0reset\0on_deactivate\0"
    "on_activate\0openVideoFile\0openVideoFilePath\0"
    "path\0openImages\0openVideoCamera\0toogled\0"
    "setImage\0img2Show\0updateImage\0"
    "playNextFrame\0releaseReader\0"
    "cameraReconnectRequest\0idx\0resolution\0"
    "setMaxSpeed\0yesno\0setSliderPos\0pos\0"
    "playPauseButtonClicked\0sliderReleased\0"
    "valueChanged\0closeCamera\0saveCurrentImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    0,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  123,    2, 0x0a /* Public */,
       6,    0,  124,    2, 0x0a /* Public */,
       7,    0,  125,    2, 0x0a /* Public */,
       8,    0,  126,    2, 0x0a /* Public */,
       9,    1,  127,    2, 0x0a /* Public */,
      11,    0,  130,    2, 0x0a /* Public */,
      12,    1,  131,    2, 0x0a /* Public */,
      14,    1,  134,    2, 0x0a /* Public */,
      16,    0,  137,    2, 0x0a /* Public */,
      17,    0,  138,    2, 0x0a /* Public */,
      18,    0,  139,    2, 0x0a /* Public */,
      19,    2,  140,    2, 0x0a /* Public */,
      22,    1,  145,    2, 0x0a /* Public */,
      24,    1,  148,    2, 0x08 /* Private */,
      26,    0,  151,    2, 0x08 /* Private */,
      27,    0,  152,    2, 0x08 /* Private */,
      28,    1,  153,    2, 0x08 /* Private */,
      29,    0,  156,    2, 0x08 /* Private */,
      30,    0,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 3,   15,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoPlayer *_t = static_cast<VideoPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 1: _t->openedImageOrVideo(); break;
        case 2: _t->reset(); break;
        case 3: _t->on_deactivate(); break;
        case 4: _t->on_activate(); break;
        case 5: _t->openVideoFile(); break;
        case 6: { bool _r = _t->openVideoFilePath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->openImages(); break;
        case 8: _t->openVideoCamera((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 10: _t->updateImage(); break;
        case 11: { bool _r = _t->playNextFrame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->releaseReader(); break;
        case 13: _t->cameraReconnectRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 14: _t->setMaxSpeed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setSliderPos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->playPauseButtonClicked(); break;
        case 17: _t->sliderReleased(); break;
        case 18: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->closeCamera(); break;
        case 20: _t->saveCurrentImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoPlayer::*_t)(cv::Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer::newImage)) {
                *result = 0;
            }
        }
        {
            typedef void (VideoPlayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoPlayer::openedImageOrVideo)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject VideoPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoPlayer.data,
      qt_meta_data_VideoPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoPlayer.stringdata0))
        return static_cast<void*>(const_cast< VideoPlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void VideoPlayer::newImage(cv::Mat & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoPlayer::openedImageOrVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
