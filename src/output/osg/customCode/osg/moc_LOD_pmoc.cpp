/****************************************************************************
** Meta object code from reading C++ file 'LOD_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LOD_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LOD_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLLOD_t {
    QByteArrayData data[16];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLLOD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLLOD_t qt_meta_stringdata_osg__QMLLOD = {
    {
QT_MOC_LITERAL(0, 0, 11), // "osg::QMLLOD"
QT_MOC_LITERAL(1, 12, 17), // "centerModeChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "centerChanged"
QT_MOC_LITERAL(4, 45, 16), // "rangeListChanged"
QT_MOC_LITERAL(5, 62, 24), // "pmoc::PagedLodListModel*"
QT_MOC_LITERAL(6, 87, 13), // "radiusChanged"
QT_MOC_LITERAL(7, 101, 11), // "updateModel"
QT_MOC_LITERAL(8, 113, 8), // "setRange"
QT_MOC_LITERAL(9, 122, 1), // "i"
QT_MOC_LITERAL(10, 124, 4), // "mins"
QT_MOC_LITERAL(11, 129, 4), // "maxs"
QT_MOC_LITERAL(12, 134, 9), // "rangelist"
QT_MOC_LITERAL(13, 144, 10), // "centerMode"
QT_MOC_LITERAL(14, 155, 6), // "radius"
QT_MOC_LITERAL(15, 162, 6) // "center"

    },
    "osg::QMLLOD\0centerModeChanged\0\0"
    "centerChanged\0rangeListChanged\0"
    "pmoc::PagedLodListModel*\0radiusChanged\0"
    "updateModel\0setRange\0i\0mins\0maxs\0"
    "rangelist\0centerMode\0radius\0center"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLLOD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   56,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    3,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float,    9,   10,   11,

 // properties: name, type, flags
      12, 0x80000000 | 5, 0x00495009,
      13, QMetaType::UInt, 0x00495003,
      14, QMetaType::Float, 0x00495003,
      15, QMetaType::QVector3D, 0x00495003,

 // properties: notify_signal_id
       2,
       0,
       3,
       1,

       0        // eod
};

void osg::QMLLOD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLLOD *_t = static_cast<QMLLOD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerModeChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->centerChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 2: _t->rangeListChanged((*reinterpret_cast< pmoc::PagedLodListModel*(*)>(_a[1]))); break;
        case 3: _t->radiusChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->updateModel(); break;
        case 5: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::PagedLodListModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLLOD::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLOD::centerModeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLLOD::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLOD::centerChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLLOD::*_t)(pmoc::PagedLodListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLOD::rangeListChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QMLLOD::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLLOD::radiusChanged)) {
                *result = 3;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< pmoc::PagedLodListModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLLOD *_t = static_cast<QMLLOD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pmoc::PagedLodListModel**>(_v) = _t->rangelist(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->centerMode(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->radius(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->center(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLLOD *_t = static_cast<QMLLOD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->centerMode(*reinterpret_cast< uint*>(_v)); break;
        case 2: _t->radius(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->center(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLLOD::staticMetaObject = {
    { &QReflect_LOD::staticMetaObject, qt_meta_stringdata_osg__QMLLOD.data,
      qt_meta_data_osg__QMLLOD,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLLOD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLLOD::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLLOD.stringdata0))
        return static_cast<void*>(const_cast< QMLLOD*>(this));
    return QReflect_LOD::qt_metacast(_clname);
}

int osg::QMLLOD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_LOD::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLLOD::centerModeChanged(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLLOD::centerChanged(QVector3D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLLOD::rangeListChanged(pmoc::PagedLodListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QMLLOD::radiusChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
