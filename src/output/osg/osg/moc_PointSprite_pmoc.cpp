/****************************************************************************
** Meta object code from reading C++ file 'PointSprite_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PointSprite_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PointSprite_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_PointSprite_t {
    QByteArrayData data[12];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_PointSprite_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_PointSprite_t qt_meta_stringdata_osg__QReflect_PointSprite = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_PointSprite"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "isTextureAttribute"
QT_MOC_LITERAL(4, 58, 7), // "compare"
QT_MOC_LITERAL(5, 66, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 96, 18), // "getCoordOriginMode"
QT_MOC_LITERAL(7, 115, 42), // "osg::QReflect_PointSprite::Co..."
QT_MOC_LITERAL(8, 158, 18), // "setCoordOriginMode"
QT_MOC_LITERAL(9, 177, 15), // "CoordOriginMode"
QT_MOC_LITERAL(10, 193, 10), // "UPPER_LEFT"
QT_MOC_LITERAL(11, 204, 10) // "LOWER_LEFT"

    },
    "osg::QReflect_PointSprite\0updateModel\0"
    "\0isTextureAttribute\0compare\0"
    "osg::QReflect_StateAttribute*\0"
    "getCoordOriginMode\0"
    "osg::QReflect_PointSprite::CoordOriginMode\0"
    "setCoordOriginMode\0CoordOriginMode\0"
    "UPPER_LEFT\0LOWER_LEFT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_PointSprite[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x02 /* Public */,
       4,    1,   41,    2, 0x02 /* Public */,
       6,    0,   44,    2, 0x02 /* Public */,
       8,    1,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 5,    2,
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 7,    2,

 // enums: name, flags, count, data
       9, 0x0,    2,   52,

 // enum data: key, value
      10, uint(osg::QReflect_PointSprite::UPPER_LEFT),
      11, uint(osg::QReflect_PointSprite::LOWER_LEFT),

       0        // eod
};

void osg::QReflect_PointSprite::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_PointSprite *_t = static_cast<QReflect_PointSprite *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isTextureAttribute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_PointSprite::CoordOriginMode _r = _t->getCoordOriginMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_PointSprite::CoordOriginMode*>(_a[0]) = _r; }  break;
        case 4: _t->setCoordOriginMode((*reinterpret_cast< osg::QReflect_PointSprite::CoordOriginMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_PointSprite::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_PointSprite.data,
      qt_meta_data_osg__QReflect_PointSprite,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_PointSprite::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_PointSprite::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_PointSprite.stringdata0))
        return static_cast<void*>(const_cast< QReflect_PointSprite*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_PointSprite::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
