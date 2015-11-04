/****************************************************************************
** Meta object code from reading C++ file 'Array_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Array_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Array_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ValueVisitor_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ValueVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ValueVisitor_t qt_meta_stringdata_osg__QReflect_ValueVisitor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_ValueVisitor"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "osg::QReflect_ValueVisitor\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ValueVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_ValueVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ValueVisitor *_t = static_cast<QReflect_ValueVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_ValueVisitor::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ValueVisitor.data,
      qt_meta_data_osg__QReflect_ValueVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ValueVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ValueVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ValueVisitor.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ValueVisitor*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ValueVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_ConstValueVisitor_t {
    QByteArrayData data[32];
    char stringdata0[623];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ConstValueVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ConstValueVisitor_t qt_meta_stringdata_osg__QReflect_ConstValueVisitor = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_ConstValueVisitor"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "apply"
QT_MOC_LITERAL(4, 51, 5), // "GLint"
QT_MOC_LITERAL(5, 57, 6), // "GLuint"
QT_MOC_LITERAL(6, 64, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(7, 87, 22), // "osg::QReflect_Matrixf*"
QT_MOC_LITERAL(8, 110, 20), // "osg::QReflect_Vec2b*"
QT_MOC_LITERAL(9, 131, 20), // "osg::QReflect_Vec2d*"
QT_MOC_LITERAL(10, 152, 20), // "osg::QReflect_Vec2f*"
QT_MOC_LITERAL(11, 173, 20), // "osg::QReflect_Vec2i*"
QT_MOC_LITERAL(12, 194, 20), // "osg::QReflect_Vec2s*"
QT_MOC_LITERAL(13, 215, 21), // "osg::QReflect_Vec2ub*"
QT_MOC_LITERAL(14, 237, 21), // "osg::QReflect_Vec2ui*"
QT_MOC_LITERAL(15, 259, 21), // "osg::QReflect_Vec2us*"
QT_MOC_LITERAL(16, 281, 20), // "osg::QReflect_Vec3b*"
QT_MOC_LITERAL(17, 302, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(18, 323, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(19, 344, 20), // "osg::QReflect_Vec3i*"
QT_MOC_LITERAL(20, 365, 20), // "osg::QReflect_Vec3s*"
QT_MOC_LITERAL(21, 386, 21), // "osg::QReflect_Vec3ub*"
QT_MOC_LITERAL(22, 408, 21), // "osg::QReflect_Vec3ui*"
QT_MOC_LITERAL(23, 430, 21), // "osg::QReflect_Vec3us*"
QT_MOC_LITERAL(24, 452, 20), // "osg::QReflect_Vec4b*"
QT_MOC_LITERAL(25, 473, 20), // "osg::QReflect_Vec4d*"
QT_MOC_LITERAL(26, 494, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(27, 515, 20), // "osg::QReflect_Vec4i*"
QT_MOC_LITERAL(28, 536, 20), // "osg::QReflect_Vec4s*"
QT_MOC_LITERAL(29, 557, 21), // "osg::QReflect_Vec4ub*"
QT_MOC_LITERAL(30, 579, 21), // "osg::QReflect_Vec4ui*"
QT_MOC_LITERAL(31, 601, 21) // "osg::QReflect_Vec4us*"

    },
    "osg::QReflect_ConstValueVisitor\0"
    "updateModel\0\0apply\0GLint\0GLuint\0"
    "osg::QReflect_Matrixd*\0osg::QReflect_Matrixf*\0"
    "osg::QReflect_Vec2b*\0osg::QReflect_Vec2d*\0"
    "osg::QReflect_Vec2f*\0osg::QReflect_Vec2i*\0"
    "osg::QReflect_Vec2s*\0osg::QReflect_Vec2ub*\0"
    "osg::QReflect_Vec2ui*\0osg::QReflect_Vec2us*\0"
    "osg::QReflect_Vec3b*\0osg::QReflect_Vec3d*\0"
    "osg::QReflect_Vec3f*\0osg::QReflect_Vec3i*\0"
    "osg::QReflect_Vec3s*\0osg::QReflect_Vec3ub*\0"
    "osg::QReflect_Vec3ui*\0osg::QReflect_Vec3us*\0"
    "osg::QReflect_Vec4b*\0osg::QReflect_Vec4d*\0"
    "osg::QReflect_Vec4f*\0osg::QReflect_Vec4i*\0"
    "osg::QReflect_Vec4s*\0osg::QReflect_Vec4ub*\0"
    "osg::QReflect_Vec4ui*\0osg::QReflect_Vec4us*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ConstValueVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,  160,    2, 0x02 /* Public */,
       3,    1,  163,    2, 0x02 /* Public */,
       3,    1,  166,    2, 0x02 /* Public */,
       3,    1,  169,    2, 0x02 /* Public */,
       3,    1,  172,    2, 0x02 /* Public */,
       3,    1,  175,    2, 0x02 /* Public */,
       3,    1,  178,    2, 0x02 /* Public */,
       3,    1,  181,    2, 0x02 /* Public */,
       3,    1,  184,    2, 0x02 /* Public */,
       3,    1,  187,    2, 0x02 /* Public */,
       3,    1,  190,    2, 0x02 /* Public */,
       3,    1,  193,    2, 0x02 /* Public */,
       3,    1,  196,    2, 0x02 /* Public */,
       3,    1,  199,    2, 0x02 /* Public */,
       3,    1,  202,    2, 0x02 /* Public */,
       3,    1,  205,    2, 0x02 /* Public */,
       3,    1,  208,    2, 0x02 /* Public */,
       3,    1,  211,    2, 0x02 /* Public */,
       3,    1,  214,    2, 0x02 /* Public */,
       3,    1,  217,    2, 0x02 /* Public */,
       3,    1,  220,    2, 0x02 /* Public */,
       3,    1,  223,    2, 0x02 /* Public */,
       3,    1,  226,    2, 0x02 /* Public */,
       3,    1,  229,    2, 0x02 /* Public */,
       3,    1,  232,    2, 0x02 /* Public */,
       3,    1,  235,    2, 0x02 /* Public */,
       3,    1,  238,    2, 0x02 /* Public */,
       3,    1,  241,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void, 0x80000000 | 31,    2,

       0        // eod
};

void osg::QReflect_ConstValueVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ConstValueVisitor *_t = static_cast<QReflect_ConstValueVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->apply((*reinterpret_cast< const GLint(*)>(_a[1]))); break;
        case 2: _t->apply((*reinterpret_cast< const GLuint(*)>(_a[1]))); break;
        case 3: _t->apply((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 4: _t->apply((*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[1]))); break;
        case 5: _t->apply((*reinterpret_cast< osg::QReflect_Vec2b*(*)>(_a[1]))); break;
        case 6: _t->apply((*reinterpret_cast< osg::QReflect_Vec2d*(*)>(_a[1]))); break;
        case 7: _t->apply((*reinterpret_cast< osg::QReflect_Vec2f*(*)>(_a[1]))); break;
        case 8: _t->apply((*reinterpret_cast< osg::QReflect_Vec2i*(*)>(_a[1]))); break;
        case 9: _t->apply((*reinterpret_cast< osg::QReflect_Vec2s*(*)>(_a[1]))); break;
        case 10: _t->apply((*reinterpret_cast< osg::QReflect_Vec2ub*(*)>(_a[1]))); break;
        case 11: _t->apply((*reinterpret_cast< osg::QReflect_Vec2ui*(*)>(_a[1]))); break;
        case 12: _t->apply((*reinterpret_cast< osg::QReflect_Vec2us*(*)>(_a[1]))); break;
        case 13: _t->apply((*reinterpret_cast< osg::QReflect_Vec3b*(*)>(_a[1]))); break;
        case 14: _t->apply((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        case 15: _t->apply((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 16: _t->apply((*reinterpret_cast< osg::QReflect_Vec3i*(*)>(_a[1]))); break;
        case 17: _t->apply((*reinterpret_cast< osg::QReflect_Vec3s*(*)>(_a[1]))); break;
        case 18: _t->apply((*reinterpret_cast< osg::QReflect_Vec3ub*(*)>(_a[1]))); break;
        case 19: _t->apply((*reinterpret_cast< osg::QReflect_Vec3ui*(*)>(_a[1]))); break;
        case 20: _t->apply((*reinterpret_cast< osg::QReflect_Vec3us*(*)>(_a[1]))); break;
        case 21: _t->apply((*reinterpret_cast< osg::QReflect_Vec4b*(*)>(_a[1]))); break;
        case 22: _t->apply((*reinterpret_cast< osg::QReflect_Vec4d*(*)>(_a[1]))); break;
        case 23: _t->apply((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 24: _t->apply((*reinterpret_cast< osg::QReflect_Vec4i*(*)>(_a[1]))); break;
        case 25: _t->apply((*reinterpret_cast< osg::QReflect_Vec4s*(*)>(_a[1]))); break;
        case 26: _t->apply((*reinterpret_cast< osg::QReflect_Vec4ub*(*)>(_a[1]))); break;
        case 27: _t->apply((*reinterpret_cast< osg::QReflect_Vec4ui*(*)>(_a[1]))); break;
        case 28: _t->apply((*reinterpret_cast< osg::QReflect_Vec4us*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ConstValueVisitor::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ConstValueVisitor.data,
      qt_meta_data_osg__QReflect_ConstValueVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ConstValueVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ConstValueVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ConstValueVisitor.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ConstValueVisitor*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ConstValueVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_ArrayVisitor_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ArrayVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ArrayVisitor_t qt_meta_stringdata_osg__QReflect_ArrayVisitor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_ArrayVisitor"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "osg::QReflect_ArrayVisitor\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ArrayVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QReflect_ArrayVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ArrayVisitor *_t = static_cast<QReflect_ArrayVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_ArrayVisitor::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ArrayVisitor.data,
      qt_meta_data_osg__QReflect_ArrayVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ArrayVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ArrayVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ArrayVisitor.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ArrayVisitor*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ArrayVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_Array_t {
    QByteArrayData data[75];
    char stringdata0[1172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Array_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Array_t qt_meta_stringdata_osg__QReflect_Array = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_Array"
QT_MOC_LITERAL(1, 20, 16), // "NormalizeChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "PreserveDataTypeChanged"
QT_MOC_LITERAL(4, 62, 25), // "VertexBufferObjectChanged"
QT_MOC_LITERAL(5, 88, 39), // "const osg::QReflect_VertexBuf..."
QT_MOC_LITERAL(6, 128, 11), // "updateModel"
QT_MOC_LITERAL(7, 140, 11), // "getDataSize"
QT_MOC_LITERAL(8, 152, 5), // "GLint"
QT_MOC_LITERAL(9, 158, 12), // "isSameKindAs"
QT_MOC_LITERAL(10, 171, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(11, 193, 21), // "getVertexBufferObject"
QT_MOC_LITERAL(12, 215, 33), // "osg::QReflect_VertexBufferObj..."
QT_MOC_LITERAL(13, 249, 9), // "className"
QT_MOC_LITERAL(14, 259, 11), // "const char*"
QT_MOC_LITERAL(15, 271, 11), // "libraryName"
QT_MOC_LITERAL(16, 283, 12), // "getNormalize"
QT_MOC_LITERAL(17, 296, 19), // "getPreserveDataType"
QT_MOC_LITERAL(18, 316, 7), // "asArray"
QT_MOC_LITERAL(19, 324, 20), // "osg::QReflect_Array*"
QT_MOC_LITERAL(20, 345, 10), // "getBinding"
QT_MOC_LITERAL(21, 356, 28), // "osg::QReflect_Array::Binding"
QT_MOC_LITERAL(22, 385, 7), // "getType"
QT_MOC_LITERAL(23, 393, 25), // "osg::QReflect_Array::Type"
QT_MOC_LITERAL(24, 419, 10), // "setBinding"
QT_MOC_LITERAL(25, 430, 4), // "trim"
QT_MOC_LITERAL(26, 435, 34), // "pmoc_reverse_setVertexBufferO..."
QT_MOC_LITERAL(27, 470, 3), // "par"
QT_MOC_LITERAL(28, 474, 12), // "setNormalize"
QT_MOC_LITERAL(29, 487, 19), // "setPreserveDataType"
QT_MOC_LITERAL(30, 507, 21), // "setVertexBufferObject"
QT_MOC_LITERAL(31, 529, 9), // "Normalize"
QT_MOC_LITERAL(32, 539, 16), // "PreserveDataType"
QT_MOC_LITERAL(33, 556, 7), // "Binding"
QT_MOC_LITERAL(34, 564, 14), // "BIND_UNDEFINED"
QT_MOC_LITERAL(35, 579, 8), // "BIND_OFF"
QT_MOC_LITERAL(36, 588, 12), // "BIND_OVERALL"
QT_MOC_LITERAL(37, 601, 22), // "BIND_PER_PRIMITIVE_SET"
QT_MOC_LITERAL(38, 624, 15), // "BIND_PER_VERTEX"
QT_MOC_LITERAL(39, 640, 4), // "Type"
QT_MOC_LITERAL(40, 645, 9), // "ArrayType"
QT_MOC_LITERAL(41, 655, 13), // "ByteArrayType"
QT_MOC_LITERAL(42, 669, 14), // "ShortArrayType"
QT_MOC_LITERAL(43, 684, 12), // "IntArrayType"
QT_MOC_LITERAL(44, 697, 14), // "UByteArrayType"
QT_MOC_LITERAL(45, 712, 15), // "UShortArrayType"
QT_MOC_LITERAL(46, 728, 13), // "UIntArrayType"
QT_MOC_LITERAL(47, 742, 14), // "FloatArrayType"
QT_MOC_LITERAL(48, 757, 15), // "DoubleArrayType"
QT_MOC_LITERAL(49, 773, 14), // "Vec2bArrayType"
QT_MOC_LITERAL(50, 788, 14), // "Vec3bArrayType"
QT_MOC_LITERAL(51, 803, 14), // "Vec4bArrayType"
QT_MOC_LITERAL(52, 818, 14), // "Vec2sArrayType"
QT_MOC_LITERAL(53, 833, 14), // "Vec3sArrayType"
QT_MOC_LITERAL(54, 848, 14), // "Vec4sArrayType"
QT_MOC_LITERAL(55, 863, 14), // "Vec2iArrayType"
QT_MOC_LITERAL(56, 878, 14), // "Vec3iArrayType"
QT_MOC_LITERAL(57, 893, 14), // "Vec4iArrayType"
QT_MOC_LITERAL(58, 908, 15), // "Vec2ubArrayType"
QT_MOC_LITERAL(59, 924, 15), // "Vec3ubArrayType"
QT_MOC_LITERAL(60, 940, 15), // "Vec4ubArrayType"
QT_MOC_LITERAL(61, 956, 15), // "Vec2usArrayType"
QT_MOC_LITERAL(62, 972, 15), // "Vec3usArrayType"
QT_MOC_LITERAL(63, 988, 15), // "Vec4usArrayType"
QT_MOC_LITERAL(64, 1004, 15), // "Vec2uiArrayType"
QT_MOC_LITERAL(65, 1020, 15), // "Vec3uiArrayType"
QT_MOC_LITERAL(66, 1036, 15), // "Vec4uiArrayType"
QT_MOC_LITERAL(67, 1052, 13), // "Vec2ArrayType"
QT_MOC_LITERAL(68, 1066, 13), // "Vec3ArrayType"
QT_MOC_LITERAL(69, 1080, 13), // "Vec4ArrayType"
QT_MOC_LITERAL(70, 1094, 14), // "Vec2dArrayType"
QT_MOC_LITERAL(71, 1109, 14), // "Vec3dArrayType"
QT_MOC_LITERAL(72, 1124, 14), // "Vec4dArrayType"
QT_MOC_LITERAL(73, 1139, 15), // "MatrixArrayType"
QT_MOC_LITERAL(74, 1155, 16) // "MatrixdArrayType"

    },
    "osg::QReflect_Array\0NormalizeChanged\0"
    "\0PreserveDataTypeChanged\0"
    "VertexBufferObjectChanged\0"
    "const osg::QReflect_VertexBufferObject*\0"
    "updateModel\0getDataSize\0GLint\0"
    "isSameKindAs\0osg::QReflect_Object*\0"
    "getVertexBufferObject\0"
    "osg::QReflect_VertexBufferObject*\0"
    "className\0const char*\0libraryName\0"
    "getNormalize\0getPreserveDataType\0"
    "asArray\0osg::QReflect_Array*\0getBinding\0"
    "osg::QReflect_Array::Binding\0getType\0"
    "osg::QReflect_Array::Type\0setBinding\0"
    "trim\0pmoc_reverse_setVertexBufferObject\0"
    "par\0setNormalize\0setPreserveDataType\0"
    "setVertexBufferObject\0Normalize\0"
    "PreserveDataType\0Binding\0BIND_UNDEFINED\0"
    "BIND_OFF\0BIND_OVERALL\0BIND_PER_PRIMITIVE_SET\0"
    "BIND_PER_VERTEX\0Type\0ArrayType\0"
    "ByteArrayType\0ShortArrayType\0IntArrayType\0"
    "UByteArrayType\0UShortArrayType\0"
    "UIntArrayType\0FloatArrayType\0"
    "DoubleArrayType\0Vec2bArrayType\0"
    "Vec3bArrayType\0Vec4bArrayType\0"
    "Vec2sArrayType\0Vec3sArrayType\0"
    "Vec4sArrayType\0Vec2iArrayType\0"
    "Vec3iArrayType\0Vec4iArrayType\0"
    "Vec2ubArrayType\0Vec3ubArrayType\0"
    "Vec4ubArrayType\0Vec2usArrayType\0"
    "Vec3usArrayType\0Vec4usArrayType\0"
    "Vec2uiArrayType\0Vec3uiArrayType\0"
    "Vec4uiArrayType\0Vec2ArrayType\0"
    "Vec3ArrayType\0Vec4ArrayType\0Vec2dArrayType\0"
    "Vec3dArrayType\0Vec4dArrayType\0"
    "MatrixArrayType\0MatrixdArrayType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Array[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       2,  164, // properties
       2,  172, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       3,    1,  127,    2, 0x06 /* Public */,
       4,    1,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  133,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,  134,    2, 0x02 /* Public */,
       9,    1,  135,    2, 0x02 /* Public */,
      11,    0,  138,    2, 0x02 /* Public */,
      13,    0,  139,    2, 0x02 /* Public */,
      15,    0,  140,    2, 0x02 /* Public */,
      16,    0,  141,    2, 0x02 /* Public */,
      17,    0,  142,    2, 0x02 /* Public */,
      18,    0,  143,    2, 0x02 /* Public */,
      18,    0,  144,    2, 0x02 /* Public */,
      20,    0,  145,    2, 0x02 /* Public */,
      22,    0,  146,    2, 0x02 /* Public */,
      24,    1,  147,    2, 0x02 /* Public */,
      25,    0,  150,    2, 0x02 /* Public */,
      26,    1,  151,    2, 0x02 /* Public */,
      26,    0,  154,    2, 0x22 /* Public | MethodCloned */,
      28,    1,  155,    2, 0x02 /* Public */,
      29,    1,  158,    2, 0x02 /* Public */,
      30,    1,  161,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 8,
    QMetaType::Bool, 0x80000000 | 10,    2,
    0x80000000 | 12,
    0x80000000 | 14,
    0x80000000 | 14,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 19,
    0x80000000 | 19,
    0x80000000 | 21,
    0x80000000 | 23,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 12,   27,

 // properties: name, type, flags
      31, QMetaType::Bool, 0x00495103,
      32, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      33, 0x0,    5,  180,
      39, 0x0,   35,  190,

 // enum data: key, value
      34, uint(osg::QReflect_Array::BIND_UNDEFINED),
      35, uint(osg::QReflect_Array::BIND_OFF),
      36, uint(osg::QReflect_Array::BIND_OVERALL),
      37, uint(osg::QReflect_Array::BIND_PER_PRIMITIVE_SET),
      38, uint(osg::QReflect_Array::BIND_PER_VERTEX),
      40, uint(osg::QReflect_Array::ArrayType),
      41, uint(osg::QReflect_Array::ByteArrayType),
      42, uint(osg::QReflect_Array::ShortArrayType),
      43, uint(osg::QReflect_Array::IntArrayType),
      44, uint(osg::QReflect_Array::UByteArrayType),
      45, uint(osg::QReflect_Array::UShortArrayType),
      46, uint(osg::QReflect_Array::UIntArrayType),
      47, uint(osg::QReflect_Array::FloatArrayType),
      48, uint(osg::QReflect_Array::DoubleArrayType),
      49, uint(osg::QReflect_Array::Vec2bArrayType),
      50, uint(osg::QReflect_Array::Vec3bArrayType),
      51, uint(osg::QReflect_Array::Vec4bArrayType),
      52, uint(osg::QReflect_Array::Vec2sArrayType),
      53, uint(osg::QReflect_Array::Vec3sArrayType),
      54, uint(osg::QReflect_Array::Vec4sArrayType),
      55, uint(osg::QReflect_Array::Vec2iArrayType),
      56, uint(osg::QReflect_Array::Vec3iArrayType),
      57, uint(osg::QReflect_Array::Vec4iArrayType),
      58, uint(osg::QReflect_Array::Vec2ubArrayType),
      59, uint(osg::QReflect_Array::Vec3ubArrayType),
      60, uint(osg::QReflect_Array::Vec4ubArrayType),
      61, uint(osg::QReflect_Array::Vec2usArrayType),
      62, uint(osg::QReflect_Array::Vec3usArrayType),
      63, uint(osg::QReflect_Array::Vec4usArrayType),
      64, uint(osg::QReflect_Array::Vec2uiArrayType),
      65, uint(osg::QReflect_Array::Vec3uiArrayType),
      66, uint(osg::QReflect_Array::Vec4uiArrayType),
      67, uint(osg::QReflect_Array::Vec2ArrayType),
      68, uint(osg::QReflect_Array::Vec3ArrayType),
      69, uint(osg::QReflect_Array::Vec4ArrayType),
      70, uint(osg::QReflect_Array::Vec2dArrayType),
      71, uint(osg::QReflect_Array::Vec3dArrayType),
      72, uint(osg::QReflect_Array::Vec4dArrayType),
      73, uint(osg::QReflect_Array::MatrixArrayType),
      74, uint(osg::QReflect_Array::MatrixdArrayType),

       0        // eod
};

void osg::QReflect_Array::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Array *_t = static_cast<QReflect_Array *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NormalizeChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->PreserveDataTypeChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->VertexBufferObjectChanged((*reinterpret_cast< const osg::QReflect_VertexBufferObject*(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { GLint _r = _t->getDataSize();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_VertexBufferObject* _r = _t->getVertexBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_VertexBufferObject**>(_a[0]) = _r; }  break;
        case 7: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 8: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->getNormalize();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->getPreserveDataType();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { osg::QReflect_Array* _r = _t->asArray();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Array**>(_a[0]) = _r; }  break;
        case 12: { osg::QReflect_Array* _r = _t->asArray();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Array**>(_a[0]) = _r; }  break;
        case 13: { osg::QReflect_Array::Binding _r = _t->getBinding();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Array::Binding*>(_a[0]) = _r; }  break;
        case 14: { osg::QReflect_Array::Type _r = _t->getType();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Array::Type*>(_a[0]) = _r; }  break;
        case 15: _t->setBinding((*reinterpret_cast< osg::QReflect_Array::Binding(*)>(_a[1]))); break;
        case 16: _t->trim(); break;
        case 17: _t->pmoc_reverse_setVertexBufferObject((*reinterpret_cast< osg::QReflect_VertexBufferObject*(*)>(_a[1]))); break;
        case 18: _t->pmoc_reverse_setVertexBufferObject(); break;
        case 19: _t->setNormalize((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 20: _t->setPreserveDataType((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: _t->setVertexBufferObject((*reinterpret_cast< osg::QReflect_VertexBufferObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Array::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Array::NormalizeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Array::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Array::PreserveDataTypeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_Array::*_t)(const osg::QReflect_VertexBufferObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Array::VertexBufferObjectChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Array *_t = static_cast<QReflect_Array *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getNormalize(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getPreserveDataType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Array *_t = static_cast<QReflect_Array *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNormalize(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPreserveDataType(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Array::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Array.data,
      qt_meta_data_osg__QReflect_Array,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Array::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Array::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Array.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Array*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Array::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_Array::NormalizeChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Array::PreserveDataTypeChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_Array::VertexBufferObjectChanged(const osg::QReflect_VertexBufferObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_osg__QReflect_ConstArrayVisitor_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ConstArrayVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ConstArrayVisitor_t qt_meta_stringdata_osg__QReflect_ConstArrayVisitor = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_ConstArrayVisitor"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "apply"
QT_MOC_LITERAL(4, 51, 20) // "osg::QReflect_Array*"

    },
    "osg::QReflect_ConstArrayVisitor\0"
    "updateModel\0\0apply\0osg::QReflect_Array*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ConstArrayVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_ConstArrayVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ConstArrayVisitor *_t = static_cast<QReflect_ConstArrayVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: _t->apply((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Array* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_ConstArrayVisitor::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ConstArrayVisitor.data,
      qt_meta_data_osg__QReflect_ConstArrayVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ConstArrayVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ConstArrayVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ConstArrayVisitor.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ConstArrayVisitor*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ConstArrayVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_IndexArray_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_IndexArray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_IndexArray_t qt_meta_stringdata_osg__QReflect_IndexArray = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osg::QReflect_IndexArray"
QT_MOC_LITERAL(1, 25, 11), // "updateModel"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "isSameKindAs"
QT_MOC_LITERAL(4, 51, 21) // "osg::QReflect_Object*"

    },
    "osg::QReflect_IndexArray\0updateModel\0"
    "\0isSameKindAs\0osg::QReflect_Object*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_IndexArray[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,

       0        // eod
};

void osg::QReflect_IndexArray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_IndexArray *_t = static_cast<QReflect_IndexArray *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_IndexArray::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_IndexArray.data,
      qt_meta_data_osg__QReflect_IndexArray,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_IndexArray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_IndexArray::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_IndexArray.stringdata0))
        return static_cast<void*>(const_cast< QReflect_IndexArray*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_IndexArray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
