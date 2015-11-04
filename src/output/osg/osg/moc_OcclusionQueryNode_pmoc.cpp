/****************************************************************************
** Meta object code from reading C++ file 'OcclusionQueryNode_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OcclusionQueryNode_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OcclusionQueryNode_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_TestResult_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TestResult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TestResult_t qt_meta_stringdata_osg__QReflect_TestResult = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osg::QReflect_TestResult"
QT_MOC_LITERAL(1, 25, 11), // "updateModel"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "osg::QReflect_TestResult\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TestResult[] = {

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

void osg::QReflect_TestResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TestResult *_t = static_cast<QReflect_TestResult *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_TestResult::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TestResult.data,
      qt_meta_data_osg__QReflect_TestResult,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TestResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TestResult::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TestResult.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TestResult*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TestResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_OcclusionQueryNode_t {
    QByteArrayData data[36];
    char stringdata0[703];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_OcclusionQueryNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_OcclusionQueryNode_t qt_meta_stringdata_osg__QReflect_OcclusionQueryNode = {
    {
QT_MOC_LITERAL(0, 0, 32), // "osg::QReflect_OcclusionQueryNode"
QT_MOC_LITERAL(1, 33, 19), // "DebugDisplayChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 20), // "DebugStateSetChanged"
QT_MOC_LITERAL(4, 75, 29), // "const osg::QReflect_StateSet*"
QT_MOC_LITERAL(5, 105, 21), // "QueriesEnabledChanged"
QT_MOC_LITERAL(6, 127, 22), // "QueryFrameCountChanged"
QT_MOC_LITERAL(7, 150, 20), // "QueryStateSetChanged"
QT_MOC_LITERAL(8, 171, 26), // "VisibilityThresholdChanged"
QT_MOC_LITERAL(9, 198, 11), // "updateModel"
QT_MOC_LITERAL(10, 210, 9), // "getPassed"
QT_MOC_LITERAL(11, 220, 16), // "getDebugStateSet"
QT_MOC_LITERAL(12, 237, 23), // "osg::QReflect_StateSet*"
QT_MOC_LITERAL(13, 261, 16), // "getQueryStateSet"
QT_MOC_LITERAL(14, 278, 15), // "getDebugDisplay"
QT_MOC_LITERAL(15, 294, 17), // "getQueriesEnabled"
QT_MOC_LITERAL(16, 312, 18), // "getQueryFrameCount"
QT_MOC_LITERAL(17, 331, 22), // "getVisibilityThreshold"
QT_MOC_LITERAL(18, 354, 16), // "getQueryGeometry"
QT_MOC_LITERAL(19, 371, 28), // "osg::QReflect_QueryGeometry*"
QT_MOC_LITERAL(20, 400, 26), // "discardDeletedQueryObjects"
QT_MOC_LITERAL(21, 427, 16), // "releaseGLObjects"
QT_MOC_LITERAL(22, 444, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(23, 465, 29), // "pmoc_reverse_setDebugStateSet"
QT_MOC_LITERAL(24, 495, 3), // "par"
QT_MOC_LITERAL(25, 499, 29), // "pmoc_reverse_setQueryStateSet"
QT_MOC_LITERAL(26, 529, 15), // "setDebugDisplay"
QT_MOC_LITERAL(27, 545, 16), // "setDebugStateSet"
QT_MOC_LITERAL(28, 562, 17), // "setQueriesEnabled"
QT_MOC_LITERAL(29, 580, 18), // "setQueryFrameCount"
QT_MOC_LITERAL(30, 599, 16), // "setQueryStateSet"
QT_MOC_LITERAL(31, 616, 22), // "setVisibilityThreshold"
QT_MOC_LITERAL(32, 639, 12), // "DebugDisplay"
QT_MOC_LITERAL(33, 652, 14), // "QueriesEnabled"
QT_MOC_LITERAL(34, 667, 15), // "QueryFrameCount"
QT_MOC_LITERAL(35, 683, 19) // "VisibilityThreshold"

    },
    "osg::QReflect_OcclusionQueryNode\0"
    "DebugDisplayChanged\0\0DebugStateSetChanged\0"
    "const osg::QReflect_StateSet*\0"
    "QueriesEnabledChanged\0QueryFrameCountChanged\0"
    "QueryStateSetChanged\0VisibilityThresholdChanged\0"
    "updateModel\0getPassed\0getDebugStateSet\0"
    "osg::QReflect_StateSet*\0getQueryStateSet\0"
    "getDebugDisplay\0getQueriesEnabled\0"
    "getQueryFrameCount\0getVisibilityThreshold\0"
    "getQueryGeometry\0osg::QReflect_QueryGeometry*\0"
    "discardDeletedQueryObjects\0releaseGLObjects\0"
    "osg::QReflect_State*\0pmoc_reverse_setDebugStateSet\0"
    "par\0pmoc_reverse_setQueryStateSet\0"
    "setDebugDisplay\0setDebugStateSet\0"
    "setQueriesEnabled\0setQueryFrameCount\0"
    "setQueryStateSet\0setVisibilityThreshold\0"
    "DebugDisplay\0QueriesEnabled\0QueryFrameCount\0"
    "VisibilityThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_OcclusionQueryNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       4,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x06 /* Public */,
       3,    1,  157,    2, 0x06 /* Public */,
       5,    1,  160,    2, 0x06 /* Public */,
       6,    1,  163,    2, 0x06 /* Public */,
       7,    1,  166,    2, 0x06 /* Public */,
       8,    1,  169,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  172,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,  173,    2, 0x02 /* Public */,
      11,    0,  174,    2, 0x02 /* Public */,
      13,    0,  175,    2, 0x02 /* Public */,
      14,    0,  176,    2, 0x02 /* Public */,
      15,    0,  177,    2, 0x02 /* Public */,
      16,    0,  178,    2, 0x02 /* Public */,
      17,    0,  179,    2, 0x02 /* Public */,
      18,    0,  180,    2, 0x02 /* Public */,
      18,    0,  181,    2, 0x02 /* Public */,
      20,    1,  182,    2, 0x02 /* Public */,
      21,    1,  185,    2, 0x02 /* Public */,
      23,    1,  188,    2, 0x02 /* Public */,
      23,    0,  191,    2, 0x22 /* Public | MethodCloned */,
      25,    1,  192,    2, 0x02 /* Public */,
      25,    0,  195,    2, 0x22 /* Public | MethodCloned */,
      26,    1,  196,    2, 0x02 /* Public */,
      27,    1,  199,    2, 0x02 /* Public */,
      28,    1,  202,    2, 0x02 /* Public */,
      29,    1,  205,    2, 0x02 /* Public */,
      30,    1,  208,    2, 0x02 /* Public */,
      31,    1,  211,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    0x80000000 | 12,
    0x80000000 | 12,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::UInt,
    QMetaType::UInt,
    0x80000000 | 19,
    0x80000000 | 19,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 12,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 12,   24,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 12,   24,
    QMetaType::Void, QMetaType::UInt,    2,

 // properties: name, type, flags
      32, QMetaType::Bool, 0x00495103,
      33, QMetaType::Bool, 0x00495103,
      34, QMetaType::UInt, 0x00495103,
      35, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       3,
       5,

       0        // eod
};

void osg::QReflect_OcclusionQueryNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_OcclusionQueryNode *_t = static_cast<QReflect_OcclusionQueryNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DebugDisplayChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->DebugStateSetChanged((*reinterpret_cast< const osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 2: _t->QueriesEnabledChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->QueryFrameCountChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 4: _t->QueryStateSetChanged((*reinterpret_cast< const osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 5: _t->VisibilityThresholdChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 6: _t->updateModel(); break;
        case 7: { bool _r = _t->getPassed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { osg::QReflect_StateSet* _r = _t->getDebugStateSet();
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateSet**>(_a[0]) = _r; }  break;
        case 9: { osg::QReflect_StateSet* _r = _t->getQueryStateSet();
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateSet**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->getDebugDisplay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->getQueriesEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { uint _r = _t->getQueryFrameCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 13: { uint _r = _t->getVisibilityThreshold();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 14: { osg::QReflect_QueryGeometry* _r = _t->getQueryGeometry();
            if (_a[0]) *reinterpret_cast< osg::QReflect_QueryGeometry**>(_a[0]) = _r; }  break;
        case 15: { osg::QReflect_QueryGeometry* _r = _t->getQueryGeometry();
            if (_a[0]) *reinterpret_cast< osg::QReflect_QueryGeometry**>(_a[0]) = _r; }  break;
        case 16: _t->discardDeletedQueryObjects((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 17: _t->releaseGLObjects((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 18: _t->pmoc_reverse_setDebugStateSet((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 19: _t->pmoc_reverse_setDebugStateSet(); break;
        case 20: _t->pmoc_reverse_setQueryStateSet((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 21: _t->pmoc_reverse_setQueryStateSet(); break;
        case 22: _t->setDebugDisplay((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: _t->setDebugStateSet((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 24: _t->setQueriesEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 25: _t->setQueryFrameCount((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 26: _t->setQueryStateSet((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 27: _t->setVisibilityThreshold((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_OcclusionQueryNode::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OcclusionQueryNode::DebugDisplayChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_OcclusionQueryNode::*_t)(const osg::QReflect_StateSet * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OcclusionQueryNode::DebugStateSetChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_OcclusionQueryNode::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OcclusionQueryNode::QueriesEnabledChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_OcclusionQueryNode::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OcclusionQueryNode::QueryFrameCountChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QReflect_OcclusionQueryNode::*_t)(const osg::QReflect_StateSet * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OcclusionQueryNode::QueryStateSetChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QReflect_OcclusionQueryNode::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OcclusionQueryNode::VisibilityThresholdChanged)) {
                *result = 5;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_OcclusionQueryNode *_t = static_cast<QReflect_OcclusionQueryNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getDebugDisplay(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getQueriesEnabled(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->getQueryFrameCount(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->getVisibilityThreshold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_OcclusionQueryNode *_t = static_cast<QReflect_OcclusionQueryNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDebugDisplay(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setQueriesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setQueryFrameCount(*reinterpret_cast< uint*>(_v)); break;
        case 3: _t->setVisibilityThreshold(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_OcclusionQueryNode::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_OcclusionQueryNode.data,
      qt_meta_data_osg__QReflect_OcclusionQueryNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_OcclusionQueryNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_OcclusionQueryNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_OcclusionQueryNode.stringdata0))
        return static_cast<void*>(const_cast< QReflect_OcclusionQueryNode*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_OcclusionQueryNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
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
void osg::QReflect_OcclusionQueryNode::DebugDisplayChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_OcclusionQueryNode::DebugStateSetChanged(const osg::QReflect_StateSet * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_OcclusionQueryNode::QueriesEnabledChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QReflect_OcclusionQueryNode::QueryFrameCountChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QReflect_OcclusionQueryNode::QueryStateSetChanged(const osg::QReflect_StateSet * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void osg::QReflect_OcclusionQueryNode::VisibilityThresholdChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_osg__QReflect_QueryGeometry_t {
    QByteArrayData data[11];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_QueryGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_QueryGeometry_t qt_meta_stringdata_osg__QReflect_QueryGeometry = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_QueryGeometry"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "getNumPixels"
QT_MOC_LITERAL(4, 54, 21), // "osg::QReflect_Camera*"
QT_MOC_LITERAL(5, 76, 17), // "deleteQueryObject"
QT_MOC_LITERAL(6, 94, 6), // "GLuint"
QT_MOC_LITERAL(7, 101, 26), // "discardDeletedQueryObjects"
QT_MOC_LITERAL(8, 128, 16), // "releaseGLObjects"
QT_MOC_LITERAL(9, 145, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(10, 166, 5) // "reset"

    },
    "osg::QReflect_QueryGeometry\0updateModel\0"
    "\0getNumPixels\0osg::QReflect_Camera*\0"
    "deleteQueryObject\0GLuint\0"
    "discardDeletedQueryObjects\0releaseGLObjects\0"
    "osg::QReflect_State*\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_QueryGeometry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x02 /* Public */,
       5,    2,   48,    2, 0x02 /* Public */,
       7,    1,   53,    2, 0x02 /* Public */,
       8,    1,   56,    2, 0x02 /* Public */,
      10,    0,   59,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_QueryGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_QueryGeometry *_t = static_cast<QReflect_QueryGeometry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { uint _r = _t->getNumPixels((*reinterpret_cast< osg::QReflect_Camera*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 2: _t->deleteQueryObject((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 3: _t->discardDeletedQueryObjects((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->releaseGLObjects((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 5: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_QueryGeometry::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_QueryGeometry.data,
      qt_meta_data_osg__QReflect_QueryGeometry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_QueryGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_QueryGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_QueryGeometry.stringdata0))
        return static_cast<void*>(const_cast< QReflect_QueryGeometry*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_QueryGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
