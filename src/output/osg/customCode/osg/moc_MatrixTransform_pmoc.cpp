/****************************************************************************
** Meta object code from reading C++ file 'MatrixTransform_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MatrixTransform_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MatrixTransform_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLMatrixTransform_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLMatrixTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLMatrixTransform_t qt_meta_stringdata_osg__QMLMatrixTransform = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QMLMatrixTransform"
QT_MOC_LITERAL(1, 24, 15), // "positionChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "scaleChanged"
QT_MOC_LITERAL(4, 54, 15), // "rotationChanged"
QT_MOC_LITERAL(5, 70, 11), // "updateModel"
QT_MOC_LITERAL(6, 82, 8), // "position"
QT_MOC_LITERAL(7, 91, 5), // "scale"
QT_MOC_LITERAL(8, 97, 8) // "rotation"

    },
    "osg::QMLMatrixTransform\0positionChanged\0"
    "\0scaleChanged\0rotationChanged\0updateModel\0"
    "position\0scale\0rotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLMatrixTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QVector3D, 0x00495003,
       7, QMetaType::QVector3D, 0x00495003,
       8, QMetaType::QColor, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void osg::QMLMatrixTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLMatrixTransform *_t = static_cast<QMLMatrixTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 2: _t->rotationChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLMatrixTransform::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLMatrixTransform::positionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLMatrixTransform::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLMatrixTransform::scaleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QMLMatrixTransform::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLMatrixTransform::rotationChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLMatrixTransform *_t = static_cast<QMLMatrixTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->getposition(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->getscale(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getrotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLMatrixTransform *_t = static_cast<QMLMatrixTransform *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setposition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setscale(*reinterpret_cast< QVector3D*>(_v)); break;
        case 2: _t->setrotation(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLMatrixTransform::staticMetaObject = {
    { &QReflect_MatrixTransform::staticMetaObject, qt_meta_stringdata_osg__QMLMatrixTransform.data,
      qt_meta_data_osg__QMLMatrixTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLMatrixTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLMatrixTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLMatrixTransform.stringdata0))
        return static_cast<void*>(const_cast< QMLMatrixTransform*>(this));
    return QReflect_MatrixTransform::qt_metacast(_clname);
}

int osg::QMLMatrixTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_MatrixTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QMLMatrixTransform::positionChanged(const QVector3D & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLMatrixTransform::scaleChanged(const QVector3D & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QMLMatrixTransform::rotationChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
