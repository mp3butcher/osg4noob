/****************************************************************************
** Meta object code from reading C++ file 'CopyOp_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CopyOp_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CopyOp_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_CopyOp_t {
    QByteArrayData data[21];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_CopyOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_CopyOp_t qt_meta_stringdata_osg__QReflect_CopyOp = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_CopyOp"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "getCopyFlags"
QT_MOC_LITERAL(4, 47, 12), // "setCopyFlags"
QT_MOC_LITERAL(5, 60, 7), // "Options"
QT_MOC_LITERAL(6, 68, 12), // "SHALLOW_COPY"
QT_MOC_LITERAL(7, 81, 17), // "DEEP_COPY_OBJECTS"
QT_MOC_LITERAL(8, 99, 15), // "DEEP_COPY_NODES"
QT_MOC_LITERAL(9, 115, 19), // "DEEP_COPY_DRAWABLES"
QT_MOC_LITERAL(10, 135, 19), // "DEEP_COPY_STATESETS"
QT_MOC_LITERAL(11, 155, 25), // "DEEP_COPY_STATEATTRIBUTES"
QT_MOC_LITERAL(12, 181, 18), // "DEEP_COPY_TEXTURES"
QT_MOC_LITERAL(13, 200, 16), // "DEEP_COPY_IMAGES"
QT_MOC_LITERAL(14, 217, 16), // "DEEP_COPY_ARRAYS"
QT_MOC_LITERAL(15, 234, 20), // "DEEP_COPY_PRIMITIVES"
QT_MOC_LITERAL(16, 255, 16), // "DEEP_COPY_SHAPES"
QT_MOC_LITERAL(17, 272, 18), // "DEEP_COPY_UNIFORMS"
QT_MOC_LITERAL(18, 291, 19), // "DEEP_COPY_CALLBACKS"
QT_MOC_LITERAL(19, 311, 18), // "DEEP_COPY_USERDATA"
QT_MOC_LITERAL(20, 330, 13) // "DEEP_COPY_ALL"

    },
    "osg::QReflect_CopyOp\0updateModel\0\0"
    "getCopyFlags\0setCopyFlags\0Options\0"
    "SHALLOW_COPY\0DEEP_COPY_OBJECTS\0"
    "DEEP_COPY_NODES\0DEEP_COPY_DRAWABLES\0"
    "DEEP_COPY_STATESETS\0DEEP_COPY_STATEATTRIBUTES\0"
    "DEEP_COPY_TEXTURES\0DEEP_COPY_IMAGES\0"
    "DEEP_COPY_ARRAYS\0DEEP_COPY_PRIMITIVES\0"
    "DEEP_COPY_SHAPES\0DEEP_COPY_UNIFORMS\0"
    "DEEP_COPY_CALLBACKS\0DEEP_COPY_USERDATA\0"
    "DEEP_COPY_ALL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_CopyOp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x02 /* Public */,
       4,    1,   31,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,    2,

 // enums: name, flags, count, data
       5, 0x0,   15,   38,

 // enum data: key, value
       6, uint(osg::QReflect_CopyOp::SHALLOW_COPY),
       7, uint(osg::QReflect_CopyOp::DEEP_COPY_OBJECTS),
       8, uint(osg::QReflect_CopyOp::DEEP_COPY_NODES),
       9, uint(osg::QReflect_CopyOp::DEEP_COPY_DRAWABLES),
      10, uint(osg::QReflect_CopyOp::DEEP_COPY_STATESETS),
      11, uint(osg::QReflect_CopyOp::DEEP_COPY_STATEATTRIBUTES),
      12, uint(osg::QReflect_CopyOp::DEEP_COPY_TEXTURES),
      13, uint(osg::QReflect_CopyOp::DEEP_COPY_IMAGES),
      14, uint(osg::QReflect_CopyOp::DEEP_COPY_ARRAYS),
      15, uint(osg::QReflect_CopyOp::DEEP_COPY_PRIMITIVES),
      16, uint(osg::QReflect_CopyOp::DEEP_COPY_SHAPES),
      17, uint(osg::QReflect_CopyOp::DEEP_COPY_UNIFORMS),
      18, uint(osg::QReflect_CopyOp::DEEP_COPY_CALLBACKS),
      19, uint(osg::QReflect_CopyOp::DEEP_COPY_USERDATA),
      20, uint(osg::QReflect_CopyOp::DEEP_COPY_ALL),

       0        // eod
};

void osg::QReflect_CopyOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CopyOp *_t = static_cast<QReflect_CopyOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { uint _r = _t->getCopyFlags();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 2: _t->setCopyFlags((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_CopyOp::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_CopyOp.data,
      qt_meta_data_osg__QReflect_CopyOp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_CopyOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_CopyOp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_CopyOp.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CopyOp*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_CopyOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
