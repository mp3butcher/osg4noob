/****************************************************************************
** Meta object code from reading C++ file 'Vec4f_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Vec4f_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vec4f_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLVec4f_t {
    QByteArrayData data[11];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLVec4f_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLVec4f_t qt_meta_stringdata_osg__QMLVec4f = {
    {
QT_MOC_LITERAL(0, 0, 13), // "osg::QMLVec4f"
QT_MOC_LITERAL(1, 14, 8), // "xChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "yChanged"
QT_MOC_LITERAL(4, 33, 8), // "zChanged"
QT_MOC_LITERAL(5, 42, 8), // "wChanged"
QT_MOC_LITERAL(6, 51, 11), // "updateModel"
QT_MOC_LITERAL(7, 63, 1), // "x"
QT_MOC_LITERAL(8, 65, 1), // "y"
QT_MOC_LITERAL(9, 67, 1), // "z"
QT_MOC_LITERAL(10, 69, 1) // "w"

    },
    "osg::QMLVec4f\0xChanged\0\0yChanged\0"
    "zChanged\0wChanged\0updateModel\0x\0y\0z\0"
    "w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLVec4f[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,
       4,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Float, 0x00495003,
       8, QMetaType::Float, 0x00495003,
       9, QMetaType::Float, 0x00495003,
      10, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void osg::QMLVec4f::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLVec4f *_t = static_cast<QMLVec4f *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->wChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLVec4f::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4f::xChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLVec4f::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4f::yChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLVec4f::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4f::zChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLVec4f::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4f::wChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLVec4f *_t = static_cast<QMLVec4f *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->w(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLVec4f *_t = static_cast<QMLVec4f *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->x(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->y(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->z(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->w(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLVec4f::staticMetaObject = {
    { &QReflect_Vec4f::staticMetaObject, qt_meta_stringdata_osg__QMLVec4f.data,
      qt_meta_data_osg__QMLVec4f,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLVec4f::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLVec4f::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLVec4f.stringdata0))
        return static_cast<void*>(const_cast< QMLVec4f*>(this));
    return QReflect_Vec4f::qt_metacast(_clname);
}

int osg::QMLVec4f::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Vec4f::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLVec4f::xChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLVec4f::yChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLVec4f::zChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLVec4f::wChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
