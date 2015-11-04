/****************************************************************************
** Meta object code from reading C++ file 'Particle_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Particle_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Particle_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLParticle_t {
    QByteArrayData data[11];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLParticle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLParticle_t qt_meta_stringdata_osgParticle__QMLParticle = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osgParticle::QMLParticle"
QT_MOC_LITERAL(1, 25, 14), // "minSizeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "maxSizeChanged"
QT_MOC_LITERAL(4, 56, 15), // "minAlphaChanged"
QT_MOC_LITERAL(5, 72, 15), // "maxAlphaChanged"
QT_MOC_LITERAL(6, 88, 11), // "updateModel"
QT_MOC_LITERAL(7, 100, 7), // "minSize"
QT_MOC_LITERAL(8, 108, 7), // "maxSize"
QT_MOC_LITERAL(9, 116, 8), // "minAlpha"
QT_MOC_LITERAL(10, 125, 8) // "maxAlpha"

    },
    "osgParticle::QMLParticle\0minSizeChanged\0"
    "\0maxSizeChanged\0minAlphaChanged\0"
    "maxAlphaChanged\0updateModel\0minSize\0"
    "maxSize\0minAlpha\0maxAlpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLParticle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Float, 0x00495003,
       8, QMetaType::Float, 0x00495003,
       9, QMetaType::Float, 0x00495003,
      10, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void osgParticle::QMLParticle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLParticle *_t = static_cast<QMLParticle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minSizeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->maxSizeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->minAlphaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->maxAlphaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLParticle::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLParticle::minSizeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLParticle::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLParticle::maxSizeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLParticle::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLParticle::minAlphaChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLParticle::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLParticle::maxAlphaChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLParticle *_t = static_cast<QMLParticle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->minSize(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->maxSize(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->minAlpha(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->maxAlpha(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLParticle *_t = static_cast<QMLParticle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->minSize(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->maxSize(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->minAlpha(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->maxAlpha(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QMLParticle::staticMetaObject = {
    { &QReflect_Particle::staticMetaObject, qt_meta_stringdata_osgParticle__QMLParticle.data,
      qt_meta_data_osgParticle__QMLParticle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLParticle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLParticle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLParticle.stringdata0))
        return static_cast<void*>(const_cast< QMLParticle*>(this));
    return QReflect_Particle::qt_metacast(_clname);
}

int osgParticle::QMLParticle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Particle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osgParticle::QMLParticle::minSizeChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QMLParticle::maxSizeChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QMLParticle::minAlphaChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osgParticle::QMLParticle::maxAlphaChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
