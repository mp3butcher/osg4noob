/****************************************************************************
** Meta object code from reading C++ file 'Hint_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Hint_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hint_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_Hint_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Hint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Hint_t qt_meta_stringdata_osg__QReflect_Hint = {
    {
QT_MOC_LITERAL(0, 0, 18), // "osg::QReflect_Hint"
QT_MOC_LITERAL(1, 19, 11), // "updateModel"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "isSameKindAs"
QT_MOC_LITERAL(4, 45, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(5, 67, 7), // "compare"
QT_MOC_LITERAL(6, 75, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 105, 9), // "getMember"
QT_MOC_LITERAL(8, 115, 9), // "className"
QT_MOC_LITERAL(9, 125, 11), // "const char*"
QT_MOC_LITERAL(10, 137, 11), // "libraryName"
QT_MOC_LITERAL(11, 149, 5), // "clone"
QT_MOC_LITERAL(12, 155, 21), // "osg::QReflect_CopyOp*"
QT_MOC_LITERAL(13, 177, 9) // "cloneType"

    },
    "osg::QReflect_Hint\0updateModel\0\0"
    "isSameKindAs\0osg::QReflect_Object*\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getMember\0className\0const char*\0"
    "libraryName\0clone\0osg::QReflect_CopyOp*\0"
    "cloneType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Hint[] = {

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
       3,    1,   55,    2, 0x02 /* Public */,
       5,    1,   58,    2, 0x02 /* Public */,
       7,    0,   61,    2, 0x02 /* Public */,
       8,    0,   62,    2, 0x02 /* Public */,
      10,    0,   63,    2, 0x02 /* Public */,
      11,    1,   64,    2, 0x02 /* Public */,
      13,    0,   67,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::UInt,
    0x80000000 | 9,
    0x80000000 | 9,
    0x80000000 | 4, 0x80000000 | 12,    2,
    0x80000000 | 4,

       0        // eod
};

void osg::QReflect_Hint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Hint *_t = static_cast<QReflect_Hint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getMember();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 5: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_Object* _r = _t->clone((*reinterpret_cast< osg::QReflect_CopyOp*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_Object* _r = _t->cloneType();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_Hint::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Hint.data,
      qt_meta_data_osg__QReflect_Hint,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Hint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Hint::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Hint.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Hint*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Hint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
