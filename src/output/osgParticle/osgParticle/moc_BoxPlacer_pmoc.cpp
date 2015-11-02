/****************************************************************************
** Meta object code from reading C++ file 'BoxPlacer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BoxPlacer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoxPlacer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_BoxPlacer_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_BoxPlacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_BoxPlacer_t qt_meta_stringdata_osgParticle__QReflect_BoxPlacer = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osgParticle::QReflect_BoxPlacer"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "volume"
QT_MOC_LITERAL(4, 52, 5), // "place"
QT_MOC_LITERAL(5, 58, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(6, 90, 9), // "setXRange"
QT_MOC_LITERAL(7, 100, 9), // "setYRange"
QT_MOC_LITERAL(8, 110, 9) // "setZRange"

    },
    "osgParticle::QReflect_BoxPlacer\0"
    "updateModel\0\0volume\0place\0"
    "osgParticle::QReflect_Particle*\0"
    "setXRange\0setYRange\0setZRange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_BoxPlacer[] = {

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
       3,    0,   45,    2, 0x02 /* Public */,
       4,    1,   46,    2, 0x02 /* Public */,
       6,    2,   49,    2, 0x02 /* Public */,
       7,    2,   54,    2, 0x02 /* Public */,
       8,    2,   59,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,

       0        // eod
};

void osgParticle::QReflect_BoxPlacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BoxPlacer *_t = static_cast<QReflect_BoxPlacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { float _r = _t->volume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 2: _t->place((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        case 3: _t->setXRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 4: _t->setYRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->setZRange((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_BoxPlacer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_BoxPlacer.data,
      qt_meta_data_osgParticle__QReflect_BoxPlacer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_BoxPlacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_BoxPlacer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_BoxPlacer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BoxPlacer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_BoxPlacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
