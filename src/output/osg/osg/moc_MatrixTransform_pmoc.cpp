/****************************************************************************
** Meta object code from reading C++ file 'MatrixTransform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MatrixTransform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MatrixTransform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_MatrixTransform_t {
    QByteArrayData data[12];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_MatrixTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_MatrixTransform_t qt_meta_stringdata_osg__QReflect_MatrixTransform = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QReflect_MatrixTransform"
QT_MOC_LITERAL(1, 30, 11), // "updateModel"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "computeLocalToWorldMatrix"
QT_MOC_LITERAL(4, 69, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(5, 92, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(6, 119, 25), // "computeWorldToLocalMatrix"
QT_MOC_LITERAL(7, 145, 17), // "asMatrixTransform"
QT_MOC_LITERAL(8, 163, 30), // "osg::QReflect_MatrixTransform*"
QT_MOC_LITERAL(9, 194, 8), // "postMult"
QT_MOC_LITERAL(10, 203, 7), // "preMult"
QT_MOC_LITERAL(11, 211, 9) // "setMatrix"

    },
    "osg::QReflect_MatrixTransform\0updateModel\0"
    "\0computeLocalToWorldMatrix\0"
    "osg::QReflect_Matrixd*\0"
    "osg::QReflect_NodeVisitor*\0"
    "computeWorldToLocalMatrix\0asMatrixTransform\0"
    "osg::QReflect_MatrixTransform*\0postMult\0"
    "preMult\0setMatrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_MatrixTransform[] = {

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
       3,    2,   55,    2, 0x02 /* Public */,
       6,    2,   60,    2, 0x02 /* Public */,
       7,    0,   65,    2, 0x02 /* Public */,
       7,    0,   66,    2, 0x02 /* Public */,
       9,    1,   67,    2, 0x02 /* Public */,
      10,    1,   70,    2, 0x02 /* Public */,
      11,    1,   73,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    0x80000000 | 8,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_MatrixTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_MatrixTransform *_t = static_cast<QReflect_MatrixTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->computeLocalToWorldMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->computeWorldToLocalMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_MatrixTransform* _r = _t->asMatrixTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_MatrixTransform**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_MatrixTransform* _r = _t->asMatrixTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_MatrixTransform**>(_a[0]) = _r; }  break;
        case 5: _t->postMult((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 6: _t->preMult((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 7: _t->setMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_MatrixTransform::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_MatrixTransform.data,
      qt_meta_data_osg__QReflect_MatrixTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_MatrixTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_MatrixTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_MatrixTransform.stringdata0))
        return static_cast<void*>(const_cast< QReflect_MatrixTransform*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_MatrixTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
