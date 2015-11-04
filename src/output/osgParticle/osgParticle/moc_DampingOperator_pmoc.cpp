/****************************************************************************
** Meta object code from reading C++ file 'DampingOperator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DampingOperator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DampingOperator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_DampingOperator_t {
    QByteArrayData data[16];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_DampingOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_DampingOperator_t qt_meta_stringdata_osgParticle__QReflect_DampingOperator = {
    {
QT_MOC_LITERAL(0, 0, 37), // "osgParticle::QReflect_Damping..."
QT_MOC_LITERAL(1, 38, 17), // "CutoffHighChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 16), // "CutoffLowChanged"
QT_MOC_LITERAL(4, 74, 11), // "updateModel"
QT_MOC_LITERAL(5, 86, 13), // "getCutoffHigh"
QT_MOC_LITERAL(6, 100, 12), // "getCutoffLow"
QT_MOC_LITERAL(7, 113, 7), // "operate"
QT_MOC_LITERAL(8, 121, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(9, 153, 9), // "setCutoff"
QT_MOC_LITERAL(10, 163, 10), // "setDamping"
QT_MOC_LITERAL(11, 174, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(12, 195, 13), // "setCutoffHigh"
QT_MOC_LITERAL(13, 209, 12), // "setCutoffLow"
QT_MOC_LITERAL(14, 222, 10), // "CutoffHigh"
QT_MOC_LITERAL(15, 233, 9) // "CutoffLow"

    },
    "osgParticle::QReflect_DampingOperator\0"
    "CutoffHighChanged\0\0CutoffLowChanged\0"
    "updateModel\0getCutoffHigh\0getCutoffLow\0"
    "operate\0osgParticle::QReflect_Particle*\0"
    "setCutoff\0setDamping\0osg::QReflect_Vec3f*\0"
    "setCutoffHigh\0setCutoffLow\0CutoffHigh\0"
    "CutoffLow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_DampingOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   80,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   81,    2, 0x02 /* Public */,
       6,    0,   82,    2, 0x02 /* Public */,
       7,    2,   83,    2, 0x02 /* Public */,
       9,    2,   88,    2, 0x02 /* Public */,
      10,    3,   93,    2, 0x02 /* Public */,
      10,    1,  100,    2, 0x02 /* Public */,
      10,    1,  103,    2, 0x02 /* Public */,
      12,    1,  106,    2, 0x02 /* Public */,
      13,    1,  109,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osgParticle::QReflect_DampingOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_DampingOperator *_t = static_cast<QReflect_DampingOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CutoffHighChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->CutoffLowChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { float _r = _t->getCutoffHigh();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 4: { float _r = _t->getCutoffLow();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: _t->operate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->setCutoff((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->setDamping((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 8: _t->setDamping((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->setDamping((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 10: _t->setCutoffHigh((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 11: _t->setCutoffLow((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_DampingOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_DampingOperator::CutoffHighChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_DampingOperator::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_DampingOperator::CutoffLowChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_DampingOperator *_t = static_cast<QReflect_DampingOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getCutoffHigh(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getCutoffLow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_DampingOperator *_t = static_cast<QReflect_DampingOperator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCutoffHigh(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setCutoffLow(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_DampingOperator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_DampingOperator.data,
      qt_meta_data_osgParticle__QReflect_DampingOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_DampingOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_DampingOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_DampingOperator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_DampingOperator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_DampingOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osgParticle::QReflect_DampingOperator::CutoffHighChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_DampingOperator::CutoffLowChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
