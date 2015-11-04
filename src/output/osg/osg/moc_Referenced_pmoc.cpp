/****************************************************************************
** Meta object code from reading C++ file 'Referenced_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Referenced_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Referenced_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Referenced_t {
    QByteArrayData data[15];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Referenced_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Referenced_t qt_meta_stringdata_osg__QReflect_Referenced = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osg::QReflect_Referenced"
QT_MOC_LITERAL(1, 25, 25), // "ThreadSafeRefUnrefChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 34), // "ThreadSafeReferenceCountingCh..."
QT_MOC_LITERAL(4, 87, 11), // "updateModel"
QT_MOC_LITERAL(5, 99, 3), // "ref"
QT_MOC_LITERAL(6, 103, 14), // "referenceCount"
QT_MOC_LITERAL(7, 118, 5), // "unref"
QT_MOC_LITERAL(8, 124, 14), // "unref_nodelete"
QT_MOC_LITERAL(9, 139, 21), // "getThreadSafeRefUnref"
QT_MOC_LITERAL(10, 161, 30), // "getThreadSafeReferenceCounting"
QT_MOC_LITERAL(11, 192, 21), // "setThreadSafeRefUnref"
QT_MOC_LITERAL(12, 214, 30), // "setThreadSafeReferenceCounting"
QT_MOC_LITERAL(13, 245, 18), // "ThreadSafeRefUnref"
QT_MOC_LITERAL(14, 264, 27) // "ThreadSafeReferenceCounting"

    },
    "osg::QReflect_Referenced\0"
    "ThreadSafeRefUnrefChanged\0\0"
    "ThreadSafeReferenceCountingChanged\0"
    "updateModel\0ref\0referenceCount\0unref\0"
    "unref_nodelete\0getThreadSafeRefUnref\0"
    "getThreadSafeReferenceCounting\0"
    "setThreadSafeRefUnref\0"
    "setThreadSafeReferenceCounting\0"
    "ThreadSafeRefUnref\0ThreadSafeReferenceCounting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Referenced[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   76,    2, 0x02 /* Public */,
       6,    0,   77,    2, 0x02 /* Public */,
       7,    0,   78,    2, 0x02 /* Public */,
       8,    0,   79,    2, 0x02 /* Public */,
       9,    0,   80,    2, 0x02 /* Public */,
      10,    0,   81,    2, 0x02 /* Public */,
      11,    1,   82,    2, 0x02 /* Public */,
      12,    1,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QReflect_Referenced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Referenced *_t = static_cast<QReflect_Referenced *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ThreadSafeRefUnrefChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->ThreadSafeReferenceCountingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { int _r = _t->ref();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->referenceCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->unref();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->unref_nodelete();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->getThreadSafeRefUnref();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->getThreadSafeReferenceCounting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setThreadSafeRefUnref((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->setThreadSafeReferenceCounting((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Referenced::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Referenced::ThreadSafeRefUnrefChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Referenced::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Referenced::ThreadSafeReferenceCountingChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Referenced *_t = static_cast<QReflect_Referenced *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getThreadSafeRefUnref(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getThreadSafeReferenceCounting(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Referenced *_t = static_cast<QReflect_Referenced *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThreadSafeRefUnref(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setThreadSafeReferenceCounting(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Referenced::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Referenced.data,
      qt_meta_data_osg__QReflect_Referenced,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Referenced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Referenced::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Referenced.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Referenced*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Referenced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void osg::QReflect_Referenced::ThreadSafeRefUnrefChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Referenced::ThreadSafeReferenceCountingChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
