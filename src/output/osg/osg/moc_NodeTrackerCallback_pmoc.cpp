/****************************************************************************
** Meta object code from reading C++ file 'NodeTrackerCallback_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "NodeTrackerCallback_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeTrackerCallback_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_NodeTrackerCallback_t {
    QByteArrayData data[13];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_NodeTrackerCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_NodeTrackerCallback_t qt_meta_stringdata_osg__QReflect_NodeTrackerCallback = {
    {
QT_MOC_LITERAL(0, 0, 33), // "osg::QReflect_NodeTrackerCall..."
QT_MOC_LITERAL(1, 34, 16), // "TrackNodeChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 25), // "const osg::QReflect_Node*"
QT_MOC_LITERAL(4, 78, 11), // "updateModel"
QT_MOC_LITERAL(5, 90, 12), // "getTrackNode"
QT_MOC_LITERAL(6, 103, 19), // "osg::QReflect_Node*"
QT_MOC_LITERAL(7, 123, 16), // "setTrackNodePath"
QT_MOC_LITERAL(8, 140, 31), // "osg::QReflect_ObserverNodePath*"
QT_MOC_LITERAL(9, 172, 6), // "update"
QT_MOC_LITERAL(10, 179, 25), // "pmoc_reverse_setTrackNode"
QT_MOC_LITERAL(11, 205, 3), // "par"
QT_MOC_LITERAL(12, 209, 12) // "setTrackNode"

    },
    "osg::QReflect_NodeTrackerCallback\0"
    "TrackNodeChanged\0\0const osg::QReflect_Node*\0"
    "updateModel\0getTrackNode\0osg::QReflect_Node*\0"
    "setTrackNodePath\0osg::QReflect_ObserverNodePath*\0"
    "update\0pmoc_reverse_setTrackNode\0par\0"
    "setTrackNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_NodeTrackerCallback[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   58,    2, 0x02 /* Public */,
       7,    1,   59,    2, 0x02 /* Public */,
       9,    1,   62,    2, 0x02 /* Public */,
      10,    1,   65,    2, 0x02 /* Public */,
      10,    0,   68,    2, 0x22 /* Public | MethodCloned */,
      12,    1,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   11,

       0        // eod
};

void osg::QReflect_NodeTrackerCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_NodeTrackerCallback *_t = static_cast<QReflect_NodeTrackerCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TrackNodeChanged((*reinterpret_cast< const osg::QReflect_Node*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { osg::QReflect_Node* _r = _t->getTrackNode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Node**>(_a[0]) = _r; }  break;
        case 3: _t->setTrackNodePath((*reinterpret_cast< osg::QReflect_ObserverNodePath*(*)>(_a[1]))); break;
        case 4: _t->update((*reinterpret_cast< osg::QReflect_Node*(*)>(_a[1]))); break;
        case 5: _t->pmoc_reverse_setTrackNode((*reinterpret_cast< osg::QReflect_Node*(*)>(_a[1]))); break;
        case 6: _t->pmoc_reverse_setTrackNode(); break;
        case 7: _t->setTrackNode((*reinterpret_cast< osg::QReflect_Node*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_NodeTrackerCallback::*_t)(const osg::QReflect_Node * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_NodeTrackerCallback::TrackNodeChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_NodeTrackerCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_NodeTrackerCallback.data,
      qt_meta_data_osg__QReflect_NodeTrackerCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_NodeTrackerCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_NodeTrackerCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_NodeTrackerCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_NodeTrackerCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_NodeTrackerCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void osg::QReflect_NodeTrackerCallback::TrackNodeChanged(const osg::QReflect_Node * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
