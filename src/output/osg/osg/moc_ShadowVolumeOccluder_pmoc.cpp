/****************************************************************************
** Meta object code from reading C++ file 'ShadowVolumeOccluder_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ShadowVolumeOccluder_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShadowVolumeOccluder_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ShadowVolumeOccluder_t {
    QByteArrayData data[10];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ShadowVolumeOccluder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ShadowVolumeOccluder_t qt_meta_stringdata_osg__QReflect_ShadowVolumeOccluder = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osg::QReflect_ShadowVolumeOcc..."
QT_MOC_LITERAL(1, 35, 11), // "updateModel"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 21), // "matchProjectionMatrix"
QT_MOC_LITERAL(4, 70, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(5, 93, 9), // "getVolume"
QT_MOC_LITERAL(6, 103, 18), // "disableResultMasks"
QT_MOC_LITERAL(7, 122, 14), // "popCurrentMask"
QT_MOC_LITERAL(8, 137, 15), // "pushCurrentMask"
QT_MOC_LITERAL(9, 153, 25) // "transformProvidingInverse"

    },
    "osg::QReflect_ShadowVolumeOccluder\0"
    "updateModel\0\0matchProjectionMatrix\0"
    "osg::QReflect_Matrixd*\0getVolume\0"
    "disableResultMasks\0popCurrentMask\0"
    "pushCurrentMask\0transformProvidingInverse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ShadowVolumeOccluder[] = {

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
       3,    1,   50,    2, 0x02 /* Public */,
       5,    0,   53,    2, 0x02 /* Public */,
       6,    0,   54,    2, 0x02 /* Public */,
       7,    0,   55,    2, 0x02 /* Public */,
       8,    0,   56,    2, 0x02 /* Public */,
       9,    1,   57,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    QMetaType::Float,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_ShadowVolumeOccluder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ShadowVolumeOccluder *_t = static_cast<QReflect_ShadowVolumeOccluder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->matchProjectionMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { float _r = _t->getVolume();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 3: _t->disableResultMasks(); break;
        case 4: _t->popCurrentMask(); break;
        case 5: _t->pushCurrentMask(); break;
        case 6: _t->transformProvidingInverse((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ShadowVolumeOccluder::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ShadowVolumeOccluder.data,
      qt_meta_data_osg__QReflect_ShadowVolumeOccluder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ShadowVolumeOccluder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ShadowVolumeOccluder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ShadowVolumeOccluder.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ShadowVolumeOccluder*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ShadowVolumeOccluder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
