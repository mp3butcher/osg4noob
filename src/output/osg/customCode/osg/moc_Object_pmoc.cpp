/****************************************************************************
** Meta object code from reading C++ file 'Object_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Object_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Object_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLObject_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLObject_t qt_meta_stringdata_osg__QMLObject = {
    {
QT_MOC_LITERAL(0, 0, 14), // "osg::QMLObject"
QT_MOC_LITERAL(1, 15, 21), // "classNameNeverChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "dataVarianceChanged"
QT_MOC_LITERAL(4, 58, 11), // "updateModel"
QT_MOC_LITERAL(5, 70, 9), // "className"
QT_MOC_LITERAL(6, 80, 12) // "dataVariance"

    },
    "osg::QMLObject\0classNameNeverChanged\0"
    "\0dataVarianceChanged\0updateModel\0"
    "className\0dataVariance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495001,
       6, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QMLObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLObject *_t = static_cast<QMLObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->classNameNeverChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dataVarianceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLObject::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLObject::classNameNeverChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLObject::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLObject::dataVarianceChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLObject *_t = static_cast<QMLObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->className(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dataVariance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLObject *_t = static_cast<QMLObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->dataVariance(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLObject::staticMetaObject = {
    { &QReflect_Object::staticMetaObject, qt_meta_stringdata_osg__QMLObject.data,
      qt_meta_data_osg__QMLObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLObject.stringdata0))
        return static_cast<void*>(const_cast< QMLObject*>(this));
    return QReflect_Object::qt_metacast(_clname);
}

int osg::QMLObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Object::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void osg::QMLObject::classNameNeverChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLObject::dataVarianceChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_osg__QMLDummyObject_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLDummyObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLDummyObject_t qt_meta_stringdata_osg__QMLDummyObject = {
    {
QT_MOC_LITERAL(0, 0, 19) // "osg::QMLDummyObject"

    },
    "osg::QMLDummyObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLDummyObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void osg::QMLDummyObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLDummyObject::staticMetaObject = {
    { &QReflect_DummyObject::staticMetaObject, qt_meta_stringdata_osg__QMLDummyObject.data,
      qt_meta_data_osg__QMLDummyObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLDummyObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLDummyObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLDummyObject.stringdata0))
        return static_cast<void*>(const_cast< QMLDummyObject*>(this));
    return QReflect_DummyObject::qt_metacast(_clname);
}

int osg::QMLDummyObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_DummyObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
