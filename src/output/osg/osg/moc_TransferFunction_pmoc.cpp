/****************************************************************************
** Meta object code from reading C++ file 'TransferFunction_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TransferFunction_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransferFunction_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_TransferFunction_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TransferFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TransferFunction_t qt_meta_stringdata_osg__QReflect_TransferFunction = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osg::QReflect_TransferFunction"
QT_MOC_LITERAL(1, 31, 11), // "updateModel"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "getImage"
QT_MOC_LITERAL(4, 53, 20) // "osg::QReflect_Image*"

    },
    "osg::QReflect_TransferFunction\0"
    "updateModel\0\0getImage\0osg::QReflect_Image*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TransferFunction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x02 /* Public */,
       3,    0,   31,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    0x80000000 | 4,

       0        // eod
};

void osg::QReflect_TransferFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TransferFunction *_t = static_cast<QReflect_TransferFunction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { osg::QReflect_Image* _r = _t->getImage();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Image**>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_Image* _r = _t->getImage();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Image**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_TransferFunction::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TransferFunction.data,
      qt_meta_data_osg__QReflect_TransferFunction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TransferFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TransferFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TransferFunction.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TransferFunction*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TransferFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_TransferFunction1D_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TransferFunction1D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TransferFunction1D_t qt_meta_stringdata_osg__QReflect_TransferFunction1D = {
    {
QT_MOC_LITERAL(0, 0, 32), // "osg::QReflect_TransferFunction1D"
QT_MOC_LITERAL(1, 33, 11), // "updateModel"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "getMaximum"
QT_MOC_LITERAL(4, 57, 10), // "getMinimum"
QT_MOC_LITERAL(5, 68, 19), // "getNumberImageCells"
QT_MOC_LITERAL(6, 88, 8), // "allocate"
QT_MOC_LITERAL(7, 97, 5), // "clear"
QT_MOC_LITERAL(8, 103, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(9, 124, 8), // "setColor"
QT_MOC_LITERAL(10, 133, 11) // "updateImage"

    },
    "osg::QReflect_TransferFunction1D\0"
    "updateModel\0\0getMaximum\0getMinimum\0"
    "getNumberImageCells\0allocate\0clear\0"
    "osg::QReflect_Vec4f*\0setColor\0updateImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TransferFunction1D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x02 /* Public */,
       4,    0,   56,    2, 0x02 /* Public */,
       5,    0,   57,    2, 0x02 /* Public */,
       6,    1,   58,    2, 0x02 /* Public */,
       7,    1,   61,    2, 0x02 /* Public */,
       9,    3,   64,    2, 0x02 /* Public */,
      10,    0,   71,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Float, 0x80000000 | 8, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_TransferFunction1D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TransferFunction1D *_t = static_cast<QReflect_TransferFunction1D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { float _r = _t->getMaximum();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 2: { float _r = _t->getMinimum();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getNumberImageCells();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: _t->allocate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->clear((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 6: _t->setColor((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->updateImage(); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_TransferFunction1D::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TransferFunction1D.data,
      qt_meta_data_osg__QReflect_TransferFunction1D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TransferFunction1D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TransferFunction1D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TransferFunction1D.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TransferFunction1D*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TransferFunction1D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
