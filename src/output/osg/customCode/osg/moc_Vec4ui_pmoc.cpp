/****************************************************************************
** Meta object code from reading C++ file 'Vec4ui_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Vec4ui_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vec4ui_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLVec4ui_t {
    QByteArrayData data[11];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLVec4ui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLVec4ui_t qt_meta_stringdata_osg__QMLVec4ui = {
    {
QT_MOC_LITERAL(0, 0, 14), // "osg::QMLVec4ui"
QT_MOC_LITERAL(1, 15, 8), // "xChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "yChanged"
QT_MOC_LITERAL(4, 34, 8), // "zChanged"
QT_MOC_LITERAL(5, 43, 8), // "wChanged"
QT_MOC_LITERAL(6, 52, 11), // "updateModel"
QT_MOC_LITERAL(7, 64, 1), // "x"
QT_MOC_LITERAL(8, 66, 1), // "y"
QT_MOC_LITERAL(9, 68, 1), // "z"
QT_MOC_LITERAL(10, 70, 1) // "w"

    },
    "osg::QMLVec4ui\0xChanged\0\0yChanged\0"
    "zChanged\0wChanged\0updateModel\0x\0y\0z\0"
    "w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLVec4ui[] = {

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
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::UInt, 0x00495003,
       8, QMetaType::UInt, 0x00495003,
       9, QMetaType::UInt, 0x00495003,
      10, QMetaType::UInt, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void osg::QMLVec4ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLVec4ui *_t = static_cast<QMLVec4ui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->yChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->zChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->wChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLVec4ui::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4ui::xChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLVec4ui::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4ui::yChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLVec4ui::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4ui::zChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLVec4ui::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLVec4ui::wChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLVec4ui *_t = static_cast<QMLVec4ui *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->z(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->w(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLVec4ui *_t = static_cast<QMLVec4ui *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->x(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->y(*reinterpret_cast< uint*>(_v)); break;
        case 2: _t->z(*reinterpret_cast< uint*>(_v)); break;
        case 3: _t->w(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLVec4ui::staticMetaObject = {
    { &QReflect_Vec4ui::staticMetaObject, qt_meta_stringdata_osg__QMLVec4ui.data,
      qt_meta_data_osg__QMLVec4ui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLVec4ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLVec4ui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLVec4ui.stringdata0))
        return static_cast<void*>(const_cast< QMLVec4ui*>(this));
    return QReflect_Vec4ui::qt_metacast(_clname);
}

int osg::QMLVec4ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Vec4ui::qt_metacall(_c, _id, _a);
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
void osg::QMLVec4ui::xChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLVec4ui::yChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLVec4ui::zChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLVec4ui::wChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
