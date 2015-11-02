/****************************************************************************
** Meta object code from reading C++ file 'SmokeEffect_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SmokeEffect_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SmokeEffect_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_SmokeEffect_t {
    QByteArrayData data[9];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_SmokeEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_SmokeEffect_t qt_meta_stringdata_osgParticle__QReflect_SmokeEffect = {
    {
QT_MOC_LITERAL(0, 0, 33), // "osgParticle::QReflect_SmokeEf..."
QT_MOC_LITERAL(1, 34, 11), // "updateModel"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "getEmitter"
QT_MOC_LITERAL(4, 58, 30), // "osgParticle::QReflect_Emitter*"
QT_MOC_LITERAL(5, 89, 10), // "getProgram"
QT_MOC_LITERAL(6, 100, 30), // "osgParticle::QReflect_Program*"
QT_MOC_LITERAL(7, 131, 11), // "setDefaults"
QT_MOC_LITERAL(8, 143, 22) // "setUpEmitterAndProgram"

    },
    "osgParticle::QReflect_SmokeEffect\0"
    "updateModel\0\0getEmitter\0"
    "osgParticle::QReflect_Emitter*\0"
    "getProgram\0osgParticle::QReflect_Program*\0"
    "setDefaults\0setUpEmitterAndProgram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_SmokeEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x02 /* Public */,
       3,    0,   51,    2, 0x02 /* Public */,
       5,    0,   52,    2, 0x02 /* Public */,
       5,    0,   53,    2, 0x02 /* Public */,
       7,    0,   54,    2, 0x02 /* Public */,
       8,    0,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    0x80000000 | 4,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void osgParticle::QReflect_SmokeEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_SmokeEffect *_t = static_cast<QReflect_SmokeEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { osgParticle::QReflect_Emitter* _r = _t->getEmitter();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Emitter**>(_a[0]) = _r; }  break;
        case 2: { osgParticle::QReflect_Emitter* _r = _t->getEmitter();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Emitter**>(_a[0]) = _r; }  break;
        case 3: { osgParticle::QReflect_Program* _r = _t->getProgram();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Program**>(_a[0]) = _r; }  break;
        case 4: { osgParticle::QReflect_Program* _r = _t->getProgram();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Program**>(_a[0]) = _r; }  break;
        case 5: _t->setDefaults(); break;
        case 6: _t->setUpEmitterAndProgram(); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_SmokeEffect::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_SmokeEffect.data,
      qt_meta_data_osgParticle__QReflect_SmokeEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_SmokeEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_SmokeEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_SmokeEffect.stringdata0))
        return static_cast<void*>(const_cast< QReflect_SmokeEffect*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_SmokeEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
