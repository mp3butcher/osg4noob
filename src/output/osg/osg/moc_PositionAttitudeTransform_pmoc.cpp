/****************************************************************************
** Meta object code from reading C++ file 'PositionAttitudeTransform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PositionAttitudeTransform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PositionAttitudeTransform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_PositionAttitudeTransform_t {
    QByteArrayData data[15];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_PositionAttitudeTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_PositionAttitudeTransform_t qt_meta_stringdata_osg__QReflect_PositionAttitudeTransform = {
    {
QT_MOC_LITERAL(0, 0, 39), // "osg::QReflect_PositionAttitud..."
QT_MOC_LITERAL(1, 40, 11), // "updateModel"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 25), // "computeLocalToWorldMatrix"
QT_MOC_LITERAL(4, 79, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(5, 102, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(6, 129, 25), // "computeWorldToLocalMatrix"
QT_MOC_LITERAL(7, 155, 27), // "asPositionAttitudeTransform"
QT_MOC_LITERAL(8, 183, 40), // "osg::QReflect_PositionAttitud..."
QT_MOC_LITERAL(9, 224, 11), // "setAttitude"
QT_MOC_LITERAL(10, 236, 19), // "osg::QReflect_Quat*"
QT_MOC_LITERAL(11, 256, 13), // "setPivotPoint"
QT_MOC_LITERAL(12, 270, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(13, 291, 11), // "setPosition"
QT_MOC_LITERAL(14, 303, 8) // "setScale"

    },
    "osg::QReflect_PositionAttitudeTransform\0"
    "updateModel\0\0computeLocalToWorldMatrix\0"
    "osg::QReflect_Matrixd*\0"
    "osg::QReflect_NodeVisitor*\0"
    "computeWorldToLocalMatrix\0"
    "asPositionAttitudeTransform\0"
    "osg::QReflect_PositionAttitudeTransform*\0"
    "setAttitude\0osg::QReflect_Quat*\0"
    "setPivotPoint\0osg::QReflect_Vec3d*\0"
    "setPosition\0setScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_PositionAttitudeTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    2,   60,    2, 0x02 /* Public */,
       6,    2,   65,    2, 0x02 /* Public */,
       7,    0,   70,    2, 0x02 /* Public */,
       7,    0,   71,    2, 0x02 /* Public */,
       9,    1,   72,    2, 0x02 /* Public */,
      11,    1,   75,    2, 0x02 /* Public */,
      13,    1,   78,    2, 0x02 /* Public */,
      14,    1,   81,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    0x80000000 | 8,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void osg::QReflect_PositionAttitudeTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_PositionAttitudeTransform *_t = static_cast<QReflect_PositionAttitudeTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->computeLocalToWorldMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->computeWorldToLocalMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_PositionAttitudeTransform* _r = _t->asPositionAttitudeTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_PositionAttitudeTransform**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_PositionAttitudeTransform* _r = _t->asPositionAttitudeTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_PositionAttitudeTransform**>(_a[0]) = _r; }  break;
        case 5: _t->setAttitude((*reinterpret_cast< osg::QReflect_Quat*(*)>(_a[1]))); break;
        case 6: _t->setPivotPoint((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        case 7: _t->setPosition((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        case 8: _t->setScale((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_PositionAttitudeTransform::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_PositionAttitudeTransform.data,
      qt_meta_data_osg__QReflect_PositionAttitudeTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_PositionAttitudeTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_PositionAttitudeTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_PositionAttitudeTransform.stringdata0))
        return static_cast<void*>(const_cast< QReflect_PositionAttitudeTransform*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_PositionAttitudeTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
