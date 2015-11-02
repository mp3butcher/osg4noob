/****************************************************************************
** Meta object code from reading C++ file 'Observer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Observer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Observer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Observer_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Observer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Observer_t qt_meta_stringdata_osg__QReflect_Observer = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QReflect_Observer"
QT_MOC_LITERAL(1, 23, 11), // "updateModel"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "osg::QReflect_Observer\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Observer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_Observer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Observer *_t = static_cast<QReflect_Observer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_Observer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Observer.data,
      qt_meta_data_osg__QReflect_Observer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Observer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Observer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Observer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Observer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Observer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_ObserverSet_t {
    QByteArrayData data[11];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ObserverSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ObserverSet_t qt_meta_stringdata_osg__QReflect_ObserverSet = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_ObserverSet"
QT_MOC_LITERAL(1, 26, 25), // "ObserverCollectionChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11), // "updateModel"
QT_MOC_LITERAL(4, 65, 10), // "addRefLock"
QT_MOC_LITERAL(5, 76, 25), // "osg::QReflect_Referenced*"
QT_MOC_LITERAL(6, 102, 18), // "getObserverdObject"
QT_MOC_LITERAL(7, 121, 11), // "addObserver"
QT_MOC_LITERAL(8, 133, 23), // "osg::QReflect_Observer*"
QT_MOC_LITERAL(9, 157, 3), // "par"
QT_MOC_LITERAL(10, 161, 24) // "pmoc_reverse_addObserver"

    },
    "osg::QReflect_ObserverSet\0"
    "ObserverCollectionChanged\0\0updateModel\0"
    "addRefLock\0osg::QReflect_Referenced*\0"
    "getObserverdObject\0addObserver\0"
    "osg::QReflect_Observer*\0par\0"
    "pmoc_reverse_addObserver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ObserverSet[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x02 /* Public */,
       6,    0,   52,    2, 0x02 /* Public */,
       6,    0,   53,    2, 0x02 /* Public */,
       7,    1,   54,    2, 0x02 /* Public */,
      10,    1,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5,
    0x80000000 | 5,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void osg::QReflect_ObserverSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ObserverSet *_t = static_cast<QReflect_ObserverSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ObserverCollectionChanged(); break;
        case 1: _t->updateModel(); break;
        case 2: { osg::QReflect_Referenced* _r = _t->addRefLock();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Referenced**>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_Referenced* _r = _t->getObserverdObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Referenced**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_Referenced* _r = _t->getObserverdObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Referenced**>(_a[0]) = _r; }  break;
        case 5: _t->addObserver((*reinterpret_cast< osg::QReflect_Observer*(*)>(_a[1]))); break;
        case 6: _t->pmoc_reverse_addObserver((*reinterpret_cast< osg::QReflect_Observer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Observer* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Observer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ObserverSet::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ObserverSet::ObserverCollectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_ObserverSet::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ObserverSet.data,
      qt_meta_data_osg__QReflect_ObserverSet,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ObserverSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ObserverSet::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ObserverSet.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ObserverSet*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ObserverSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_ObserverSet::ObserverCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
