/****************************************************************************
** Meta object code from reading C++ file 'LogicOp_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LogicOp_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogicOp_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_LogicOp_t {
    QByteArrayData data[25];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_LogicOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_LogicOp_t qt_meta_stringdata_osg__QReflect_LogicOp = {
    {
QT_MOC_LITERAL(0, 0, 21), // "osg::QReflect_LogicOp"
QT_MOC_LITERAL(1, 22, 11), // "updateModel"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "compare"
QT_MOC_LITERAL(4, 43, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 73, 9), // "getOpcode"
QT_MOC_LITERAL(6, 83, 29), // "osg::QReflect_LogicOp::Opcode"
QT_MOC_LITERAL(7, 113, 9), // "setOpcode"
QT_MOC_LITERAL(8, 123, 6), // "Opcode"
QT_MOC_LITERAL(9, 130, 5), // "CLEAR"
QT_MOC_LITERAL(10, 136, 3), // "SET"
QT_MOC_LITERAL(11, 140, 4), // "COPY"
QT_MOC_LITERAL(12, 145, 13), // "COPY_INVERTED"
QT_MOC_LITERAL(13, 159, 4), // "NOOP"
QT_MOC_LITERAL(14, 164, 6), // "INVERT"
QT_MOC_LITERAL(15, 171, 3), // "AND"
QT_MOC_LITERAL(16, 175, 4), // "NAND"
QT_MOC_LITERAL(17, 180, 2), // "OR"
QT_MOC_LITERAL(18, 183, 3), // "NOR"
QT_MOC_LITERAL(19, 187, 3), // "XOR"
QT_MOC_LITERAL(20, 191, 5), // "EQUIV"
QT_MOC_LITERAL(21, 197, 11), // "AND_REVERSE"
QT_MOC_LITERAL(22, 209, 12), // "AND_INVERTED"
QT_MOC_LITERAL(23, 222, 10), // "OR_REVERSE"
QT_MOC_LITERAL(24, 233, 11) // "OR_INVERTED"

    },
    "osg::QReflect_LogicOp\0updateModel\0\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getOpcode\0osg::QReflect_LogicOp::Opcode\0"
    "setOpcode\0Opcode\0CLEAR\0SET\0COPY\0"
    "COPY_INVERTED\0NOOP\0INVERT\0AND\0NAND\0"
    "OR\0NOR\0XOR\0EQUIV\0AND_REVERSE\0AND_INVERTED\0"
    "OR_REVERSE\0OR_INVERTED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_LogicOp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   42, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x02 /* Public */,
       5,    0,   38,    2, 0x02 /* Public */,
       7,    1,   39,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    2,

 // enums: name, flags, count, data
       8, 0x0,   16,   46,

 // enum data: key, value
       9, uint(osg::QReflect_LogicOp::CLEAR),
      10, uint(osg::QReflect_LogicOp::SET),
      11, uint(osg::QReflect_LogicOp::COPY),
      12, uint(osg::QReflect_LogicOp::COPY_INVERTED),
      13, uint(osg::QReflect_LogicOp::NOOP),
      14, uint(osg::QReflect_LogicOp::INVERT),
      15, uint(osg::QReflect_LogicOp::AND),
      16, uint(osg::QReflect_LogicOp::NAND),
      17, uint(osg::QReflect_LogicOp::OR),
      18, uint(osg::QReflect_LogicOp::NOR),
      19, uint(osg::QReflect_LogicOp::XOR),
      20, uint(osg::QReflect_LogicOp::EQUIV),
      21, uint(osg::QReflect_LogicOp::AND_REVERSE),
      22, uint(osg::QReflect_LogicOp::AND_INVERTED),
      23, uint(osg::QReflect_LogicOp::OR_REVERSE),
      24, uint(osg::QReflect_LogicOp::OR_INVERTED),

       0        // eod
};

void osg::QReflect_LogicOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_LogicOp *_t = static_cast<QReflect_LogicOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_LogicOp::Opcode _r = _t->getOpcode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_LogicOp::Opcode*>(_a[0]) = _r; }  break;
        case 3: _t->setOpcode((*reinterpret_cast< osg::QReflect_LogicOp::Opcode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_LogicOp::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_LogicOp.data,
      qt_meta_data_osg__QReflect_LogicOp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_LogicOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_LogicOp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_LogicOp.stringdata0))
        return static_cast<void*>(const_cast< QReflect_LogicOp*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_LogicOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
