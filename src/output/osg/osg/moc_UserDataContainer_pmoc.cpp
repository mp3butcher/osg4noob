/****************************************************************************
** Meta object code from reading C++ file 'UserDataContainer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UserDataContainer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserDataContainer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_UserDataContainer_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_UserDataContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_UserDataContainer_t qt_meta_stringdata_osg__QReflect_UserDataContainer = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_UserDataContainer"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 12), // "isSameKindAs"
QT_MOC_LITERAL(4, 58, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(5, 80, 9), // "className"
QT_MOC_LITERAL(6, 90, 11), // "const char*"
QT_MOC_LITERAL(7, 102, 11), // "libraryName"
QT_MOC_LITERAL(8, 114, 13) // "getUserObject"

    },
    "osg::QReflect_UserDataContainer\0"
    "updateModel\0\0isSameKindAs\0"
    "osg::QReflect_Object*\0className\0"
    "const char*\0libraryName\0getUserObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_UserDataContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x02 /* Public */,
       5,    0,   48,    2, 0x02 /* Public */,
       7,    0,   49,    2, 0x02 /* Public */,
       8,    2,   50,    2, 0x02 /* Public */,
       8,    2,   55,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 4, QMetaType::QString, QMetaType::UInt,    2,    2,
    0x80000000 | 4, QMetaType::QString, QMetaType::UInt,    2,    2,

       0        // eod
};

void osg::QReflect_UserDataContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_UserDataContainer *_t = static_cast<QReflect_UserDataContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_Object* _r = _t->getUserObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 5: { osg::QReflect_Object* _r = _t->getUserObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_UserDataContainer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_UserDataContainer.data,
      qt_meta_data_osg__QReflect_UserDataContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_UserDataContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_UserDataContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_UserDataContainer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_UserDataContainer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_UserDataContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_DefaultUserDataContainer_t {
    QByteArrayData data[20];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_DefaultUserDataContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_DefaultUserDataContainer_t qt_meta_stringdata_osg__QReflect_DefaultUserDataContainer = {
    {
QT_MOC_LITERAL(0, 0, 38), // "osg::QReflect_DefaultUserData..."
QT_MOC_LITERAL(1, 39, 15), // "UserDataChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 31), // "const osg::QReflect_Referenced*"
QT_MOC_LITERAL(4, 88, 11), // "updateModel"
QT_MOC_LITERAL(5, 100, 13), // "addUserObject"
QT_MOC_LITERAL(6, 114, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(7, 136, 18), // "getNumDescriptions"
QT_MOC_LITERAL(8, 155, 17), // "getNumUserObjects"
QT_MOC_LITERAL(9, 173, 18), // "getUserObjectIndex"
QT_MOC_LITERAL(10, 192, 13), // "getUserObject"
QT_MOC_LITERAL(11, 206, 14), // "addDescription"
QT_MOC_LITERAL(12, 221, 16), // "removeUserObject"
QT_MOC_LITERAL(13, 238, 21), // "setThreadSafeRefUnref"
QT_MOC_LITERAL(14, 260, 13), // "setUserObject"
QT_MOC_LITERAL(15, 274, 11), // "getUserData"
QT_MOC_LITERAL(16, 286, 25), // "osg::QReflect_Referenced*"
QT_MOC_LITERAL(17, 312, 24), // "pmoc_reverse_setUserData"
QT_MOC_LITERAL(18, 337, 3), // "par"
QT_MOC_LITERAL(19, 341, 11) // "setUserData"

    },
    "osg::QReflect_DefaultUserDataContainer\0"
    "UserDataChanged\0\0const osg::QReflect_Referenced*\0"
    "updateModel\0addUserObject\0"
    "osg::QReflect_Object*\0getNumDescriptions\0"
    "getNumUserObjects\0getUserObjectIndex\0"
    "getUserObject\0addDescription\0"
    "removeUserObject\0setThreadSafeRefUnref\0"
    "setUserObject\0getUserData\0"
    "osg::QReflect_Referenced*\0"
    "pmoc_reverse_setUserData\0par\0setUserData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_DefaultUserDataContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  102,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,  103,    2, 0x02 /* Public */,
       7,    0,  106,    2, 0x02 /* Public */,
       8,    0,  107,    2, 0x02 /* Public */,
       9,    2,  108,    2, 0x02 /* Public */,
       9,    2,  113,    2, 0x02 /* Public */,
      10,    1,  118,    2, 0x02 /* Public */,
      10,    1,  121,    2, 0x02 /* Public */,
      11,    1,  124,    2, 0x02 /* Public */,
      12,    1,  127,    2, 0x02 /* Public */,
      13,    1,  130,    2, 0x02 /* Public */,
      14,    2,  133,    2, 0x02 /* Public */,
      15,    0,  138,    2, 0x02 /* Public */,
      17,    1,  139,    2, 0x02 /* Public */,
      17,    0,  142,    2, 0x22 /* Public | MethodCloned */,
      19,    1,  143,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt, 0x80000000 | 6,    2,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt, QMetaType::QString, QMetaType::UInt,    2,    2,
    QMetaType::UInt, 0x80000000 | 6, QMetaType::UInt,    2,    2,
    0x80000000 | 6, QMetaType::UInt,    2,
    0x80000000 | 6, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 6,    2,    2,
    0x80000000 | 16,
    QMetaType::Void, 0x80000000 | 16,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   18,

       0        // eod
};

void osg::QReflect_DefaultUserDataContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_DefaultUserDataContainer *_t = static_cast<QReflect_DefaultUserDataContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UserDataChanged((*reinterpret_cast< const osg::QReflect_Referenced*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { uint _r = _t->addUserObject((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getNumDescriptions();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { uint _r = _t->getNumUserObjects();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 5: { uint _r = _t->getUserObjectIndex((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 6: { uint _r = _t->getUserObjectIndex((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_Object* _r = _t->getUserObject((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 8: { osg::QReflect_Object* _r = _t->getUserObject((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 9: _t->addDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->removeUserObject((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->setThreadSafeRefUnref((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setUserObject((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Object*(*)>(_a[2]))); break;
        case 13: { osg::QReflect_Referenced* _r = _t->getUserData();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Referenced**>(_a[0]) = _r; }  break;
        case 14: _t->pmoc_reverse_setUserData((*reinterpret_cast< osg::QReflect_Referenced*(*)>(_a[1]))); break;
        case 15: _t->pmoc_reverse_setUserData(); break;
        case 16: _t->setUserData((*reinterpret_cast< osg::QReflect_Referenced*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_DefaultUserDataContainer::*_t)(const osg::QReflect_Referenced * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_DefaultUserDataContainer::UserDataChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_DefaultUserDataContainer::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_DefaultUserDataContainer.data,
      qt_meta_data_osg__QReflect_DefaultUserDataContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_DefaultUserDataContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_DefaultUserDataContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_DefaultUserDataContainer.stringdata0))
        return static_cast<void*>(const_cast< QReflect_DefaultUserDataContainer*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_DefaultUserDataContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_DefaultUserDataContainer::UserDataChanged(const osg::QReflect_Referenced * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
