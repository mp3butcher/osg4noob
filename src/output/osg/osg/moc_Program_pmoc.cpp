/****************************************************************************
** Meta object code from reading C++ file 'Program_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Program_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Program_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Program_t {
    QByteArrayData data[18];
    char stringdata0[378];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Program_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Program_t qt_meta_stringdata_osg__QReflect_Program = {
    {
QT_MOC_LITERAL(0, 0, 21), // "osg::QReflect_Program"
QT_MOC_LITERAL(1, 22, 23), // "ShaderCollectionChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "updateModel"
QT_MOC_LITERAL(4, 59, 15), // "isFixedFunction"
QT_MOC_LITERAL(5, 75, 7), // "compare"
QT_MOC_LITERAL(6, 83, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 113, 13), // "getNumShaders"
QT_MOC_LITERAL(8, 127, 31), // "getNumTransformFeedBackVaryings"
QT_MOC_LITERAL(9, 159, 27), // "getTransformFeedBackVarying"
QT_MOC_LITERAL(10, 187, 27), // "addTransformFeedBackVarying"
QT_MOC_LITERAL(11, 215, 12), // "dirtyProgram"
QT_MOC_LITERAL(12, 228, 24), // "removeBindAttribLocation"
QT_MOC_LITERAL(13, 253, 26), // "removeBindFragDataLocation"
QT_MOC_LITERAL(14, 280, 22), // "removeBindUniformBlock"
QT_MOC_LITERAL(15, 303, 30), // "removeTransformFeedBackVarying"
QT_MOC_LITERAL(16, 334, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(17, 356, 21) // "setThreadSafeRefUnref"

    },
    "osg::QReflect_Program\0ShaderCollectionChanged\0"
    "\0updateModel\0isFixedFunction\0compare\0"
    "osg::QReflect_StateAttribute*\0"
    "getNumShaders\0getNumTransformFeedBackVaryings\0"
    "getTransformFeedBackVarying\0"
    "addTransformFeedBackVarying\0dirtyProgram\0"
    "removeBindAttribLocation\0"
    "removeBindFragDataLocation\0"
    "removeBindUniformBlock\0"
    "removeTransformFeedBackVarying\0"
    "resizeGLObjectBuffers\0setThreadSafeRefUnref"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Program[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   91,    2, 0x02 /* Public */,
       5,    1,   92,    2, 0x02 /* Public */,
       7,    0,   95,    2, 0x02 /* Public */,
       8,    0,   96,    2, 0x02 /* Public */,
       9,    1,   97,    2, 0x02 /* Public */,
      10,    1,  100,    2, 0x02 /* Public */,
      11,    0,  103,    2, 0x02 /* Public */,
      12,    1,  104,    2, 0x02 /* Public */,
      13,    1,  107,    2, 0x02 /* Public */,
      14,    1,  110,    2, 0x02 /* Public */,
      15,    1,  113,    2, 0x02 /* Public */,
      16,    1,  116,    2, 0x02 /* Public */,
      17,    1,  119,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::QString, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void osg::QReflect_Program::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Program *_t = static_cast<QReflect_Program *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShaderCollectionChanged(); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->isFixedFunction();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { uint _r = _t->getNumShaders();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 5: { uint _r = _t->getNumTransformFeedBackVaryings();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getTransformFeedBackVarying((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->addTransformFeedBackVarying((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->dirtyProgram(); break;
        case 9: _t->removeBindAttribLocation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->removeBindFragDataLocation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->removeBindUniformBlock((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->removeTransformFeedBackVarying((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->setThreadSafeRefUnref((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Program::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Program::ShaderCollectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_Program::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Program.data,
      qt_meta_data_osg__QReflect_Program,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Program::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Program::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Program.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Program*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Program::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_Program::ShaderCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
