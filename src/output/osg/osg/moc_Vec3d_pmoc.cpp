/****************************************************************************
** Meta object code from reading C++ file 'Vec3d_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Vec3d_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vec3d_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Vec3d_t {
    QByteArrayData data[16];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Vec3d_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Vec3d_t qt_meta_stringdata_osg__QReflect_Vec3d = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_Vec3d"
QT_MOC_LITERAL(1, 20, 11), // "updateModel"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "isNaN"
QT_MOC_LITERAL(4, 39, 5), // "valid"
QT_MOC_LITERAL(5, 45, 6), // "length"
QT_MOC_LITERAL(6, 52, 7), // "length2"
QT_MOC_LITERAL(7, 60, 9), // "normalize"
QT_MOC_LITERAL(8, 70, 1), // "x"
QT_MOC_LITERAL(9, 72, 1), // "y"
QT_MOC_LITERAL(10, 74, 1), // "z"
QT_MOC_LITERAL(11, 76, 3), // "ptr"
QT_MOC_LITERAL(12, 80, 7), // "double*"
QT_MOC_LITERAL(13, 88, 13), // "const double*"
QT_MOC_LITERAL(14, 102, 3), // "set"
QT_MOC_LITERAL(15, 106, 20) // "osg::QReflect_Vec3d*"

    },
    "osg::QReflect_Vec3d\0updateModel\0\0isNaN\0"
    "valid\0length\0length2\0normalize\0x\0y\0z\0"
    "ptr\0double*\0const double*\0set\0"
    "osg::QReflect_Vec3d*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Vec3d[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   95,    2, 0x02 /* Public */,
       4,    0,   96,    2, 0x02 /* Public */,
       5,    0,   97,    2, 0x02 /* Public */,
       6,    0,   98,    2, 0x02 /* Public */,
       7,    0,   99,    2, 0x02 /* Public */,
       8,    0,  100,    2, 0x02 /* Public */,
       9,    0,  101,    2, 0x02 /* Public */,
      10,    0,  102,    2, 0x02 /* Public */,
       8,    0,  103,    2, 0x02 /* Public */,
       9,    0,  104,    2, 0x02 /* Public */,
      10,    0,  105,    2, 0x02 /* Public */,
      11,    0,  106,    2, 0x02 /* Public */,
      11,    0,  107,    2, 0x02 /* Public */,
      14,    3,  108,    2, 0x02 /* Public */,
      14,    1,  115,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 12,
    0x80000000 | 13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

void osg::QReflect_Vec3d::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Vec3d *_t = static_cast<QReflect_Vec3d *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isNaN();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->valid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { double _r = _t->length();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 4: { double _r = _t->length2();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->normalize();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { double _r = _t->x();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { double _r = _t->y();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->z();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: _t->x(); break;
        case 10: _t->y(); break;
        case 11: _t->z(); break;
        case 12: { double* _r = _t->ptr();
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = _r; }  break;
        case 13: { const double* _r = _t->ptr();
            if (_a[0]) *reinterpret_cast< const double**>(_a[0]) = _r; }  break;
        case 14: _t->set((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 15: _t->set((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Vec3d* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_Vec3d::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Vec3d.data,
      qt_meta_data_osg__QReflect_Vec3d,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Vec3d::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Vec3d::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Vec3d.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Vec3d*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Vec3d::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
