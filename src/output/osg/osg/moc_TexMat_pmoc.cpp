/****************************************************************************
** Meta object code from reading C++ file 'TexMat_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TexMat_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexMat_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_TexMat_t {
    QByteArrayData data[12];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TexMat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TexMat_t qt_meta_stringdata_osg__QReflect_TexMat = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_TexMat"
QT_MOC_LITERAL(1, 21, 34), // "ScaleByTextureRectangleSizeCh..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "updateModel"
QT_MOC_LITERAL(4, 69, 18), // "isTextureAttribute"
QT_MOC_LITERAL(5, 88, 7), // "compare"
QT_MOC_LITERAL(6, 96, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 126, 30), // "getScaleByTextureRectangleSize"
QT_MOC_LITERAL(8, 157, 9), // "setMatrix"
QT_MOC_LITERAL(9, 167, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(10, 190, 30), // "setScaleByTextureRectangleSize"
QT_MOC_LITERAL(11, 221, 27) // "ScaleByTextureRectangleSize"

    },
    "osg::QReflect_TexMat\0"
    "ScaleByTextureRectangleSizeChanged\0\0"
    "updateModel\0isTextureAttribute\0compare\0"
    "osg::QReflect_StateAttribute*\0"
    "getScaleByTextureRectangleSize\0setMatrix\0"
    "osg::QReflect_Matrixd*\0"
    "setScaleByTextureRectangleSize\0"
    "ScaleByTextureRectangleSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TexMat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   52,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   53,    2, 0x02 /* Public */,
       5,    1,   54,    2, 0x02 /* Public */,
       7,    0,   57,    2, 0x02 /* Public */,
       8,    1,   58,    2, 0x02 /* Public */,
      10,    1,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_TexMat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TexMat *_t = static_cast<QReflect_TexMat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ScaleByTextureRectangleSizeChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->isTextureAttribute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->getScaleByTextureRectangleSize();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->setMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 6: _t->setScaleByTextureRectangleSize((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_TexMat::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_TexMat::ScaleByTextureRectangleSizeChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_TexMat *_t = static_cast<QReflect_TexMat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getScaleByTextureRectangleSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_TexMat *_t = static_cast<QReflect_TexMat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScaleByTextureRectangleSize(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_TexMat::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TexMat.data,
      qt_meta_data_osg__QReflect_TexMat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TexMat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TexMat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TexMat.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TexMat*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TexMat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void osg::QReflect_TexMat::ScaleByTextureRectangleSizeChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
