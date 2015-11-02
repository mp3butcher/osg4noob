/****************************************************************************
** Meta object code from reading C++ file 'StateAttribute_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StateAttribute_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StateAttribute_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLStateAttribute_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLStateAttribute_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLStateAttribute_t qt_meta_stringdata_osg__QMLStateAttribute = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QMLStateAttribute"
QT_MOC_LITERAL(1, 23, 16), // "modeValueChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "overrideModeChanged"
QT_MOC_LITERAL(4, 61, 11), // "updateModel"
QT_MOC_LITERAL(5, 73, 12), // "overrideMode"
QT_MOC_LITERAL(6, 86, 9) // "modeValue"

    },
    "osg::QMLStateAttribute\0modeValueChanged\0"
    "\0overrideModeChanged\0updateModel\0"
    "overrideMode\0modeValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLStateAttribute[] = {

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495003,
       6, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void osg::QMLStateAttribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLStateAttribute *_t = static_cast<QMLStateAttribute *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->overrideModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLStateAttribute::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLStateAttribute::modeValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLStateAttribute::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLStateAttribute::overrideModeChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLStateAttribute *_t = static_cast<QMLStateAttribute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->overrideMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->modeValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLStateAttribute *_t = static_cast<QMLStateAttribute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->overrideMode(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->modeValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLStateAttribute::staticMetaObject = {
    { &QReflect_StateAttribute::staticMetaObject, qt_meta_stringdata_osg__QMLStateAttribute.data,
      qt_meta_data_osg__QMLStateAttribute,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLStateAttribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLStateAttribute::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLStateAttribute.stringdata0))
        return static_cast<void*>(const_cast< QMLStateAttribute*>(this));
    return QReflect_StateAttribute::qt_metacast(_clname);
}

int osg::QMLStateAttribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_StateAttribute::qt_metacall(_c, _id, _a);
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
void osg::QMLStateAttribute::modeValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLStateAttribute::overrideModeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
