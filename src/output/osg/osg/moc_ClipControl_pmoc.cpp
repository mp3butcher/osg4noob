/****************************************************************************
** Meta object code from reading C++ file 'ClipControl_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ClipControl_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipControl_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ClipControl_t {
    QByteArrayData data[17];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ClipControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ClipControl_t qt_meta_stringdata_osg__QReflect_ClipControl = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_ClipControl"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "compare"
QT_MOC_LITERAL(4, 47, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 77, 12), // "getDepthMode"
QT_MOC_LITERAL(6, 90, 36), // "osg::QReflect_ClipControl::De..."
QT_MOC_LITERAL(7, 127, 9), // "getOrigin"
QT_MOC_LITERAL(8, 137, 33), // "osg::QReflect_ClipControl::Or..."
QT_MOC_LITERAL(9, 171, 12), // "setDepthMode"
QT_MOC_LITERAL(10, 184, 9), // "setOrigin"
QT_MOC_LITERAL(11, 194, 9), // "DepthMode"
QT_MOC_LITERAL(12, 204, 19), // "NEGATIVE_ONE_TO_ONE"
QT_MOC_LITERAL(13, 224, 11), // "ZERO_TO_ONE"
QT_MOC_LITERAL(14, 236, 6), // "Origin"
QT_MOC_LITERAL(15, 243, 10), // "LOWER_LEFT"
QT_MOC_LITERAL(16, 254, 10) // "UPPER_LEFT"

    },
    "osg::QReflect_ClipControl\0updateModel\0"
    "\0compare\0osg::QReflect_StateAttribute*\0"
    "getDepthMode\0osg::QReflect_ClipControl::DepthMode\0"
    "getOrigin\0osg::QReflect_ClipControl::Origin\0"
    "setDepthMode\0setOrigin\0DepthMode\0"
    "NEGATIVE_ONE_TO_ONE\0ZERO_TO_ONE\0Origin\0"
    "LOWER_LEFT\0UPPER_LEFT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ClipControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       7,    0,   49,    2, 0x02 /* Public */,
       9,    1,   50,    2, 0x02 /* Public */,
      10,    1,   53,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,
    0x80000000 | 6,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // enums: name, flags, count, data
      11, 0x0,    2,   64,
      14, 0x0,    2,   68,

 // enum data: key, value
      12, uint(osg::QReflect_ClipControl::NEGATIVE_ONE_TO_ONE),
      13, uint(osg::QReflect_ClipControl::ZERO_TO_ONE),
      15, uint(osg::QReflect_ClipControl::LOWER_LEFT),
      16, uint(osg::QReflect_ClipControl::UPPER_LEFT),

       0        // eod
};

void osg::QReflect_ClipControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ClipControl *_t = static_cast<QReflect_ClipControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_ClipControl::DepthMode _r = _t->getDepthMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ClipControl::DepthMode*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_ClipControl::Origin _r = _t->getOrigin();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ClipControl::Origin*>(_a[0]) = _r; }  break;
        case 4: _t->setDepthMode((*reinterpret_cast< osg::QReflect_ClipControl::DepthMode(*)>(_a[1]))); break;
        case 5: _t->setOrigin((*reinterpret_cast< osg::QReflect_ClipControl::Origin(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ClipControl::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ClipControl.data,
      qt_meta_data_osg__QReflect_ClipControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ClipControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ClipControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ClipControl.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ClipControl*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ClipControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
