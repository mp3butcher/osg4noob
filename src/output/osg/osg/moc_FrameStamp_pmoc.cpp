/****************************************************************************
** Meta object code from reading C++ file 'FrameStamp_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FrameStamp_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameStamp_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_FrameStamp_t {
    QByteArrayData data[15];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_FrameStamp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_FrameStamp_t qt_meta_stringdata_osg__QReflect_FrameStamp = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osg::QReflect_FrameStamp"
QT_MOC_LITERAL(1, 25, 18), // "FrameNumberChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "ReferenceTimeChanged"
QT_MOC_LITERAL(4, 66, 21), // "SimulationTimeChanged"
QT_MOC_LITERAL(5, 88, 11), // "updateModel"
QT_MOC_LITERAL(6, 100, 16), // "getReferenceTime"
QT_MOC_LITERAL(7, 117, 17), // "getSimulationTime"
QT_MOC_LITERAL(8, 135, 14), // "getFrameNumber"
QT_MOC_LITERAL(9, 150, 14), // "setFrameNumber"
QT_MOC_LITERAL(10, 165, 16), // "setReferenceTime"
QT_MOC_LITERAL(11, 182, 17), // "setSimulationTime"
QT_MOC_LITERAL(12, 200, 13), // "ReferenceTime"
QT_MOC_LITERAL(13, 214, 14), // "SimulationTime"
QT_MOC_LITERAL(14, 229, 11) // "FrameNumber"

    },
    "osg::QReflect_FrameStamp\0FrameNumberChanged\0"
    "\0ReferenceTimeChanged\0SimulationTimeChanged\0"
    "updateModel\0getReferenceTime\0"
    "getSimulationTime\0getFrameNumber\0"
    "setFrameNumber\0setReferenceTime\0"
    "setSimulationTime\0ReferenceTime\0"
    "SimulationTime\0FrameNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_FrameStamp[] = {

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
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      12, QMetaType::Double, 0x00495103,
      13, QMetaType::Double, 0x00495103,
      14, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       0,

       0        // eod
};

void osg::QReflect_FrameStamp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FrameStamp *_t = static_cast<QReflect_FrameStamp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FrameNumberChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->ReferenceTimeChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->SimulationTimeChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { double _r = _t->getReferenceTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->getSimulationTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { uint _r = _t->getFrameNumber();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 7: _t->setFrameNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 8: _t->setReferenceTime((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 9: _t->setSimulationTime((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_FrameStamp::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FrameStamp::FrameNumberChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_FrameStamp::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FrameStamp::ReferenceTimeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_FrameStamp::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FrameStamp::SimulationTimeChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_FrameStamp *_t = static_cast<QReflect_FrameStamp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getReferenceTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getSimulationTime(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->getFrameNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_FrameStamp *_t = static_cast<QReflect_FrameStamp *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReferenceTime(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setSimulationTime(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setFrameNumber(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_FrameStamp::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_FrameStamp.data,
      qt_meta_data_osg__QReflect_FrameStamp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_FrameStamp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_FrameStamp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_FrameStamp.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FrameStamp*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_FrameStamp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_FrameStamp::FrameNumberChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_FrameStamp::ReferenceTimeChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_FrameStamp::SimulationTimeChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
