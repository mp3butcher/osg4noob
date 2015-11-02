/****************************************************************************
** Meta object code from reading C++ file 'Billboard_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Billboard_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Billboard_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Billboard_t {
    QByteArrayData data[21];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Billboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Billboard_t qt_meta_stringdata_osg__QReflect_Billboard = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_Billboard"
QT_MOC_LITERAL(1, 24, 25), // "DrawableCollectionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "updateModel"
QT_MOC_LITERAL(4, 63, 11), // "addDrawable"
QT_MOC_LITERAL(5, 75, 23), // "osg::QReflect_Drawable*"
QT_MOC_LITERAL(6, 99, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(7, 120, 13), // "computeMatrix"
QT_MOC_LITERAL(8, 134, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(9, 157, 7), // "getMode"
QT_MOC_LITERAL(10, 165, 29), // "osg::QReflect_Billboard::Mode"
QT_MOC_LITERAL(11, 195, 7), // "setAxis"
QT_MOC_LITERAL(12, 203, 7), // "setMode"
QT_MOC_LITERAL(13, 211, 9), // "setNormal"
QT_MOC_LITERAL(14, 221, 11), // "setPosition"
QT_MOC_LITERAL(15, 233, 3), // "par"
QT_MOC_LITERAL(16, 237, 24), // "pmoc_reverse_addDrawable"
QT_MOC_LITERAL(17, 262, 4), // "Mode"
QT_MOC_LITERAL(18, 267, 13), // "POINT_ROT_EYE"
QT_MOC_LITERAL(19, 281, 15), // "POINT_ROT_WORLD"
QT_MOC_LITERAL(20, 297, 9) // "AXIAL_ROT"

    },
    "osg::QReflect_Billboard\0"
    "DrawableCollectionChanged\0\0updateModel\0"
    "addDrawable\0osg::QReflect_Drawable*\0"
    "osg::QReflect_Vec3f*\0computeMatrix\0"
    "osg::QReflect_Matrixd*\0getMode\0"
    "osg::QReflect_Billboard::Mode\0setAxis\0"
    "setMode\0setNormal\0setPosition\0par\0"
    "pmoc_reverse_addDrawable\0Mode\0"
    "POINT_ROT_EYE\0POINT_ROT_WORLD\0AXIAL_ROT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Billboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   71,    2, 0x02 /* Public */,
       7,    3,   76,    2, 0x02 /* Public */,
       9,    0,   83,    2, 0x02 /* Public */,
      11,    1,   84,    2, 0x02 /* Public */,
      12,    1,   87,    2, 0x02 /* Public */,
      13,    1,   90,    2, 0x02 /* Public */,
      14,    2,   93,    2, 0x02 /* Public */,
       4,    1,   98,    2, 0x02 /* Public */,
      16,    1,  101,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 6,    2,    2,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 6, 0x80000000 | 6,    2,    2,    2,
    0x80000000 | 10,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 5,   15,
    QMetaType::Void, 0x80000000 | 5,   15,

 // enums: name, flags, count, data
      17, 0x0,    3,  108,

 // enum data: key, value
      18, uint(osg::QReflect_Billboard::POINT_ROT_EYE),
      19, uint(osg::QReflect_Billboard::POINT_ROT_WORLD),
      20, uint(osg::QReflect_Billboard::AXIAL_ROT),

       0        // eod
};

void osg::QReflect_Billboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Billboard *_t = static_cast<QReflect_Billboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DrawableCollectionChanged(); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->addDrawable((*reinterpret_cast< osg::QReflect_Drawable*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->computeMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_Billboard::Mode _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Billboard::Mode*>(_a[0]) = _r; }  break;
        case 5: _t->setAxis((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 6: _t->setMode((*reinterpret_cast< osg::QReflect_Billboard::Mode(*)>(_a[1]))); break;
        case 7: _t->setNormal((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 8: _t->setPosition((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2]))); break;
        case 9: _t->addDrawable((*reinterpret_cast< osg::QReflect_Drawable*(*)>(_a[1]))); break;
        case 10: _t->pmoc_reverse_addDrawable((*reinterpret_cast< osg::QReflect_Drawable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Billboard::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Billboard::DrawableCollectionChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_Billboard::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Billboard.data,
      qt_meta_data_osg__QReflect_Billboard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Billboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Billboard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Billboard.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Billboard*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Billboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_Billboard::DrawableCollectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
