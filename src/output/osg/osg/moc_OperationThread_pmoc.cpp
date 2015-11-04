/****************************************************************************
** Meta object code from reading C++ file 'OperationThread_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OperationThread_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OperationThread_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_RefBlock_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_RefBlock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_RefBlock_t qt_meta_stringdata_osg__QReflect_RefBlock = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QReflect_RefBlock"
QT_MOC_LITERAL(1, 23, 11), // "updateModel"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "osg::QReflect_RefBlock\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_RefBlock[] = {

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

void osg::QReflect_RefBlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_RefBlock *_t = static_cast<QReflect_RefBlock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_RefBlock::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_RefBlock.data,
      qt_meta_data_osg__QReflect_RefBlock,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_RefBlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_RefBlock::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_RefBlock.stringdata0))
        return static_cast<void*>(const_cast< QReflect_RefBlock*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_RefBlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_OperationQueue_t {
    QByteArrayData data[16];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_OperationQueue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_OperationQueue_t qt_meta_stringdata_osg__QReflect_OperationQueue = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osg::QReflect_OperationQueue"
QT_MOC_LITERAL(1, 29, 17), // "CollectionChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "updateModel"
QT_MOC_LITERAL(4, 60, 5), // "empty"
QT_MOC_LITERAL(5, 66, 23), // "getNumOperationsInQueue"
QT_MOC_LITERAL(6, 90, 3), // "add"
QT_MOC_LITERAL(7, 94, 24), // "osg::QReflect_Operation*"
QT_MOC_LITERAL(8, 119, 3), // "par"
QT_MOC_LITERAL(9, 123, 20), // "releaseAllOperations"
QT_MOC_LITERAL(10, 144, 22), // "releaseOperationsBlock"
QT_MOC_LITERAL(11, 167, 6), // "remove"
QT_MOC_LITERAL(12, 174, 19), // "removeAllOperations"
QT_MOC_LITERAL(13, 194, 13), // "runOperations"
QT_MOC_LITERAL(14, 208, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(15, 230, 16) // "pmoc_reverse_add"

    },
    "osg::QReflect_OperationQueue\0"
    "CollectionChanged\0\0updateModel\0empty\0"
    "getNumOperationsInQueue\0add\0"
    "osg::QReflect_Operation*\0par\0"
    "releaseAllOperations\0releaseOperationsBlock\0"
    "remove\0removeAllOperations\0runOperations\0"
    "osg::QReflect_Object*\0pmoc_reverse_add"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_OperationQueue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   71,    2, 0x02 /* Public */,
       5,    0,   72,    2, 0x02 /* Public */,
       6,    1,   73,    2, 0x02 /* Public */,
       9,    0,   76,    2, 0x02 /* Public */,
      10,    0,   77,    2, 0x02 /* Public */,
      11,    1,   78,    2, 0x02 /* Public */,
      12,    0,   81,    2, 0x02 /* Public */,
      13,    1,   82,    2, 0x02 /* Public */,
      15,    1,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::UInt,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void osg::QReflect_OperationQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_OperationQueue *_t = static_cast<QReflect_OperationQueue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CollectionChanged(); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->empty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getNumOperationsInQueue();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: _t->add((*reinterpret_cast< osg::QReflect_Operation*(*)>(_a[1]))); break;
        case 5: _t->releaseAllOperations(); break;
        case 6: _t->releaseOperationsBlock(); break;
        case 7: _t->remove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->removeAllOperations(); break;
        case 9: _t->runOperations((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        case 10: _t->pmoc_reverse_add((*reinterpret_cast< osg::QReflect_Operation*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Operation* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Operation* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_OperationQueue::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OperationQueue::CollectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_OperationQueue::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_OperationQueue.data,
      qt_meta_data_osg__QReflect_OperationQueue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_OperationQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_OperationQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_OperationQueue.stringdata0))
        return static_cast<void*>(const_cast< QReflect_OperationQueue*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_OperationQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_OperationQueue::CollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_osg__QReflect_RefBlockCount_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_RefBlockCount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_RefBlockCount_t qt_meta_stringdata_osg__QReflect_RefBlockCount = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_RefBlockCount"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "osg::QReflect_RefBlockCount\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_RefBlockCount[] = {

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

void osg::QReflect_RefBlockCount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_RefBlockCount *_t = static_cast<QReflect_RefBlockCount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_RefBlockCount::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_RefBlockCount.data,
      qt_meta_data_osg__QReflect_RefBlockCount,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_RefBlockCount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_RefBlockCount::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_RefBlockCount.stringdata0))
        return static_cast<void*>(const_cast< QReflect_RefBlockCount*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_RefBlockCount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_Operation_t {
    QByteArrayData data[12];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Operation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Operation_t qt_meta_stringdata_osg__QReflect_Operation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_Operation"
QT_MOC_LITERAL(1, 24, 11), // "KeepChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "NameChanged"
QT_MOC_LITERAL(4, 49, 11), // "updateModel"
QT_MOC_LITERAL(5, 61, 7), // "getName"
QT_MOC_LITERAL(6, 69, 7), // "getKeep"
QT_MOC_LITERAL(7, 77, 7), // "release"
QT_MOC_LITERAL(8, 85, 7), // "setKeep"
QT_MOC_LITERAL(9, 93, 7), // "setName"
QT_MOC_LITERAL(10, 101, 4), // "Name"
QT_MOC_LITERAL(11, 106, 4) // "Keep"

    },
    "osg::QReflect_Operation\0KeepChanged\0"
    "\0NameChanged\0updateModel\0getName\0"
    "getKeep\0release\0setKeep\0setName\0Name\0"
    "Keep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Operation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   61,    2, 0x02 /* Public */,
       6,    0,   62,    2, 0x02 /* Public */,
       7,    0,   63,    2, 0x02 /* Public */,
       8,    1,   64,    2, 0x02 /* Public */,
       9,    1,   67,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void osg::QReflect_Operation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Operation *_t = static_cast<QReflect_Operation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->KeepChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->NameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->getKeep();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->release(); break;
        case 6: _t->setKeep((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Operation::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Operation::KeepChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Operation::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Operation::NameChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Operation *_t = static_cast<QReflect_Operation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getKeep(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Operation *_t = static_cast<QReflect_Operation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setKeep(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Operation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Operation.data,
      qt_meta_data_osg__QReflect_Operation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Operation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Operation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Operation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Operation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Operation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_Operation::KeepChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Operation::NameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_osg__QReflect_OperationThread_t {
    QByteArrayData data[28];
    char stringdata0[444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_OperationThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_OperationThread_t qt_meta_stringdata_osg__QReflect_OperationThread = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QReflect_OperationThread"
QT_MOC_LITERAL(1, 30, 17), // "CollectionChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 11), // "DoneChanged"
QT_MOC_LITERAL(4, 61, 21), // "OperationQueueChanged"
QT_MOC_LITERAL(5, 83, 35), // "const osg::QReflect_Operation..."
QT_MOC_LITERAL(6, 119, 13), // "ParentChanged"
QT_MOC_LITERAL(7, 133, 27), // "const osg::QReflect_Object*"
QT_MOC_LITERAL(8, 161, 11), // "updateModel"
QT_MOC_LITERAL(9, 173, 6), // "cancel"
QT_MOC_LITERAL(10, 180, 9), // "getParent"
QT_MOC_LITERAL(11, 190, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(12, 212, 17), // "getOperationQueue"
QT_MOC_LITERAL(13, 230, 29), // "osg::QReflect_OperationQueue*"
QT_MOC_LITERAL(14, 260, 7), // "getDone"
QT_MOC_LITERAL(15, 268, 3), // "add"
QT_MOC_LITERAL(16, 272, 24), // "osg::QReflect_Operation*"
QT_MOC_LITERAL(17, 297, 3), // "par"
QT_MOC_LITERAL(18, 301, 6), // "remove"
QT_MOC_LITERAL(19, 308, 19), // "removeAllOperations"
QT_MOC_LITERAL(20, 328, 3), // "run"
QT_MOC_LITERAL(21, 332, 16), // "pmoc_reverse_add"
QT_MOC_LITERAL(22, 349, 30), // "pmoc_reverse_setOperationQueue"
QT_MOC_LITERAL(23, 380, 22), // "pmoc_reverse_setParent"
QT_MOC_LITERAL(24, 403, 7), // "setDone"
QT_MOC_LITERAL(25, 411, 17), // "setOperationQueue"
QT_MOC_LITERAL(26, 429, 9), // "setParent"
QT_MOC_LITERAL(27, 439, 4) // "Done"

    },
    "osg::QReflect_OperationThread\0"
    "CollectionChanged\0\0DoneChanged\0"
    "OperationQueueChanged\0"
    "const osg::QReflect_OperationQueue*\0"
    "ParentChanged\0const osg::QReflect_Object*\0"
    "updateModel\0cancel\0getParent\0"
    "osg::QReflect_Object*\0getOperationQueue\0"
    "osg::QReflect_OperationQueue*\0getDone\0"
    "add\0osg::QReflect_Operation*\0par\0"
    "remove\0removeAllOperations\0run\0"
    "pmoc_reverse_add\0pmoc_reverse_setOperationQueue\0"
    "pmoc_reverse_setParent\0setDone\0"
    "setOperationQueue\0setParent\0Done"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_OperationThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       1,  162, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    1,  120,    2, 0x06 /* Public */,
       4,    1,  123,    2, 0x06 /* Public */,
       6,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  129,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,  130,    2, 0x02 /* Public */,
      10,    0,  131,    2, 0x02 /* Public */,
      12,    0,  132,    2, 0x02 /* Public */,
      14,    0,  133,    2, 0x02 /* Public */,
      15,    1,  134,    2, 0x02 /* Public */,
      18,    1,  137,    2, 0x02 /* Public */,
      19,    0,  140,    2, 0x02 /* Public */,
      20,    0,  141,    2, 0x02 /* Public */,
      21,    1,  142,    2, 0x02 /* Public */,
      22,    1,  145,    2, 0x02 /* Public */,
      22,    0,  148,    2, 0x22 /* Public | MethodCloned */,
      23,    1,  149,    2, 0x02 /* Public */,
      23,    0,  152,    2, 0x22 /* Public | MethodCloned */,
      24,    1,  153,    2, 0x02 /* Public */,
      25,    1,  156,    2, 0x02 /* Public */,
      26,    1,  159,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    0x80000000 | 11,
    0x80000000 | 13,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 13,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 13,   17,
    QMetaType::Void, 0x80000000 | 11,   17,

 // properties: name, type, flags
      27, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void osg::QReflect_OperationThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_OperationThread *_t = static_cast<QReflect_OperationThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CollectionChanged(); break;
        case 1: _t->DoneChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->OperationQueueChanged((*reinterpret_cast< const osg::QReflect_OperationQueue*(*)>(_a[1]))); break;
        case 3: _t->ParentChanged((*reinterpret_cast< const osg::QReflect_Object*(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        case 5: { int _r = _t->cancel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_Object* _r = _t->getParent();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_OperationQueue* _r = _t->getOperationQueue();
            if (_a[0]) *reinterpret_cast< osg::QReflect_OperationQueue**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->getDone();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->add((*reinterpret_cast< osg::QReflect_Operation*(*)>(_a[1]))); break;
        case 10: _t->remove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->removeAllOperations(); break;
        case 12: _t->run(); break;
        case 13: _t->pmoc_reverse_add((*reinterpret_cast< osg::QReflect_Operation*(*)>(_a[1]))); break;
        case 14: _t->pmoc_reverse_setOperationQueue((*reinterpret_cast< osg::QReflect_OperationQueue*(*)>(_a[1]))); break;
        case 15: _t->pmoc_reverse_setOperationQueue(); break;
        case 16: _t->pmoc_reverse_setParent((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        case 17: _t->pmoc_reverse_setParent(); break;
        case 18: _t->setDone((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->setOperationQueue((*reinterpret_cast< osg::QReflect_OperationQueue*(*)>(_a[1]))); break;
        case 20: _t->setParent((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Operation* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Operation* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_OperationQueue* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_OperationQueue* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_OperationThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OperationThread::CollectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_OperationThread::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OperationThread::DoneChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_OperationThread::*_t)(const osg::QReflect_OperationQueue * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OperationThread::OperationQueueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_OperationThread::*_t)(const osg::QReflect_Object * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OperationThread::ParentChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_OperationThread *_t = static_cast<QReflect_OperationThread *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getDone(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_OperationThread *_t = static_cast<QReflect_OperationThread *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDone(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_OperationThread::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_OperationThread.data,
      qt_meta_data_osg__QReflect_OperationThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_OperationThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_OperationThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_OperationThread.stringdata0))
        return static_cast<void*>(const_cast< QReflect_OperationThread*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_OperationThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_OperationThread::CollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void osg::QReflect_OperationThread::DoneChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_OperationThread::OperationQueueChanged(const osg::QReflect_OperationQueue * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QReflect_OperationThread::ParentChanged(const osg::QReflect_Object * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
