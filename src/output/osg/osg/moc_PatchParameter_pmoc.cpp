/****************************************************************************
** Meta object code from reading C++ file 'PatchParameter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PatchParameter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PatchParameter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_PatchParameter_t {
    QByteArrayData data[12];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_PatchParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_PatchParameter_t qt_meta_stringdata_osg__QReflect_PatchParameter = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osg::QReflect_PatchParameter"
QT_MOC_LITERAL(1, 29, 11), // "updateModel"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "getVertices"
QT_MOC_LITERAL(4, 54, 5), // "GLint"
QT_MOC_LITERAL(5, 60, 7), // "compare"
QT_MOC_LITERAL(6, 68, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 98, 25), // "setPatchDefaultInnerLevel"
QT_MOC_LITERAL(8, 124, 20), // "osg::QReflect_Vec2f*"
QT_MOC_LITERAL(9, 145, 25), // "setPatchDefaultOuterLevel"
QT_MOC_LITERAL(10, 171, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(11, 192, 11) // "setVertices"

    },
    "osg::QReflect_PatchParameter\0updateModel\0"
    "\0getVertices\0GLint\0compare\0"
    "osg::QReflect_StateAttribute*\0"
    "setPatchDefaultInnerLevel\0"
    "osg::QReflect_Vec2f*\0setPatchDefaultOuterLevel\0"
    "osg::QReflect_Vec4f*\0setVertices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_PatchParameter[] = {

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
       3,    0,   45,    2, 0x02 /* Public */,
       5,    1,   46,    2, 0x02 /* Public */,
       7,    1,   49,    2, 0x02 /* Public */,
       9,    1,   52,    2, 0x02 /* Public */,
      11,    1,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_PatchParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_PatchParameter *_t = static_cast<QReflect_PatchParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { GLint _r = _t->getVertices();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->setPatchDefaultInnerLevel((*reinterpret_cast< osg::QReflect_Vec2f*(*)>(_a[1]))); break;
        case 4: _t->setPatchDefaultOuterLevel((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 5: _t->setVertices((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_PatchParameter::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_PatchParameter.data,
      qt_meta_data_osg__QReflect_PatchParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_PatchParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_PatchParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_PatchParameter.stringdata0))
        return static_cast<void*>(const_cast< QReflect_PatchParameter*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_PatchParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
