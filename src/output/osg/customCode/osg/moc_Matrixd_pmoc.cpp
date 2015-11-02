/****************************************************************************
** Meta object code from reading C++ file 'Matrixd_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Matrixd_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Matrixd_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLMatrixd_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLMatrixd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLMatrixd_t qt_meta_stringdata_osg__QMLMatrixd = {
    {
QT_MOC_LITERAL(0, 0, 15), // "osg::QMLMatrixd"
QT_MOC_LITERAL(1, 16, 11), // "updateModel"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "osg::QMLMatrixd\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLMatrixd[] = {

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

void osg::QMLMatrixd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLMatrixd *_t = static_cast<QMLMatrixd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLMatrixd::staticMetaObject = {
    { &QReflect_Matrixd::staticMetaObject, qt_meta_stringdata_osg__QMLMatrixd.data,
      qt_meta_data_osg__QMLMatrixd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLMatrixd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLMatrixd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLMatrixd.stringdata0))
        return static_cast<void*>(const_cast< QMLMatrixd*>(this));
    return QReflect_Matrixd::qt_metacast(_clname);
}

int osg::QMLMatrixd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Matrixd::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLRefMatrixd_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLRefMatrixd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLRefMatrixd_t qt_meta_stringdata_osg__QMLRefMatrixd = {
    {
QT_MOC_LITERAL(0, 0, 18), // "osg::QMLRefMatrixd"
QT_MOC_LITERAL(1, 19, 11), // "updateModel"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "osg::QMLRefMatrixd\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLRefMatrixd[] = {

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

void osg::QMLRefMatrixd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLRefMatrixd *_t = static_cast<QMLRefMatrixd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLRefMatrixd::staticMetaObject = {
    { &QReflect_RefMatrixd::staticMetaObject, qt_meta_stringdata_osg__QMLRefMatrixd.data,
      qt_meta_data_osg__QMLRefMatrixd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLRefMatrixd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLRefMatrixd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLRefMatrixd.stringdata0))
        return static_cast<void*>(const_cast< QMLRefMatrixd*>(this));
    return QReflect_RefMatrixd::qt_metacast(_clname);
}

int osg::QMLRefMatrixd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_RefMatrixd::qt_metacall(_c, _id, _a);
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
