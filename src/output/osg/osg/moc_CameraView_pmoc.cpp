/****************************************************************************
** Meta object code from reading C++ file 'CameraView_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CameraView_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraView_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_CameraView_t {
    QByteArrayData data[26];
    char stringdata0[457];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_CameraView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_CameraView_t qt_meta_stringdata_osg__QReflect_CameraView = {
    {
QT_MOC_LITERAL(0, 0, 24), // "osg::QReflect_CameraView"
QT_MOC_LITERAL(1, 25, 18), // "FieldOfViewChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 18), // "FocalLengthChanged"
QT_MOC_LITERAL(4, 64, 11), // "updateModel"
QT_MOC_LITERAL(5, 76, 25), // "computeLocalToWorldMatrix"
QT_MOC_LITERAL(6, 102, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(7, 125, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(8, 152, 25), // "computeWorldToLocalMatrix"
QT_MOC_LITERAL(9, 178, 14), // "getFieldOfView"
QT_MOC_LITERAL(10, 193, 14), // "getFocalLength"
QT_MOC_LITERAL(11, 208, 18), // "getFieldOfViewMode"
QT_MOC_LITERAL(12, 227, 41), // "osg::QReflect_CameraView::Fie..."
QT_MOC_LITERAL(13, 269, 11), // "setAttitude"
QT_MOC_LITERAL(14, 281, 19), // "osg::QReflect_Quat*"
QT_MOC_LITERAL(15, 301, 18), // "setFieldOfViewMode"
QT_MOC_LITERAL(16, 320, 11), // "setPosition"
QT_MOC_LITERAL(17, 332, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(18, 353, 14), // "setFieldOfView"
QT_MOC_LITERAL(19, 368, 14), // "setFocalLength"
QT_MOC_LITERAL(20, 383, 11), // "FieldOfView"
QT_MOC_LITERAL(21, 395, 11), // "FocalLength"
QT_MOC_LITERAL(22, 407, 15), // "FieldOfViewMode"
QT_MOC_LITERAL(23, 423, 13), // "UNCONSTRAINED"
QT_MOC_LITERAL(24, 437, 10), // "HORIZONTAL"
QT_MOC_LITERAL(25, 448, 8) // "VERTICAL"

    },
    "osg::QReflect_CameraView\0FieldOfViewChanged\0"
    "\0FocalLengthChanged\0updateModel\0"
    "computeLocalToWorldMatrix\0"
    "osg::QReflect_Matrixd*\0"
    "osg::QReflect_NodeVisitor*\0"
    "computeWorldToLocalMatrix\0getFieldOfView\0"
    "getFocalLength\0getFieldOfViewMode\0"
    "osg::QReflect_CameraView::FieldOfViewMode\0"
    "setAttitude\0osg::QReflect_Quat*\0"
    "setFieldOfViewMode\0setPosition\0"
    "osg::QReflect_Vec3d*\0setFieldOfView\0"
    "setFocalLength\0FieldOfView\0FocalLength\0"
    "FieldOfViewMode\0UNCONSTRAINED\0HORIZONTAL\0"
    "VERTICAL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_CameraView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  114, // properties
       1,  122, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   85,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    2,   86,    2, 0x02 /* Public */,
       8,    2,   91,    2, 0x02 /* Public */,
       9,    0,   96,    2, 0x02 /* Public */,
      10,    0,   97,    2, 0x02 /* Public */,
      11,    0,   98,    2, 0x02 /* Public */,
      13,    1,   99,    2, 0x02 /* Public */,
      15,    1,  102,    2, 0x02 /* Public */,
      16,    1,  105,    2, 0x02 /* Public */,
      18,    1,  108,    2, 0x02 /* Public */,
      19,    1,  111,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Double,
    QMetaType::Double,
    0x80000000 | 12,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      20, QMetaType::Double, 0x00495103,
      21, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      22, 0x0,    3,  126,

 // enum data: key, value
      23, uint(osg::QReflect_CameraView::UNCONSTRAINED),
      24, uint(osg::QReflect_CameraView::HORIZONTAL),
      25, uint(osg::QReflect_CameraView::VERTICAL),

       0        // eod
};

void osg::QReflect_CameraView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CameraView *_t = static_cast<QReflect_CameraView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FieldOfViewChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->FocalLengthChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { bool _r = _t->computeLocalToWorldMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->computeWorldToLocalMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->getFieldOfView();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: { double _r = _t->getFocalLength();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_CameraView::FieldOfViewMode _r = _t->getFieldOfViewMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_CameraView::FieldOfViewMode*>(_a[0]) = _r; }  break;
        case 8: _t->setAttitude((*reinterpret_cast< osg::QReflect_Quat*(*)>(_a[1]))); break;
        case 9: _t->setFieldOfViewMode((*reinterpret_cast< osg::QReflect_CameraView::FieldOfViewMode(*)>(_a[1]))); break;
        case 10: _t->setPosition((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        case 11: _t->setFieldOfView((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 12: _t->setFocalLength((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_CameraView::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_CameraView::FieldOfViewChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_CameraView::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_CameraView::FocalLengthChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_CameraView *_t = static_cast<QReflect_CameraView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getFieldOfView(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getFocalLength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_CameraView *_t = static_cast<QReflect_CameraView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFieldOfView(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setFocalLength(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_CameraView::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_CameraView.data,
      qt_meta_data_osg__QReflect_CameraView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_CameraView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_CameraView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_CameraView.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CameraView*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_CameraView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void osg::QReflect_CameraView::FieldOfViewChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_CameraView::FocalLengthChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
