/****************************************************************************
** Meta object code from reading C++ file 'BounceOperator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BounceOperator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BounceOperator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_BounceOperator_t {
    QByteArrayData data[15];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_BounceOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_BounceOperator_t qt_meta_stringdata_osgParticle__QReflect_BounceOperator = {
    {
QT_MOC_LITERAL(0, 0, 36), // "osgParticle::QReflect_BounceO..."
QT_MOC_LITERAL(1, 37, 13), // "CutoffChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 15), // "FrictionChanged"
QT_MOC_LITERAL(4, 68, 17), // "ResilienceChanged"
QT_MOC_LITERAL(5, 86, 11), // "updateModel"
QT_MOC_LITERAL(6, 98, 9), // "getCutoff"
QT_MOC_LITERAL(7, 108, 11), // "getFriction"
QT_MOC_LITERAL(8, 120, 13), // "getResilience"
QT_MOC_LITERAL(9, 134, 9), // "setCutoff"
QT_MOC_LITERAL(10, 144, 11), // "setFriction"
QT_MOC_LITERAL(11, 156, 13), // "setResilience"
QT_MOC_LITERAL(12, 170, 6), // "Cutoff"
QT_MOC_LITERAL(13, 177, 8), // "Friction"
QT_MOC_LITERAL(14, 186, 10) // "Resilience"

    },
    "osgParticle::QReflect_BounceOperator\0"
    "CutoffChanged\0\0FrictionChanged\0"
    "ResilienceChanged\0updateModel\0getCutoff\0"
    "getFriction\0getResilience\0setCutoff\0"
    "setFriction\0setResilience\0Cutoff\0"
    "Friction\0Resilience"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_BounceOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x02 /* Public */,
       7,    0,   75,    2, 0x02 /* Public */,
       8,    0,   76,    2, 0x02 /* Public */,
       9,    1,   77,    2, 0x02 /* Public */,
      10,    1,   80,    2, 0x02 /* Public */,
      11,    1,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void osgParticle::QReflect_BounceOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BounceOperator *_t = static_cast<QReflect_BounceOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CutoffChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->FrictionChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->ResilienceChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { float _r = _t->getCutoff();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->getFriction();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->getResilience();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 7: _t->setCutoff((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 8: _t->setFriction((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->setResilience((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_BounceOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_BounceOperator::CutoffChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_BounceOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_BounceOperator::FrictionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_BounceOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_BounceOperator::ResilienceChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_BounceOperator *_t = static_cast<QReflect_BounceOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getCutoff(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getFriction(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getResilience(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_BounceOperator *_t = static_cast<QReflect_BounceOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCutoff(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setFriction(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setResilience(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_BounceOperator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_BounceOperator.data,
      qt_meta_data_osgParticle__QReflect_BounceOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_BounceOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_BounceOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_BounceOperator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BounceOperator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_BounceOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osgParticle::QReflect_BounceOperator::CutoffChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_BounceOperator::FrictionChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QReflect_BounceOperator::ResilienceChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
