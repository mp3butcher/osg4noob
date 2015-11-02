/****************************************************************************
** Meta object code from reading C++ file 'BufferObject_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BufferObject_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BufferObject_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLGLBufferObjectManager_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLGLBufferObjectManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLGLBufferObjectManager_t qt_meta_stringdata_osg__QMLGLBufferObjectManager = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QMLGLBufferObjectManager"
QT_MOC_LITERAL(1, 30, 11), // "updateModel"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "osg::QMLGLBufferObjectManager\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLGLBufferObjectManager[] = {

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

void osg::QMLGLBufferObjectManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLGLBufferObjectManager *_t = static_cast<QMLGLBufferObjectManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLGLBufferObjectManager::staticMetaObject = {
    { &QReflect_GLBufferObjectManager::staticMetaObject, qt_meta_stringdata_osg__QMLGLBufferObjectManager.data,
      qt_meta_data_osg__QMLGLBufferObjectManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLGLBufferObjectManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLGLBufferObjectManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLGLBufferObjectManager.stringdata0))
        return static_cast<void*>(const_cast< QMLGLBufferObjectManager*>(this));
    return QReflect_GLBufferObjectManager::qt_metacast(_clname);
}

int osg::QMLGLBufferObjectManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_GLBufferObjectManager::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLBufferObject_t qt_meta_stringdata_osg__QMLBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QMLBufferObject"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "osg::QMLBufferObject\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLBufferObject[] = {

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

void osg::QMLBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLBufferObject *_t = static_cast<QMLBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLBufferObject::staticMetaObject = {
    { &QReflect_BufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLBufferObject.data,
      qt_meta_data_osg__QMLBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLBufferObject*>(this));
    return QReflect_BufferObject::qt_metacast(_clname);
}

int osg::QMLBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_BufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLAtomicCounterBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLAtomicCounterBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLAtomicCounterBufferObject_t qt_meta_stringdata_osg__QMLAtomicCounterBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 33), // "osg::QMLAtomicCounterBufferOb..."
QT_MOC_LITERAL(1, 34, 11), // "updateModel"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "osg::QMLAtomicCounterBufferObject\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLAtomicCounterBufferObject[] = {

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

void osg::QMLAtomicCounterBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLAtomicCounterBufferObject *_t = static_cast<QMLAtomicCounterBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLAtomicCounterBufferObject::staticMetaObject = {
    { &QReflect_AtomicCounterBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLAtomicCounterBufferObject.data,
      qt_meta_data_osg__QMLAtomicCounterBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLAtomicCounterBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLAtomicCounterBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLAtomicCounterBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLAtomicCounterBufferObject*>(this));
    return QReflect_AtomicCounterBufferObject::qt_metacast(_clname);
}

int osg::QMLAtomicCounterBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_AtomicCounterBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLVertexBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLVertexBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLVertexBufferObject_t qt_meta_stringdata_osg__QMLVertexBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QMLVertexBufferObject"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "osg::QMLVertexBufferObject\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLVertexBufferObject[] = {

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

void osg::QMLVertexBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLVertexBufferObject *_t = static_cast<QMLVertexBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLVertexBufferObject::staticMetaObject = {
    { &QReflect_VertexBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLVertexBufferObject.data,
      qt_meta_data_osg__QMLVertexBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLVertexBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLVertexBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLVertexBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLVertexBufferObject*>(this));
    return QReflect_VertexBufferObject::qt_metacast(_clname);
}

int osg::QMLVertexBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_VertexBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLShaderStorageBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLShaderStorageBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLShaderStorageBufferObject_t qt_meta_stringdata_osg__QMLShaderStorageBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 33), // "osg::QMLShaderStorageBufferOb..."
QT_MOC_LITERAL(1, 34, 11), // "updateModel"
QT_MOC_LITERAL(2, 46, 0) // ""

    },
    "osg::QMLShaderStorageBufferObject\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLShaderStorageBufferObject[] = {

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

void osg::QMLShaderStorageBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLShaderStorageBufferObject *_t = static_cast<QMLShaderStorageBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLShaderStorageBufferObject::staticMetaObject = {
    { &QReflect_ShaderStorageBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLShaderStorageBufferObject.data,
      qt_meta_data_osg__QMLShaderStorageBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLShaderStorageBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLShaderStorageBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLShaderStorageBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLShaderStorageBufferObject*>(this));
    return QReflect_ShaderStorageBufferObject::qt_metacast(_clname);
}

int osg::QMLShaderStorageBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_ShaderStorageBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLPixelBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLPixelBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLPixelBufferObject_t qt_meta_stringdata_osg__QMLPixelBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QMLPixelBufferObject"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "osg::QMLPixelBufferObject\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLPixelBufferObject[] = {

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

void osg::QMLPixelBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLPixelBufferObject *_t = static_cast<QMLPixelBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLPixelBufferObject::staticMetaObject = {
    { &QReflect_PixelBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLPixelBufferObject.data,
      qt_meta_data_osg__QMLPixelBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLPixelBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLPixelBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLPixelBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLPixelBufferObject*>(this));
    return QReflect_PixelBufferObject::qt_metacast(_clname);
}

int osg::QMLPixelBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_PixelBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLGLBufferObjectSet_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLGLBufferObjectSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLGLBufferObjectSet_t qt_meta_stringdata_osg__QMLGLBufferObjectSet = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QMLGLBufferObjectSet"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "osg::QMLGLBufferObjectSet\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLGLBufferObjectSet[] = {

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

void osg::QMLGLBufferObjectSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLGLBufferObjectSet *_t = static_cast<QMLGLBufferObjectSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLGLBufferObjectSet::staticMetaObject = {
    { &QReflect_GLBufferObjectSet::staticMetaObject, qt_meta_stringdata_osg__QMLGLBufferObjectSet.data,
      qt_meta_data_osg__QMLGLBufferObjectSet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLGLBufferObjectSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLGLBufferObjectSet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLGLBufferObjectSet.stringdata0))
        return static_cast<void*>(const_cast< QMLGLBufferObjectSet*>(this));
    return QReflect_GLBufferObjectSet::qt_metacast(_clname);
}

int osg::QMLGLBufferObjectSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_GLBufferObjectSet::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLElementBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLElementBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLElementBufferObject_t qt_meta_stringdata_osg__QMLElementBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QMLElementBufferObject"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "osg::QMLElementBufferObject\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLElementBufferObject[] = {

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

void osg::QMLElementBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLElementBufferObject *_t = static_cast<QMLElementBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLElementBufferObject::staticMetaObject = {
    { &QReflect_ElementBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLElementBufferObject.data,
      qt_meta_data_osg__QMLElementBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLElementBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLElementBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLElementBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLElementBufferObject*>(this));
    return QReflect_ElementBufferObject::qt_metacast(_clname);
}

int osg::QMLElementBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_ElementBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLBufferObjectProfile_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLBufferObjectProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLBufferObjectProfile_t qt_meta_stringdata_osg__QMLBufferObjectProfile = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QMLBufferObjectProfile"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "osg::QMLBufferObjectProfile\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLBufferObjectProfile[] = {

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

void osg::QMLBufferObjectProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLBufferObjectProfile *_t = static_cast<QMLBufferObjectProfile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLBufferObjectProfile::staticMetaObject = {
    { &QReflect_BufferObjectProfile::staticMetaObject, qt_meta_stringdata_osg__QMLBufferObjectProfile.data,
      qt_meta_data_osg__QMLBufferObjectProfile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLBufferObjectProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLBufferObjectProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLBufferObjectProfile.stringdata0))
        return static_cast<void*>(const_cast< QMLBufferObjectProfile*>(this));
    return QReflect_BufferObjectProfile::qt_metacast(_clname);
}

int osg::QMLBufferObjectProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_BufferObjectProfile::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLUniformBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLUniformBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLUniformBufferObject_t qt_meta_stringdata_osg__QMLUniformBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QMLUniformBufferObject"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "osg::QMLUniformBufferObject\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLUniformBufferObject[] = {

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

void osg::QMLUniformBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLUniformBufferObject *_t = static_cast<QMLUniformBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLUniformBufferObject::staticMetaObject = {
    { &QReflect_UniformBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLUniformBufferObject.data,
      qt_meta_data_osg__QMLUniformBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLUniformBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLUniformBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLUniformBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLUniformBufferObject*>(this));
    return QReflect_UniformBufferObject::qt_metacast(_clname);
}

int osg::QMLUniformBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_UniformBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLPixelDataBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLPixelDataBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLPixelDataBufferObject_t qt_meta_stringdata_osg__QMLPixelDataBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QMLPixelDataBufferObject"
QT_MOC_LITERAL(1, 30, 11), // "updateModel"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "osg::QMLPixelDataBufferObject\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLPixelDataBufferObject[] = {

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

void osg::QMLPixelDataBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLPixelDataBufferObject *_t = static_cast<QMLPixelDataBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLPixelDataBufferObject::staticMetaObject = {
    { &QReflect_PixelDataBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLPixelDataBufferObject.data,
      qt_meta_data_osg__QMLPixelDataBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLPixelDataBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLPixelDataBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLPixelDataBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLPixelDataBufferObject*>(this));
    return QReflect_PixelDataBufferObject::qt_metacast(_clname);
}

int osg::QMLPixelDataBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_PixelDataBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLGLBufferObject_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLGLBufferObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLGLBufferObject_t qt_meta_stringdata_osg__QMLGLBufferObject = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QMLGLBufferObject"
QT_MOC_LITERAL(1, 23, 11), // "updateModel"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "osg::QMLGLBufferObject\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLGLBufferObject[] = {

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

void osg::QMLGLBufferObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLGLBufferObject *_t = static_cast<QMLGLBufferObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLGLBufferObject::staticMetaObject = {
    { &QReflect_GLBufferObject::staticMetaObject, qt_meta_stringdata_osg__QMLGLBufferObject.data,
      qt_meta_data_osg__QMLGLBufferObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLGLBufferObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLGLBufferObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLGLBufferObject.stringdata0))
        return static_cast<void*>(const_cast< QMLGLBufferObject*>(this));
    return QReflect_GLBufferObject::qt_metacast(_clname);
}

int osg::QMLGLBufferObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_GLBufferObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLBufferData_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLBufferData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLBufferData_t qt_meta_stringdata_osg__QMLBufferData = {
    {
QT_MOC_LITERAL(0, 0, 18), // "osg::QMLBufferData"
QT_MOC_LITERAL(1, 19, 11), // "updateModel"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "osg::QMLBufferData\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLBufferData[] = {

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

void osg::QMLBufferData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLBufferData *_t = static_cast<QMLBufferData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLBufferData::staticMetaObject = {
    { &QReflect_BufferData::staticMetaObject, qt_meta_stringdata_osg__QMLBufferData.data,
      qt_meta_data_osg__QMLBufferData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLBufferData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLBufferData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLBufferData.stringdata0))
        return static_cast<void*>(const_cast< QMLBufferData*>(this));
    return QReflect_BufferData::qt_metacast(_clname);
}

int osg::QMLBufferData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_BufferData::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
