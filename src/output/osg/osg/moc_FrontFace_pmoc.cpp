/****************************************************************************
** Meta object code from reading C++ file 'FrontFace_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FrontFace_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrontFace_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_FrontFace_t {
    QByteArrayData data[11];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_FrontFace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_FrontFace_t qt_meta_stringdata_osg__QReflect_FrontFace = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_FrontFace"
QT_MOC_LITERAL(1, 24, 11), // "updateModel"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "compare"
QT_MOC_LITERAL(4, 45, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 75, 7), // "getMode"
QT_MOC_LITERAL(6, 83, 29), // "osg::QReflect_FrontFace::Mode"
QT_MOC_LITERAL(7, 113, 7), // "setMode"
QT_MOC_LITERAL(8, 121, 4), // "Mode"
QT_MOC_LITERAL(9, 126, 9), // "CLOCKWISE"
QT_MOC_LITERAL(10, 136, 17) // "COUNTER_CLOCKWISE"

    },
    "osg::QReflect_FrontFace\0updateModel\0"
    "\0compare\0osg::QReflect_StateAttribute*\0"
    "getMode\0osg::QReflect_FrontFace::Mode\0"
    "setMode\0Mode\0CLOCKWISE\0COUNTER_CLOCKWISE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_FrontFace[] = {

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
       8, 0x0,    2,   46,

 // enum data: key, value
       9, uint(osg::QReflect_FrontFace::CLOCKWISE),
      10, uint(osg::QReflect_FrontFace::COUNTER_CLOCKWISE),

       0        // eod
};

void osg::QReflect_FrontFace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FrontFace *_t = static_cast<QReflect_FrontFace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_FrontFace::Mode _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_FrontFace::Mode*>(_a[0]) = _r; }  break;
        case 3: _t->setMode((*reinterpret_cast< osg::QReflect_FrontFace::Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_FrontFace::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_FrontFace.data,
      qt_meta_data_osg__QReflect_FrontFace,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_FrontFace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_FrontFace::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_FrontFace.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FrontFace*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_FrontFace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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