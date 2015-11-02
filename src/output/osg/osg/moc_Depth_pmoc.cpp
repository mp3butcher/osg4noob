/****************************************************************************
** Meta object code from reading C++ file 'Depth_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Depth_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Depth_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Depth_t {
    QByteArrayData data[30];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Depth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Depth_t qt_meta_stringdata_osg__QReflect_Depth = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_Depth"
QT_MOC_LITERAL(1, 20, 16), // "WriteMaskChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "ZFarChanged"
QT_MOC_LITERAL(4, 50, 12), // "ZNearChanged"
QT_MOC_LITERAL(5, 63, 11), // "updateModel"
QT_MOC_LITERAL(6, 75, 7), // "compare"
QT_MOC_LITERAL(7, 83, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(8, 113, 12), // "getWriteMask"
QT_MOC_LITERAL(9, 126, 7), // "getZFar"
QT_MOC_LITERAL(10, 134, 8), // "getZNear"
QT_MOC_LITERAL(11, 143, 11), // "getFunction"
QT_MOC_LITERAL(12, 155, 29), // "osg::QReflect_Depth::Function"
QT_MOC_LITERAL(13, 185, 11), // "setFunction"
QT_MOC_LITERAL(14, 197, 8), // "setRange"
QT_MOC_LITERAL(15, 206, 12), // "setWriteMask"
QT_MOC_LITERAL(16, 219, 7), // "setZFar"
QT_MOC_LITERAL(17, 227, 8), // "setZNear"
QT_MOC_LITERAL(18, 236, 9), // "WriteMask"
QT_MOC_LITERAL(19, 246, 4), // "ZFar"
QT_MOC_LITERAL(20, 251, 5), // "ZNear"
QT_MOC_LITERAL(21, 257, 8), // "Function"
QT_MOC_LITERAL(22, 266, 5), // "NEVER"
QT_MOC_LITERAL(23, 272, 4), // "LESS"
QT_MOC_LITERAL(24, 277, 5), // "EQUAL"
QT_MOC_LITERAL(25, 283, 6), // "LEQUAL"
QT_MOC_LITERAL(26, 290, 7), // "GREATER"
QT_MOC_LITERAL(27, 298, 8), // "NOTEQUAL"
QT_MOC_LITERAL(28, 307, 6), // "GEQUAL"
QT_MOC_LITERAL(29, 314, 6) // "ALWAYS"

    },
    "osg::QReflect_Depth\0WriteMaskChanged\0"
    "\0ZFarChanged\0ZNearChanged\0updateModel\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getWriteMask\0getZFar\0getZNear\0getFunction\0"
    "osg::QReflect_Depth::Function\0setFunction\0"
    "setRange\0setWriteMask\0setZFar\0setZNear\0"
    "WriteMask\0ZFar\0ZNear\0Function\0NEVER\0"
    "LESS\0EQUAL\0LEQUAL\0GREATER\0NOTEQUAL\0"
    "GEQUAL\0ALWAYS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Depth[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,  118, // properties
       1,  130, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   93,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   94,    2, 0x02 /* Public */,
       8,    0,   97,    2, 0x02 /* Public */,
       9,    0,   98,    2, 0x02 /* Public */,
      10,    0,   99,    2, 0x02 /* Public */,
      11,    0,  100,    2, 0x02 /* Public */,
      13,    1,  101,    2, 0x02 /* Public */,
      14,    2,  104,    2, 0x02 /* Public */,
      15,    1,  109,    2, 0x02 /* Public */,
      16,    1,  112,    2, 0x02 /* Public */,
      17,    1,  115,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 7,    2,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Double,
    0x80000000 | 12,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Double, 0x00495103,
      20, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      21, 0x0,    8,  134,

 // enum data: key, value
      22, uint(osg::QReflect_Depth::NEVER),
      23, uint(osg::QReflect_Depth::LESS),
      24, uint(osg::QReflect_Depth::EQUAL),
      25, uint(osg::QReflect_Depth::LEQUAL),
      26, uint(osg::QReflect_Depth::GREATER),
      27, uint(osg::QReflect_Depth::NOTEQUAL),
      28, uint(osg::QReflect_Depth::GEQUAL),
      29, uint(osg::QReflect_Depth::ALWAYS),

       0        // eod
};

void osg::QReflect_Depth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Depth *_t = static_cast<QReflect_Depth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->WriteMaskChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->ZFarChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->ZNearChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->getWriteMask();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { double _r = _t->getZFar();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { double _r = _t->getZNear();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { osg::QReflect_Depth::Function _r = _t->getFunction();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Depth::Function*>(_a[0]) = _r; }  break;
        case 9: _t->setFunction((*reinterpret_cast< osg::QReflect_Depth::Function(*)>(_a[1]))); break;
        case 10: _t->setRange((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 11: _t->setWriteMask((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->setZFar((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 13: _t->setZNear((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Depth::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Depth::WriteMaskChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Depth::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Depth::ZFarChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_Depth::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Depth::ZNearChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Depth *_t = static_cast<QReflect_Depth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getWriteMask(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getZFar(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getZNear(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Depth *_t = static_cast<QReflect_Depth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWriteMask(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setZFar(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setZNear(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Depth::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Depth.data,
      qt_meta_data_osg__QReflect_Depth,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Depth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Depth::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Depth.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Depth*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Depth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
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
void osg::QReflect_Depth::WriteMaskChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Depth::ZFarChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_Depth::ZNearChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
