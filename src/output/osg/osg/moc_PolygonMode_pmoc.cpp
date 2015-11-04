/****************************************************************************
** Meta object code from reading C++ file 'PolygonMode_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PolygonMode_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolygonMode_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_PolygonMode_t {
    QByteArrayData data[18];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_PolygonMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_PolygonMode_t qt_meta_stringdata_osg__QReflect_PolygonMode = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_PolygonMode"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 15), // "getFrontAndBack"
QT_MOC_LITERAL(4, 55, 7), // "compare"
QT_MOC_LITERAL(5, 63, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 93, 7), // "getMode"
QT_MOC_LITERAL(7, 101, 31), // "osg::QReflect_PolygonMode::Mode"
QT_MOC_LITERAL(8, 133, 31), // "osg::QReflect_PolygonMode::Face"
QT_MOC_LITERAL(9, 165, 7), // "setMode"
QT_MOC_LITERAL(10, 173, 4), // "Face"
QT_MOC_LITERAL(11, 178, 14), // "FRONT_AND_BACK"
QT_MOC_LITERAL(12, 193, 5), // "FRONT"
QT_MOC_LITERAL(13, 199, 4), // "BACK"
QT_MOC_LITERAL(14, 204, 4), // "Mode"
QT_MOC_LITERAL(15, 209, 5), // "POINT"
QT_MOC_LITERAL(16, 215, 4), // "LINE"
QT_MOC_LITERAL(17, 220, 4) // "FILL"

    },
    "osg::QReflect_PolygonMode\0updateModel\0"
    "\0getFrontAndBack\0compare\0"
    "osg::QReflect_StateAttribute*\0getMode\0"
    "osg::QReflect_PolygonMode::Mode\0"
    "osg::QReflect_PolygonMode::Face\0setMode\0"
    "Face\0FRONT_AND_BACK\0FRONT\0BACK\0Mode\0"
    "POINT\0LINE\0FILL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_PolygonMode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x02 /* Public */,
       4,    1,   41,    2, 0x02 /* Public */,
       6,    1,   44,    2, 0x02 /* Public */,
       9,    2,   47,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 5,    2,
    0x80000000 | 7, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 7,    2,    2,

 // enums: name, flags, count, data
      10, 0x0,    3,   60,
      14, 0x0,    3,   66,

 // enum data: key, value
      11, uint(osg::QReflect_PolygonMode::FRONT_AND_BACK),
      12, uint(osg::QReflect_PolygonMode::FRONT),
      13, uint(osg::QReflect_PolygonMode::BACK),
      15, uint(osg::QReflect_PolygonMode::POINT),
      16, uint(osg::QReflect_PolygonMode::LINE),
      17, uint(osg::QReflect_PolygonMode::FILL),

       0        // eod
};

void osg::QReflect_PolygonMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_PolygonMode *_t = static_cast<QReflect_PolygonMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->getFrontAndBack();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_PolygonMode::Mode _r = _t->getMode((*reinterpret_cast< osg::QReflect_PolygonMode::Face(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_PolygonMode::Mode*>(_a[0]) = _r; }  break;
        case 4: _t->setMode((*reinterpret_cast< osg::QReflect_PolygonMode::Face(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_PolygonMode::Mode(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_PolygonMode::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_PolygonMode.data,
      qt_meta_data_osg__QReflect_PolygonMode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_PolygonMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_PolygonMode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_PolygonMode.stringdata0))
        return static_cast<void*>(const_cast< QReflect_PolygonMode*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_PolygonMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
