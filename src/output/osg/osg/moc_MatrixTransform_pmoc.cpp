/****************************************************************************
** Meta object code from reading C++ file 'MatrixTransform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MatrixTransform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MatrixTransform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_MatrixTransform_t {
    QByteArrayData data[9];
    char stringdata0[142];
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
QT_MOC_LITERAL(3, 43, 17), // "asMatrixTransform"
QT_MOC_LITERAL(4, 61, 30), // "osg::QReflect_MatrixTransform*"
QT_MOC_LITERAL(5, 92, 8), // "postMult"
QT_MOC_LITERAL(6, 101, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(7, 124, 7), // "preMult"
QT_MOC_LITERAL(8, 132, 9) // "setMatrix"

    },
    "osg::QReflect_MatrixTransform\0updateModel\0"
    "\0asMatrixTransform\0osg::QReflect_MatrixTransform*\0"
    "postMult\0osg::QReflect_Matrixd*\0preMult\0"
    "setMatrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_MatrixTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x02 /* Public */,
       3,    0,   46,    2, 0x02 /* Public */,
       5,    1,   47,    2, 0x02 /* Public */,
       7,    1,   50,    2, 0x02 /* Public */,
       8,    1,   53,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    0x80000000 | 4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

void osg::QReflect_MatrixTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_MatrixTransform *_t = static_cast<QReflect_MatrixTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { osg::QReflect_MatrixTransform* _r = _t->asMatrixTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_MatrixTransform**>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_MatrixTransform* _r = _t->asMatrixTransform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_MatrixTransform**>(_a[0]) = _r; }  break;
        case 3: _t->postMult((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 4: _t->preMult((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 5: _t->setMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
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
