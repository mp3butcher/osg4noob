/****************************************************************************
** Meta object code from reading C++ file 'Vec2ui_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Vec2ui_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vec2ui_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Vec2ui_t {
    QByteArrayData data[12];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Vec2ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Vec2ui_t qt_meta_stringdata_osg__QReflect_Vec2ui = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_Vec2ui"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 1), // "g"
QT_MOC_LITERAL(4, 36, 1), // "r"
QT_MOC_LITERAL(5, 38, 1), // "x"
QT_MOC_LITERAL(6, 40, 1), // "y"
QT_MOC_LITERAL(7, 42, 3), // "ptr"
QT_MOC_LITERAL(8, 46, 5), // "uint*"
QT_MOC_LITERAL(9, 52, 11), // "const uint*"
QT_MOC_LITERAL(10, 64, 3), // "set"
QT_MOC_LITERAL(11, 68, 21) // "osg::QReflect_Vec2ui*"

    },
    "osg::QReflect_Vec2ui\0updateModel\0\0g\0"
    "r\0x\0y\0ptr\0uint*\0const uint*\0set\0"
    "osg::QReflect_Vec2ui*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Vec2ui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x02 /* Public */,
       4,    0,   81,    2, 0x02 /* Public */,
       5,    0,   82,    2, 0x02 /* Public */,
       6,    0,   83,    2, 0x02 /* Public */,
       3,    0,   84,    2, 0x02 /* Public */,
       4,    0,   85,    2, 0x02 /* Public */,
       5,    0,   86,    2, 0x02 /* Public */,
       6,    0,   87,    2, 0x02 /* Public */,
       7,    0,   88,    2, 0x02 /* Public */,
       7,    0,   89,    2, 0x02 /* Public */,
      10,    2,   90,    2, 0x02 /* Public */,
      10,    1,   95,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 8,
    0x80000000 | 9,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void osg::QReflect_Vec2ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Vec2ui *_t = static_cast<QReflect_Vec2ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { uint _r = _t->g();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 2: { uint _r = _t->r();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->x();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { uint _r = _t->y();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 5: _t->g(); break;
        case 6: _t->r(); break;
        case 7: _t->x(); break;
        case 8: _t->y(); break;
        case 9: { uint* _r = _t->ptr();
            if (_a[0]) *reinterpret_cast< uint**>(_a[0]) = _r; }  break;
        case 10: { const uint* _r = _t->ptr();
            if (_a[0]) *reinterpret_cast< const uint**>(_a[0]) = _r; }  break;
        case 11: _t->set((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 12: _t->set((*reinterpret_cast< osg::QReflect_Vec2ui*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Vec2ui* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_Vec2ui::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Vec2ui.data,
      qt_meta_data_osg__QReflect_Vec2ui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Vec2ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Vec2ui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Vec2ui.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Vec2ui*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Vec2ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
