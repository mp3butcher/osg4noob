/****************************************************************************
** Meta object code from reading C++ file 'Geode_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Geode_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Geode_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLGeode_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLGeode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLGeode_t qt_meta_stringdata_osg__QMLGeode = {
    {
QT_MOC_LITERAL(0, 0, 13), // "osg::QMLGeode"
QT_MOC_LITERAL(1, 14, 16), // "drawablesChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 27), // "pmoc::StateAttribListModel*"
QT_MOC_LITERAL(4, 60, 16), // "DrawableSelected"
QT_MOC_LITERAL(5, 77, 1), // "i"
QT_MOC_LITERAL(6, 79, 11), // "updateModel"
QT_MOC_LITERAL(7, 91, 9) // "drawables"

    },
    "osg::QMLGeode\0drawablesChanged\0\0"
    "pmoc::StateAttribListModel*\0"
    "DrawableSelected\0i\0updateModel\0drawables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLGeode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 3, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QMLGeode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLGeode *_t = static_cast<QMLGeode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawablesChanged((*reinterpret_cast< pmoc::StateAttribListModel*(*)>(_a[1]))); break;
        case 1: _t->DrawableSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLGeode::*_t)(pmoc::StateAttribListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLGeode::drawablesChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLGeode *_t = static_cast<QMLGeode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pmoc::StateAttribListModel**>(_v) = _t->getDrawables(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLGeode::staticMetaObject = {
    { &QReflect_Geode::staticMetaObject, qt_meta_stringdata_osg__QMLGeode.data,
      qt_meta_data_osg__QMLGeode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLGeode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLGeode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLGeode.stringdata0))
        return static_cast<void*>(const_cast< QMLGeode*>(this));
    return QReflect_Geode::qt_metacast(_clname);
}

int osg::QMLGeode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Geode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void osg::QMLGeode::drawablesChanged(pmoc::StateAttribListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
