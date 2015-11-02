/****************************************************************************
** Meta object code from reading C++ file 'SectorPlacer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SectorPlacer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SectorPlacer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_SectorPlacer_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_SectorPlacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_SectorPlacer_t qt_meta_stringdata_osgParticle__QReflect_SectorPlacer = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osgParticle::QReflect_SectorP..."
QT_MOC_LITERAL(1, 35, 11), // "updateModel"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "volume"
QT_MOC_LITERAL(4, 55, 5), // "place"
QT_MOC_LITERAL(5, 61, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(6, 93, 11), // "setPhiRange"
QT_MOC_LITERAL(7, 105, 14) // "setRadiusRange"

    },
    "osgParticle::QReflect_SectorPlacer\0"
    "updateModel\0\0volume\0place\0"
    "osgParticle::QReflect_Particle*\0"
    "setPhiRange\0setRadiusRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_SectorPlacer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x02 /* Public */,
       4,    1,   41,    2, 0x02 /* Public */,
       6,    2,   44,    2, 0x02 /* Public */,
       7,    2,   49,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,

       0        // eod
};

void osgParticle::QReflect_SectorPlacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_SectorPlacer *_t = static_cast<QReflect_SectorPlacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { float _r = _t->volume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 2: _t->place((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        case 3: _t->setPhiRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->setRadiusRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_SectorPlacer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_SectorPlacer.data,
      qt_meta_data_osgParticle__QReflect_SectorPlacer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_SectorPlacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_SectorPlacer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_SectorPlacer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_SectorPlacer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_SectorPlacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
