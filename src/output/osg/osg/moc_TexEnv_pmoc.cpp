/****************************************************************************
** Meta object code from reading C++ file 'TexEnv_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TexEnv_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexEnv_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_TexEnv_t {
    QByteArrayData data[17];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TexEnv_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TexEnv_t qt_meta_stringdata_osg__QReflect_TexEnv = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_TexEnv"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "isTextureAttribute"
QT_MOC_LITERAL(4, 53, 7), // "compare"
QT_MOC_LITERAL(5, 61, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 91, 7), // "getMode"
QT_MOC_LITERAL(7, 99, 26), // "osg::QReflect_TexEnv::Mode"
QT_MOC_LITERAL(8, 126, 8), // "setColor"
QT_MOC_LITERAL(9, 135, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(10, 156, 7), // "setMode"
QT_MOC_LITERAL(11, 164, 4), // "Mode"
QT_MOC_LITERAL(12, 169, 5), // "DECAL"
QT_MOC_LITERAL(13, 175, 8), // "MODULATE"
QT_MOC_LITERAL(14, 184, 5), // "BLEND"
QT_MOC_LITERAL(15, 190, 7), // "REPLACE"
QT_MOC_LITERAL(16, 198, 3) // "ADD"

    },
    "osg::QReflect_TexEnv\0updateModel\0\0"
    "isTextureAttribute\0compare\0"
    "osg::QReflect_StateAttribute*\0getMode\0"
    "osg::QReflect_TexEnv::Mode\0setColor\0"
    "osg::QReflect_Vec4f*\0setMode\0Mode\0"
    "DECAL\0MODULATE\0BLEND\0REPLACE\0ADD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TexEnv[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x02 /* Public */,
       4,    1,   46,    2, 0x02 /* Public */,
       6,    0,   49,    2, 0x02 /* Public */,
       8,    1,   50,    2, 0x02 /* Public */,
      10,    1,   53,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 5,    2,
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // enums: name, flags, count, data
      11, 0x0,    5,   60,

 // enum data: key, value
      12, uint(osg::QReflect_TexEnv::DECAL),
      13, uint(osg::QReflect_TexEnv::MODULATE),
      14, uint(osg::QReflect_TexEnv::BLEND),
      15, uint(osg::QReflect_TexEnv::REPLACE),
      16, uint(osg::QReflect_TexEnv::ADD),

       0        // eod
};

void osg::QReflect_TexEnv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TexEnv *_t = static_cast<QReflect_TexEnv *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isTextureAttribute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_TexEnv::Mode _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_TexEnv::Mode*>(_a[0]) = _r; }  break;
        case 4: _t->setColor((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 5: _t->setMode((*reinterpret_cast< osg::QReflect_TexEnv::Mode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_TexEnv::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TexEnv.data,
      qt_meta_data_osg__QReflect_TexEnv,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TexEnv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TexEnv::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TexEnv.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TexEnv*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TexEnv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
