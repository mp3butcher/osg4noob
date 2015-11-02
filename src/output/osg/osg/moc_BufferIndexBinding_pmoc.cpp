/****************************************************************************
** Meta object code from reading C++ file 'BufferIndexBinding_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BufferIndexBinding_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BufferIndexBinding_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_BufferIndexBinding_t {
    QByteArrayData data[14];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_BufferIndexBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_BufferIndexBinding_t qt_meta_stringdata_osg__QReflect_BufferIndexBinding = {
    {
QT_MOC_LITERAL(0, 0, 32), // "osg::QReflect_BufferIndexBinding"
QT_MOC_LITERAL(1, 33, 19), // "BufferObjectChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 33), // "const osg::QReflect_BufferObj..."
QT_MOC_LITERAL(4, 88, 11), // "updateModel"
QT_MOC_LITERAL(5, 100, 9), // "getOffset"
QT_MOC_LITERAL(6, 110, 7), // "getSize"
QT_MOC_LITERAL(7, 118, 15), // "getBufferObject"
QT_MOC_LITERAL(8, 134, 27), // "osg::QReflect_BufferObject*"
QT_MOC_LITERAL(9, 162, 9), // "setOffset"
QT_MOC_LITERAL(10, 172, 7), // "setSize"
QT_MOC_LITERAL(11, 180, 28), // "pmoc_reverse_setBufferObject"
QT_MOC_LITERAL(12, 209, 3), // "par"
QT_MOC_LITERAL(13, 213, 15) // "setBufferObject"

    },
    "osg::QReflect_BufferIndexBinding\0"
    "BufferObjectChanged\0\0"
    "const osg::QReflect_BufferObject*\0"
    "updateModel\0getOffset\0getSize\0"
    "getBufferObject\0osg::QReflect_BufferObject*\0"
    "setOffset\0setSize\0pmoc_reverse_setBufferObject\0"
    "par\0setBufferObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_BufferIndexBinding[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x02 /* Public */,
       6,    0,   69,    2, 0x02 /* Public */,
       7,    0,   70,    2, 0x02 /* Public */,
       9,    1,   71,    2, 0x02 /* Public */,
      10,    1,   74,    2, 0x02 /* Public */,
      11,    1,   77,    2, 0x02 /* Public */,
      11,    0,   80,    2, 0x22 /* Public | MethodCloned */,
      13,    1,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 8,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 8,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   12,

       0        // eod
};

void osg::QReflect_BufferIndexBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BufferIndexBinding *_t = static_cast<QReflect_BufferIndexBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BufferObjectChanged((*reinterpret_cast< const osg::QReflect_BufferObject*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { int _r = _t->getOffset();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->getSize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_BufferObject* _r = _t->getBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_BufferObject**>(_a[0]) = _r; }  break;
        case 5: _t->setOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->pmoc_reverse_setBufferObject((*reinterpret_cast< osg::QReflect_BufferObject*(*)>(_a[1]))); break;
        case 8: _t->pmoc_reverse_setBufferObject(); break;
        case 9: _t->setBufferObject((*reinterpret_cast< osg::QReflect_BufferObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_BufferIndexBinding::*_t)(const osg::QReflect_BufferObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_BufferIndexBinding::BufferObjectChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_BufferIndexBinding::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_BufferIndexBinding.data,
      qt_meta_data_osg__QReflect_BufferIndexBinding,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_BufferIndexBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_BufferIndexBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_BufferIndexBinding.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BufferIndexBinding*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_BufferIndexBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
void osg::QReflect_BufferIndexBinding::BufferObjectChanged(const osg::QReflect_BufferObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_osg__QReflect_TransformFeedbackBufferBinding_t {
    QByteArrayData data[5];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TransformFeedbackBufferBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TransformFeedbackBufferBinding_t qt_meta_stringdata_osg__QReflect_TransformFeedbackBufferBinding = {
    {
QT_MOC_LITERAL(0, 0, 44), // "osg::QReflect_TransformFeedba..."
QT_MOC_LITERAL(1, 45, 11), // "updateModel"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 7), // "compare"
QT_MOC_LITERAL(4, 66, 29) // "osg::QReflect_StateAttribute*"

    },
    "osg::QReflect_TransformFeedbackBufferBinding\0"
    "updateModel\0\0compare\0osg::QReflect_StateAttribute*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TransformFeedbackBufferBinding[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_TransformFeedbackBufferBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TransformFeedbackBufferBinding *_t = static_cast<QReflect_TransformFeedbackBufferBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_TransformFeedbackBufferBinding::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TransformFeedbackBufferBinding.data,
      qt_meta_data_osg__QReflect_TransformFeedbackBufferBinding,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TransformFeedbackBufferBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TransformFeedbackBufferBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TransformFeedbackBufferBinding.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TransformFeedbackBufferBinding*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TransformFeedbackBufferBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_AtomicCounterBufferBinding_t {
    QByteArrayData data[5];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_AtomicCounterBufferBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_AtomicCounterBufferBinding_t qt_meta_stringdata_osg__QReflect_AtomicCounterBufferBinding = {
    {
QT_MOC_LITERAL(0, 0, 40), // "osg::QReflect_AtomicCounterBu..."
QT_MOC_LITERAL(1, 41, 11), // "updateModel"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "compare"
QT_MOC_LITERAL(4, 62, 29) // "osg::QReflect_StateAttribute*"

    },
    "osg::QReflect_AtomicCounterBufferBinding\0"
    "updateModel\0\0compare\0osg::QReflect_StateAttribute*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_AtomicCounterBufferBinding[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_AtomicCounterBufferBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AtomicCounterBufferBinding *_t = static_cast<QReflect_AtomicCounterBufferBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_AtomicCounterBufferBinding::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_AtomicCounterBufferBinding.data,
      qt_meta_data_osg__QReflect_AtomicCounterBufferBinding,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_AtomicCounterBufferBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_AtomicCounterBufferBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_AtomicCounterBufferBinding.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AtomicCounterBufferBinding*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_AtomicCounterBufferBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_UniformBufferBinding_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_UniformBufferBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_UniformBufferBinding_t qt_meta_stringdata_osg__QReflect_UniformBufferBinding = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osg::QReflect_UniformBufferBi..."
QT_MOC_LITERAL(1, 35, 11), // "updateModel"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "compare"
QT_MOC_LITERAL(4, 56, 29) // "osg::QReflect_StateAttribute*"

    },
    "osg::QReflect_UniformBufferBinding\0"
    "updateModel\0\0compare\0osg::QReflect_StateAttribute*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_UniformBufferBinding[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_UniformBufferBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_UniformBufferBinding *_t = static_cast<QReflect_UniformBufferBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_UniformBufferBinding::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_UniformBufferBinding.data,
      qt_meta_data_osg__QReflect_UniformBufferBinding,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_UniformBufferBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_UniformBufferBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_UniformBufferBinding.stringdata0))
        return static_cast<void*>(const_cast< QReflect_UniformBufferBinding*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_UniformBufferBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_ShaderStorageBufferBinding_t {
    QByteArrayData data[5];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ShaderStorageBufferBinding_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ShaderStorageBufferBinding_t qt_meta_stringdata_osg__QReflect_ShaderStorageBufferBinding = {
    {
QT_MOC_LITERAL(0, 0, 40), // "osg::QReflect_ShaderStorageBu..."
QT_MOC_LITERAL(1, 41, 11), // "updateModel"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 7), // "compare"
QT_MOC_LITERAL(4, 62, 29) // "osg::QReflect_StateAttribute*"

    },
    "osg::QReflect_ShaderStorageBufferBinding\0"
    "updateModel\0\0compare\0osg::QReflect_StateAttribute*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ShaderStorageBufferBinding[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_ShaderStorageBufferBinding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ShaderStorageBufferBinding *_t = static_cast<QReflect_ShaderStorageBufferBinding *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ShaderStorageBufferBinding::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ShaderStorageBufferBinding.data,
      qt_meta_data_osg__QReflect_ShaderStorageBufferBinding,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ShaderStorageBufferBinding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ShaderStorageBufferBinding::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ShaderStorageBufferBinding.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ShaderStorageBufferBinding*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ShaderStorageBufferBinding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
