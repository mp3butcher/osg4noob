/****************************************************************************
** Meta object code from reading C++ file 'GLExtensions_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GLExtensions_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLExtensions_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_GLExtensions_t {
    QByteArrayData data[14];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GLExtensions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GLExtensions_t qt_meta_stringdata_osg__QReflect_GLExtensions = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_GLExtensions"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 27), // "isBindImageTextureSupported"
QT_MOC_LITERAL(4, 68, 31), // "isCompressedTexImage2DSupported"
QT_MOC_LITERAL(5, 100, 31), // "isCompressedTexImage3DSupported"
QT_MOC_LITERAL(6, 132, 34), // "isCompressedTexSubImage2DSupp..."
QT_MOC_LITERAL(7, 167, 34), // "isCompressedTexSubImage3DSupp..."
QT_MOC_LITERAL(8, 202, 42), // "isRenderbufferMultisampleCove..."
QT_MOC_LITERAL(9, 245, 34), // "isRenderbufferMultisampleSupp..."
QT_MOC_LITERAL(10, 280, 23), // "isTexStorage2DSupported"
QT_MOC_LITERAL(11, 304, 3), // "Get"
QT_MOC_LITERAL(12, 308, 27), // "osg::QReflect_GLExtensions*"
QT_MOC_LITERAL(13, 336, 3) // "Set"

    },
    "osg::QReflect_GLExtensions\0updateModel\0"
    "\0isBindImageTextureSupported\0"
    "isCompressedTexImage2DSupported\0"
    "isCompressedTexImage3DSupported\0"
    "isCompressedTexSubImage2DSupported\0"
    "isCompressedTexSubImage3DSupported\0"
    "isRenderbufferMultisampleCoverageSupported\0"
    "isRenderbufferMultisampleSupported\0"
    "isTexStorage2DSupported\0Get\0"
    "osg::QReflect_GLExtensions*\0Set"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GLExtensions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x02 /* Public */,
       4,    0,   71,    2, 0x02 /* Public */,
       5,    0,   72,    2, 0x02 /* Public */,
       6,    0,   73,    2, 0x02 /* Public */,
       7,    0,   74,    2, 0x02 /* Public */,
       8,    0,   75,    2, 0x02 /* Public */,
       9,    0,   76,    2, 0x02 /* Public */,
      10,    0,   77,    2, 0x02 /* Public */,
      11,    2,   78,    2, 0x02 /* Public */,
      13,    2,   83,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 12, QMetaType::UInt, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 12,    2,    2,

       0        // eod
};

void osg::QReflect_GLExtensions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GLExtensions *_t = static_cast<QReflect_GLExtensions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isBindImageTextureSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->isCompressedTexImage2DSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->isCompressedTexImage3DSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isCompressedTexSubImage2DSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isCompressedTexSubImage3DSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isRenderbufferMultisampleCoverageSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isRenderbufferMultisampleSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isTexStorage2DSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { osg::QReflect_GLExtensions* _r = _t->Get((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLExtensions**>(_a[0]) = _r; }  break;
        case 10: _t->Set((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_GLExtensions*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_GLExtensions* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_GLExtensions::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GLExtensions.data,
      qt_meta_data_osg__QReflect_GLExtensions,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GLExtensions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GLExtensions::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GLExtensions.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GLExtensions*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GLExtensions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
