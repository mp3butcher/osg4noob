/****************************************************************************
** Meta object code from reading C++ file 'Group_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Group_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Group_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLGroup_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLGroup_t qt_meta_stringdata_osg__QMLGroup = {
    {
QT_MOC_LITERAL(0, 0, 13), // "osg::QMLGroup"
QT_MOC_LITERAL(1, 14, 15), // "childrenChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 27), // "pmoc::StateAttribListModel*"
QT_MOC_LITERAL(4, 59, 13), // "childSelected"
QT_MOC_LITERAL(5, 73, 1), // "i"
QT_MOC_LITERAL(6, 75, 11), // "updateModel"
QT_MOC_LITERAL(7, 87, 15), // "addTexturedQuad"
QT_MOC_LITERAL(8, 103, 16), // "addChildFromFile"
QT_MOC_LITERAL(9, 120, 3), // "sss"
QT_MOC_LITERAL(10, 124, 8) // "children"

    },
    "osg::QMLGroup\0childrenChanged\0\0"
    "pmoc::StateAttribListModel*\0childSelected\0"
    "i\0updateModel\0addTexturedQuad\0"
    "addChildFromFile\0sss\0children"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLGroup[] = {

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
       4,    1,   42,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x02 /* Public */,
       8,    1,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    9,

 // properties: name, type, flags
      10, 0x80000000 | 3, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QMLGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLGroup *_t = static_cast<QMLGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->childrenChanged((*reinterpret_cast< pmoc::StateAttribListModel*(*)>(_a[1]))); break;
        case 1: _t->childSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: _t->addTexturedQuad(); break;
        case 4: _t->addChildFromFile((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLGroup::*_t)(pmoc::StateAttribListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLGroup::childrenChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLGroup *_t = static_cast<QMLGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pmoc::StateAttribListModel**>(_v) = _t->children(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLGroup::staticMetaObject = {
    { &QReflect_Group::staticMetaObject, qt_meta_stringdata_osg__QMLGroup.data,
      qt_meta_data_osg__QMLGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLGroup.stringdata0))
        return static_cast<void*>(const_cast< QMLGroup*>(this));
    return QReflect_Group::qt_metacast(_clname);
}

int osg::QMLGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Group::qt_metacall(_c, _id, _a);
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
void osg::QMLGroup::childrenChanged(pmoc::StateAttribListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
