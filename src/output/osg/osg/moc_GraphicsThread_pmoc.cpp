/****************************************************************************
** Meta object code from reading C++ file 'GraphicsThread_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GraphicsThread_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsThread_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_GraphicsOperation_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GraphicsOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GraphicsOperation_t qt_meta_stringdata_osg__QReflect_GraphicsOperation = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_GraphicsOperation"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "osg::QReflect_GraphicsOperation\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GraphicsOperation[] = {

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

void osg::QReflect_GraphicsOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GraphicsOperation *_t = static_cast<QReflect_GraphicsOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_GraphicsOperation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GraphicsOperation.data,
      qt_meta_data_osg__QReflect_GraphicsOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GraphicsOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GraphicsOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GraphicsOperation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GraphicsOperation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GraphicsOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_EndOfDynamicDrawBlock_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_EndOfDynamicDrawBlock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_EndOfDynamicDrawBlock_t qt_meta_stringdata_osg__QReflect_EndOfDynamicDrawBlock = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osg::QReflect_EndOfDynamicDra..."
QT_MOC_LITERAL(1, 36, 11), // "updateModel"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 9), // "completed"
QT_MOC_LITERAL(4, 59, 20) // "osg::QReflect_State*"

    },
    "osg::QReflect_EndOfDynamicDrawBlock\0"
    "updateModel\0\0completed\0osg::QReflect_State*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_EndOfDynamicDrawBlock[] = {

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
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_EndOfDynamicDrawBlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_EndOfDynamicDrawBlock *_t = static_cast<QReflect_EndOfDynamicDrawBlock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->completed((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_EndOfDynamicDrawBlock::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_EndOfDynamicDrawBlock.data,
      qt_meta_data_osg__QReflect_EndOfDynamicDrawBlock,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_EndOfDynamicDrawBlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_EndOfDynamicDrawBlock::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_EndOfDynamicDrawBlock.stringdata0))
        return static_cast<void*>(const_cast< QReflect_EndOfDynamicDrawBlock*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_EndOfDynamicDrawBlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_BlockAndFlushOperation_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_BlockAndFlushOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_BlockAndFlushOperation_t qt_meta_stringdata_osg__QReflect_BlockAndFlushOperation = {
    {
QT_MOC_LITERAL(0, 0, 36), // "osg::QReflect_BlockAndFlushOp..."
QT_MOC_LITERAL(1, 37, 11), // "updateModel"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "osg::QReflect_BlockAndFlushOperation\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_BlockAndFlushOperation[] = {

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

void osg::QReflect_BlockAndFlushOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BlockAndFlushOperation *_t = static_cast<QReflect_BlockAndFlushOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_BlockAndFlushOperation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_BlockAndFlushOperation.data,
      qt_meta_data_osg__QReflect_BlockAndFlushOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_BlockAndFlushOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_BlockAndFlushOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_BlockAndFlushOperation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BlockAndFlushOperation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_BlockAndFlushOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_SwapBuffersOperation_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_SwapBuffersOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_SwapBuffersOperation_t qt_meta_stringdata_osg__QReflect_SwapBuffersOperation = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osg::QReflect_SwapBuffersOper..."
QT_MOC_LITERAL(1, 35, 11), // "updateModel"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "osg::QReflect_SwapBuffersOperation\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_SwapBuffersOperation[] = {

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

void osg::QReflect_SwapBuffersOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_SwapBuffersOperation *_t = static_cast<QReflect_SwapBuffersOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_SwapBuffersOperation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_SwapBuffersOperation.data,
      qt_meta_data_osg__QReflect_SwapBuffersOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_SwapBuffersOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_SwapBuffersOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_SwapBuffersOperation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_SwapBuffersOperation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_SwapBuffersOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_RunOperations_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_RunOperations_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_RunOperations_t qt_meta_stringdata_osg__QReflect_RunOperations = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_RunOperations"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "osg::QReflect_RunOperations\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_RunOperations[] = {

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

void osg::QReflect_RunOperations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_RunOperations *_t = static_cast<QReflect_RunOperations *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_RunOperations::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_RunOperations.data,
      qt_meta_data_osg__QReflect_RunOperations,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_RunOperations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_RunOperations::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_RunOperations.stringdata0))
        return static_cast<void*>(const_cast< QReflect_RunOperations*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_RunOperations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_GraphicsThread_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GraphicsThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GraphicsThread_t qt_meta_stringdata_osg__QReflect_GraphicsThread = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osg::QReflect_GraphicsThread"
QT_MOC_LITERAL(1, 29, 11), // "updateModel"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3) // "run"

    },
    "osg::QReflect_GraphicsThread\0updateModel\0"
    "\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GraphicsThread[] = {

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
       3,    0,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_GraphicsThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GraphicsThread *_t = static_cast<QReflect_GraphicsThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->run(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_GraphicsThread::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GraphicsThread.data,
      qt_meta_data_osg__QReflect_GraphicsThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GraphicsThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GraphicsThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GraphicsThread.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GraphicsThread*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GraphicsThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_FlushDeletedGLObjectsOperation_t {
    QByteArrayData data[3];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_FlushDeletedGLObjectsOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_FlushDeletedGLObjectsOperation_t qt_meta_stringdata_osg__QReflect_FlushDeletedGLObjectsOperation = {
    {
QT_MOC_LITERAL(0, 0, 44), // "osg::QReflect_FlushDeletedGLO..."
QT_MOC_LITERAL(1, 45, 11), // "updateModel"
QT_MOC_LITERAL(2, 57, 0) // ""

    },
    "osg::QReflect_FlushDeletedGLObjectsOperation\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_FlushDeletedGLObjectsOperation[] = {

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

void osg::QReflect_FlushDeletedGLObjectsOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FlushDeletedGLObjectsOperation *_t = static_cast<QReflect_FlushDeletedGLObjectsOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_FlushDeletedGLObjectsOperation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_FlushDeletedGLObjectsOperation.data,
      qt_meta_data_osg__QReflect_FlushDeletedGLObjectsOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_FlushDeletedGLObjectsOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_FlushDeletedGLObjectsOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_FlushDeletedGLObjectsOperation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FlushDeletedGLObjectsOperation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_FlushDeletedGLObjectsOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_BarrierOperation_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_BarrierOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_BarrierOperation_t qt_meta_stringdata_osg__QReflect_BarrierOperation = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osg::QReflect_BarrierOperation"
QT_MOC_LITERAL(1, 31, 11), // "updateModel"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "osg::QReflect_BarrierOperation\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_BarrierOperation[] = {

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

void osg::QReflect_BarrierOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BarrierOperation *_t = static_cast<QReflect_BarrierOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_BarrierOperation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_BarrierOperation.data,
      qt_meta_data_osg__QReflect_BarrierOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_BarrierOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_BarrierOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_BarrierOperation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BarrierOperation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_BarrierOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation_t {
    QByteArrayData data[3];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation_t qt_meta_stringdata_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation = {
    {
QT_MOC_LITERAL(0, 0, 55), // "osg::QReflect_ReleaseContext_..."
QT_MOC_LITERAL(1, 56, 11), // "updateModel"
QT_MOC_LITERAL(2, 68, 0) // ""

    },
    "osg::QReflect_ReleaseContext_Block_MakeCurrentOperation\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation[] = {

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

void osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ReleaseContext_Block_MakeCurrentOperation *_t = static_cast<QReflect_ReleaseContext_Block_MakeCurrentOperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation.data,
      qt_meta_data_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ReleaseContext_Block_MakeCurrentOperation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ReleaseContext_Block_MakeCurrentOperation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ReleaseContext_Block_MakeCurrentOperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
