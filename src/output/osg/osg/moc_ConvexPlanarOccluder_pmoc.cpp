/****************************************************************************
** Meta object code from reading C++ file 'ConvexPlanarOccluder_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ConvexPlanarOccluder_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConvexPlanarOccluder_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ConvexPlanarOccluder_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ConvexPlanarOccluder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ConvexPlanarOccluder_t qt_meta_stringdata_osg__QReflect_ConvexPlanarOccluder = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osg::QReflect_ConvexPlanarOcc..."
QT_MOC_LITERAL(1, 35, 11), // "updateModel"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "addHole"
QT_MOC_LITERAL(4, 56, 34), // "osg::QReflect_ConvexPlanarPol..."
QT_MOC_LITERAL(5, 91, 11) // "setOccluder"

    },
    "osg::QReflect_ConvexPlanarOccluder\0"
    "updateModel\0\0addHole\0"
    "osg::QReflect_ConvexPlanarPolygon*\0"
    "setOccluder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ConvexPlanarOccluder[] = {

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
       3,    1,   30,    2, 0x02 /* Public */,
       5,    1,   33,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_ConvexPlanarOccluder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ConvexPlanarOccluder *_t = static_cast<QReflect_ConvexPlanarOccluder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->addHole((*reinterpret_cast< osg::QReflect_ConvexPlanarPolygon*(*)>(_a[1]))); break;
        case 2: _t->setOccluder((*reinterpret_cast< osg::QReflect_ConvexPlanarPolygon*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ConvexPlanarOccluder::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ConvexPlanarOccluder.data,
      qt_meta_data_osg__QReflect_ConvexPlanarOccluder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ConvexPlanarOccluder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ConvexPlanarOccluder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ConvexPlanarOccluder.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ConvexPlanarOccluder*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ConvexPlanarOccluder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
