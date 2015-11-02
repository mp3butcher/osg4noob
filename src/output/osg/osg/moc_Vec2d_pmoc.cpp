/****************************************************************************
** Meta object code from reading C++ file 'Vec2d_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Vec2d_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vec2d_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Vec2d_t {
    QByteArrayData data[14];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Vec2d_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Vec2d_t qt_meta_stringdata_osg__QReflect_Vec2d = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_Vec2d"
QT_MOC_LITERAL(1, 20, 11), // "updateModel"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "isNaN"
QT_MOC_LITERAL(4, 39, 5), // "valid"
QT_MOC_LITERAL(5, 45, 6), // "length"
QT_MOC_LITERAL(6, 52, 7), // "length2"
QT_MOC_LITERAL(7, 60, 9), // "normalize"
QT_MOC_LITERAL(8, 70, 1), // "x"
QT_MOC_LITERAL(9, 72, 1), // "y"
QT_MOC_LITERAL(10, 74, 3), // "ptr"
QT_MOC_LITERAL(11, 78, 7), // "double*"
QT_MOC_LITERAL(12, 86, 13), // "const double*"
QT_MOC_LITERAL(13, 100, 3) // "set"

    },
    "osg::QReflect_Vec2d\0updateModel\0\0isNaN\0"
    "valid\0length\0length2\0normalize\0x\0y\0"
    "ptr\0double*\0const double*\0set"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Vec2d[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x02 /* Public */,
       4,    0,   81,    2, 0x02 /* Public */,
       5,    0,   82,    2, 0x02 /* Public */,
       6,    0,   83,    2, 0x02 /* Public */,
       7,    0,   84,    2, 0x02 /* Public */,
       8,    0,   85,    2, 0x02 /* Public */,
       9,    0,   86,    2, 0x02 /* Public */,
       8,    0,   87,    2, 0x02 /* Public */,
       9,    0,   88,    2, 0x02 /* Public */,
      10,    0,   89,    2, 0x02 /* Public */,
      10,    0,   90,    2, 0x02 /* Public */,
      13,    2,   91,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 11,
    0x80000000 | 12,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    2,    2,

       0        // eod
};

void osg::QReflect_Vec2d::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Vec2d *_t = static_cast<QReflect_Vec2d *>(_o);
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
        case 8: _t->x(); break;
        case 9: _t->y(); break;
        case 10: { double* _r = _t->ptr();
            if (_a[0]) *reinterpret_cast< double**>(_a[0]) = _r; }  break;
        case 11: { const double* _r = _t->ptr();
            if (_a[0]) *reinterpret_cast< const double**>(_a[0]) = _r; }  break;
        case 12: _t->set((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_Vec2d::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Vec2d.data,
      qt_meta_data_osg__QReflect_Vec2d,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Vec2d::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Vec2d::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Vec2d.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Vec2d*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Vec2d::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
