/****************************************************************************
** Meta object code from reading C++ file 'LineSegment_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LineSegment_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineSegment_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_LineSegment_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_LineSegment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_LineSegment_t qt_meta_stringdata_osg__QReflect_LineSegment = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_LineSegment"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "intersect"
QT_MOC_LITERAL(4, 49, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(5, 70, 7), // "double&"
QT_MOC_LITERAL(6, 78, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(7, 99, 6), // "float&"
QT_MOC_LITERAL(8, 106, 5), // "valid"
QT_MOC_LITERAL(9, 112, 4), // "mult"
QT_MOC_LITERAL(10, 117, 26), // "osg::QReflect_LineSegment*"
QT_MOC_LITERAL(11, 144, 22) // "osg::QReflect_Matrixd*"

    },
    "osg::QReflect_LineSegment\0updateModel\0"
    "\0intersect\0osg::QReflect_Vec3d*\0double&\0"
    "osg::QReflect_Vec3f*\0float&\0valid\0"
    "mult\0osg::QReflect_LineSegment*\0"
    "osg::QReflect_Matrixd*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_LineSegment[] = {

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
       3,    4,   45,    2, 0x02 /* Public */,
       3,    4,   54,    2, 0x02 /* Public */,
       8,    0,   63,    2, 0x02 /* Public */,
       9,    2,   64,    2, 0x02 /* Public */,
       9,    2,   69,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,    2,
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 11,    2,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 10,    2,    2,

       0        // eod
};

void osg::QReflect_LineSegment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_LineSegment *_t = static_cast<QReflect_LineSegment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->intersect((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->intersect((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->valid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->mult((*reinterpret_cast< osg::QReflect_LineSegment*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[2]))); break;
        case 5: _t->mult((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_LineSegment*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_LineSegment* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_LineSegment* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_LineSegment::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_LineSegment.data,
      qt_meta_data_osg__QReflect_LineSegment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_LineSegment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_LineSegment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_LineSegment.stringdata0))
        return static_cast<void*>(const_cast< QReflect_LineSegment*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_LineSegment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
