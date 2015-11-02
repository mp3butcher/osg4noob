/****************************************************************************
** Meta object code from reading C++ file 'FluidProgram_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FluidProgram_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FluidProgram_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QMLFluidProgram_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QMLFluidProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QMLFluidProgram_t qt_meta_stringdata_osgParticle__QMLFluidProgram = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osgParticle::QMLFluidProgram"
QT_MOC_LITERAL(1, 29, 19), // "accelerationChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 20), // "windDirectionChanged"
QT_MOC_LITERAL(4, 71, 11), // "updateModel"
QT_MOC_LITERAL(5, 83, 13), // "windDirection"
QT_MOC_LITERAL(6, 97, 12) // "acceleration"

    },
    "osgParticle::QMLFluidProgram\0"
    "accelerationChanged\0\0windDirectionChanged\0"
    "updateModel\0windDirection\0acceleration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QMLFluidProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector3D,    2,
    QMetaType::Void, QMetaType::QVector3D,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QVector3D, 0x00495003,
       6, QMetaType::QVector3D, 0x00495003,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void osgParticle::QMLFluidProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLFluidProgram *_t = static_cast<QMLFluidProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accelerationChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 1: _t->windDirectionChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLFluidProgram::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLFluidProgram::accelerationChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLFluidProgram::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLFluidProgram::windDirectionChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLFluidProgram *_t = static_cast<QMLFluidProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->windDirection(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->acceleration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLFluidProgram *_t = static_cast<QMLFluidProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->windDirection(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->acceleration(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QMLFluidProgram::staticMetaObject = {
    { &QReflect_FluidProgram::staticMetaObject, qt_meta_stringdata_osgParticle__QMLFluidProgram.data,
      qt_meta_data_osgParticle__QMLFluidProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QMLFluidProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QMLFluidProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QMLFluidProgram.stringdata0))
        return static_cast<void*>(const_cast< QMLFluidProgram*>(this));
    return QReflect_FluidProgram::qt_metacast(_clname);
}

int osgParticle::QMLFluidProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_FluidProgram::qt_metacall(_c, _id, _a);
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
void osgParticle::QMLFluidProgram::accelerationChanged(QVector3D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QMLFluidProgram::windDirectionChanged(QVector3D _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
