/****************************************************************************
** Meta object code from reading C++ file 'Scissor_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Scissor_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scissor_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Scissor_t {
    QByteArrayData data[12];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Scissor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Scissor_t qt_meta_stringdata_osg__QReflect_Scissor = {
    {
QT_MOC_LITERAL(0, 0, 21), // "osg::QReflect_Scissor"
QT_MOC_LITERAL(1, 22, 11), // "updateModel"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "compare"
QT_MOC_LITERAL(4, 43, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 73, 6), // "height"
QT_MOC_LITERAL(6, 80, 5), // "width"
QT_MOC_LITERAL(7, 86, 1), // "x"
QT_MOC_LITERAL(8, 88, 1), // "y"
QT_MOC_LITERAL(9, 90, 10), // "getScissor"
QT_MOC_LITERAL(10, 101, 4), // "int&"
QT_MOC_LITERAL(11, 106, 10) // "setScissor"

    },
    "osg::QReflect_Scissor\0updateModel\0\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "height\0width\0x\0y\0getScissor\0int&\0"
    "setScissor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Scissor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x02 /* Public */,
       5,    0,   78,    2, 0x02 /* Public */,
       6,    0,   79,    2, 0x02 /* Public */,
       7,    0,   80,    2, 0x02 /* Public */,
       8,    0,   81,    2, 0x02 /* Public */,
       5,    0,   82,    2, 0x02 /* Public */,
       6,    0,   83,    2, 0x02 /* Public */,
       7,    0,   84,    2, 0x02 /* Public */,
       8,    0,   85,    2, 0x02 /* Public */,
       9,    4,   86,    2, 0x02 /* Public */,
      11,    4,   95,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,

       0        // eod
};

void osg::QReflect_Scissor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Scissor *_t = static_cast<QReflect_Scissor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->height();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->width();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->x();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->y();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->height(); break;
        case 7: _t->width(); break;
        case 8: _t->x(); break;
        case 9: _t->y(); break;
        case 10: _t->getScissor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 11: _t->setScissor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_Scissor::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Scissor.data,
      qt_meta_data_osg__QReflect_Scissor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Scissor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Scissor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Scissor.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Scissor*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Scissor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
