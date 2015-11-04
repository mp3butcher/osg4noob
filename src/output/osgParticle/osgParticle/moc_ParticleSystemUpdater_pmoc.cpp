/****************************************************************************
** Meta object code from reading C++ file 'ParticleSystemUpdater_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ParticleSystemUpdater_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticleSystemUpdater_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_ParticleSystemUpdater_t {
    QByteArrayData data[15];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_ParticleSystemUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_ParticleSystemUpdater_t qt_meta_stringdata_osgParticle__QReflect_ParticleSystemUpdater = {
    {
QT_MOC_LITERAL(0, 0, 43), // "osgParticle::QReflect_Particl..."
QT_MOC_LITERAL(1, 44, 31), // "ParticleSystemCollectionChanged"
QT_MOC_LITERAL(2, 76, 0), // ""
QT_MOC_LITERAL(3, 77, 11), // "updateModel"
QT_MOC_LITERAL(4, 89, 22), // "containsParticleSystem"
QT_MOC_LITERAL(5, 112, 37), // "osgParticle::QReflect_Particl..."
QT_MOC_LITERAL(6, 150, 20), // "removeParticleSystem"
QT_MOC_LITERAL(7, 171, 21), // "replaceParticleSystem"
QT_MOC_LITERAL(8, 193, 17), // "setParticleSystem"
QT_MOC_LITERAL(9, 211, 21), // "getNumParticleSystems"
QT_MOC_LITERAL(10, 233, 22), // "getParticleSystemIndex"
QT_MOC_LITERAL(11, 256, 17), // "getParticleSystem"
QT_MOC_LITERAL(12, 274, 17), // "addParticleSystem"
QT_MOC_LITERAL(13, 292, 3), // "par"
QT_MOC_LITERAL(14, 296, 30) // "pmoc_reverse_addParticleSystem"

    },
    "osgParticle::QReflect_ParticleSystemUpdater\0"
    "ParticleSystemCollectionChanged\0\0"
    "updateModel\0containsParticleSystem\0"
    "osgParticle::QReflect_ParticleSystem*\0"
    "removeParticleSystem\0replaceParticleSystem\0"
    "setParticleSystem\0getNumParticleSystems\0"
    "getParticleSystemIndex\0getParticleSystem\0"
    "addParticleSystem\0par\0"
    "pmoc_reverse_addParticleSystem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_ParticleSystemUpdater[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   76,    2, 0x02 /* Public */,
       6,    2,   79,    2, 0x02 /* Public */,
       7,    2,   84,    2, 0x02 /* Public */,
       8,    2,   89,    2, 0x02 /* Public */,
       9,    0,   94,    2, 0x02 /* Public */,
      10,    1,   95,    2, 0x02 /* Public */,
      11,    1,   98,    2, 0x02 /* Public */,
      11,    1,  101,    2, 0x02 /* Public */,
      12,    1,  104,    2, 0x02 /* Public */,
      14,    1,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 5,    2,
    QMetaType::Bool, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    QMetaType::Bool, QMetaType::UInt, 0x80000000 | 5,    2,    2,
    QMetaType::UInt,
    QMetaType::UInt, 0x80000000 | 5,    2,
    0x80000000 | 5, QMetaType::UInt,    2,
    0x80000000 | 5, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void, 0x80000000 | 5,   13,

       0        // eod
};

void osgParticle::QReflect_ParticleSystemUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ParticleSystemUpdater *_t = static_cast<QReflect_ParticleSystemUpdater *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParticleSystemCollectionChanged(); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->containsParticleSystem((*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->removeParticleSystem((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->replaceParticleSystem((*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[1])),(*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setParticleSystem((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { uint _r = _t->getNumParticleSystems();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 7: { uint _r = _t->getParticleSystemIndex((*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 8: { osgParticle::QReflect_ParticleSystem* _r = _t->getParticleSystem((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_ParticleSystem**>(_a[0]) = _r; }  break;
        case 9: { osgParticle::QReflect_ParticleSystem* _r = _t->getParticleSystem((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_ParticleSystem**>(_a[0]) = _r; }  break;
        case 10: _t->addParticleSystem((*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[1]))); break;
        case 11: _t->pmoc_reverse_addParticleSystem((*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ParticleSystemUpdater::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ParticleSystemUpdater::ParticleSystemCollectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osgParticle::QReflect_ParticleSystemUpdater::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_ParticleSystemUpdater.data,
      qt_meta_data_osgParticle__QReflect_ParticleSystemUpdater,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_ParticleSystemUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_ParticleSystemUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_ParticleSystemUpdater.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ParticleSystemUpdater*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_ParticleSystemUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void osgParticle::QReflect_ParticleSystemUpdater::ParticleSystemCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
