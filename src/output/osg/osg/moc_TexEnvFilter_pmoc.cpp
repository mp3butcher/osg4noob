/****************************************************************************
** Meta object code from reading C++ file 'TexEnvFilter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TexEnvFilter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexEnvFilter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_TexEnvFilter_t {
    QByteArrayData data[10];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TexEnvFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TexEnvFilter_t qt_meta_stringdata_osg__QReflect_TexEnvFilter = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_TexEnvFilter"
QT_MOC_LITERAL(1, 27, 14), // "LodBiasChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "updateModel"
QT_MOC_LITERAL(4, 55, 18), // "isTextureAttribute"
QT_MOC_LITERAL(5, 74, 7), // "compare"
QT_MOC_LITERAL(6, 82, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 112, 10), // "getLodBias"
QT_MOC_LITERAL(8, 123, 10), // "setLodBias"
QT_MOC_LITERAL(9, 134, 7) // "LodBias"

    },
    "osg::QReflect_TexEnvFilter\0LodBiasChanged\0"
    "\0updateModel\0isTextureAttribute\0compare\0"
    "osg::QReflect_StateAttribute*\0getLodBias\0"
    "setLodBias\0LodBias"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TexEnvFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   48,    2, 0x02 /* Public */,
       5,    1,   49,    2, 0x02 /* Public */,
       7,    0,   52,    2, 0x02 /* Public */,
       8,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
       9, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_TexEnvFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TexEnvFilter *_t = static_cast<QReflect_TexEnvFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LodBiasChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->isTextureAttribute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { float _r = _t->getLodBias();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 5: _t->setLodBias((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_TexEnvFilter::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_TexEnvFilter::LodBiasChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_TexEnvFilter *_t = static_cast<QReflect_TexEnvFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getLodBias(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_TexEnvFilter *_t = static_cast<QReflect_TexEnvFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLodBias(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_TexEnvFilter::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TexEnvFilter.data,
      qt_meta_data_osg__QReflect_TexEnvFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TexEnvFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TexEnvFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TexEnvFilter.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TexEnvFilter*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TexEnvFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_TexEnvFilter::LodBiasChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
