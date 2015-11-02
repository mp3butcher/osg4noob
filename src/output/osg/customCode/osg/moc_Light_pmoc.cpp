/****************************************************************************
** Meta object code from reading C++ file 'Light_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Light_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Light_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLLight_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLLight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLLight_t qt_meta_stringdata_osg__QMLLight = {
    {
QT_MOC_LITERAL(0, 0, 13), // "osg::QMLLight"
QT_MOC_LITERAL(1, 14, 15), // "positionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "directionChanged"
QT_MOC_LITERAL(4, 48, 14), // "ambientChanged"
QT_MOC_LITERAL(5, 63, 14), // "diffuseChanged"
QT_MOC_LITERAL(6, 78, 15), // "specularChanged"
QT_MOC_LITERAL(7, 94, 11), // "updateModel"
QT_MOC_LITERAL(8, 106, 8), // "position"
QT_MOC_LITERAL(9, 115, 9), // "direction"
QT_MOC_LITERAL(10, 125, 7), // "ambient"
QT_MOC_LITERAL(11, 133, 7), // "diffuse"
QT_MOC_LITERAL(12, 141, 8) // "specular"

    },
    "osg::QMLLight\0positionChanged\0\0"
    "directionChanged\0ambientChanged\0"
    "diffuseChanged\0specularChanged\0"
    "updateModel\0position\0direction\0ambient\0"
    "diffuse\0specular"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLLight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector4D,    2,
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QVector4D, 0x00495003,
       9, QMetaType::QVector3D, 0x00495003,
      10, QMetaType::QColor, 0x00495003,
      11, QMetaType::QColor, 0x00495003,
      12, QMetaType::QColor, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void osg::QMLLight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLLight *_t = static_cast<QMLLight *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< QVector4D(*)>(_a[1]))); break;
        case 1: _t->directionChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 2: _t->ambientChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->diffuseChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->specularChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLLight::*_t)(QVector4D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLight::positionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLLight::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLight::directionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLLight::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLight::ambientChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLLight::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLight::diffuseChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QMLLight::*_t)(QColor );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLight::specularChanged)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLLight *_t = static_cast<QMLLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector4D*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->direction(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->ambient(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->diffuse(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->specular(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLLight *_t = static_cast<QMLLight *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->position(*reinterpret_cast< QVector4D*>(_v)); break;
        case 1: _t->direction(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->ambient(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->diffuse(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->specular(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLLight::staticMetaObject = {
    { &QReflect_Light::staticMetaObject, qt_meta_stringdata_osg__QMLLight.data,
      qt_meta_data_osg__QMLLight,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLLight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLLight::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLLight.stringdata0))
        return static_cast<void*>(const_cast< QMLLight*>(this));
    return QReflect_Light::qt_metacast(_clname);
}

int osg::QMLLight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Light::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void osg::QMLLight::positionChanged(QVector4D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLLight::directionChanged(QVector3D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLLight::ambientChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLLight::diffuseChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QMLLight::specularChanged(QColor _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
