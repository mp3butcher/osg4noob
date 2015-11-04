/****************************************************************************
** Meta object code from reading C++ file 'Uniform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Uniform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Uniform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLUniform_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLUniform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLUniform_t qt_meta_stringdata_osg__QMLUniform = {
    {
QT_MOC_LITERAL(0, 0, 15), // "osg::QMLUniform"
QT_MOC_LITERAL(1, 16, 18), // "stringValueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "nameChanged"
QT_MOC_LITERAL(4, 48, 11), // "typeChanged"
QT_MOC_LITERAL(5, 60, 22), // "uniformtypelistChanged"
QT_MOC_LITERAL(6, 83, 11), // "updateModel"
QT_MOC_LITERAL(7, 95, 4), // "name"
QT_MOC_LITERAL(8, 100, 4), // "type"
QT_MOC_LITERAL(9, 105, 11), // "stringValue"
QT_MOC_LITERAL(10, 117, 15) // "uniformtypelist"

    },
    "osg::QMLUniform\0stringValueChanged\0\0"
    "nameChanged\0typeChanged\0uniformtypelistChanged\0"
    "updateModel\0name\0type\0stringValue\0"
    "uniformtypelist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLUniform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495003,
       8, QMetaType::Int, 0x00495003,
       9, QMetaType::QString, 0x00495003,
      10, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       1,
       2,
       0,
       3,

       0        // eod
};

void osg::QMLUniform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLUniform *_t = static_cast<QMLUniform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stringValueChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->typeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->uniformtypelistChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLUniform::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLUniform::stringValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLUniform::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLUniform::nameChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLUniform::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLUniform::typeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLUniform::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLUniform::uniformtypelistChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLUniform *_t = static_cast<QMLUniform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->type(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->stringValue(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->uniformtypelist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLUniform *_t = static_cast<QMLUniform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->name(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->type(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setValuetoParse(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLUniform::staticMetaObject = {
    { &QReflect_Uniform::staticMetaObject, qt_meta_stringdata_osg__QMLUniform.data,
      qt_meta_data_osg__QMLUniform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLUniform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLUniform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLUniform.stringdata0))
        return static_cast<void*>(const_cast< QMLUniform*>(this));
    return QReflect_Uniform::qt_metacast(_clname);
}

int osg::QMLUniform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Uniform::qt_metacall(_c, _id, _a);
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
void osg::QMLUniform::stringValueChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLUniform::nameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLUniform::typeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLUniform::uniformtypelistChanged(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
