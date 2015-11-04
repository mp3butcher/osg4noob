/****************************************************************************
** Meta object code from reading C++ file 'ConnectedParticleSystem_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ConnectedParticleSystem_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConnectedParticleSystem_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_ConnectedParticleSystem_t {
    QByteArrayData data[11];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_ConnectedParticleSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_ConnectedParticleSystem_t qt_meta_stringdata_osgParticle__QReflect_ConnectedParticleSystem = {
    {
QT_MOC_LITERAL(0, 0, 45), // "osgParticle::QReflect_Connect..."
QT_MOC_LITERAL(1, 46, 33), // "MaxNumberOfParticlesToSkipCha..."
QT_MOC_LITERAL(2, 80, 0), // ""
QT_MOC_LITERAL(3, 81, 11), // "updateModel"
QT_MOC_LITERAL(4, 93, 29), // "getMaxNumberOfParticlesToSkip"
QT_MOC_LITERAL(5, 123, 14), // "createParticle"
QT_MOC_LITERAL(6, 138, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(7, 170, 16), // "getStartParticle"
QT_MOC_LITERAL(8, 187, 13), // "reuseParticle"
QT_MOC_LITERAL(9, 201, 29), // "setMaxNumberOfParticlesToSkip"
QT_MOC_LITERAL(10, 231, 26) // "MaxNumberOfParticlesToSkip"

    },
    "osgParticle::QReflect_ConnectedParticleSystem\0"
    "MaxNumberOfParticlesToSkipChanged\0\0"
    "updateModel\0getMaxNumberOfParticlesToSkip\0"
    "createParticle\0osgParticle::QReflect_Particle*\0"
    "getStartParticle\0reuseParticle\0"
    "setMaxNumberOfParticlesToSkip\0"
    "MaxNumberOfParticlesToSkip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_ConnectedParticleSystem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   58,    2, 0x02 /* Public */,
       5,    1,   59,    2, 0x02 /* Public */,
       7,    0,   62,    2, 0x02 /* Public */,
       7,    0,   63,    2, 0x02 /* Public */,
       8,    1,   64,    2, 0x02 /* Public */,
       9,    1,   67,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    0x80000000 | 6, 0x80000000 | 6,    2,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // properties: name, type, flags
      10, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osgParticle::QReflect_ConnectedParticleSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ConnectedParticleSystem *_t = static_cast<QReflect_ConnectedParticleSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MaxNumberOfParticlesToSkipChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { uint _r = _t->getMaxNumberOfParticlesToSkip();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 3: { osgParticle::QReflect_Particle* _r = _t->createParticle((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Particle**>(_a[0]) = _r; }  break;
        case 4: { osgParticle::QReflect_Particle* _r = _t->getStartParticle();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Particle**>(_a[0]) = _r; }  break;
        case 5: { osgParticle::QReflect_Particle* _r = _t->getStartParticle();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Particle**>(_a[0]) = _r; }  break;
        case 6: _t->reuseParticle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setMaxNumberOfParticlesToSkip((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ConnectedParticleSystem::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ConnectedParticleSystem::MaxNumberOfParticlesToSkipChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_ConnectedParticleSystem *_t = static_cast<QReflect_ConnectedParticleSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getMaxNumberOfParticlesToSkip(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_ConnectedParticleSystem *_t = static_cast<QReflect_ConnectedParticleSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaxNumberOfParticlesToSkip(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_ConnectedParticleSystem::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_ConnectedParticleSystem.data,
      qt_meta_data_osgParticle__QReflect_ConnectedParticleSystem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_ConnectedParticleSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_ConnectedParticleSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_ConnectedParticleSystem.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ConnectedParticleSystem*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_ConnectedParticleSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osgParticle::QReflect_ConnectedParticleSystem::MaxNumberOfParticlesToSkipChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
