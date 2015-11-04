/****************************************************************************
** Meta object code from reading C++ file 'FluidProgram_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FluidProgram_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluidProgram_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_FluidProgram_t {
    QByteArrayData data[17];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_FluidProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_FluidProgram_t qt_meta_stringdata_osgParticle__QReflect_FluidProgram = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osgParticle::QReflect_FluidPr..."
QT_MOC_LITERAL(1, 35, 19), // "FluidDensityChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 21), // "FluidViscosityChanged"
QT_MOC_LITERAL(4, 78, 11), // "updateModel"
QT_MOC_LITERAL(5, 90, 15), // "getFluidDensity"
QT_MOC_LITERAL(6, 106, 17), // "getFluidViscosity"
QT_MOC_LITERAL(7, 124, 15), // "setAcceleration"
QT_MOC_LITERAL(8, 140, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(9, 161, 13), // "setFluidToAir"
QT_MOC_LITERAL(10, 175, 15), // "setFluidToWater"
QT_MOC_LITERAL(11, 191, 12), // "setToGravity"
QT_MOC_LITERAL(12, 204, 7), // "setWind"
QT_MOC_LITERAL(13, 212, 15), // "setFluidDensity"
QT_MOC_LITERAL(14, 228, 17), // "setFluidViscosity"
QT_MOC_LITERAL(15, 246, 12), // "FluidDensity"
QT_MOC_LITERAL(16, 259, 14) // "FluidViscosity"

    },
    "osgParticle::QReflect_FluidProgram\0"
    "FluidDensityChanged\0\0FluidViscosityChanged\0"
    "updateModel\0getFluidDensity\0"
    "getFluidViscosity\0setAcceleration\0"
    "osg::QReflect_Vec3f*\0setFluidToAir\0"
    "setFluidToWater\0setToGravity\0setWind\0"
    "setFluidDensity\0setFluidViscosity\0"
    "FluidDensity\0FluidViscosity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_FluidProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   80,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   81,    2, 0x02 /* Public */,
       6,    0,   82,    2, 0x02 /* Public */,
       7,    1,   83,    2, 0x02 /* Public */,
       9,    0,   86,    2, 0x02 /* Public */,
      10,    0,   87,    2, 0x02 /* Public */,
      11,    1,   88,    2, 0x02 /* Public */,
      12,    1,   91,    2, 0x02 /* Public */,
      13,    1,   94,    2, 0x02 /* Public */,
      14,    1,   97,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osgParticle::QReflect_FluidProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FluidProgram *_t = static_cast<QReflect_FluidProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FluidDensityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->FluidViscosityChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { float _r = _t->getFluidDensity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 4: { float _r = _t->getFluidViscosity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: _t->setAcceleration((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 6: _t->setFluidToAir(); break;
        case 7: _t->setFluidToWater(); break;
        case 8: _t->setToGravity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setWind((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 10: _t->setFluidDensity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setFluidViscosity((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_FluidProgram::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FluidProgram::FluidDensityChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_FluidProgram::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FluidProgram::FluidViscosityChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_FluidProgram *_t = static_cast<QReflect_FluidProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getFluidDensity(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getFluidViscosity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_FluidProgram *_t = static_cast<QReflect_FluidProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFluidDensity(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setFluidViscosity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_FluidProgram::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_FluidProgram.data,
      qt_meta_data_osgParticle__QReflect_FluidProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_FluidProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_FluidProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_FluidProgram.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FluidProgram*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_FluidProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void osgParticle::QReflect_FluidProgram::FluidDensityChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_FluidProgram::FluidViscosityChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
