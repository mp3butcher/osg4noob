/****************************************************************************
** Meta object code from reading C++ file 'SectorPlacer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SectorPlacer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SectorPlacer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLSectorPlacer_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLSectorPlacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLSectorPlacer_t qt_meta_stringdata_osgParticle__QMLSectorPlacer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osgParticle::QMLSectorPlacer"
QT_MOC_LITERAL(1, 29, 13), // "minPhiChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 13), // "maxPhiChanged"
QT_MOC_LITERAL(4, 58, 16), // "minRadiusChanged"
QT_MOC_LITERAL(5, 75, 16), // "maxRadiusChanged"
QT_MOC_LITERAL(6, 92, 11), // "updateModel"
QT_MOC_LITERAL(7, 104, 9), // "minRadius"
QT_MOC_LITERAL(8, 114, 9), // "maxRadius"
QT_MOC_LITERAL(9, 124, 6), // "minPhi"
QT_MOC_LITERAL(10, 131, 6) // "maxPhi"

    },
    "osgParticle::QMLSectorPlacer\0minPhiChanged\0"
    "\0maxPhiChanged\0minRadiusChanged\0"
    "maxRadiusChanged\0updateModel\0minRadius\0"
    "maxRadius\0minPhi\0maxPhi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLSectorPlacer[] = {

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
       2,
       3,
       0,
       1,

       0        // eod
};

void osgParticle::QMLSectorPlacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLSectorPlacer *_t = static_cast<QMLSectorPlacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minPhiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->maxPhiChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->minRadiusChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->maxRadiusChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLSectorPlacer::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLSectorPlacer::minPhiChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLSectorPlacer::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLSectorPlacer::maxPhiChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLSectorPlacer::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLSectorPlacer::minRadiusChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLSectorPlacer::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLSectorPlacer::maxRadiusChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLSectorPlacer *_t = static_cast<QMLSectorPlacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->minRadius(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->maxRadius(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->minPhi(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->maxPhi(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLSectorPlacer *_t = static_cast<QMLSectorPlacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->minRadius(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->maxRadius(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->minPhi(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->maxPhi(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QMLSectorPlacer::staticMetaObject = {
    { &QReflect_SectorPlacer::staticMetaObject, qt_meta_stringdata_osgParticle__QMLSectorPlacer.data,
      qt_meta_data_osgParticle__QMLSectorPlacer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLSectorPlacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLSectorPlacer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLSectorPlacer.stringdata0))
        return static_cast<void*>(const_cast< QMLSectorPlacer*>(this));
    return QReflect_SectorPlacer::qt_metacast(_clname);
}

int osgParticle::QMLSectorPlacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_SectorPlacer::qt_metacall(_c, _id, _a);
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
void osgParticle::QMLSectorPlacer::minPhiChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QMLSectorPlacer::maxPhiChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QMLSectorPlacer::minRadiusChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osgParticle::QMLSectorPlacer::maxRadiusChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
