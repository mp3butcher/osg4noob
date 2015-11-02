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
struct qt_meta_stringdata_osg__QMLCallback_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLCallback_t qt_meta_stringdata_osg__QMLCallback = {
    {
QT_MOC_LITERAL(0, 0, 16), // "osg::QMLCallback"
QT_MOC_LITERAL(1, 17, 11), // "updateModel"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "osg::QMLCallback\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLCallback[] = {

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

void osg::QMLCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLCallback *_t = static_cast<QMLCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLCallback::staticMetaObject = {
    { &QReflect_Callback::staticMetaObject, qt_meta_stringdata_osg__QMLCallback.data,
      qt_meta_data_osg__QMLCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLCallback.stringdata0))
        return static_cast<void*>(const_cast< QMLCallback*>(this));
    return QReflect_Callback::qt_metacast(_clname);
}

int osg::QMLCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Callback::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLStateAttributeCallback_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLStateAttributeCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLStateAttributeCallback_t qt_meta_stringdata_osg__QMLStateAttributeCallback = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osg::QMLStateAttributeCallback"
QT_MOC_LITERAL(1, 31, 11), // "updateModel"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "osg::QMLStateAttributeCallback\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLStateAttributeCallback[] = {

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

void osg::QMLStateAttributeCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLStateAttributeCallback *_t = static_cast<QMLStateAttributeCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLStateAttributeCallback::staticMetaObject = {
    { &QReflect_StateAttributeCallback::staticMetaObject, qt_meta_stringdata_osg__QMLStateAttributeCallback.data,
      qt_meta_data_osg__QMLStateAttributeCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLStateAttributeCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLStateAttributeCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLStateAttributeCallback.stringdata0))
        return static_cast<void*>(const_cast< QMLStateAttributeCallback*>(this));
    return QReflect_StateAttributeCallback::qt_metacast(_clname);
}

int osg::QMLStateAttributeCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_StateAttributeCallback::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLNodeCallback_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLNodeCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLNodeCallback_t qt_meta_stringdata_osg__QMLNodeCallback = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QMLNodeCallback"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "osg::QMLNodeCallback\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLNodeCallback[] = {

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

void osg::QMLNodeCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLNodeCallback *_t = static_cast<QMLNodeCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLNodeCallback::staticMetaObject = {
    { &QReflect_NodeCallback::staticMetaObject, qt_meta_stringdata_osg__QMLNodeCallback.data,
      qt_meta_data_osg__QMLNodeCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLNodeCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLNodeCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLNodeCallback.stringdata0))
        return static_cast<void*>(const_cast< QMLNodeCallback*>(this));
    return QReflect_NodeCallback::qt_metacast(_clname);
}

int osg::QMLNodeCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_NodeCallback::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLUniformCallback_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLUniformCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLUniformCallback_t qt_meta_stringdata_osg__QMLUniformCallback = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QMLUniformCallback"
QT_MOC_LITERAL(1, 24, 11), // "updateModel"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "osg::QMLUniformCallback\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLUniformCallback[] = {

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

void osg::QMLUniformCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLUniformCallback *_t = static_cast<QMLUniformCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLUniformCallback::staticMetaObject = {
    { &QReflect_UniformCallback::staticMetaObject, qt_meta_stringdata_osg__QMLUniformCallback.data,
      qt_meta_data_osg__QMLUniformCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLUniformCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLUniformCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLUniformCallback.stringdata0))
        return static_cast<void*>(const_cast< QMLUniformCallback*>(this));
    return QReflect_UniformCallback::qt_metacast(_clname);
}

int osg::QMLUniformCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_UniformCallback::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLCallbackObject_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLCallbackObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLCallbackObject_t qt_meta_stringdata_osg__QMLCallbackObject = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QMLCallbackObject"
QT_MOC_LITERAL(1, 23, 11), // "updateModel"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "osg::QMLCallbackObject\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLCallbackObject[] = {

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

void osg::QMLCallbackObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLCallbackObject *_t = static_cast<QMLCallbackObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLCallbackObject::staticMetaObject = {
    { &QReflect_CallbackObject::staticMetaObject, qt_meta_stringdata_osg__QMLCallbackObject.data,
      qt_meta_data_osg__QMLCallbackObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLCallbackObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLCallbackObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLCallbackObject.stringdata0))
        return static_cast<void*>(const_cast< QMLCallbackObject*>(this));
    return QReflect_CallbackObject::qt_metacast(_clname);
}

int osg::QMLCallbackObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_CallbackObject::qt_metacall(_c, _id, _a);
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
