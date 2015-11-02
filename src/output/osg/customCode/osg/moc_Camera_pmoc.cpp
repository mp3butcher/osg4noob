/****************************************************************************
** Meta object code from reading C++ file 'Camera_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Camera_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLCameraRenderOrderSortOp_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLCameraRenderOrderSortOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLCameraRenderOrderSortOp_t qt_meta_stringdata_osg__QMLCameraRenderOrderSortOp = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QMLCameraRenderOrderSortOp"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "osg::QMLCameraRenderOrderSortOp\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLCameraRenderOrderSortOp[] = {

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

void osg::QMLCameraRenderOrderSortOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLCameraRenderOrderSortOp *_t = static_cast<QMLCameraRenderOrderSortOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLCameraRenderOrderSortOp::staticMetaObject = {
    { &QReflect_CameraRenderOrderSortOp::staticMetaObject, qt_meta_stringdata_osg__QMLCameraRenderOrderSortOp.data,
      qt_meta_data_osg__QMLCameraRenderOrderSortOp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLCameraRenderOrderSortOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLCameraRenderOrderSortOp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLCameraRenderOrderSortOp.stringdata0))
        return static_cast<void*>(const_cast< QMLCameraRenderOrderSortOp*>(this));
    return QReflect_CameraRenderOrderSortOp::qt_metacast(_clname);
}

int osg::QMLCameraRenderOrderSortOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_CameraRenderOrderSortOp::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLCamera_t {
    QByteArrayData data[27];
    char stringdata0[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLCamera_t qt_meta_stringdata_osg__QMLCamera = {
    {
QT_MOC_LITERAL(0, 0, 14), // "osg::QMLCamera"
QT_MOC_LITERAL(1, 15, 16), // "renderBinChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "renderOrderChanged"
QT_MOC_LITERAL(4, 52, 21), // "referenceFrameChanged"
QT_MOC_LITERAL(5, 74, 33), // "renderTargetImplementationCha..."
QT_MOC_LITERAL(6, 108, 24), // "bufferAttachmentsChanged"
QT_MOC_LITERAL(7, 133, 27), // "pmoc::StateAttribListModel*"
QT_MOC_LITERAL(8, 161, 11), // "updateModel"
QT_MOC_LITERAL(9, 173, 27), // "addTexture2DColorAttachment"
QT_MOC_LITERAL(10, 201, 24), // "osg::QReflect_Texture2D*"
QT_MOC_LITERAL(11, 226, 18), // "addImageAttachment"
QT_MOC_LITERAL(12, 245, 20), // "osg::QReflect_Image*"
QT_MOC_LITERAL(13, 266, 6), // "addRTT"
QT_MOC_LITERAL(14, 273, 3), // "tex"
QT_MOC_LITERAL(15, 277, 13), // "setDrawBuffer"
QT_MOC_LITERAL(16, 291, 15), // "BufferComponent"
QT_MOC_LITERAL(17, 307, 31), // "setImplicitBufferAttachmentMask"
QT_MOC_LITERAL(18, 339, 24), // "ImplicitBufferAttachment"
QT_MOC_LITERAL(19, 364, 2), // "p1"
QT_MOC_LITERAL(20, 367, 2), // "p2"
QT_MOC_LITERAL(21, 370, 10), // "StaticFunc"
QT_MOC_LITERAL(22, 381, 26), // "renderTargetImplementation"
QT_MOC_LITERAL(23, 408, 17), // "bufferAttachments"
QT_MOC_LITERAL(24, 426, 14), // "referenceFrame"
QT_MOC_LITERAL(25, 441, 11), // "renderOrder"
QT_MOC_LITERAL(26, 453, 9) // "renderBin"

    },
    "osg::QMLCamera\0renderBinChanged\0\0"
    "renderOrderChanged\0referenceFrameChanged\0"
    "renderTargetImplementationChanged\0"
    "bufferAttachmentsChanged\0"
    "pmoc::StateAttribListModel*\0updateModel\0"
    "addTexture2DColorAttachment\0"
    "osg::QReflect_Texture2D*\0addImageAttachment\0"
    "osg::QReflect_Image*\0addRTT\0tex\0"
    "setDrawBuffer\0BufferComponent\0"
    "setImplicitBufferAttachmentMask\0"
    "ImplicitBufferAttachment\0p1\0p2\0"
    "StaticFunc\0renderTargetImplementation\0"
    "bufferAttachments\0referenceFrame\0"
    "renderOrder\0renderBin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLCamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   89,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      13,    1,   96,    2, 0x0a /* Public */,
      15,    1,   99,    2, 0x0a /* Public */,
      17,    2,  102,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 10,   14,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      22, QMetaType::Int, 0x00495003,
      23, 0x80000000 | 7, 0x00495009,
      24, QMetaType::Int, 0x00495003,
      25, QMetaType::Int, 0x00495003,
      26, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       3,
       4,
       2,
       1,
       0,

       0        // eod
};

void osg::QMLCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLCamera *_t = static_cast<QMLCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renderBinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->renderOrderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->referenceFrameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->renderTargetImplementationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->bufferAttachmentsChanged((*reinterpret_cast< pmoc::StateAttribListModel*(*)>(_a[1]))); break;
        case 5: _t->updateModel(); break;
        case 6: _t->addTexture2DColorAttachment((*reinterpret_cast< osg::QReflect_Texture2D*(*)>(_a[1]))); break;
        case 7: _t->addImageAttachment((*reinterpret_cast< osg::QReflect_Image*(*)>(_a[1]))); break;
        case 8: _t->addRTT((*reinterpret_cast< osg::QReflect_Texture2D*(*)>(_a[1]))); break;
        case 9: _t->setDrawBuffer((*reinterpret_cast< BufferComponent(*)>(_a[1]))); break;
        case 10: _t->setImplicitBufferAttachmentMask((*reinterpret_cast< ImplicitBufferAttachment(*)>(_a[1])),(*reinterpret_cast< ImplicitBufferAttachment(*)>(_a[2]))); break;
        case 11: _t->StaticFunc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::StateAttribListModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLCamera::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLCamera::renderBinChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLCamera::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLCamera::renderOrderChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLCamera::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLCamera::referenceFrameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLCamera::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLCamera::renderTargetImplementationChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QMLCamera::*_t)(pmoc::StateAttribListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLCamera::bufferAttachmentsChanged)) {
                *result = 4;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::StateAttribListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLCamera *_t = static_cast<QMLCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->renderTargetImplementation(); break;
        case 1: *reinterpret_cast< pmoc::StateAttribListModel**>(_v) = _t->bufferAttachments(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->referenceFrame(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->renderOrder(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->renderBin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLCamera *_t = static_cast<QMLCamera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->renderTargetImplementation(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->referenceFrame(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->renderOrder(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->renderBin(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLCamera::staticMetaObject = {
    { &QReflect_Camera::staticMetaObject, qt_meta_stringdata_osg__QMLCamera.data,
      qt_meta_data_osg__QMLCamera,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLCamera.stringdata0))
        return static_cast<void*>(const_cast< QMLCamera*>(this));
    return QReflect_Camera::qt_metacast(_clname);
}

int osg::QMLCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Camera::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLCamera::renderBinChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLCamera::renderOrderChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLCamera::referenceFrameChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLCamera::renderTargetImplementationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QMLCamera::bufferAttachmentsChanged(pmoc::StateAttribListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
