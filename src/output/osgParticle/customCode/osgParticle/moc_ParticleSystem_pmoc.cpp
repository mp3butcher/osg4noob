/****************************************************************************
** Meta object code from reading C++ file 'ParticleSystem_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ParticleSystem_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParticleSystem_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLParticleSystem_t {
    QByteArrayData data[8];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLParticleSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLParticleSystem_t qt_meta_stringdata_osgParticle__QMLParticleSystem = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osgParticle::QMLParticleSystem"
QT_MOC_LITERAL(1, 31, 11), // "updateModel"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 26), // "setDefaultParticleTemplate"
QT_MOC_LITERAL(4, 71, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(5, 103, 3), // "par"
QT_MOC_LITERAL(6, 107, 26), // "getDefaultParticleTemplate"
QT_MOC_LITERAL(7, 134, 39) // "pmoc_reverse_setDefaultPartic..."

    },
    "osgParticle::QMLParticleSystem\0"
    "updateModel\0\0setDefaultParticleTemplate\0"
    "osgParticle::QReflect_Particle*\0par\0"
    "getDefaultParticleTemplate\0"
    "pmoc_reverse_setDefaultParticleTemplate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLParticleSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x02 /* Public */,
       6,    0,   38,    2, 0x02 /* Public */,
       7,    1,   39,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void osgParticle::QMLParticleSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLParticleSystem *_t = static_cast<QMLParticleSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->setDefaultParticleTemplate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        case 2: { osgParticle::QReflect_Particle* _r = _t->getDefaultParticleTemplate();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Particle**>(_a[0]) = _r; }  break;
        case 3: _t->pmoc_reverse_setDefaultParticleTemplate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QMLParticleSystem::staticMetaObject = {
    { &QReflect_ParticleSystem::staticMetaObject, qt_meta_stringdata_osgParticle__QMLParticleSystem.data,
      qt_meta_data_osgParticle__QMLParticleSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLParticleSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLParticleSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLParticleSystem.stringdata0))
        return static_cast<void*>(const_cast< QMLParticleSystem*>(this));
    return QReflect_ParticleSystem::qt_metacast(_clname);
}

int osgParticle::QMLParticleSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_ParticleSystem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
