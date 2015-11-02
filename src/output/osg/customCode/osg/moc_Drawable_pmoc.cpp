/****************************************************************************
** Meta object code from reading C++ file 'Drawable_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Drawable_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Drawable_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLDrawable_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLDrawable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLDrawable_t qt_meta_stringdata_osg__QMLDrawable = {
    {
QT_MOC_LITERAL(0, 0, 16), // "osg::QMLDrawable"
QT_MOC_LITERAL(1, 17, 11), // "updateModel"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "osg::QMLDrawable\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLDrawable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QMLDrawable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLDrawable *_t = static_cast<QMLDrawable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLDrawable::staticMetaObject = {
    { &QReflect_Drawable::staticMetaObject, qt_meta_stringdata_osg__QMLDrawable.data,
      qt_meta_data_osg__QMLDrawable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLDrawable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLDrawable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLDrawable.stringdata0))
        return static_cast<void*>(const_cast< QMLDrawable*>(this));
    return QReflect_Drawable::qt_metacast(_clname);
}

int osg::QMLDrawable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Drawable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QMLConstAttributeFunctorArrayVisitor_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLConstAttributeFunctorArrayVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLConstAttributeFunctorArrayVisitor_t qt_meta_stringdata_osg__QMLConstAttributeFunctorArrayVisitor = {
    {
QT_MOC_LITERAL(0, 0, 41), // "osg::QMLConstAttributeFunctor..."
QT_MOC_LITERAL(1, 42, 11), // "updateModel"
QT_MOC_LITERAL(2, 54, 0) // ""

    },
    "osg::QMLConstAttributeFunctorArrayVisitor\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLConstAttributeFunctorArrayVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QMLConstAttributeFunctorArrayVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLConstAttributeFunctorArrayVisitor *_t = static_cast<QMLConstAttributeFunctorArrayVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLConstAttributeFunctorArrayVisitor::staticMetaObject = {
    { &QReflect_ConstAttributeFunctorArrayVisitor::staticMetaObject, qt_meta_stringdata_osg__QMLConstAttributeFunctorArrayVisitor.data,
      qt_meta_data_osg__QMLConstAttributeFunctorArrayVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLConstAttributeFunctorArrayVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLConstAttributeFunctorArrayVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLConstAttributeFunctorArrayVisitor.stringdata0))
        return static_cast<void*>(const_cast< QMLConstAttributeFunctorArrayVisitor*>(this));
    return QReflect_ConstAttributeFunctorArrayVisitor::qt_metacast(_clname);
}

int osg::QMLConstAttributeFunctorArrayVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_ConstAttributeFunctorArrayVisitor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QMLAttributeFunctorArrayVisitor_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLAttributeFunctorArrayVisitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLAttributeFunctorArrayVisitor_t qt_meta_stringdata_osg__QMLAttributeFunctorArrayVisitor = {
    {
QT_MOC_LITERAL(0, 0, 36), // "osg::QMLAttributeFunctorArray..."
QT_MOC_LITERAL(1, 37, 11), // "updateModel"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "osg::QMLAttributeFunctorArrayVisitor\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLAttributeFunctorArrayVisitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QMLAttributeFunctorArrayVisitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLAttributeFunctorArrayVisitor *_t = static_cast<QMLAttributeFunctorArrayVisitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLAttributeFunctorArrayVisitor::staticMetaObject = {
    { &QReflect_AttributeFunctorArrayVisitor::staticMetaObject, qt_meta_stringdata_osg__QMLAttributeFunctorArrayVisitor.data,
      qt_meta_data_osg__QMLAttributeFunctorArrayVisitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLAttributeFunctorArrayVisitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLAttributeFunctorArrayVisitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLAttributeFunctorArrayVisitor.stringdata0))
        return static_cast<void*>(const_cast< QMLAttributeFunctorArrayVisitor*>(this));
    return QReflect_AttributeFunctorArrayVisitor::qt_metacast(_clname);
}

int osg::QMLAttributeFunctorArrayVisitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_AttributeFunctorArrayVisitor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
