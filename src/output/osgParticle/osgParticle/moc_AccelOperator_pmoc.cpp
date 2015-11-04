/****************************************************************************
** Meta object code from reading C++ file 'AccelOperator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AccelOperator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccelOperator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_AccelOperator_t {
    QByteArrayData data[10];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_AccelOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_AccelOperator_t qt_meta_stringdata_osgParticle__QReflect_AccelOperator = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osgParticle::QReflect_AccelOp..."
QT_MOC_LITERAL(1, 36, 11), // "updateModel"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "beginOperate"
QT_MOC_LITERAL(4, 62, 30), // "osgParticle::QReflect_Program*"
QT_MOC_LITERAL(5, 93, 7), // "operate"
QT_MOC_LITERAL(6, 101, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(7, 133, 15), // "setAcceleration"
QT_MOC_LITERAL(8, 149, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(9, 170, 12) // "setToGravity"

    },
    "osgParticle::QReflect_AccelOperator\0"
    "updateModel\0\0beginOperate\0"
    "osgParticle::QReflect_Program*\0operate\0"
    "osgParticle::QReflect_Particle*\0"
    "setAcceleration\0osg::QReflect_Vec3f*\0"
    "setToGravity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_AccelOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x02 /* Public */,
       5,    2,   43,    2, 0x02 /* Public */,
       7,    1,   48,    2, 0x02 /* Public */,
       9,    1,   51,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Float,    2,

       0        // eod
};

void osgParticle::QReflect_AccelOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AccelOperator *_t = static_cast<QReflect_AccelOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->beginOperate((*reinterpret_cast< osgParticle::QReflect_Program*(*)>(_a[1]))); break;
        case 2: _t->operate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->setAcceleration((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 4: _t->setToGravity((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_AccelOperator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_AccelOperator.data,
      qt_meta_data_osgParticle__QReflect_AccelOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_AccelOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_AccelOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_AccelOperator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AccelOperator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_AccelOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
