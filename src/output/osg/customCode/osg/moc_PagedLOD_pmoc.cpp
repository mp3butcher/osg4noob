/****************************************************************************
** Meta object code from reading C++ file 'PagedLOD_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PagedLOD_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PagedLOD_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLPagedLOD_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLPagedLOD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLPagedLOD_t qt_meta_stringdata_osg__QMLPagedLOD = {
    {
QT_MOC_LITERAL(0, 0, 16), // "osg::QMLPagedLOD"
QT_MOC_LITERAL(1, 17, 16), // "rangeListChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "pmoc::PagedLodListModel*"
QT_MOC_LITERAL(4, 60, 11), // "updateModel"
QT_MOC_LITERAL(5, 72, 8), // "addRange"
QT_MOC_LITERAL(6, 81, 8), // "filename"
QT_MOC_LITERAL(7, 90, 4), // "mins"
QT_MOC_LITERAL(8, 95, 4), // "maxs"
QT_MOC_LITERAL(9, 100, 9) // "rangelist"

    },
    "osg::QMLPagedLOD\0rangeListChanged\0\0"
    "pmoc::PagedLodListModel*\0updateModel\0"
    "addRange\0filename\0mins\0maxs\0rangelist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLPagedLOD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    3,   33,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::Float, QMetaType::Float,    6,    7,    8,

 // properties: name, type, flags
       9, 0x80000000 | 3, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QMLPagedLOD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLPagedLOD *_t = static_cast<QMLPagedLOD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeListChanged((*reinterpret_cast< pmoc::PagedLodListModel*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: _t->addRange((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            typedef void (QMLPagedLOD::*_t)(pmoc::PagedLodListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLPagedLOD::rangeListChanged)) {
                *result = 0;
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
        QMLPagedLOD *_t = static_cast<QMLPagedLOD *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pmoc::PagedLodListModel**>(_v) = _t->rangelist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLPagedLOD::staticMetaObject = {
    { &QReflect_PagedLOD::staticMetaObject, qt_meta_stringdata_osg__QMLPagedLOD.data,
      qt_meta_data_osg__QMLPagedLOD,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLPagedLOD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLPagedLOD::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLPagedLOD.stringdata0))
        return static_cast<void*>(const_cast< QMLPagedLOD*>(this));
    return QReflect_PagedLOD::qt_metacast(_clname);
}

int osg::QMLPagedLOD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_PagedLOD::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
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
void osg::QMLPagedLOD::rangeListChanged(pmoc::PagedLodListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
