/****************************************************************************
** Meta object code from reading C++ file 'Callback_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Callback_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Callback_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Callback_t {
    QByteArrayData data[16];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Callback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Callback_t qt_meta_stringdata_osg__QReflect_Callback = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QReflect_Callback"
QT_MOC_LITERAL(1, 23, 21), // "NestedCallbackChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 29), // "const osg::QReflect_Callback*"
QT_MOC_LITERAL(4, 76, 31), // "NestedCallbackCollectionChanged"
QT_MOC_LITERAL(5, 108, 11), // "updateModel"
QT_MOC_LITERAL(6, 120, 3), // "run"
QT_MOC_LITERAL(7, 124, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(8, 146, 8), // "traverse"
QT_MOC_LITERAL(9, 155, 17), // "getNestedCallback"
QT_MOC_LITERAL(10, 173, 23), // "osg::QReflect_Callback*"
QT_MOC_LITERAL(11, 197, 17), // "addNestedCallback"
QT_MOC_LITERAL(12, 215, 3), // "par"
QT_MOC_LITERAL(13, 219, 30), // "pmoc_reverse_addNestedCallback"
QT_MOC_LITERAL(14, 250, 30), // "pmoc_reverse_setNestedCallback"
QT_MOC_LITERAL(15, 281, 17) // "setNestedCallback"

    },
    "osg::QReflect_Callback\0NestedCallbackChanged\0"
    "\0const osg::QReflect_Callback*\0"
    "NestedCallbackCollectionChanged\0"
    "updateModel\0run\0osg::QReflect_Object*\0"
    "traverse\0getNestedCallback\0"
    "osg::QReflect_Callback*\0addNestedCallback\0"
    "par\0pmoc_reverse_addNestedCallback\0"
    "pmoc_reverse_setNestedCallback\0"
    "setNestedCallback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Callback[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   74,    2, 0x02 /* Public */,
       8,    2,   79,    2, 0x02 /* Public */,
       9,    0,   84,    2, 0x02 /* Public */,
      11,    1,   85,    2, 0x02 /* Public */,
      13,    1,   88,    2, 0x02 /* Public */,
      14,    1,   91,    2, 0x02 /* Public */,
      14,    0,   94,    2, 0x22 /* Public | MethodCloned */,
      15,    1,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    0x80000000 | 10,
    QMetaType::Void, 0x80000000 | 10,   12,
    QMetaType::Void, 0x80000000 | 10,   12,
    QMetaType::Void, 0x80000000 | 10,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   12,

       0        // eod
};

void osg::QReflect_Callback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Callback *_t = static_cast<QReflect_Callback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NestedCallbackChanged((*reinterpret_cast< const osg::QReflect_Callback*(*)>(_a[1]))); break;
        case 1: _t->NestedCallbackCollectionChanged(); break;
        case 2: _t->updateModel(); break;
        case 3: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->traverse((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { osg::QReflect_Callback* _r = _t->getNestedCallback();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Callback**>(_a[0]) = _r; }  break;
        case 6: _t->addNestedCallback((*reinterpret_cast< osg::QReflect_Callback*(*)>(_a[1]))); break;
        case 7: _t->pmoc_reverse_addNestedCallback((*reinterpret_cast< osg::QReflect_Callback*(*)>(_a[1]))); break;
        case 8: _t->pmoc_reverse_setNestedCallback((*reinterpret_cast< osg::QReflect_Callback*(*)>(_a[1]))); break;
        case 9: _t->pmoc_reverse_setNestedCallback(); break;
        case 10: _t->setNestedCallback((*reinterpret_cast< osg::QReflect_Callback*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Callback* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Callback* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Callback* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Callback* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Callback::*_t)(const osg::QReflect_Callback * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Callback::NestedCallbackChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Callback::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Callback::NestedCallbackCollectionChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject osg::QReflect_Callback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Callback.data,
      qt_meta_data_osg__QReflect_Callback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Callback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Callback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Callback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Callback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Callback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_Callback::NestedCallbackChanged(const osg::QReflect_Callback * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Callback::NestedCallbackCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_osg__QReflect_StateAttributeCallback_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_StateAttributeCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_StateAttributeCallback_t qt_meta_stringdata_osg__QReflect_StateAttributeCallback = {
    {
QT_MOC_LITERAL(0, 0, 36), // "osg::QReflect_StateAttributeC..."
QT_MOC_LITERAL(1, 37, 11), // "updateModel"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 3), // "run"
QT_MOC_LITERAL(4, 54, 21) // "osg::QReflect_Object*"

    },
    "osg::QReflect_StateAttributeCallback\0"
    "updateModel\0\0run\0osg::QReflect_Object*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_StateAttributeCallback[] = {

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
       3,    2,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 4,    2,    2,

       0        // eod
};

void osg::QReflect_StateAttributeCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_StateAttributeCallback *_t = static_cast<QReflect_StateAttributeCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_StateAttributeCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_StateAttributeCallback.data,
      qt_meta_data_osg__QReflect_StateAttributeCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_StateAttributeCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_StateAttributeCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_StateAttributeCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_StateAttributeCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_StateAttributeCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_NodeCallback_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_NodeCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_NodeCallback_t qt_meta_stringdata_osg__QReflect_NodeCallback = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_NodeCallback"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "run"
QT_MOC_LITERAL(4, 44, 21) // "osg::QReflect_Object*"

    },
    "osg::QReflect_NodeCallback\0updateModel\0"
    "\0run\0osg::QReflect_Object*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_NodeCallback[] = {

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
       3,    2,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 4,    2,    2,

       0        // eod
};

void osg::QReflect_NodeCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_NodeCallback *_t = static_cast<QReflect_NodeCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_NodeCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_NodeCallback.data,
      qt_meta_data_osg__QReflect_NodeCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_NodeCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_NodeCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_NodeCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_NodeCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_NodeCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_UniformCallback_t {
    QByteArrayData data[5];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_UniformCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_UniformCallback_t qt_meta_stringdata_osg__QReflect_UniformCallback = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QReflect_UniformCallback"
QT_MOC_LITERAL(1, 30, 11), // "updateModel"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "run"
QT_MOC_LITERAL(4, 47, 21) // "osg::QReflect_Object*"

    },
    "osg::QReflect_UniformCallback\0updateModel\0"
    "\0run\0osg::QReflect_Object*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_UniformCallback[] = {

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
       3,    2,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 4,    2,    2,

       0        // eod
};

void osg::QReflect_UniformCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_UniformCallback *_t = static_cast<QReflect_UniformCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_UniformCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_UniformCallback.data,
      qt_meta_data_osg__QReflect_UniformCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_UniformCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_UniformCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_UniformCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_UniformCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_UniformCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_CallbackObject_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_CallbackObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_CallbackObject_t qt_meta_stringdata_osg__QReflect_CallbackObject = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osg::QReflect_CallbackObject"
QT_MOC_LITERAL(1, 29, 11), // "updateModel"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "run"
QT_MOC_LITERAL(4, 46, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(5, 68, 16), // "asCallbackObject"
QT_MOC_LITERAL(6, 85, 29) // "osg::QReflect_CallbackObject*"

    },
    "osg::QReflect_CallbackObject\0updateModel\0"
    "\0run\0osg::QReflect_Object*\0asCallbackObject\0"
    "osg::QReflect_CallbackObject*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_CallbackObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   40,    2, 0x02 /* Public */,
       3,    1,   45,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       5,    0,   49,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Bool, 0x80000000 | 4,    2,
    0x80000000 | 6,
    0x80000000 | 6,

       0        // eod
};

void osg::QReflect_CallbackObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CallbackObject *_t = static_cast<QReflect_CallbackObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_CallbackObject* _r = _t->asCallbackObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_CallbackObject**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_CallbackObject* _r = _t->asCallbackObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_CallbackObject**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_CallbackObject::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_CallbackObject.data,
      qt_meta_data_osg__QReflect_CallbackObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_CallbackObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_CallbackObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_CallbackObject.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CallbackObject*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_CallbackObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
