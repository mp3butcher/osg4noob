/****************************************************************************
** Meta object code from reading C++ file 'BlendEquation_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "BlendEquation_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlendEquation_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_BlendEquation_t {
    QByteArrayData data[21];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_BlendEquation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_BlendEquation_t qt_meta_stringdata_osg__QReflect_BlendEquation = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_BlendEquation"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "compare"
QT_MOC_LITERAL(4, 49, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(5, 79, 11), // "getEquation"
QT_MOC_LITERAL(6, 91, 37), // "osg::QReflect_BlendEquation::..."
QT_MOC_LITERAL(7, 129, 16), // "getEquationAlpha"
QT_MOC_LITERAL(8, 146, 14), // "getEquationRGB"
QT_MOC_LITERAL(9, 161, 11), // "setEquation"
QT_MOC_LITERAL(10, 173, 16), // "setEquationAlpha"
QT_MOC_LITERAL(11, 190, 14), // "setEquationRGB"
QT_MOC_LITERAL(12, 205, 8), // "Equation"
QT_MOC_LITERAL(13, 214, 8), // "RGBA_MIN"
QT_MOC_LITERAL(14, 223, 8), // "RGBA_MAX"
QT_MOC_LITERAL(15, 232, 9), // "ALPHA_MIN"
QT_MOC_LITERAL(16, 242, 9), // "ALPHA_MAX"
QT_MOC_LITERAL(17, 252, 8), // "LOGIC_OP"
QT_MOC_LITERAL(18, 261, 8), // "FUNC_ADD"
QT_MOC_LITERAL(19, 270, 13), // "FUNC_SUBTRACT"
QT_MOC_LITERAL(20, 284, 21) // "FUNC_REVERSE_SUBTRACT"

    },
    "osg::QReflect_BlendEquation\0updateModel\0"
    "\0compare\0osg::QReflect_StateAttribute*\0"
    "getEquation\0osg::QReflect_BlendEquation::Equation\0"
    "getEquationAlpha\0getEquationRGB\0"
    "setEquation\0setEquationAlpha\0"
    "setEquationRGB\0Equation\0RGBA_MIN\0"
    "RGBA_MAX\0ALPHA_MIN\0ALPHA_MAX\0LOGIC_OP\0"
    "FUNC_ADD\0FUNC_SUBTRACT\0FUNC_REVERSE_SUBTRACT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_BlendEquation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x02 /* Public */,
       5,    0,   58,    2, 0x02 /* Public */,
       7,    0,   59,    2, 0x02 /* Public */,
       8,    0,   60,    2, 0x02 /* Public */,
       9,    1,   61,    2, 0x02 /* Public */,
      10,    1,   64,    2, 0x02 /* Public */,
      11,    1,   67,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 4,    2,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,

 // enums: name, flags, count, data
      12, 0x0,    8,   74,

 // enum data: key, value
      13, uint(osg::QReflect_BlendEquation::RGBA_MIN),
      14, uint(osg::QReflect_BlendEquation::RGBA_MAX),
      15, uint(osg::QReflect_BlendEquation::ALPHA_MIN),
      16, uint(osg::QReflect_BlendEquation::ALPHA_MAX),
      17, uint(osg::QReflect_BlendEquation::LOGIC_OP),
      18, uint(osg::QReflect_BlendEquation::FUNC_ADD),
      19, uint(osg::QReflect_BlendEquation::FUNC_SUBTRACT),
      20, uint(osg::QReflect_BlendEquation::FUNC_REVERSE_SUBTRACT),

       0        // eod
};

void osg::QReflect_BlendEquation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_BlendEquation *_t = static_cast<QReflect_BlendEquation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_BlendEquation::Equation _r = _t->getEquation();
            if (_a[0]) *reinterpret_cast< osg::QReflect_BlendEquation::Equation*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_BlendEquation::Equation _r = _t->getEquationAlpha();
            if (_a[0]) *reinterpret_cast< osg::QReflect_BlendEquation::Equation*>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_BlendEquation::Equation _r = _t->getEquationRGB();
            if (_a[0]) *reinterpret_cast< osg::QReflect_BlendEquation::Equation*>(_a[0]) = _r; }  break;
        case 5: _t->setEquation((*reinterpret_cast< osg::QReflect_BlendEquation::Equation(*)>(_a[1]))); break;
        case 6: _t->setEquationAlpha((*reinterpret_cast< osg::QReflect_BlendEquation::Equation(*)>(_a[1]))); break;
        case 7: _t->setEquationRGB((*reinterpret_cast< osg::QReflect_BlendEquation::Equation(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_BlendEquation::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_BlendEquation.data,
      qt_meta_data_osg__QReflect_BlendEquation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_BlendEquation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_BlendEquation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_BlendEquation.stringdata0))
        return static_cast<void*>(const_cast< QReflect_BlendEquation*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_BlendEquation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
