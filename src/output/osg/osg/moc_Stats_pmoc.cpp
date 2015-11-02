/****************************************************************************
** Meta object code from reading C++ file 'Stats_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Stats_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Stats_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Stats_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Stats_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Stats_t qt_meta_stringdata_osg__QReflect_Stats = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_Stats"
QT_MOC_LITERAL(1, 20, 11), // "NameChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "updateModel"
QT_MOC_LITERAL(4, 45, 12), // "collectStats"
QT_MOC_LITERAL(5, 58, 12), // "getAttribute"
QT_MOC_LITERAL(6, 71, 7), // "double&"
QT_MOC_LITERAL(7, 79, 20), // "getAveragedAttribute"
QT_MOC_LITERAL(8, 100, 12), // "setAttribute"
QT_MOC_LITERAL(9, 113, 22), // "getEarliestFrameNumber"
QT_MOC_LITERAL(10, 136, 20), // "getLatestFrameNumber"
QT_MOC_LITERAL(11, 157, 7), // "getName"
QT_MOC_LITERAL(12, 165, 8), // "allocate"
QT_MOC_LITERAL(13, 174, 7), // "setName"
QT_MOC_LITERAL(14, 182, 4) // "Name"

    },
    "osg::QReflect_Stats\0NameChanged\0\0"
    "updateModel\0collectStats\0getAttribute\0"
    "double&\0getAveragedAttribute\0setAttribute\0"
    "getEarliestFrameNumber\0getLatestFrameNumber\0"
    "getName\0allocate\0setName\0Name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Stats[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   82,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   83,    2, 0x02 /* Public */,
       5,    3,   86,    2, 0x02 /* Public */,
       7,    5,   93,    2, 0x02 /* Public */,
       7,    3,  104,    2, 0x02 /* Public */,
       8,    3,  111,    2, 0x02 /* Public */,
       9,    0,  118,    2, 0x02 /* Public */,
      10,    0,  119,    2, 0x02 /* Public */,
      11,    0,  120,    2, 0x02 /* Public */,
      12,    1,  121,    2, 0x02 /* Public */,
       4,    2,  124,    2, 0x02 /* Public */,
      13,    1,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::UInt, QMetaType::QString, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::QString, 0x80000000 | 6, QMetaType::Bool,    2,    2,    2,    2,    2,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 6, QMetaType::Bool,    2,    2,    2,
    QMetaType::Bool, QMetaType::UInt, QMetaType::QString, QMetaType::Double,    2,    2,    2,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::QString,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_Stats::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Stats *_t = static_cast<QReflect_Stats *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->collectStats((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->getAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->getAveragedAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->getAveragedAttribute((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->setAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { uint _r = _t->getEarliestFrameNumber();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 8: { uint _r = _t->getLatestFrameNumber();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->getName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->allocate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->collectStats((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Stats::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Stats::NameChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Stats *_t = static_cast<QReflect_Stats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Stats *_t = static_cast<QReflect_Stats *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Stats::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Stats.data,
      qt_meta_data_osg__QReflect_Stats,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Stats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Stats::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Stats.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Stats*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Stats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_Stats::NameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
