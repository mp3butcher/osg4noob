/****************************************************************************
** Meta object code from reading C++ file 'Placer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Placer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Placer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_Placer_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_Placer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_Placer_t qt_meta_stringdata_osgParticle__QReflect_Placer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osgParticle::QReflect_Placer"
QT_MOC_LITERAL(1, 29, 11), // "updateModel"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "isSameKindAs"
QT_MOC_LITERAL(4, 55, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(5, 77, 6), // "volume"
QT_MOC_LITERAL(6, 84, 9), // "className"
QT_MOC_LITERAL(7, 94, 11), // "const char*"
QT_MOC_LITERAL(8, 106, 11) // "libraryName"

    },
    "osgParticle::QReflect_Placer\0updateModel\0"
    "\0isSameKindAs\0osg::QReflect_Object*\0"
    "volume\0className\0const char*\0libraryName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_Placer[] = {

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
       5,    0,   43,    2, 0x02 /* Public */,
       6,    0,   44,    2, 0x02 /* Public */,
       8,    0,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    QMetaType::Float,
    0x80000000 | 7,
    0x80000000 | 7,

       0        // eod
};

void osgParticle::QReflect_Placer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Placer *_t = static_cast<QReflect_Placer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { float _r = _t->volume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_Placer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_Placer.data,
      qt_meta_data_osgParticle__QReflect_Placer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_Placer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_Placer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_Placer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Placer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_Placer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
