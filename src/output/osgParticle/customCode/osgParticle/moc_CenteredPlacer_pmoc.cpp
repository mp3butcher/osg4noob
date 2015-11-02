/****************************************************************************
** Meta object code from reading C++ file 'CenteredPlacer_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CenteredPlacer_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CenteredPlacer_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLCenteredPlacer_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLCenteredPlacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLCenteredPlacer_t qt_meta_stringdata_osgParticle__QMLCenteredPlacer = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osgParticle::QMLCenteredPlacer"
QT_MOC_LITERAL(1, 31, 13), // "centerChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 11), // "updateModel"
QT_MOC_LITERAL(4, 58, 6) // "center"

    },
    "osgParticle::QMLCenteredPlacer\0"
    "centerChanged\0\0updateModel\0center"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLCenteredPlacer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector3D,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QVector3D, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osgParticle::QMLCenteredPlacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLCenteredPlacer *_t = static_cast<QMLCenteredPlacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLCenteredPlacer::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLCenteredPlacer::centerChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLCenteredPlacer *_t = static_cast<QMLCenteredPlacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->center(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLCenteredPlacer *_t = static_cast<QMLCenteredPlacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->center(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QMLCenteredPlacer::staticMetaObject = {
    { &QReflect_CenteredPlacer::staticMetaObject, qt_meta_stringdata_osgParticle__QMLCenteredPlacer.data,
      qt_meta_data_osgParticle__QMLCenteredPlacer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLCenteredPlacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLCenteredPlacer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLCenteredPlacer.stringdata0))
        return static_cast<void*>(const_cast< QMLCenteredPlacer*>(this));
    return QReflect_CenteredPlacer::qt_metacast(_clname);
}

int osgParticle::QMLCenteredPlacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_CenteredPlacer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void osgParticle::QMLCenteredPlacer::centerChanged(QVector3D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
