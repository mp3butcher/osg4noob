/****************************************************************************
** Meta object code from reading C++ file 'AlphaFunc_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AlphaFunc_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlphaFunc_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_AlphaFunc_t {
    QByteArrayData data[21];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_AlphaFunc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_AlphaFunc_t qt_meta_stringdata_osg__QReflect_AlphaFunc = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_AlphaFunc"
QT_MOC_LITERAL(1, 24, 21), // "ReferenceValueChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "updateModel"
QT_MOC_LITERAL(4, 59, 7), // "compare"
QT_MOC_LITERAL(5, 67, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 97, 17), // "getReferenceValue"
QT_MOC_LITERAL(7, 115, 11), // "getFunction"
QT_MOC_LITERAL(8, 127, 43), // "osg::QReflect_AlphaFunc::Comp..."
QT_MOC_LITERAL(9, 171, 11), // "setFunction"
QT_MOC_LITERAL(10, 183, 17), // "setReferenceValue"
QT_MOC_LITERAL(11, 201, 14), // "ReferenceValue"
QT_MOC_LITERAL(12, 216, 18), // "ComparisonFunction"
QT_MOC_LITERAL(13, 235, 5), // "NEVER"
QT_MOC_LITERAL(14, 241, 4), // "LESS"
QT_MOC_LITERAL(15, 246, 5), // "EQUAL"
QT_MOC_LITERAL(16, 252, 6), // "LEQUAL"
QT_MOC_LITERAL(17, 259, 7), // "GREATER"
QT_MOC_LITERAL(18, 267, 8), // "NOTEQUAL"
QT_MOC_LITERAL(19, 276, 6), // "GEQUAL"
QT_MOC_LITERAL(20, 283, 6) // "ALWAYS"

    },
    "osg::QReflect_AlphaFunc\0ReferenceValueChanged\0"
    "\0updateModel\0compare\0osg::QReflect_StateAttribute*\0"
    "getReferenceValue\0getFunction\0"
    "osg::QReflect_AlphaFunc::ComparisonFunction\0"
    "setFunction\0setReferenceValue\0"
    "ReferenceValue\0ComparisonFunction\0"
    "NEVER\0LESS\0EQUAL\0LEQUAL\0GREATER\0"
    "NOTEQUAL\0GEQUAL\0ALWAYS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_AlphaFunc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   74, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   58,    2, 0x02 /* Public */,
       6,    0,   61,    2, 0x02 /* Public */,
       7,    0,   62,    2, 0x02 /* Public */,
       9,    2,   63,    2, 0x02 /* Public */,
       9,    1,   68,    2, 0x02 /* Public */,
      10,    1,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 5,    2,
    QMetaType::Float,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Float,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      11, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
      12, 0x0,    8,   82,

 // enum data: key, value
      13, uint(osg::QReflect_AlphaFunc::NEVER),
      14, uint(osg::QReflect_AlphaFunc::LESS),
      15, uint(osg::QReflect_AlphaFunc::EQUAL),
      16, uint(osg::QReflect_AlphaFunc::LEQUAL),
      17, uint(osg::QReflect_AlphaFunc::GREATER),
      18, uint(osg::QReflect_AlphaFunc::NOTEQUAL),
      19, uint(osg::QReflect_AlphaFunc::GEQUAL),
      20, uint(osg::QReflect_AlphaFunc::ALWAYS),

       0        // eod
};

void osg::QReflect_AlphaFunc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AlphaFunc *_t = static_cast<QReflect_AlphaFunc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReferenceValueChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { float _r = _t->getReferenceValue();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_AlphaFunc::ComparisonFunction _r = _t->getFunction();
            if (_a[0]) *reinterpret_cast< osg::QReflect_AlphaFunc::ComparisonFunction*>(_a[0]) = _r; }  break;
        case 5: _t->setFunction((*reinterpret_cast< osg::QReflect_AlphaFunc::ComparisonFunction(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->setFunction((*reinterpret_cast< osg::QReflect_AlphaFunc::ComparisonFunction(*)>(_a[1]))); break;
        case 7: _t->setReferenceValue((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_AlphaFunc::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AlphaFunc::ReferenceValueChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_AlphaFunc *_t = static_cast<QReflect_AlphaFunc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getReferenceValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_AlphaFunc *_t = static_cast<QReflect_AlphaFunc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReferenceValue(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_AlphaFunc::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_AlphaFunc.data,
      qt_meta_data_osg__QReflect_AlphaFunc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_AlphaFunc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_AlphaFunc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_AlphaFunc.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AlphaFunc*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_AlphaFunc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_AlphaFunc::ReferenceValueChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
