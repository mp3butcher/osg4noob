/****************************************************************************
** Meta object code from reading C++ file 'CullFace_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CullFace_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CullFace_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_CullFace_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_CullFace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_CullFace_t qt_meta_stringdata_osg__QReflect_CullFace = {
    {
QT_MOC_LITERAL(0, 0, 22), // "osg::QReflect_CullFace"
QT_MOC_LITERAL(1, 23, 11), // "updateModel"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "compare"
QT_MOC_LITERAL(4, 44, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 74, 7), // "getMode"
QT_MOC_LITERAL(6, 82, 28), // "osg::QReflect_CullFace::Mode"
QT_MOC_LITERAL(7, 111, 7), // "setMode"
QT_MOC_LITERAL(8, 119, 4), // "Mode"
QT_MOC_LITERAL(9, 124, 5), // "FRONT"
QT_MOC_LITERAL(10, 130, 4), // "BACK"
QT_MOC_LITERAL(11, 135, 14) // "FRONT_AND_BACK"

    },
    "osg::QReflect_CullFace\0updateModel\0\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getMode\0osg::QReflect_CullFace::Mode\0"
    "setMode\0Mode\0FRONT\0BACK\0FRONT_AND_BACK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_CullFace[] = {

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
       8, 0x0,    3,   46,

 // enum data: key, value
       9, uint(osg::QReflect_CullFace::FRONT),
      10, uint(osg::QReflect_CullFace::BACK),
      11, uint(osg::QReflect_CullFace::FRONT_AND_BACK),

       0        // eod
};

void osg::QReflect_CullFace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CullFace *_t = static_cast<QReflect_CullFace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_CullFace::Mode _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_CullFace::Mode*>(_a[0]) = _r; }  break;
        case 3: _t->setMode((*reinterpret_cast< osg::QReflect_CullFace::Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_CullFace::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_CullFace.data,
      qt_meta_data_osg__QReflect_CullFace,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_CullFace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_CullFace::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_CullFace.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CullFace*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_CullFace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
