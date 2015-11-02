/****************************************************************************
** Meta object code from reading C++ file 'LightModel_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LightModel_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightModel_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_LightModel_t {
    QByteArrayData data[21];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_LightModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_LightModel_t qt_meta_stringdata_osg__QReflect_LightModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osg::QReflect_LightModel"
QT_MOC_LITERAL(1, 25, 18), // "LocalViewerChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "TwoSidedChanged"
QT_MOC_LITERAL(4, 61, 11), // "updateModel"
QT_MOC_LITERAL(5, 73, 7), // "compare"
QT_MOC_LITERAL(6, 81, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 111, 14), // "getLocalViewer"
QT_MOC_LITERAL(8, 126, 11), // "getTwoSided"
QT_MOC_LITERAL(9, 138, 15), // "getColorControl"
QT_MOC_LITERAL(10, 154, 38), // "osg::QReflect_LightModel::Col..."
QT_MOC_LITERAL(11, 193, 19), // "setAmbientIntensity"
QT_MOC_LITERAL(12, 213, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(13, 234, 15), // "setColorControl"
QT_MOC_LITERAL(14, 250, 14), // "setLocalViewer"
QT_MOC_LITERAL(15, 265, 11), // "setTwoSided"
QT_MOC_LITERAL(16, 277, 11), // "LocalViewer"
QT_MOC_LITERAL(17, 289, 8), // "TwoSided"
QT_MOC_LITERAL(18, 298, 12), // "ColorControl"
QT_MOC_LITERAL(19, 311, 23), // "SEPARATE_SPECULAR_COLOR"
QT_MOC_LITERAL(20, 335, 12) // "SINGLE_COLOR"

    },
    "osg::QReflect_LightModel\0LocalViewerChanged\0"
    "\0TwoSidedChanged\0updateModel\0compare\0"
    "osg::QReflect_StateAttribute*\0"
    "getLocalViewer\0getTwoSided\0getColorControl\0"
    "osg::QReflect_LightModel::ColorControl\0"
    "setAmbientIntensity\0osg::QReflect_Vec4f*\0"
    "setColorControl\0setLocalViewer\0"
    "setTwoSided\0LocalViewer\0TwoSided\0"
    "ColorControl\0SEPARATE_SPECULAR_COLOR\0"
    "SINGLE_COLOR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_LightModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   94, // properties
       1,  102, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   75,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   76,    2, 0x02 /* Public */,
       7,    0,   79,    2, 0x02 /* Public */,
       8,    0,   80,    2, 0x02 /* Public */,
       9,    0,   81,    2, 0x02 /* Public */,
      11,    1,   82,    2, 0x02 /* Public */,
      13,    1,   85,    2, 0x02 /* Public */,
      14,    1,   88,    2, 0x02 /* Public */,
      15,    1,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      18, 0x0,    2,  106,

 // enum data: key, value
      19, uint(osg::QReflect_LightModel::SEPARATE_SPECULAR_COLOR),
      20, uint(osg::QReflect_LightModel::SINGLE_COLOR),

       0        // eod
};

void osg::QReflect_LightModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_LightModel *_t = static_cast<QReflect_LightModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LocalViewerChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->TwoSidedChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->getLocalViewer();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->getTwoSided();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { osg::QReflect_LightModel::ColorControl _r = _t->getColorControl();
            if (_a[0]) *reinterpret_cast< osg::QReflect_LightModel::ColorControl*>(_a[0]) = _r; }  break;
        case 7: _t->setAmbientIntensity((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 8: _t->setColorControl((*reinterpret_cast< osg::QReflect_LightModel::ColorControl(*)>(_a[1]))); break;
        case 9: _t->setLocalViewer((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->setTwoSided((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_LightModel::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_LightModel::LocalViewerChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_LightModel::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_LightModel::TwoSidedChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_LightModel *_t = static_cast<QReflect_LightModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getLocalViewer(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getTwoSided(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_LightModel *_t = static_cast<QReflect_LightModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalViewer(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTwoSided(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_LightModel::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_LightModel.data,
      qt_meta_data_osg__QReflect_LightModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_LightModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_LightModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_LightModel.stringdata0))
        return static_cast<void*>(const_cast< QReflect_LightModel*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_LightModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_LightModel::LocalViewerChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_LightModel::TwoSidedChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
