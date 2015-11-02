/****************************************************************************
** Meta object code from reading C++ file 'RadialShooter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RadialShooter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadialShooter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_RadialShooter_t {
    QByteArrayData data[10];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_RadialShooter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_RadialShooter_t qt_meta_stringdata_osgParticle__QReflect_RadialShooter = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osgParticle::QReflect_RadialS..."
QT_MOC_LITERAL(1, 36, 11), // "updateModel"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 30), // "setInitialRotationalSpeedRange"
QT_MOC_LITERAL(4, 80, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(5, 101, 20), // "setInitialSpeedRange"
QT_MOC_LITERAL(6, 122, 11), // "setPhiRange"
QT_MOC_LITERAL(7, 134, 13), // "setThetaRange"
QT_MOC_LITERAL(8, 148, 5), // "shoot"
QT_MOC_LITERAL(9, 154, 31) // "osgParticle::QReflect_Particle*"

    },
    "osgParticle::QReflect_RadialShooter\0"
    "updateModel\0\0setInitialRotationalSpeedRange\0"
    "osg::QReflect_Vec3f*\0setInitialSpeedRange\0"
    "setPhiRange\0setThetaRange\0shoot\0"
    "osgParticle::QReflect_Particle*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_RadialShooter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   45,    2, 0x02 /* Public */,
       5,    2,   50,    2, 0x02 /* Public */,
       6,    2,   55,    2, 0x02 /* Public */,
       7,    2,   60,    2, 0x02 /* Public */,
       8,    1,   65,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void osgParticle::QReflect_RadialShooter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_RadialShooter *_t = static_cast<QReflect_RadialShooter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->setInitialRotationalSpeedRange((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2]))); break;
        case 2: _t->setInitialSpeedRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 3: _t->setPhiRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->setThetaRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->shoot((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_RadialShooter::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_RadialShooter.data,
      qt_meta_data_osgParticle__QReflect_RadialShooter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_RadialShooter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_RadialShooter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_RadialShooter.stringdata0))
        return static_cast<void*>(const_cast< QReflect_RadialShooter*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_RadialShooter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
