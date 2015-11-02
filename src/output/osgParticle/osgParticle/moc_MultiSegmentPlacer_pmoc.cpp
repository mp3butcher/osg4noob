/****************************************************************************
** Meta object code from reading C++ file 'MultiSegmentPlacer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MultiSegmentPlacer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiSegmentPlacer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_MultiSegmentPlacer_t {
    QByteArrayData data[11];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_MultiSegmentPlacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_MultiSegmentPlacer_t qt_meta_stringdata_osgParticle__QReflect_MultiSegmentPlacer = {
    {
QT_MOC_LITERAL(0, 0, 40), // "osgParticle::QReflect_MultiSe..."
QT_MOC_LITERAL(1, 41, 11), // "updateModel"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 6), // "volume"
QT_MOC_LITERAL(4, 61, 11), // "numVertices"
QT_MOC_LITERAL(5, 73, 9), // "addVertex"
QT_MOC_LITERAL(6, 83, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(7, 104, 5), // "place"
QT_MOC_LITERAL(8, 110, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(9, 142, 12), // "removeVertex"
QT_MOC_LITERAL(10, 155, 9) // "setVertex"

    },
    "osgParticle::QReflect_MultiSegmentPlacer\0"
    "updateModel\0\0volume\0numVertices\0"
    "addVertex\0osg::QReflect_Vec3f*\0place\0"
    "osgParticle::QReflect_Particle*\0"
    "removeVertex\0setVertex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_MultiSegmentPlacer[] = {

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
       5,    3,   62,    2, 0x02 /* Public */,
       5,    1,   69,    2, 0x02 /* Public */,
       7,    1,   72,    2, 0x02 /* Public */,
       9,    1,   75,    2, 0x02 /* Public */,
      10,    4,   78,    2, 0x02 /* Public */,
      10,    2,   87,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    2,    2,

       0        // eod
};

void osgParticle::QReflect_MultiSegmentPlacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_MultiSegmentPlacer *_t = static_cast<QReflect_MultiSegmentPlacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { float _r = _t->volume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->numVertices();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->addVertex((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 4: _t->addVertex((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 5: _t->place((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        case 6: _t->removeVertex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 8: _t->setVertex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_MultiSegmentPlacer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_MultiSegmentPlacer.data,
      qt_meta_data_osgParticle__QReflect_MultiSegmentPlacer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_MultiSegmentPlacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_MultiSegmentPlacer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_MultiSegmentPlacer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_MultiSegmentPlacer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_MultiSegmentPlacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
