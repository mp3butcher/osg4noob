/****************************************************************************
** Meta object code from reading C++ file 'AngularAccelOperator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AngularAccelOperator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AngularAccelOperator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_AngularAccelOperator_t {
    QByteArrayData data[9];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_AngularAccelOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_AngularAccelOperator_t qt_meta_stringdata_osgParticle__QReflect_AngularAccelOperator = {
    {
QT_MOC_LITERAL(0, 0, 42), // "osgParticle::QReflect_Angular..."
QT_MOC_LITERAL(1, 43, 11), // "updateModel"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 12), // "beginOperate"
QT_MOC_LITERAL(4, 69, 30), // "osgParticle::QReflect_Program*"
QT_MOC_LITERAL(5, 100, 7), // "operate"
QT_MOC_LITERAL(6, 108, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(7, 140, 22), // "setAngularAcceleration"
QT_MOC_LITERAL(8, 163, 20) // "osg::QReflect_Vec3f*"

    },
    "osgParticle::QReflect_AngularAccelOperator\0"
    "updateModel\0\0beginOperate\0"
    "osgParticle::QReflect_Program*\0operate\0"
    "osgParticle::QReflect_Particle*\0"
    "setAngularAcceleration\0osg::QReflect_Vec3f*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_AngularAccelOperator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x02 /* Public */,
       5,    2,   38,    2, 0x02 /* Public */,
       7,    1,   43,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void osgParticle::QReflect_AngularAccelOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AngularAccelOperator *_t = static_cast<QReflect_AngularAccelOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->beginOperate((*reinterpret_cast< osgParticle::QReflect_Program*(*)>(_a[1]))); break;
        case 2: _t->operate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->setAngularAcceleration((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_AngularAccelOperator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_AngularAccelOperator.data,
      qt_meta_data_osgParticle__QReflect_AngularAccelOperator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_AngularAccelOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_AngularAccelOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_AngularAccelOperator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AngularAccelOperator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_AngularAccelOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
