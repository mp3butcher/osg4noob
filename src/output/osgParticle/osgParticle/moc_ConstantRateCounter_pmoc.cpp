/****************************************************************************
** Meta object code from reading C++ file 'ConstantRateCounter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ConstantRateCounter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConstantRateCounter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_ConstantRateCounter_t {
    QByteArrayData data[12];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_ConstantRateCounter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_ConstantRateCounter_t qt_meta_stringdata_osgParticle__QReflect_ConstantRateCounter = {
    {
QT_MOC_LITERAL(0, 0, 41), // "osgParticle::QReflect_Constan..."
QT_MOC_LITERAL(1, 42, 39), // "MinimumNumberOfParticlesToCre..."
QT_MOC_LITERAL(2, 82, 0), // ""
QT_MOC_LITERAL(3, 83, 41), // "NumberOfParticlesPerSecondToC..."
QT_MOC_LITERAL(4, 125, 11), // "updateModel"
QT_MOC_LITERAL(5, 137, 20), // "numParticlesToCreate"
QT_MOC_LITERAL(6, 158, 37), // "getNumberOfParticlesPerSecond..."
QT_MOC_LITERAL(7, 196, 35), // "getMinimumNumberOfParticlesTo..."
QT_MOC_LITERAL(8, 232, 35), // "setMinimumNumberOfParticlesTo..."
QT_MOC_LITERAL(9, 268, 37), // "setNumberOfParticlesPerSecond..."
QT_MOC_LITERAL(10, 306, 34), // "NumberOfParticlesPerSecondToC..."
QT_MOC_LITERAL(11, 341, 32) // "MinimumNumberOfParticlesToCreate"

    },
    "osgParticle::QReflect_ConstantRateCounter\0"
    "MinimumNumberOfParticlesToCreateChanged\0"
    "\0NumberOfParticlesPerSecondToCreateChanged\0"
    "updateModel\0numParticlesToCreate\0"
    "getNumberOfParticlesPerSecondToCreate\0"
    "getMinimumNumberOfParticlesToCreate\0"
    "setMinimumNumberOfParticlesToCreate\0"
    "setNumberOfParticlesPerSecondToCreate\0"
    "NumberOfParticlesPerSecondToCreate\0"
    "MinimumNumberOfParticlesToCreate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_ConstantRateCounter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   60,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   61,    2, 0x02 /* Public */,
       6,    0,   64,    2, 0x02 /* Public */,
       7,    0,   65,    2, 0x02 /* Public */,
       8,    1,   66,    2, 0x02 /* Public */,
       9,    1,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::Double,    2,
    QMetaType::Double,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      10, QMetaType::Double, 0x00495103,
      11, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void osgParticle::QReflect_ConstantRateCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ConstantRateCounter *_t = static_cast<QReflect_ConstantRateCounter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MinimumNumberOfParticlesToCreateChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->NumberOfParticlesPerSecondToCreateChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { int _r = _t->numParticlesToCreate((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { double _r = _t->getNumberOfParticlesPerSecondToCreate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->getMinimumNumberOfParticlesToCreate();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->setMinimumNumberOfParticlesToCreate((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->setNumberOfParticlesPerSecondToCreate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ConstantRateCounter::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ConstantRateCounter::MinimumNumberOfParticlesToCreateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_ConstantRateCounter::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ConstantRateCounter::NumberOfParticlesPerSecondToCreateChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_ConstantRateCounter *_t = static_cast<QReflect_ConstantRateCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getNumberOfParticlesPerSecondToCreate(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getMinimumNumberOfParticlesToCreate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_ConstantRateCounter *_t = static_cast<QReflect_ConstantRateCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumberOfParticlesPerSecondToCreate(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMinimumNumberOfParticlesToCreate(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_ConstantRateCounter::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_ConstantRateCounter.data,
      qt_meta_data_osgParticle__QReflect_ConstantRateCounter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_ConstantRateCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_ConstantRateCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_ConstantRateCounter.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ConstantRateCounter*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_ConstantRateCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osgParticle::QReflect_ConstantRateCounter::MinimumNumberOfParticlesToCreateChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_ConstantRateCounter::NumberOfParticlesPerSecondToCreateChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
