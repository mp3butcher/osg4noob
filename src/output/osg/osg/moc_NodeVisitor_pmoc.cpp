/****************************************************************************
** Meta object code from reading C++ file 'NodeVisitor_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NodeVisitor_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeVisitor_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_NodeAcceptOp_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_NodeAcceptOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_NodeAcceptOp_t qt_meta_stringdata_osg__QReflect_NodeAcceptOp = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_NodeAcceptOp"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "osg::QReflect_NodeAcceptOp\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_NodeAcceptOp[] = {

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

void osg::QReflect_NodeAcceptOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_NodeAcceptOp *_t = static_cast<QReflect_NodeAcceptOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_NodeAcceptOp::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_NodeAcceptOp.data,
      qt_meta_data_osg__QReflect_NodeAcceptOp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_NodeAcceptOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_NodeAcceptOp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_NodeAcceptOp.stringdata0))
        return static_cast<void*>(const_cast< QReflect_NodeAcceptOp*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_NodeAcceptOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_NodeVisitor_t {
    QByteArrayData data[47];
    char stringdata0[878];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_NodeVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_NodeVisitor_t qt_meta_stringdata_osg__QReflect_NodeVisitor = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_NodeVisitor"
QT_MOC_LITERAL(1, 26, 17), // "FrameStampChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 31), // "const osg::QReflect_FrameStamp*"
QT_MOC_LITERAL(4, 77, 22), // "TraversalNumberChanged"
QT_MOC_LITERAL(5, 100, 11), // "updateModel"
QT_MOC_LITERAL(6, 112, 13), // "validNodeMask"
QT_MOC_LITERAL(7, 126, 19), // "osg::QReflect_Node*"
QT_MOC_LITERAL(8, 146, 23), // "getDistanceFromEyePoint"
QT_MOC_LITERAL(9, 170, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(10, 191, 21), // "getDistanceToEyePoint"
QT_MOC_LITERAL(11, 213, 22), // "getDistanceToViewPoint"
QT_MOC_LITERAL(12, 236, 13), // "getFrameStamp"
QT_MOC_LITERAL(13, 250, 25), // "osg::QReflect_FrameStamp*"
QT_MOC_LITERAL(14, 276, 19), // "getNodeMaskOverride"
QT_MOC_LITERAL(15, 296, 16), // "getTraversalMask"
QT_MOC_LITERAL(16, 313, 18), // "getTraversalNumber"
QT_MOC_LITERAL(17, 332, 13), // "asNodeVisitor"
QT_MOC_LITERAL(18, 346, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(19, 373, 16), // "getTraversalMode"
QT_MOC_LITERAL(20, 390, 40), // "osg::QReflect_NodeVisitor::Tr..."
QT_MOC_LITERAL(21, 431, 14), // "getVisitorType"
QT_MOC_LITERAL(22, 446, 38), // "osg::QReflect_NodeVisitor::Vi..."
QT_MOC_LITERAL(23, 485, 15), // "popFromNodePath"
QT_MOC_LITERAL(24, 501, 16), // "pushOntoNodePath"
QT_MOC_LITERAL(25, 518, 5), // "reset"
QT_MOC_LITERAL(26, 524, 19), // "setNodeMaskOverride"
QT_MOC_LITERAL(27, 544, 16), // "setTraversalMask"
QT_MOC_LITERAL(28, 561, 16), // "setTraversalMode"
QT_MOC_LITERAL(29, 578, 14), // "setVisitorType"
QT_MOC_LITERAL(30, 593, 26), // "pmoc_reverse_setFrameStamp"
QT_MOC_LITERAL(31, 620, 3), // "par"
QT_MOC_LITERAL(32, 624, 13), // "setFrameStamp"
QT_MOC_LITERAL(33, 638, 18), // "setTraversalNumber"
QT_MOC_LITERAL(34, 657, 15), // "TraversalNumber"
QT_MOC_LITERAL(35, 673, 13), // "TraversalMode"
QT_MOC_LITERAL(36, 687, 13), // "TRAVERSE_NONE"
QT_MOC_LITERAL(37, 701, 16), // "TRAVERSE_PARENTS"
QT_MOC_LITERAL(38, 718, 21), // "TRAVERSE_ALL_CHILDREN"
QT_MOC_LITERAL(39, 740, 24), // "TRAVERSE_ACTIVE_CHILDREN"
QT_MOC_LITERAL(40, 765, 11), // "VisitorType"
QT_MOC_LITERAL(41, 777, 12), // "NODE_VISITOR"
QT_MOC_LITERAL(42, 790, 14), // "UPDATE_VISITOR"
QT_MOC_LITERAL(43, 805, 13), // "EVENT_VISITOR"
QT_MOC_LITERAL(44, 819, 24), // "COLLECT_OCCLUDER_VISITOR"
QT_MOC_LITERAL(45, 844, 12), // "CULL_VISITOR"
QT_MOC_LITERAL(46, 857, 20) // "INTERSECTION_VISITOR"

    },
    "osg::QReflect_NodeVisitor\0FrameStampChanged\0"
    "\0const osg::QReflect_FrameStamp*\0"
    "TraversalNumberChanged\0updateModel\0"
    "validNodeMask\0osg::QReflect_Node*\0"
    "getDistanceFromEyePoint\0osg::QReflect_Vec3f*\0"
    "getDistanceToEyePoint\0getDistanceToViewPoint\0"
    "getFrameStamp\0osg::QReflect_FrameStamp*\0"
    "getNodeMaskOverride\0getTraversalMask\0"
    "getTraversalNumber\0asNodeVisitor\0"
    "osg::QReflect_NodeVisitor*\0getTraversalMode\0"
    "osg::QReflect_NodeVisitor::TraversalMode\0"
    "getVisitorType\0osg::QReflect_NodeVisitor::VisitorType\0"
    "popFromNodePath\0pushOntoNodePath\0reset\0"
    "setNodeMaskOverride\0setTraversalMask\0"
    "setTraversalMode\0setVisitorType\0"
    "pmoc_reverse_setFrameStamp\0par\0"
    "setFrameStamp\0setTraversalNumber\0"
    "TraversalNumber\0TraversalMode\0"
    "TRAVERSE_NONE\0TRAVERSE_PARENTS\0"
    "TRAVERSE_ALL_CHILDREN\0TRAVERSE_ACTIVE_CHILDREN\0"
    "VisitorType\0NODE_VISITOR\0UPDATE_VISITOR\0"
    "EVENT_VISITOR\0COLLECT_OCCLUDER_VISITOR\0"
    "CULL_VISITOR\0INTERSECTION_VISITOR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_NodeVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       1,  204, // properties
       2,  208, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    1,  147,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  150,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,  151,    2, 0x02 /* Public */,
       8,    2,  154,    2, 0x02 /* Public */,
      10,    2,  159,    2, 0x02 /* Public */,
      11,    2,  164,    2, 0x02 /* Public */,
      12,    0,  169,    2, 0x02 /* Public */,
      14,    0,  170,    2, 0x02 /* Public */,
      15,    0,  171,    2, 0x02 /* Public */,
      16,    0,  172,    2, 0x02 /* Public */,
      17,    0,  173,    2, 0x02 /* Public */,
      17,    0,  174,    2, 0x02 /* Public */,
      19,    0,  175,    2, 0x02 /* Public */,
      21,    0,  176,    2, 0x02 /* Public */,
      23,    0,  177,    2, 0x02 /* Public */,
      24,    1,  178,    2, 0x02 /* Public */,
      25,    0,  181,    2, 0x02 /* Public */,
      26,    1,  182,    2, 0x02 /* Public */,
      27,    1,  185,    2, 0x02 /* Public */,
      28,    1,  188,    2, 0x02 /* Public */,
      29,    1,  191,    2, 0x02 /* Public */,
      30,    1,  194,    2, 0x02 /* Public */,
      30,    0,  197,    2, 0x22 /* Public | MethodCloned */,
      32,    1,  198,    2, 0x02 /* Public */,
      33,    1,  201,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 7,    2,
    QMetaType::Float, 0x80000000 | 9, QMetaType::Bool,    2,    2,
    QMetaType::Float, 0x80000000 | 9, QMetaType::Bool,    2,    2,
    QMetaType::Float, 0x80000000 | 9, QMetaType::Bool,    2,    2,
    0x80000000 | 13,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    0x80000000 | 18,
    0x80000000 | 18,
    0x80000000 | 20,
    0x80000000 | 22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 13,   31,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   31,
    QMetaType::Void, QMetaType::UInt,    2,

 // properties: name, type, flags
      34, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       1,

 // enums: name, flags, count, data
      35, 0x0,    4,  216,
      40, 0x0,    6,  224,

 // enum data: key, value
      36, uint(osg::QReflect_NodeVisitor::TRAVERSE_NONE),
      37, uint(osg::QReflect_NodeVisitor::TRAVERSE_PARENTS),
      38, uint(osg::QReflect_NodeVisitor::TRAVERSE_ALL_CHILDREN),
      39, uint(osg::QReflect_NodeVisitor::TRAVERSE_ACTIVE_CHILDREN),
      41, uint(osg::QReflect_NodeVisitor::NODE_VISITOR),
      42, uint(osg::QReflect_NodeVisitor::UPDATE_VISITOR),
      43, uint(osg::QReflect_NodeVisitor::EVENT_VISITOR),
      44, uint(osg::QReflect_NodeVisitor::COLLECT_OCCLUDER_VISITOR),
      45, uint(osg::QReflect_NodeVisitor::CULL_VISITOR),
      46, uint(osg::QReflect_NodeVisitor::INTERSECTION_VISITOR),

       0        // eod
};

void osg::QReflect_NodeVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_NodeVisitor *_t = static_cast<QReflect_NodeVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FrameStampChanged((*reinterpret_cast< const osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 1: _t->TraversalNumberChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { bool _r = _t->validNodeMask((*reinterpret_cast< osg::QReflect_Node*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { float _r = _t->getDistanceFromEyePoint((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: { float _r = _t->getDistanceToEyePoint((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 6: { float _r = _t->getDistanceToViewPoint((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_FrameStamp* _r = _t->getFrameStamp();
            if (_a[0]) *reinterpret_cast< osg::QReflect_FrameStamp**>(_a[0]) = _r; }  break;
        case 8: { uint _r = _t->getNodeMaskOverride();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 9: { uint _r = _t->getTraversalMask();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 10: { uint _r = _t->getTraversalNumber();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 11: { osg::QReflect_NodeVisitor* _r = _t->asNodeVisitor();
            if (_a[0]) *reinterpret_cast< osg::QReflect_NodeVisitor**>(_a[0]) = _r; }  break;
        case 12: { osg::QReflect_NodeVisitor* _r = _t->asNodeVisitor();
            if (_a[0]) *reinterpret_cast< osg::QReflect_NodeVisitor**>(_a[0]) = _r; }  break;
        case 13: { osg::QReflect_NodeVisitor::TraversalMode _r = _t->getTraversalMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_NodeVisitor::TraversalMode*>(_a[0]) = _r; }  break;
        case 14: { osg::QReflect_NodeVisitor::VisitorType _r = _t->getVisitorType();
            if (_a[0]) *reinterpret_cast< osg::QReflect_NodeVisitor::VisitorType*>(_a[0]) = _r; }  break;
        case 15: _t->popFromNodePath(); break;
        case 16: _t->pushOntoNodePath((*reinterpret_cast< osg::QReflect_Node*(*)>(_a[1]))); break;
        case 17: _t->reset(); break;
        case 18: _t->setNodeMaskOverride((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 19: _t->setTraversalMask((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 20: _t->setTraversalMode((*reinterpret_cast< osg::QReflect_NodeVisitor::TraversalMode(*)>(_a[1]))); break;
        case 21: _t->setVisitorType((*reinterpret_cast< osg::QReflect_NodeVisitor::VisitorType(*)>(_a[1]))); break;
        case 22: _t->pmoc_reverse_setFrameStamp((*reinterpret_cast< osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 23: _t->pmoc_reverse_setFrameStamp(); break;
        case 24: _t->setFrameStamp((*reinterpret_cast< osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 25: _t->setTraversalNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_NodeVisitor::*_t)(const osg::QReflect_FrameStamp * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_NodeVisitor::FrameStampChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_NodeVisitor::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_NodeVisitor::TraversalNumberChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_NodeVisitor *_t = static_cast<QReflect_NodeVisitor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getTraversalNumber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_NodeVisitor *_t = static_cast<QReflect_NodeVisitor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTraversalNumber(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_NodeVisitor::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_NodeVisitor.data,
      qt_meta_data_osg__QReflect_NodeVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_NodeVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_NodeVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_NodeVisitor.stringdata0))
        return static_cast<void*>(const_cast< QReflect_NodeVisitor*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_NodeVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
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
void osg::QReflect_NodeVisitor::FrameStampChanged(const osg::QReflect_FrameStamp * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_NodeVisitor::TraversalNumberChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
