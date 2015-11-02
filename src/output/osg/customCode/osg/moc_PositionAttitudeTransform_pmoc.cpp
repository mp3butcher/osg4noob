/****************************************************************************
** Meta object code from reading C++ file 'PositionAttitudeTransform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PositionAttitudeTransform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PositionAttitudeTransform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLPositionAttitudeTransform_t {
    QByteArrayData data[14];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLPositionAttitudeTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLPositionAttitudeTransform_t qt_meta_stringdata_osg__QMLPositionAttitudeTransform = {
    {
QT_MOC_LITERAL(0, 0, 33), // "osg::QMLPositionAttitudeTrans..."
QT_MOC_LITERAL(1, 34, 15), // "positionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "scaleChanged"
QT_MOC_LITERAL(4, 64, 15), // "rotationChanged"
QT_MOC_LITERAL(5, 80, 11), // "updateModel"
QT_MOC_LITERAL(6, 92, 11), // "getPosition"
QT_MOC_LITERAL(7, 104, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(8, 125, 8), // "getScale"
QT_MOC_LITERAL(9, 134, 11), // "getRotation"
QT_MOC_LITERAL(10, 146, 19), // "osg::QReflect_Quat*"
QT_MOC_LITERAL(11, 166, 8), // "position"
QT_MOC_LITERAL(12, 175, 5), // "scale"
QT_MOC_LITERAL(13, 181, 8) // "rotation"

    },
    "osg::QMLPositionAttitudeTransform\0"
    "positionChanged\0\0scaleChanged\0"
    "rotationChanged\0updateModel\0getPosition\0"
    "osg::QReflect_Vec3d*\0getScale\0getRotation\0"
    "osg::QReflect_Quat*\0position\0scale\0"
    "rotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLPositionAttitudeTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   58,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   59,    2, 0x02 /* Public */,
       8,    0,   60,    2, 0x02 /* Public */,
       9,    0,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 7,
    0x80000000 | 7,
    0x80000000 | 10,

 // properties: name, type, flags
      11, QMetaType::QVector3D, 0x00495003,
      12, QMetaType::QVector3D, 0x00495003,
      13, QMetaType::QColor, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void osg::QMLPositionAttitudeTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLPositionAttitudeTransform *_t = static_cast<QMLPositionAttitudeTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 2: _t->rotationChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { osg::QReflect_Vec3d* _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Vec3d**>(_a[0]) = _r; }  break;
        case 5: { osg::QReflect_Vec3d* _r = _t->getScale();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Vec3d**>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_Quat* _r = _t->getRotation();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Quat**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLPositionAttitudeTransform::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLPositionAttitudeTransform::positionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLPositionAttitudeTransform::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLPositionAttitudeTransform::scaleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLPositionAttitudeTransform::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLPositionAttitudeTransform::rotationChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLPositionAttitudeTransform *_t = static_cast<QMLPositionAttitudeTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->getposition(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->getscale(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getrotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLPositionAttitudeTransform *_t = static_cast<QMLPositionAttitudeTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setposition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setscale(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setrotation(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLPositionAttitudeTransform::staticMetaObject = {
    { &QReflect_PositionAttitudeTransform::staticMetaObject, qt_meta_stringdata_osg__QMLPositionAttitudeTransform.data,
      qt_meta_data_osg__QMLPositionAttitudeTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLPositionAttitudeTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLPositionAttitudeTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLPositionAttitudeTransform.stringdata0))
        return static_cast<void*>(const_cast< QMLPositionAttitudeTransform*>(this));
    return QReflect_PositionAttitudeTransform::qt_metacast(_clname);
}

int osg::QMLPositionAttitudeTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_PositionAttitudeTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLPositionAttitudeTransform::positionChanged(const QVector3D & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLPositionAttitudeTransform::scaleChanged(const QVector3D & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLPositionAttitudeTransform::rotationChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
