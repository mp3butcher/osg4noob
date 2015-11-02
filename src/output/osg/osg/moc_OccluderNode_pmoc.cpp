/****************************************************************************
** Meta object code from reading C++ file 'OccluderNode_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OccluderNode_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OccluderNode_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_OccluderNode_t {
    QByteArrayData data[10];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_OccluderNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_OccluderNode_t qt_meta_stringdata_osg__QReflect_OccluderNode = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_OccluderNode"
QT_MOC_LITERAL(1, 27, 15), // "OccluderChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 41), // "const osg::QReflect_ConvexPla..."
QT_MOC_LITERAL(4, 86, 11), // "updateModel"
QT_MOC_LITERAL(5, 98, 11), // "getOccluder"
QT_MOC_LITERAL(6, 110, 35), // "osg::QReflect_ConvexPlanarOcc..."
QT_MOC_LITERAL(7, 146, 24), // "pmoc_reverse_setOccluder"
QT_MOC_LITERAL(8, 171, 3), // "par"
QT_MOC_LITERAL(9, 175, 11) // "setOccluder"

    },
    "osg::QReflect_OccluderNode\0OccluderChanged\0"
    "\0const osg::QReflect_ConvexPlanarOccluder*\0"
    "updateModel\0getOccluder\0"
    "osg::QReflect_ConvexPlanarOccluder*\0"
    "pmoc_reverse_setOccluder\0par\0setOccluder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_OccluderNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x02 /* Public */,
       7,    1,   49,    2, 0x02 /* Public */,
       7,    0,   52,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    8,

       0        // eod
};

void osg::QReflect_OccluderNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_OccluderNode *_t = static_cast<QReflect_OccluderNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OccluderChanged((*reinterpret_cast< const osg::QReflect_ConvexPlanarOccluder*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { osg::QReflect_ConvexPlanarOccluder* _r = _t->getOccluder();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ConvexPlanarOccluder**>(_a[0]) = _r; }  break;
        case 3: _t->pmoc_reverse_setOccluder((*reinterpret_cast< osg::QReflect_ConvexPlanarOccluder*(*)>(_a[1]))); break;
        case 4: _t->pmoc_reverse_setOccluder(); break;
        case 5: _t->setOccluder((*reinterpret_cast< osg::QReflect_ConvexPlanarOccluder*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_OccluderNode::*_t)(const osg::QReflect_ConvexPlanarOccluder * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_OccluderNode::OccluderChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_OccluderNode::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_OccluderNode.data,
      qt_meta_data_osg__QReflect_OccluderNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_OccluderNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_OccluderNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_OccluderNode.stringdata0))
        return static_cast<void*>(const_cast< QReflect_OccluderNode*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_OccluderNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void osg::QReflect_OccluderNode::OccluderChanged(const osg::QReflect_ConvexPlanarOccluder * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
