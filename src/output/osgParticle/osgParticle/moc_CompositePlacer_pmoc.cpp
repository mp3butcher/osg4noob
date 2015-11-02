/****************************************************************************
** Meta object code from reading C++ file 'CompositePlacer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CompositePlacer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CompositePlacer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_CompositePlacer_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_CompositePlacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_CompositePlacer_t qt_meta_stringdata_osgParticle__QReflect_CompositePlacer = {
    {
QT_MOC_LITERAL(0, 0, 37), // "osgParticle::QReflect_Composi..."
QT_MOC_LITERAL(1, 38, 11), // "updateModel"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "volume"
QT_MOC_LITERAL(4, 58, 13), // "getNumPlacers"
QT_MOC_LITERAL(5, 72, 9), // "getPlacer"
QT_MOC_LITERAL(6, 82, 29), // "osgParticle::QReflect_Placer*"
QT_MOC_LITERAL(7, 112, 9), // "addPlacer"
QT_MOC_LITERAL(8, 122, 5), // "place"
QT_MOC_LITERAL(9, 128, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(10, 160, 12), // "removePlacer"
QT_MOC_LITERAL(11, 173, 9) // "setPlacer"

    },
    "osgParticle::QReflect_CompositePlacer\0"
    "updateModel\0\0volume\0getNumPlacers\0"
    "getPlacer\0osgParticle::QReflect_Placer*\0"
    "addPlacer\0place\0osgParticle::QReflect_Particle*\0"
    "removePlacer\0setPlacer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_CompositePlacer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x02 /* Public */,
       4,    0,   61,    2, 0x02 /* Public */,
       5,    1,   62,    2, 0x02 /* Public */,
       5,    1,   65,    2, 0x02 /* Public */,
       7,    1,   68,    2, 0x02 /* Public */,
       8,    1,   71,    2, 0x02 /* Public */,
      10,    1,   74,    2, 0x02 /* Public */,
      11,    2,   77,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::UInt,
    0x80000000 | 6, QMetaType::UInt,    2,
    0x80000000 | 6, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 6,    2,    2,

       0        // eod
};

void osgParticle::QReflect_CompositePlacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CompositePlacer *_t = static_cast<QReflect_CompositePlacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { float _r = _t->volume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 2: { uint _r = _t->getNumPlacers();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 3: { osgParticle::QReflect_Placer* _r = _t->getPlacer((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Placer**>(_a[0]) = _r; }  break;
        case 4: { osgParticle::QReflect_Placer* _r = _t->getPlacer((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Placer**>(_a[0]) = _r; }  break;
        case 5: _t->addPlacer((*reinterpret_cast< osgParticle::QReflect_Placer*(*)>(_a[1]))); break;
        case 6: _t->place((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        case 7: _t->removePlacer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->setPlacer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osgParticle::QReflect_Placer*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_CompositePlacer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_CompositePlacer.data,
      qt_meta_data_osgParticle__QReflect_CompositePlacer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_CompositePlacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_CompositePlacer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_CompositePlacer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CompositePlacer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_CompositePlacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
