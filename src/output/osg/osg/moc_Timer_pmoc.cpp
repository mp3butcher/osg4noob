/****************************************************************************
** Meta object code from reading C++ file 'Timer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Timer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Timer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Timer_t {
    QByteArrayData data[11];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Timer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Timer_t qt_meta_stringdata_osg__QReflect_Timer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_Timer"
QT_MOC_LITERAL(1, 20, 11), // "updateModel"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "getSecondsPerTick"
QT_MOC_LITERAL(4, 51, 6), // "time_m"
QT_MOC_LITERAL(5, 58, 6), // "time_n"
QT_MOC_LITERAL(6, 65, 6), // "time_s"
QT_MOC_LITERAL(7, 72, 6), // "time_u"
QT_MOC_LITERAL(8, 79, 8), // "instance"
QT_MOC_LITERAL(9, 88, 20), // "osg::QReflect_Timer*"
QT_MOC_LITERAL(10, 109, 12) // "setStartTick"

    },
    "osg::QReflect_Timer\0updateModel\0\0"
    "getSecondsPerTick\0time_m\0time_n\0time_s\0"
    "time_u\0instance\0osg::QReflect_Timer*\0"
    "setStartTick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Timer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x02 /* Public */,
       4,    0,   56,    2, 0x02 /* Public */,
       5,    0,   57,    2, 0x02 /* Public */,
       6,    0,   58,    2, 0x02 /* Public */,
       7,    0,   59,    2, 0x02 /* Public */,
       8,    0,   60,    2, 0x02 /* Public */,
      10,    0,   61,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    0x80000000 | 9,
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_Timer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Timer *_t = static_cast<QReflect_Timer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { double _r = _t->getSecondsPerTick();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: { double _r = _t->time_m();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 3: { double _r = _t->time_n();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 4: { double _r = _t->time_s();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->time_u();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_Timer* _r = _t->instance();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Timer**>(_a[0]) = _r; }  break;
        case 7: _t->setStartTick(); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_Timer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Timer.data,
      qt_meta_data_osg__QReflect_Timer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Timer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Timer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Timer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Timer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Timer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_ElapsedTime_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ElapsedTime_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ElapsedTime_t qt_meta_stringdata_osg__QReflect_ElapsedTime = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_ElapsedTime"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "elapsedTime"
QT_MOC_LITERAL(4, 51, 13), // "elapsedTime_m"
QT_MOC_LITERAL(5, 65, 13), // "elapsedTime_n"
QT_MOC_LITERAL(6, 79, 13), // "elapsedTime_u"
QT_MOC_LITERAL(7, 93, 6), // "finish"
QT_MOC_LITERAL(8, 100, 5) // "reset"

    },
    "osg::QReflect_ElapsedTime\0updateModel\0"
    "\0elapsedTime\0elapsedTime_m\0elapsedTime_n\0"
    "elapsedTime_u\0finish\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ElapsedTime[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x02 /* Public */,
       4,    0,   51,    2, 0x02 /* Public */,
       5,    0,   52,    2, 0x02 /* Public */,
       6,    0,   53,    2, 0x02 /* Public */,
       7,    0,   54,    2, 0x02 /* Public */,
       8,    0,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_ElapsedTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ElapsedTime *_t = static_cast<QReflect_ElapsedTime *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { double _r = _t->elapsedTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 2: { double _r = _t->elapsedTime_m();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 3: { double _r = _t->elapsedTime_n();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 4: { double _r = _t->elapsedTime_u();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 5: _t->finish(); break;
        case 6: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ElapsedTime::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ElapsedTime.data,
      qt_meta_data_osg__QReflect_ElapsedTime,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ElapsedTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ElapsedTime::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ElapsedTime.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ElapsedTime*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ElapsedTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
