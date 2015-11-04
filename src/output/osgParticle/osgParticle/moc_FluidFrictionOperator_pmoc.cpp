/****************************************************************************
** Meta object code from reading C++ file 'FluidFrictionOperator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FluidFrictionOperator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluidFrictionOperator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_FluidFrictionOperator_t {
    QByteArrayData data[23];
    char stringdata0[411];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_FluidFrictionOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_FluidFrictionOperator_t qt_meta_stringdata_osgParticle__QReflect_FluidFrictionOperator = {
    {
QT_MOC_LITERAL(0, 0, 43), // "osgParticle::QReflect_FluidFr..."
QT_MOC_LITERAL(1, 44, 19), // "FluidDensityChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 21), // "FluidViscosityChanged"
QT_MOC_LITERAL(4, 87, 21), // "OverrideRadiusChanged"
QT_MOC_LITERAL(5, 109, 11), // "updateModel"
QT_MOC_LITERAL(6, 121, 15), // "getFluidDensity"
QT_MOC_LITERAL(7, 137, 17), // "getFluidViscosity"
QT_MOC_LITERAL(8, 155, 17), // "getOverrideRadius"
QT_MOC_LITERAL(9, 173, 12), // "beginOperate"
QT_MOC_LITERAL(10, 186, 30), // "osgParticle::QReflect_Program*"
QT_MOC_LITERAL(11, 217, 7), // "operate"
QT_MOC_LITERAL(12, 225, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(13, 257, 13), // "setFluidToAir"
QT_MOC_LITERAL(14, 271, 15), // "setFluidToWater"
QT_MOC_LITERAL(15, 287, 7), // "setWind"
QT_MOC_LITERAL(16, 295, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(17, 316, 15), // "setFluidDensity"
QT_MOC_LITERAL(18, 332, 17), // "setFluidViscosity"
QT_MOC_LITERAL(19, 350, 17), // "setOverrideRadius"
QT_MOC_LITERAL(20, 368, 12), // "FluidDensity"
QT_MOC_LITERAL(21, 381, 14), // "FluidViscosity"
QT_MOC_LITERAL(22, 396, 14) // "OverrideRadius"

    },
    "osgParticle::QReflect_FluidFrictionOperator\0"
    "FluidDensityChanged\0\0FluidViscosityChanged\0"
    "OverrideRadiusChanged\0updateModel\0"
    "getFluidDensity\0getFluidViscosity\0"
    "getOverrideRadius\0beginOperate\0"
    "osgParticle::QReflect_Program*\0operate\0"
    "osgParticle::QReflect_Particle*\0"
    "setFluidToAir\0setFluidToWater\0setWind\0"
    "osg::QReflect_Vec3f*\0setFluidDensity\0"
    "setFluidViscosity\0setOverrideRadius\0"
    "FluidDensity\0FluidViscosity\0OverrideRadius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_FluidFrictionOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       3,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       4,    1,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   98,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   99,    2, 0x02 /* Public */,
       7,    0,  100,    2, 0x02 /* Public */,
       8,    0,  101,    2, 0x02 /* Public */,
       9,    1,  102,    2, 0x02 /* Public */,
      11,    2,  105,    2, 0x02 /* Public */,
      13,    0,  110,    2, 0x02 /* Public */,
      14,    0,  111,    2, 0x02 /* Public */,
      15,    1,  112,    2, 0x02 /* Public */,
      17,    1,  115,    2, 0x02 /* Public */,
      18,    1,  118,    2, 0x02 /* Public */,
      19,    1,  121,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::Float, 0x00495103,
      22, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void osgParticle::QReflect_FluidFrictionOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FluidFrictionOperator *_t = static_cast<QReflect_FluidFrictionOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FluidDensityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->FluidViscosityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->OverrideRadiusChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { float _r = _t->getFluidDensity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->getFluidViscosity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->getOverrideRadius();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 7: _t->beginOperate((*reinterpret_cast< osgParticle::QReflect_Program*(*)>(_a[1]))); break;
        case 8: _t->operate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setFluidToAir(); break;
        case 10: _t->setFluidToWater(); break;
        case 11: _t->setWind((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 12: _t->setFluidDensity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setFluidViscosity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->setOverrideRadius((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_FluidFrictionOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FluidFrictionOperator::FluidDensityChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_FluidFrictionOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FluidFrictionOperator::FluidViscosityChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_FluidFrictionOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FluidFrictionOperator::OverrideRadiusChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_FluidFrictionOperator *_t = static_cast<QReflect_FluidFrictionOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getFluidDensity(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getFluidViscosity(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getOverrideRadius(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_FluidFrictionOperator *_t = static_cast<QReflect_FluidFrictionOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFluidDensity(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setFluidViscosity(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setOverrideRadius(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_FluidFrictionOperator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_FluidFrictionOperator.data,
      qt_meta_data_osgParticle__QReflect_FluidFrictionOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_FluidFrictionOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_FluidFrictionOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_FluidFrictionOperator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FluidFrictionOperator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_FluidFrictionOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
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
void osgParticle::QReflect_FluidFrictionOperator::FluidDensityChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_FluidFrictionOperator::FluidViscosityChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QReflect_FluidFrictionOperator::OverrideRadiusChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
