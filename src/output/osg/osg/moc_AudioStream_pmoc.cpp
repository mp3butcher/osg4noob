/****************************************************************************
** Meta object code from reading C++ file 'AudioStream_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AudioStream_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioStream_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_AudioStream_t {
    QByteArrayData data[14];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_AudioStream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_AudioStream_t qt_meta_stringdata_osg__QReflect_AudioStream = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_AudioStream"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "isSameKindAs"
QT_MOC_LITERAL(4, 52, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(5, 74, 9), // "className"
QT_MOC_LITERAL(6, 84, 11), // "const char*"
QT_MOC_LITERAL(7, 96, 11), // "libraryName"
QT_MOC_LITERAL(8, 108, 12), // "SampleFormat"
QT_MOC_LITERAL(9, 121, 16), // "SAMPLE_FORMAT_U8"
QT_MOC_LITERAL(10, 138, 17), // "SAMPLE_FORMAT_S16"
QT_MOC_LITERAL(11, 156, 17), // "SAMPLE_FORMAT_S24"
QT_MOC_LITERAL(12, 174, 17), // "SAMPLE_FORMAT_S32"
QT_MOC_LITERAL(13, 192, 17) // "SAMPLE_FORMAT_F32"

    },
    "osg::QReflect_AudioStream\0updateModel\0"
    "\0isSameKindAs\0osg::QReflect_Object*\0"
    "className\0const char*\0libraryName\0"
    "SampleFormat\0SAMPLE_FORMAT_U8\0"
    "SAMPLE_FORMAT_S16\0SAMPLE_FORMAT_S24\0"
    "SAMPLE_FORMAT_S32\0SAMPLE_FORMAT_F32"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_AudioStream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x02 /* Public */,
       5,    0,   38,    2, 0x02 /* Public */,
       7,    0,   39,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    0x80000000 | 6,
    0x80000000 | 6,

 // enums: name, flags, count, data
       8, 0x0,    5,   44,

 // enum data: key, value
       9, uint(osg::QReflect_AudioStream::SAMPLE_FORMAT_U8),
      10, uint(osg::QReflect_AudioStream::SAMPLE_FORMAT_S16),
      11, uint(osg::QReflect_AudioStream::SAMPLE_FORMAT_S24),
      12, uint(osg::QReflect_AudioStream::SAMPLE_FORMAT_S32),
      13, uint(osg::QReflect_AudioStream::SAMPLE_FORMAT_F32),

       0        // eod
};

void osg::QReflect_AudioStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AudioStream *_t = static_cast<QReflect_AudioStream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_AudioStream::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_AudioStream.data,
      qt_meta_data_osg__QReflect_AudioStream,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_AudioStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_AudioStream::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_AudioStream.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AudioStream*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_AudioStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QReflect_AudioSink_t {
    QByteArrayData data[14];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_AudioSink_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_AudioSink_t qt_meta_stringdata_osg__QReflect_AudioSink = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_AudioSink"
QT_MOC_LITERAL(1, 24, 12), // "DelayChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "VolumeChanged"
QT_MOC_LITERAL(4, 52, 11), // "updateModel"
QT_MOC_LITERAL(5, 64, 9), // "className"
QT_MOC_LITERAL(6, 74, 11), // "const char*"
QT_MOC_LITERAL(7, 86, 11), // "libraryName"
QT_MOC_LITERAL(8, 98, 8), // "getDelay"
QT_MOC_LITERAL(9, 107, 9), // "getVolume"
QT_MOC_LITERAL(10, 117, 8), // "setDelay"
QT_MOC_LITERAL(11, 126, 9), // "setVolume"
QT_MOC_LITERAL(12, 136, 5), // "Delay"
QT_MOC_LITERAL(13, 142, 6) // "Volume"

    },
    "osg::QReflect_AudioSink\0DelayChanged\0"
    "\0VolumeChanged\0updateModel\0className\0"
    "const char*\0libraryName\0getDelay\0"
    "getVolume\0setDelay\0setVolume\0Delay\0"
    "Volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_AudioSink[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   65,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   66,    2, 0x02 /* Public */,
       7,    0,   67,    2, 0x02 /* Public */,
       8,    0,   68,    2, 0x02 /* Public */,
       9,    0,   69,    2, 0x02 /* Public */,
      10,    1,   70,    2, 0x02 /* Public */,
      11,    1,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Double,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      12, QMetaType::Double, 0x00495103,
      13, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QReflect_AudioSink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AudioSink *_t = static_cast<QReflect_AudioSink *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DelayChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->VolumeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->getDelay();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->getVolume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 7: _t->setDelay((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 8: _t->setVolume((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_AudioSink::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AudioSink::DelayChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_AudioSink::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AudioSink::VolumeChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_AudioSink *_t = static_cast<QReflect_AudioSink *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getDelay(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getVolume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_AudioSink *_t = static_cast<QReflect_AudioSink *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDelay(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setVolume(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_AudioSink::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_AudioSink.data,
      qt_meta_data_osg__QReflect_AudioSink,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_AudioSink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_AudioSink::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_AudioSink.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AudioSink*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_AudioSink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_AudioSink::DelayChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_AudioSink::VolumeChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
