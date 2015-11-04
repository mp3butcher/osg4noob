/****************************************************************************
** Meta object code from reading C++ file 'ClipNode_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ClipNode_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipNode_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ClipNode_t {
    QByteArrayData data[18];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ClipNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ClipNode_t qt_meta_stringdata_osg__QReflect_ClipNode = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QReflect_ClipNode"
QT_MOC_LITERAL(1, 23, 26), // "ClipPlaneCollectionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "updateModel"
QT_MOC_LITERAL(4, 63, 15), // "removeClipPlane"
QT_MOC_LITERAL(5, 79, 16), // "getNumClipPlanes"
QT_MOC_LITERAL(6, 96, 17), // "getReferenceFrame"
QT_MOC_LITERAL(7, 114, 38), // "osg::QReflect_ClipNode::Refer..."
QT_MOC_LITERAL(8, 153, 12), // "getClipPlane"
QT_MOC_LITERAL(9, 166, 24), // "osg::QReflect_ClipPlane*"
QT_MOC_LITERAL(10, 191, 12), // "addClipPlane"
QT_MOC_LITERAL(11, 204, 3), // "par"
QT_MOC_LITERAL(12, 208, 21), // "setLocalStateSetModes"
QT_MOC_LITERAL(13, 230, 17), // "setReferenceFrame"
QT_MOC_LITERAL(14, 248, 25), // "pmoc_reverse_addClipPlane"
QT_MOC_LITERAL(15, 274, 14), // "ReferenceFrame"
QT_MOC_LITERAL(16, 289, 11), // "RELATIVE_RF"
QT_MOC_LITERAL(17, 301, 11) // "ABSOLUTE_RF"

    },
    "osg::QReflect_ClipNode\0"
    "ClipPlaneCollectionChanged\0\0updateModel\0"
    "removeClipPlane\0getNumClipPlanes\0"
    "getReferenceFrame\0"
    "osg::QReflect_ClipNode::ReferenceFrame\0"
    "getClipPlane\0osg::QReflect_ClipPlane*\0"
    "addClipPlane\0par\0setLocalStateSetModes\0"
    "setReferenceFrame\0pmoc_reverse_addClipPlane\0"
    "ReferenceFrame\0RELATIVE_RF\0ABSOLUTE_RF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ClipNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   71,    2, 0x02 /* Public */,
       5,    0,   74,    2, 0x02 /* Public */,
       6,    0,   75,    2, 0x02 /* Public */,
       8,    1,   76,    2, 0x02 /* Public */,
       8,    1,   79,    2, 0x02 /* Public */,
      10,    1,   82,    2, 0x02 /* Public */,
      12,    1,   85,    2, 0x02 /* Public */,
      13,    1,   88,    2, 0x02 /* Public */,
      14,    1,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::UInt,    2,
    QMetaType::UInt,
    0x80000000 | 7,
    0x80000000 | 9, QMetaType::UInt,    2,
    0x80000000 | 9, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 9,   11,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,   11,

 // enums: name, flags, count, data
      15, 0x0,    2,   98,

 // enum data: key, value
      16, uint(osg::QReflect_ClipNode::RELATIVE_RF),
      17, uint(osg::QReflect_ClipNode::ABSOLUTE_RF),

       0        // eod
};

void osg::QReflect_ClipNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ClipNode *_t = static_cast<QReflect_ClipNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ClipPlaneCollectionChanged(); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->removeClipPlane((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getNumClipPlanes();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_ClipNode::ReferenceFrame _r = _t->getReferenceFrame();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ClipNode::ReferenceFrame*>(_a[0]) = _r; }  break;
        case 5: { osg::QReflect_ClipPlane* _r = _t->getClipPlane((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_ClipPlane**>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_ClipPlane* _r = _t->getClipPlane((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_ClipPlane**>(_a[0]) = _r; }  break;
        case 7: _t->addClipPlane((*reinterpret_cast< osg::QReflect_ClipPlane*(*)>(_a[1]))); break;
        case 8: _t->setLocalStateSetModes((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->setReferenceFrame((*reinterpret_cast< osg::QReflect_ClipNode::ReferenceFrame(*)>(_a[1]))); break;
        case 10: _t->pmoc_reverse_addClipPlane((*reinterpret_cast< osg::QReflect_ClipPlane*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ClipNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ClipNode::ClipPlaneCollectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_ClipNode::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ClipNode.data,
      qt_meta_data_osg__QReflect_ClipNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ClipNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ClipNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ClipNode.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ClipNode*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ClipNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void osg::QReflect_ClipNode::ClipPlaneCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
