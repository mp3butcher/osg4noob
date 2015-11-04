/****************************************************************************
** Meta object code from reading C++ file 'PrimitiveRestartIndex_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PrimitiveRestartIndex_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrimitiveRestartIndex_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_PrimitiveRestartIndex_t {
    QByteArrayData data[9];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_PrimitiveRestartIndex_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_PrimitiveRestartIndex_t qt_meta_stringdata_osg__QReflect_PrimitiveRestartIndex = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osg::QReflect_PrimitiveRestar..."
QT_MOC_LITERAL(1, 36, 19), // "RestartIndexChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "updateModel"
QT_MOC_LITERAL(4, 69, 7), // "compare"
QT_MOC_LITERAL(5, 77, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 107, 15), // "getRestartIndex"
QT_MOC_LITERAL(7, 123, 15), // "setRestartIndex"
QT_MOC_LITERAL(8, 139, 12) // "RestartIndex"

    },
    "osg::QReflect_PrimitiveRestartIndex\0"
    "RestartIndexChanged\0\0updateModel\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getRestartIndex\0setRestartIndex\0"
    "RestartIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_PrimitiveRestartIndex[] = {

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
    QMetaType::Void, QMetaType::UInt,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 5,    2,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,    2,

 // properties: name, type, flags
       8, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_PrimitiveRestartIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_PrimitiveRestartIndex *_t = static_cast<QReflect_PrimitiveRestartIndex *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RestartIndexChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { uint _r = _t->getRestartIndex();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: _t->setRestartIndex((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_PrimitiveRestartIndex::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_PrimitiveRestartIndex::RestartIndexChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_PrimitiveRestartIndex *_t = static_cast<QReflect_PrimitiveRestartIndex *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getRestartIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_PrimitiveRestartIndex *_t = static_cast<QReflect_PrimitiveRestartIndex *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRestartIndex(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_PrimitiveRestartIndex::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_PrimitiveRestartIndex.data,
      qt_meta_data_osg__QReflect_PrimitiveRestartIndex,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_PrimitiveRestartIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_PrimitiveRestartIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_PrimitiveRestartIndex.stringdata0))
        return static_cast<void*>(const_cast< QReflect_PrimitiveRestartIndex*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_PrimitiveRestartIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_PrimitiveRestartIndex::RestartIndexChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
