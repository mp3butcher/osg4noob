/****************************************************************************
** Meta object code from reading C++ file 'RandomRateCounter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RandomRateCounter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RandomRateCounter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLRandomRateCounter_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLRandomRateCounter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLRandomRateCounter_t qt_meta_stringdata_osgParticle__QMLRandomRateCounter = {
    {
QT_MOC_LITERAL(0, 0, 33), // "osgParticle::QMLRandomRateCou..."
QT_MOC_LITERAL(1, 34, 14), // "minRateChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 14), // "maxRateChanged"
QT_MOC_LITERAL(4, 65, 11), // "updateModel"
QT_MOC_LITERAL(5, 77, 7), // "minRate"
QT_MOC_LITERAL(6, 85, 7) // "maxRate"

    },
    "osgParticle::QMLRandomRateCounter\0"
    "minRateChanged\0\0maxRateChanged\0"
    "updateModel\0minRate\0maxRate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLRandomRateCounter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Float, 0x00495003,
       6, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osgParticle::QMLRandomRateCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLRandomRateCounter *_t = static_cast<QMLRandomRateCounter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->maxRateChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLRandomRateCounter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRandomRateCounter::minRateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLRandomRateCounter::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLRandomRateCounter::maxRateChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLRandomRateCounter *_t = static_cast<QMLRandomRateCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->minRate(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->maxRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLRandomRateCounter *_t = static_cast<QMLRandomRateCounter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->minRate(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->maxRate(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QMLRandomRateCounter::staticMetaObject = {
    { &QReflect_RandomRateCounter::staticMetaObject, qt_meta_stringdata_osgParticle__QMLRandomRateCounter.data,
      qt_meta_data_osgParticle__QMLRandomRateCounter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLRandomRateCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLRandomRateCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLRandomRateCounter.stringdata0))
        return static_cast<void*>(const_cast< QMLRandomRateCounter*>(this));
    return QReflect_RandomRateCounter::qt_metacast(_clname);
}

int osgParticle::QMLRandomRateCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_RandomRateCounter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void osgParticle::QMLRandomRateCounter::minRateChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QMLRandomRateCounter::maxRateChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
