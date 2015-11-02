/****************************************************************************
** Meta object code from reading C++ file 'UserDataContainer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UserDataContainer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserDataContainer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLUserDataContainer_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLUserDataContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLUserDataContainer_t qt_meta_stringdata_osg__QMLUserDataContainer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QMLUserDataContainer"
QT_MOC_LITERAL(1, 26, 11), // "updateModel"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "osg::QMLUserDataContainer\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLUserDataContainer[] = {

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

void osg::QMLUserDataContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLUserDataContainer *_t = static_cast<QMLUserDataContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLUserDataContainer::staticMetaObject = {
    { &QReflect_UserDataContainer::staticMetaObject, qt_meta_stringdata_osg__QMLUserDataContainer.data,
      qt_meta_data_osg__QMLUserDataContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLUserDataContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLUserDataContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLUserDataContainer.stringdata0))
        return static_cast<void*>(const_cast< QMLUserDataContainer*>(this));
    return QReflect_UserDataContainer::qt_metacast(_clname);
}

int osg::QMLUserDataContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_UserDataContainer::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QMLDefaultUserDataContainer_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLDefaultUserDataContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLDefaultUserDataContainer_t qt_meta_stringdata_osg__QMLDefaultUserDataContainer = {
    {
QT_MOC_LITERAL(0, 0, 32), // "osg::QMLDefaultUserDataContainer"
QT_MOC_LITERAL(1, 33, 11), // "updateModel"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "osg::QMLDefaultUserDataContainer\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLDefaultUserDataContainer[] = {

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

void osg::QMLDefaultUserDataContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLDefaultUserDataContainer *_t = static_cast<QMLDefaultUserDataContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLDefaultUserDataContainer::staticMetaObject = {
    { &QReflect_DefaultUserDataContainer::staticMetaObject, qt_meta_stringdata_osg__QMLDefaultUserDataContainer.data,
      qt_meta_data_osg__QMLDefaultUserDataContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLDefaultUserDataContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLDefaultUserDataContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLDefaultUserDataContainer.stringdata0))
        return static_cast<void*>(const_cast< QMLDefaultUserDataContainer*>(this));
    return QReflect_DefaultUserDataContainer::qt_metacast(_clname);
}

int osg::QMLDefaultUserDataContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_DefaultUserDataContainer::qt_metacall(_c, _id, _a);
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
