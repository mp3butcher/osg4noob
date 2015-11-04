/****************************************************************************
** Meta object code from reading C++ file 'RadialShooter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RadialShooter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadialShooter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLRadialShooter_t {
    QByteArrayData data[15];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLRadialShooter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLRadialShooter_t qt_meta_stringdata_osgParticle__QMLRadialShooter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osgParticle::QMLRadialShooter"
QT_MOC_LITERAL(1, 30, 22), // "maxInitialSpeedChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 22), // "minInitialSpeedChanged"
QT_MOC_LITERAL(4, 77, 13), // "maxPhiChanged"
QT_MOC_LITERAL(5, 91, 13), // "minPhiChanged"
QT_MOC_LITERAL(6, 105, 15), // "minThetaChanged"
QT_MOC_LITERAL(7, 121, 15), // "maxThetaChanged"
QT_MOC_LITERAL(8, 137, 11), // "updateModel"
QT_MOC_LITERAL(9, 149, 8), // "minTheta"
QT_MOC_LITERAL(10, 158, 8), // "maxTheta"
QT_MOC_LITERAL(11, 167, 6), // "minPhi"
QT_MOC_LITERAL(12, 174, 6), // "maxPhi"
QT_MOC_LITERAL(13, 181, 15), // "minInitialSpeed"
QT_MOC_LITERAL(14, 197, 15) // "maxInitialSpeed"

    },
    "osgParticle::QMLRadialShooter\0"
    "maxInitialSpeedChanged\0\0minInitialSpeedChanged\0"
    "maxPhiChanged\0minPhiChanged\0minThetaChanged\0"
    "maxThetaChanged\0updateModel\0minTheta\0"
    "maxTheta\0minPhi\0maxPhi\0minInitialSpeed\0"
    "maxInitialSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLRadialShooter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Float, 0x00495003,
      10, QMetaType::Float, 0x00495003,
      11, QMetaType::Float, 0x00495003,
      12, QMetaType::Float, 0x00495003,
      13, QMetaType::Float, 0x00495003,
      14, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       4,
       5,
       3,
       2,
       1,
       0,

       0        // eod
};

void osgParticle::QMLRadialShooter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLRadialShooter *_t = static_cast<QMLRadialShooter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maxInitialSpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->minInitialSpeedChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->maxPhiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->minPhiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->minThetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->maxThetaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLRadialShooter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRadialShooter::maxInitialSpeedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLRadialShooter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRadialShooter::minInitialSpeedChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLRadialShooter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRadialShooter::maxPhiChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLRadialShooter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRadialShooter::minPhiChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QMLRadialShooter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRadialShooter::minThetaChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QMLRadialShooter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRadialShooter::maxThetaChanged)) {
                *result = 5;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLRadialShooter *_t = static_cast<QMLRadialShooter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->minTheta(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->maxTheta(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->minPhi(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->maxPhi(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->minInitialSpeed(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->maxInitialSpeed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLRadialShooter *_t = static_cast<QMLRadialShooter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->minTheta(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->maxTheta(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->minPhi(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->maxPhi(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->minInitialSpeed(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->maxInitialSpeed(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QMLRadialShooter::staticMetaObject = {
    { &QReflect_RadialShooter::staticMetaObject, qt_meta_stringdata_osgParticle__QMLRadialShooter.data,
      qt_meta_data_osgParticle__QMLRadialShooter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLRadialShooter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLRadialShooter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLRadialShooter.stringdata0))
        return static_cast<void*>(const_cast< QMLRadialShooter*>(this));
    return QReflect_RadialShooter::qt_metacast(_clname);
}

int osgParticle::QMLRadialShooter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_RadialShooter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osgParticle::QMLRadialShooter::maxInitialSpeedChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QMLRadialShooter::minInitialSpeedChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QMLRadialShooter::maxPhiChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osgParticle::QMLRadialShooter::minPhiChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osgParticle::QMLRadialShooter::minThetaChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void osgParticle::QMLRadialShooter::maxThetaChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
