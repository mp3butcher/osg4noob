/****************************************************************************
** Meta object code from reading C++ file 'OrbitOperator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OrbitOperator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OrbitOperator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_OrbitOperator_t {
    QByteArrayData data[21];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_OrbitOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_OrbitOperator_t qt_meta_stringdata_osgParticle__QReflect_OrbitOperator = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osgParticle::QReflect_OrbitOp..."
QT_MOC_LITERAL(1, 36, 14), // "EpsilonChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 16), // "MagnitudeChanged"
QT_MOC_LITERAL(4, 69, 16), // "MaxRadiusChanged"
QT_MOC_LITERAL(5, 86, 11), // "updateModel"
QT_MOC_LITERAL(6, 98, 10), // "getEpsilon"
QT_MOC_LITERAL(7, 109, 12), // "getMagnitude"
QT_MOC_LITERAL(8, 122, 12), // "getMaxRadius"
QT_MOC_LITERAL(9, 135, 12), // "beginOperate"
QT_MOC_LITERAL(10, 148, 30), // "osgParticle::QReflect_Program*"
QT_MOC_LITERAL(11, 179, 7), // "operate"
QT_MOC_LITERAL(12, 187, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(13, 219, 9), // "setCenter"
QT_MOC_LITERAL(14, 229, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(15, 250, 10), // "setEpsilon"
QT_MOC_LITERAL(16, 261, 12), // "setMagnitude"
QT_MOC_LITERAL(17, 274, 12), // "setMaxRadius"
QT_MOC_LITERAL(18, 287, 7), // "Epsilon"
QT_MOC_LITERAL(19, 295, 9), // "Magnitude"
QT_MOC_LITERAL(20, 305, 9) // "MaxRadius"

    },
    "osgParticle::QReflect_OrbitOperator\0"
    "EpsilonChanged\0\0MagnitudeChanged\0"
    "MaxRadiusChanged\0updateModel\0getEpsilon\0"
    "getMagnitude\0getMaxRadius\0beginOperate\0"
    "osgParticle::QReflect_Program*\0operate\0"
    "osgParticle::QReflect_Particle*\0"
    "setCenter\0osg::QReflect_Vec3f*\0"
    "setEpsilon\0setMagnitude\0setMaxRadius\0"
    "Epsilon\0Magnitude\0MaxRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_OrbitOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       3,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   88,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   89,    2, 0x02 /* Public */,
       7,    0,   90,    2, 0x02 /* Public */,
       8,    0,   91,    2, 0x02 /* Public */,
       9,    1,   92,    2, 0x02 /* Public */,
      11,    2,   95,    2, 0x02 /* Public */,
      13,    1,  100,    2, 0x02 /* Public */,
      15,    1,  103,    2, 0x02 /* Public */,
      16,    1,  106,    2, 0x02 /* Public */,
      17,    1,  109,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::Float, 0x00495103,
      20, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void osgParticle::QReflect_OrbitOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_OrbitOperator *_t = static_cast<QReflect_OrbitOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EpsilonChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->MagnitudeChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->MaxRadiusChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { float _r = _t->getEpsilon();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->getMagnitude();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->getMaxRadius();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 7: _t->beginOperate((*reinterpret_cast< osgParticle::QReflect_Program*(*)>(_a[1]))); break;
        case 8: _t->operate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setCenter((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 10: _t->setEpsilon((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setMagnitude((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 12: _t->setMaxRadius((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_OrbitOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OrbitOperator::EpsilonChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_OrbitOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OrbitOperator::MagnitudeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_OrbitOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OrbitOperator::MaxRadiusChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_OrbitOperator *_t = static_cast<QReflect_OrbitOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getEpsilon(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getMagnitude(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getMaxRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_OrbitOperator *_t = static_cast<QReflect_OrbitOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEpsilon(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setMagnitude(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMaxRadius(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_OrbitOperator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_OrbitOperator.data,
      qt_meta_data_osgParticle__QReflect_OrbitOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_OrbitOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_OrbitOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_OrbitOperator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_OrbitOperator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_OrbitOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void osgParticle::QReflect_OrbitOperator::EpsilonChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_OrbitOperator::MagnitudeChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QReflect_OrbitOperator::MaxRadiusChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
