/****************************************************************************
** Meta object code from reading C++ file 'DeleteHandler_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DeleteHandler_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeleteHandler_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_DeleteHandler_t {
    QByteArrayData data[16];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_DeleteHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_DeleteHandler_t qt_meta_stringdata_osg__QReflect_DeleteHandler = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_DeleteHandler"
QT_MOC_LITERAL(1, 28, 18), // "FrameNumberChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 31), // "NumFramesToRetainObjectsChanged"
QT_MOC_LITERAL(4, 80, 11), // "updateModel"
QT_MOC_LITERAL(5, 92, 14), // "getFrameNumber"
QT_MOC_LITERAL(6, 107, 27), // "getNumFramesToRetainObjects"
QT_MOC_LITERAL(7, 135, 8), // "doDelete"
QT_MOC_LITERAL(8, 144, 25), // "osg::QReflect_Referenced*"
QT_MOC_LITERAL(9, 170, 5), // "flush"
QT_MOC_LITERAL(10, 176, 8), // "flushAll"
QT_MOC_LITERAL(11, 185, 13), // "requestDelete"
QT_MOC_LITERAL(12, 199, 14), // "setFrameNumber"
QT_MOC_LITERAL(13, 214, 27), // "setNumFramesToRetainObjects"
QT_MOC_LITERAL(14, 242, 11), // "FrameNumber"
QT_MOC_LITERAL(15, 254, 24) // "NumFramesToRetainObjects"

    },
    "osg::QReflect_DeleteHandler\0"
    "FrameNumberChanged\0\0NumFramesToRetainObjectsChanged\0"
    "updateModel\0getFrameNumber\0"
    "getNumFramesToRetainObjects\0doDelete\0"
    "osg::QReflect_Referenced*\0flush\0"
    "flushAll\0requestDelete\0setFrameNumber\0"
    "setNumFramesToRetainObjects\0FrameNumber\0"
    "NumFramesToRetainObjects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_DeleteHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   76,    2, 0x02 /* Public */,
       6,    0,   77,    2, 0x02 /* Public */,
       7,    1,   78,    2, 0x02 /* Public */,
       9,    0,   81,    2, 0x02 /* Public */,
      10,    0,   82,    2, 0x02 /* Public */,
      11,    1,   83,    2, 0x02 /* Public */,
      12,    1,   86,    2, 0x02 /* Public */,
      13,    1,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

 // properties: name, type, flags
      14, QMetaType::UInt, 0x00495103,
      15, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QReflect_DeleteHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_DeleteHandler *_t = static_cast<QReflect_DeleteHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FrameNumberChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->NumFramesToRetainObjectsChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { uint _r = _t->getFrameNumber();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { uint _r = _t->getNumFramesToRetainObjects();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 5: _t->doDelete((*reinterpret_cast< osg::QReflect_Referenced*(*)>(_a[1]))); break;
        case 6: _t->flush(); break;
        case 7: _t->flushAll(); break;
        case 8: _t->requestDelete((*reinterpret_cast< osg::QReflect_Referenced*(*)>(_a[1]))); break;
        case 9: _t->setFrameNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 10: _t->setNumFramesToRetainObjects((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_DeleteHandler::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_DeleteHandler::FrameNumberChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_DeleteHandler::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_DeleteHandler::NumFramesToRetainObjectsChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_DeleteHandler *_t = static_cast<QReflect_DeleteHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getFrameNumber(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->getNumFramesToRetainObjects(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_DeleteHandler *_t = static_cast<QReflect_DeleteHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrameNumber(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->setNumFramesToRetainObjects(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_DeleteHandler::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_DeleteHandler.data,
      qt_meta_data_osg__QReflect_DeleteHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_DeleteHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_DeleteHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_DeleteHandler.stringdata0))
        return static_cast<void*>(const_cast< QReflect_DeleteHandler*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_DeleteHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_DeleteHandler::FrameNumberChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_DeleteHandler::NumFramesToRetainObjectsChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
