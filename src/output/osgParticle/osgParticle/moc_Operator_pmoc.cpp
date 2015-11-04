/****************************************************************************
** Meta object code from reading C++ file 'Operator_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Operator_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Operator_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_Operator_t {
    QByteArrayData data[15];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_Operator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_Operator_t qt_meta_stringdata_osgParticle__QReflect_Operator = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osgParticle::QReflect_Operator"
QT_MOC_LITERAL(1, 31, 11), // "updateModel"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "isEnabled"
QT_MOC_LITERAL(4, 54, 12), // "isSameKindAs"
QT_MOC_LITERAL(5, 67, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(6, 89, 9), // "className"
QT_MOC_LITERAL(7, 99, 11), // "const char*"
QT_MOC_LITERAL(8, 111, 11), // "libraryName"
QT_MOC_LITERAL(9, 123, 12), // "beginOperate"
QT_MOC_LITERAL(10, 136, 30), // "osgParticle::QReflect_Program*"
QT_MOC_LITERAL(11, 167, 10), // "endOperate"
QT_MOC_LITERAL(12, 178, 16), // "operateParticles"
QT_MOC_LITERAL(13, 195, 37), // "osgParticle::QReflect_Particl..."
QT_MOC_LITERAL(14, 233, 10) // "setEnabled"

    },
    "osgParticle::QReflect_Operator\0"
    "updateModel\0\0isEnabled\0isSameKindAs\0"
    "osg::QReflect_Object*\0className\0"
    "const char*\0libraryName\0beginOperate\0"
    "osgParticle::QReflect_Program*\0"
    "endOperate\0operateParticles\0"
    "osgParticle::QReflect_ParticleSystem*\0"
    "setEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_Operator[] = {

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
       3,    0,   60,    2, 0x02 /* Public */,
       4,    1,   61,    2, 0x02 /* Public */,
       6,    0,   64,    2, 0x02 /* Public */,
       8,    0,   65,    2, 0x02 /* Public */,
       9,    1,   66,    2, 0x02 /* Public */,
      11,    0,   69,    2, 0x02 /* Public */,
      12,    2,   70,    2, 0x02 /* Public */,
      14,    1,   75,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 5,    2,
    0x80000000 | 7,
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void osgParticle::QReflect_Operator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Operator *_t = static_cast<QReflect_Operator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 5: _t->beginOperate((*reinterpret_cast< osgParticle::QReflect_Program*(*)>(_a[1]))); break;
        case 6: _t->endOperate(); break;
        case 7: _t->operateParticles((*reinterpret_cast< osgParticle::QReflect_ParticleSystem*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_Operator::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_Operator.data,
      qt_meta_data_osgParticle__QReflect_Operator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_Operator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_Operator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_Operator.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Operator*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_Operator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
