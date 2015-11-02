/****************************************************************************
** Meta object code from reading C++ file 'KdTree_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "KdTree_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KdTree_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_KdTreeBuilder_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_KdTreeBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_KdTreeBuilder_t qt_meta_stringdata_osg__QReflect_KdTreeBuilder = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_KdTreeBuilder"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "clone"
QT_MOC_LITERAL(4, 47, 28), // "osg::QReflect_KdTreeBuilder*"
QT_MOC_LITERAL(5, 76, 5), // "apply"
QT_MOC_LITERAL(6, 82, 23) // "osg::QReflect_Geometry*"

    },
    "osg::QReflect_KdTreeBuilder\0updateModel\0"
    "\0clone\0osg::QReflect_KdTreeBuilder*\0"
    "apply\0osg::QReflect_Geometry*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_KdTreeBuilder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x02 /* Public */,
       5,    1,   31,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void osg::QReflect_KdTreeBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_KdTreeBuilder *_t = static_cast<QReflect_KdTreeBuilder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { osg::QReflect_KdTreeBuilder* _r = _t->clone();
            if (_a[0]) *reinterpret_cast< osg::QReflect_KdTreeBuilder**>(_a[0]) = _r; }  break;
        case 2: _t->apply((*reinterpret_cast< osg::QReflect_Geometry*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_KdTreeBuilder::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_KdTreeBuilder.data,
      qt_meta_data_osg__QReflect_KdTreeBuilder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_KdTreeBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_KdTreeBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_KdTreeBuilder.stringdata0))
        return static_cast<void*>(const_cast< QReflect_KdTreeBuilder*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_KdTreeBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_KdTree_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_KdTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_KdTree_t qt_meta_stringdata_osg__QReflect_KdTree = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_KdTree"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "osg::QReflect_KdTree\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_KdTree[] = {

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

void osg::QReflect_KdTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_KdTree *_t = static_cast<QReflect_KdTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_KdTree::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_KdTree.data,
      qt_meta_data_osg__QReflect_KdTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_KdTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_KdTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_KdTree.stringdata0))
        return static_cast<void*>(const_cast< QReflect_KdTree*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_KdTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
