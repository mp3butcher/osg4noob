/****************************************************************************
** Meta object code from reading C++ file 'BlendFunc_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BlendFunc_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlendFunc_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_BlendFunc_t {
    QByteArrayData data[21];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_BlendFunc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_BlendFunc_t qt_meta_stringdata_osg__QReflect_BlendFunc = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_BlendFunc"
QT_MOC_LITERAL(1, 24, 11), // "updateModel"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "compare"
QT_MOC_LITERAL(4, 45, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 75, 13), // "BlendFuncMode"
QT_MOC_LITERAL(6, 89, 9), // "DST_ALPHA"
QT_MOC_LITERAL(7, 99, 9), // "DST_COLOR"
QT_MOC_LITERAL(8, 109, 3), // "ONE"
QT_MOC_LITERAL(9, 113, 19), // "ONE_MINUS_DST_ALPHA"
QT_MOC_LITERAL(10, 133, 19), // "ONE_MINUS_DST_COLOR"
QT_MOC_LITERAL(11, 153, 19), // "ONE_MINUS_SRC_ALPHA"
QT_MOC_LITERAL(12, 173, 19), // "ONE_MINUS_SRC_COLOR"
QT_MOC_LITERAL(13, 193, 9), // "SRC_ALPHA"
QT_MOC_LITERAL(14, 203, 18), // "SRC_ALPHA_SATURATE"
QT_MOC_LITERAL(15, 222, 9), // "SRC_COLOR"
QT_MOC_LITERAL(16, 232, 14), // "CONSTANT_COLOR"
QT_MOC_LITERAL(17, 247, 24), // "ONE_MINUS_CONSTANT_COLOR"
QT_MOC_LITERAL(18, 272, 14), // "CONSTANT_ALPHA"
QT_MOC_LITERAL(19, 287, 24), // "ONE_MINUS_CONSTANT_ALPHA"
QT_MOC_LITERAL(20, 312, 4) // "ZERO"

    },
    "osg::QReflect_BlendFunc\0updateModel\0"
    "\0compare\0osg::QReflect_StateAttribute*\0"
    "BlendFuncMode\0DST_ALPHA\0DST_COLOR\0ONE\0"
    "ONE_MINUS_DST_ALPHA\0ONE_MINUS_DST_COLOR\0"
    "ONE_MINUS_SRC_ALPHA\0ONE_MINUS_SRC_COLOR\0"
    "SRC_ALPHA\0SRC_ALPHA_SATURATE\0SRC_COLOR\0"
    "CONSTANT_COLOR\0ONE_MINUS_CONSTANT_COLOR\0"
    "CONSTANT_ALPHA\0ONE_MINUS_CONSTANT_ALPHA\0"
    "ZERO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_BlendFunc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,

 // enums: name, flags, count, data
       5, 0x0,   15,   32,

 // enum data: key, value
       6, uint(osg::QReflect_BlendFunc::DST_ALPHA),
       7, uint(osg::QReflect_BlendFunc::DST_COLOR),
       8, uint(osg::QReflect_BlendFunc::ONE),
       9, uint(osg::QReflect_BlendFunc::ONE_MINUS_DST_ALPHA),
      10, uint(osg::QReflect_BlendFunc::ONE_MINUS_DST_COLOR),
      11, uint(osg::QReflect_BlendFunc::ONE_MINUS_SRC_ALPHA),
      12, uint(osg::QReflect_BlendFunc::ONE_MINUS_SRC_COLOR),
      13, uint(osg::QReflect_BlendFunc::SRC_ALPHA),
      14, uint(osg::QReflect_BlendFunc::SRC_ALPHA_SATURATE),
      15, uint(osg::QReflect_BlendFunc::SRC_COLOR),
      16, uint(osg::QReflect_BlendFunc::CONSTANT_COLOR),
      17, uint(osg::QReflect_BlendFunc::ONE_MINUS_CONSTANT_COLOR),
      18, uint(osg::QReflect_BlendFunc::CONSTANT_ALPHA),
      19, uint(osg::QReflect_BlendFunc::ONE_MINUS_CONSTANT_ALPHA),
      20, uint(osg::QReflect_BlendFunc::ZERO),

       0        // eod
};

void osg::QReflect_BlendFunc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BlendFunc *_t = static_cast<QReflect_BlendFunc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_BlendFunc::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_BlendFunc.data,
      qt_meta_data_osg__QReflect_BlendFunc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_BlendFunc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_BlendFunc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_BlendFunc.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BlendFunc*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_BlendFunc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
