/****************************************************************************
** Meta object code from reading C++ file 'LineWidth_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LineWidth_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineWidth_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_LineWidth_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_LineWidth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_LineWidth_t qt_meta_stringdata_osg__QReflect_LineWidth = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QReflect_LineWidth"
QT_MOC_LITERAL(1, 24, 12), // "WidthChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "updateModel"
QT_MOC_LITERAL(4, 50, 7), // "compare"
QT_MOC_LITERAL(5, 58, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 88, 8), // "getWidth"
QT_MOC_LITERAL(7, 97, 8), // "setWidth"
QT_MOC_LITERAL(8, 106, 5) // "Width"

    },
    "osg::QReflect_LineWidth\0WidthChanged\0"
    "\0updateModel\0compare\0osg::QReflect_StateAttribute*\0"
    "getWidth\0setWidth\0Width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_LineWidth[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   43,    2, 0x02 /* Public */,
       6,    0,   46,    2, 0x02 /* Public */,
       7,    1,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 5,    2,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
       8, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_LineWidth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_LineWidth *_t = static_cast<QReflect_LineWidth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->WidthChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { float _r = _t->getWidth();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 4: _t->setWidth((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_LineWidth::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_LineWidth::WidthChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_LineWidth *_t = static_cast<QReflect_LineWidth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_LineWidth *_t = static_cast<QReflect_LineWidth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_LineWidth::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_LineWidth.data,
      qt_meta_data_osg__QReflect_LineWidth,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_LineWidth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_LineWidth::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_LineWidth.stringdata0))
        return static_cast<void*>(const_cast< QReflect_LineWidth*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_LineWidth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
void osg::QReflect_LineWidth::WidthChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
