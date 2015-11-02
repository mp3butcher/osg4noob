/****************************************************************************
** Meta object code from reading C++ file 'FrameBufferObject_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FrameBufferObject_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameBufferObject_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_GLFrameBufferObjectManager_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GLFrameBufferObjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GLFrameBufferObjectManager_t qt_meta_stringdata_osg__QReflect_GLFrameBufferObjectManager = {
    {
QT_MOC_LITERAL(0, 0, 40), // "osg::QReflect_GLFrameBufferOb..."
QT_MOC_LITERAL(1, 41, 11), // "updateModel"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "osg::QReflect_GLFrameBufferObjectManager\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GLFrameBufferObjectManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_GLFrameBufferObjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GLFrameBufferObjectManager *_t = static_cast<QReflect_GLFrameBufferObjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_GLFrameBufferObjectManager::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GLFrameBufferObjectManager.data,
      qt_meta_data_osg__QReflect_GLFrameBufferObjectManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GLFrameBufferObjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GLFrameBufferObjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GLFrameBufferObjectManager.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GLFrameBufferObjectManager*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GLFrameBufferObjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_FrameBufferAttachment_t {
    QByteArrayData data[17];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_FrameBufferAttachment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_FrameBufferAttachment_t qt_meta_stringdata_osg__QReflect_FrameBufferAttachment = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osg::QReflect_FrameBufferAtta..."
QT_MOC_LITERAL(1, 36, 11), // "updateModel"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 13), // "isMultisample"
QT_MOC_LITERAL(4, 63, 7), // "compare"
QT_MOC_LITERAL(5, 71, 36), // "osg::QReflect_FrameBufferAtta..."
QT_MOC_LITERAL(6, 108, 14), // "getCubeMapFace"
QT_MOC_LITERAL(7, 123, 19), // "getTexture3DZOffset"
QT_MOC_LITERAL(8, 143, 20), // "getTextureArrayLayer"
QT_MOC_LITERAL(9, 164, 15), // "getTextureLevel"
QT_MOC_LITERAL(10, 180, 15), // "getRenderBuffer"
QT_MOC_LITERAL(11, 196, 27), // "osg::QReflect_RenderBuffer*"
QT_MOC_LITERAL(12, 224, 10), // "getTexture"
QT_MOC_LITERAL(13, 235, 22), // "osg::QReflect_Texture*"
QT_MOC_LITERAL(14, 258, 44), // "createRequiredTexturesAndAppl..."
QT_MOC_LITERAL(15, 303, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(16, 324, 27) // "osg::QReflect_GLExtensions*"

    },
    "osg::QReflect_FrameBufferAttachment\0"
    "updateModel\0\0isMultisample\0compare\0"
    "osg::QReflect_FrameBufferAttachment*\0"
    "getCubeMapFace\0getTexture3DZOffset\0"
    "getTextureArrayLayer\0getTextureLevel\0"
    "getRenderBuffer\0osg::QReflect_RenderBuffer*\0"
    "getTexture\0osg::QReflect_Texture*\0"
    "createRequiredTexturesAndApplyGenerateMipMap\0"
    "osg::QReflect_State*\0osg::QReflect_GLExtensions*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_FrameBufferAttachment[] = {

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

 // methods: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x02 /* Public */,
       4,    1,   76,    2, 0x02 /* Public */,
       6,    0,   79,    2, 0x02 /* Public */,
       7,    0,   80,    2, 0x02 /* Public */,
       8,    0,   81,    2, 0x02 /* Public */,
       9,    0,   82,    2, 0x02 /* Public */,
      10,    0,   83,    2, 0x02 /* Public */,
      10,    0,   84,    2, 0x02 /* Public */,
      12,    0,   85,    2, 0x02 /* Public */,
      12,    0,   86,    2, 0x02 /* Public */,
      14,    2,   87,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 5,    2,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    0x80000000 | 11,
    0x80000000 | 11,
    0x80000000 | 13,
    0x80000000 | 13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,    2,    2,

       0        // eod
};

void osg::QReflect_FrameBufferAttachment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FrameBufferAttachment *_t = static_cast<QReflect_FrameBufferAttachment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isMultisample();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_FrameBufferAttachment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getCubeMapFace();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { uint _r = _t->getTexture3DZOffset();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 5: { uint _r = _t->getTextureArrayLayer();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 6: { uint _r = _t->getTextureLevel();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_RenderBuffer* _r = _t->getRenderBuffer();
            if (_a[0]) *reinterpret_cast< osg::QReflect_RenderBuffer**>(_a[0]) = _r; }  break;
        case 8: { osg::QReflect_RenderBuffer* _r = _t->getRenderBuffer();
            if (_a[0]) *reinterpret_cast< osg::QReflect_RenderBuffer**>(_a[0]) = _r; }  break;
        case 9: { osg::QReflect_Texture* _r = _t->getTexture();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Texture**>(_a[0]) = _r; }  break;
        case 10: { osg::QReflect_Texture* _r = _t->getTexture();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Texture**>(_a[0]) = _r; }  break;
        case 11: _t->createRequiredTexturesAndApplyGenerateMipMap((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_GLExtensions*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_FrameBufferAttachment* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_FrameBufferAttachment::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_FrameBufferAttachment.data,
      qt_meta_data_osg__QReflect_FrameBufferAttachment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_FrameBufferAttachment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_FrameBufferAttachment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_FrameBufferAttachment.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FrameBufferAttachment*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_FrameBufferAttachment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_RenderBuffer_t {
    QByteArrayData data[27];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_RenderBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_RenderBuffer_t qt_meta_stringdata_osg__QReflect_RenderBuffer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_RenderBuffer"
QT_MOC_LITERAL(1, 27, 19), // "ColorSamplesChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "HeightChanged"
QT_MOC_LITERAL(4, 62, 14), // "SamplesChanged"
QT_MOC_LITERAL(5, 77, 12), // "WidthChanged"
QT_MOC_LITERAL(6, 90, 11), // "updateModel"
QT_MOC_LITERAL(7, 102, 7), // "compare"
QT_MOC_LITERAL(8, 110, 27), // "osg::QReflect_RenderBuffer*"
QT_MOC_LITERAL(9, 138, 13), // "getMaxSamples"
QT_MOC_LITERAL(10, 152, 27), // "osg::QReflect_GLExtensions*"
QT_MOC_LITERAL(11, 180, 15), // "getColorSamples"
QT_MOC_LITERAL(12, 196, 9), // "getHeight"
QT_MOC_LITERAL(13, 206, 10), // "getSamples"
QT_MOC_LITERAL(14, 217, 8), // "getWidth"
QT_MOC_LITERAL(15, 226, 16), // "releaseGLObjects"
QT_MOC_LITERAL(16, 243, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(17, 264, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(18, 286, 7), // "setSize"
QT_MOC_LITERAL(19, 294, 15), // "setColorSamples"
QT_MOC_LITERAL(20, 310, 9), // "setHeight"
QT_MOC_LITERAL(21, 320, 10), // "setSamples"
QT_MOC_LITERAL(22, 331, 8), // "setWidth"
QT_MOC_LITERAL(23, 340, 12), // "ColorSamples"
QT_MOC_LITERAL(24, 353, 6), // "Height"
QT_MOC_LITERAL(25, 360, 7), // "Samples"
QT_MOC_LITERAL(26, 368, 5) // "Width"

    },
    "osg::QReflect_RenderBuffer\0"
    "ColorSamplesChanged\0\0HeightChanged\0"
    "SamplesChanged\0WidthChanged\0updateModel\0"
    "compare\0osg::QReflect_RenderBuffer*\0"
    "getMaxSamples\0osg::QReflect_GLExtensions*\0"
    "getColorSamples\0getHeight\0getSamples\0"
    "getWidth\0releaseGLObjects\0"
    "osg::QReflect_State*\0resizeGLObjectBuffers\0"
    "setSize\0setColorSamples\0setHeight\0"
    "setSamples\0setWidth\0ColorSamples\0"
    "Height\0Samples\0Width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_RenderBuffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       4,  152, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,
       4,    1,  110,    2, 0x06 /* Public */,
       5,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  116,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,  117,    2, 0x02 /* Public */,
       9,    2,  120,    2, 0x02 /* Public */,
      11,    0,  125,    2, 0x02 /* Public */,
      12,    0,  126,    2, 0x02 /* Public */,
      13,    0,  127,    2, 0x02 /* Public */,
      14,    0,  128,    2, 0x02 /* Public */,
      15,    1,  129,    2, 0x02 /* Public */,
      17,    1,  132,    2, 0x02 /* Public */,
      18,    2,  135,    2, 0x02 /* Public */,
      19,    1,  140,    2, 0x02 /* Public */,
      20,    1,  143,    2, 0x02 /* Public */,
      21,    1,  146,    2, 0x02 /* Public */,
      22,    1,  149,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 8,    2,
    QMetaType::Int, QMetaType::UInt, 0x80000000 | 10,    2,    2,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495103,
      25, QMetaType::Int, 0x00495103,
      26, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void osg::QReflect_RenderBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_RenderBuffer *_t = static_cast<QReflect_RenderBuffer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ColorSamplesChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->HeightChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->SamplesChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->WidthChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        case 5: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_RenderBuffer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->getMaxSamples((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_GLExtensions*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->getColorSamples();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->getHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->getSamples();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->getWidth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->releaseGLObjects((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 12: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->setSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->setColorSamples((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 15: _t->setHeight((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: _t->setSamples((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 17: _t->setWidth((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_RenderBuffer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_RenderBuffer::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_RenderBuffer::ColorSamplesChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_RenderBuffer::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_RenderBuffer::HeightChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_RenderBuffer::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_RenderBuffer::SamplesChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_RenderBuffer::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_RenderBuffer::WidthChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_RenderBuffer *_t = static_cast<QReflect_RenderBuffer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getColorSamples(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getHeight(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getSamples(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_RenderBuffer *_t = static_cast<QReflect_RenderBuffer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorSamples(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSamples(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_RenderBuffer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_RenderBuffer.data,
      qt_meta_data_osg__QReflect_RenderBuffer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_RenderBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_RenderBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_RenderBuffer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_RenderBuffer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_RenderBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_RenderBuffer::ColorSamplesChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_RenderBuffer::HeightChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_RenderBuffer::SamplesChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QReflect_RenderBuffer::WidthChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_osg__QReflect_GLRenderBufferManager_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GLRenderBufferManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GLRenderBufferManager_t qt_meta_stringdata_osg__QReflect_GLRenderBufferManager = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osg::QReflect_GLRenderBufferM..."
QT_MOC_LITERAL(1, 36, 11), // "updateModel"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "osg::QReflect_GLRenderBufferManager\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GLRenderBufferManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_GLRenderBufferManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GLRenderBufferManager *_t = static_cast<QReflect_GLRenderBufferManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_GLRenderBufferManager::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GLRenderBufferManager.data,
      qt_meta_data_osg__QReflect_GLRenderBufferManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GLRenderBufferManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GLRenderBufferManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GLRenderBufferManager.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GLRenderBufferManager*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GLRenderBufferManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_FrameBufferObject_t {
    QByteArrayData data[16];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_FrameBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_FrameBufferObject_t qt_meta_stringdata_osg__QReflect_FrameBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_FrameBufferObject"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 27), // "hasMultipleRenderingTargets"
QT_MOC_LITERAL(4, 73, 13), // "isMultisample"
QT_MOC_LITERAL(5, 87, 7), // "compare"
QT_MOC_LITERAL(6, 95, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 125, 5), // "apply"
QT_MOC_LITERAL(8, 131, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(9, 152, 43), // "osg::QReflect_FrameBufferObje..."
QT_MOC_LITERAL(10, 196, 16), // "releaseGLObjects"
QT_MOC_LITERAL(11, 213, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(12, 235, 10), // "BindTarget"
QT_MOC_LITERAL(13, 246, 16), // "READ_FRAMEBUFFER"
QT_MOC_LITERAL(14, 263, 16), // "DRAW_FRAMEBUFFER"
QT_MOC_LITERAL(15, 280, 21) // "READ_DRAW_FRAMEBUFFER"

    },
    "osg::QReflect_FrameBufferObject\0"
    "updateModel\0\0hasMultipleRenderingTargets\0"
    "isMultisample\0compare\0"
    "osg::QReflect_StateAttribute*\0apply\0"
    "osg::QReflect_State*\0"
    "osg::QReflect_FrameBufferObject::BindTarget\0"
    "releaseGLObjects\0resizeGLObjectBuffers\0"
    "BindTarget\0READ_FRAMEBUFFER\0"
    "DRAW_FRAMEBUFFER\0READ_DRAW_FRAMEBUFFER"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_FrameBufferObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x02 /* Public */,
       4,    0,   56,    2, 0x02 /* Public */,
       5,    1,   57,    2, 0x02 /* Public */,
       7,    2,   60,    2, 0x02 /* Public */,
       7,    1,   65,    2, 0x02 /* Public */,
      10,    1,   68,    2, 0x02 /* Public */,
      11,    1,   71,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // enums: name, flags, count, data
      12, 0x0,    3,   78,

 // enum data: key, value
      13, uint(osg::QReflect_FrameBufferObject::READ_FRAMEBUFFER),
      14, uint(osg::QReflect_FrameBufferObject::DRAW_FRAMEBUFFER),
      15, uint(osg::QReflect_FrameBufferObject::READ_DRAW_FRAMEBUFFER),

       0        // eod
};

void osg::QReflect_FrameBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FrameBufferObject *_t = static_cast<QReflect_FrameBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->hasMultipleRenderingTargets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->isMultisample();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->apply((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_FrameBufferObject::BindTarget(*)>(_a[2]))); break;
        case 5: _t->apply((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 6: _t->releaseGLObjects((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 7: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_FrameBufferObject::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_FrameBufferObject.data,
      qt_meta_data_osg__QReflect_FrameBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_FrameBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_FrameBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_FrameBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FrameBufferObject*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_FrameBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
