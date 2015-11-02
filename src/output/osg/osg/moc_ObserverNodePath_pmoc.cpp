/****************************************************************************
** Meta object code from reading C++ file 'ObserverNodePath_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ObserverNodePath_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObserverNodePath_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ObserverNodePath_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ObserverNodePath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ObserverNodePath_t qt_meta_stringdata_osg__QReflect_ObserverNodePath = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osg::QReflect_ObserverNodePath"
QT_MOC_LITERAL(1, 31, 11), // "updateModel"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "empty"
QT_MOC_LITERAL(4, 50, 13), // "clearNodePath"
QT_MOC_LITERAL(5, 64, 13), // "setNodePathTo"
QT_MOC_LITERAL(6, 78, 19) // "osg::QReflect_Node*"

    },
    "osg::QReflect_ObserverNodePath\0"
    "updateModel\0\0empty\0clearNodePath\0"
    "setNodePathTo\0osg::QReflect_Node*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ObserverNodePath[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x02 /* Public */,
       4,    0,   36,    2, 0x02 /* Public */,
       5,    1,   37,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void osg::QReflect_ObserverNodePath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ObserverNodePath *_t = static_cast<QReflect_ObserverNodePath *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->empty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->clearNodePath(); break;
        case 3: _t->setNodePathTo((*reinterpret_cast< osg::QReflect_Node*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ObserverNodePath::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ObserverNodePath.data,
      qt_meta_data_osg__QReflect_ObserverNodePath,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ObserverNodePath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ObserverNodePath::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ObserverNodePath.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ObserverNodePath*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ObserverNodePath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
