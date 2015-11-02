/****************************************************************************
** Meta object code from reading C++ file 'Transform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Transform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Transform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Transform_t {
    QByteArrayData data[16];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Transform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Transform_t qt_meta_stringdata_osg__QReflect_Transform = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_Transform"
QT_MOC_LITERAL(1, 24, 11), // "updateModel"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "computeLocalToWorldMatrix"
QT_MOC_LITERAL(4, 63, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(5, 86, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(6, 113, 25), // "computeWorldToLocalMatrix"
QT_MOC_LITERAL(7, 139, 11), // "asTransform"
QT_MOC_LITERAL(8, 151, 24), // "osg::QReflect_Transform*"
QT_MOC_LITERAL(9, 176, 17), // "getReferenceFrame"
QT_MOC_LITERAL(10, 194, 39), // "osg::QReflect_Transform::Refe..."
QT_MOC_LITERAL(11, 234, 17), // "setReferenceFrame"
QT_MOC_LITERAL(12, 252, 14), // "ReferenceFrame"
QT_MOC_LITERAL(13, 267, 11), // "RELATIVE_RF"
QT_MOC_LITERAL(14, 279, 11), // "ABSOLUTE_RF"
QT_MOC_LITERAL(15, 291, 29) // "ABSOLUTE_RF_INHERIT_VIEWPOINT"

    },
    "osg::QReflect_Transform\0updateModel\0"
    "\0computeLocalToWorldMatrix\0"
    "osg::QReflect_Matrixd*\0"
    "osg::QReflect_NodeVisitor*\0"
    "computeWorldToLocalMatrix\0asTransform\0"
    "osg::QReflect_Transform*\0getReferenceFrame\0"
    "osg::QReflect_Transform::ReferenceFrame\0"
    "setReferenceFrame\0ReferenceFrame\0"
    "RELATIVE_RF\0ABSOLUTE_RF\0"
    "ABSOLUTE_RF_INHERIT_VIEWPOINT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Transform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   50,    2, 0x02 /* Public */,
       6,    2,   55,    2, 0x02 /* Public */,
       7,    0,   60,    2, 0x02 /* Public */,
       7,    0,   61,    2, 0x02 /* Public */,
       9,    0,   62,    2, 0x02 /* Public */,
      11,    1,   63,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    0x80000000 | 8,
    0x80000000 | 8,
    0x80000000 | 10,
    QMetaType::Void, 0x80000000 | 10,    2,

 // enums: name, flags, count, data
      12, 0x0,    3,   70,

 // enum data: key, value
      13, uint(osg::QReflect_Transform::RELATIVE_RF),
      14, uint(osg::QReflect_Transform::ABSOLUTE_RF),
      15, uint(osg::QReflect_Transform::ABSOLUTE_RF_INHERIT_VIEWPOINT),

       0        // eod
};

void osg::QReflect_Transform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Transform *_t = static_cast<QReflect_Transform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->computeLocalToWorldMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->computeWorldToLocalMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_Transform* _r = _t->asTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Transform**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_Transform* _r = _t->asTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Transform**>(_a[0]) = _r; }  break;
        case 5: { osg::QReflect_Transform::ReferenceFrame _r = _t->getReferenceFrame();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Transform::ReferenceFrame*>(_a[0]) = _r; }  break;
        case 6: _t->setReferenceFrame((*reinterpret_cast< osg::QReflect_Transform::ReferenceFrame(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_Transform::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Transform.data,
      qt_meta_data_osg__QReflect_Transform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Transform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Transform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Transform.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Transform*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Transform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
