/****************************************************************************
** Meta object code from reading C++ file 'Emitter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Emitter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Emitter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_Emitter_t {
    QByteArrayData data[16];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_Emitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_Emitter_t qt_meta_stringdata_osgParticle__QReflect_Emitter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osgParticle::QReflect_Emitter"
QT_MOC_LITERAL(1, 30, 25), // "UseDefaultTemplateChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "updateModel"
QT_MOC_LITERAL(4, 69, 12), // "isSameKindAs"
QT_MOC_LITERAL(5, 82, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(6, 104, 9), // "className"
QT_MOC_LITERAL(7, 114, 11), // "const char*"
QT_MOC_LITERAL(8, 126, 11), // "libraryName"
QT_MOC_LITERAL(9, 138, 21), // "getUseDefaultTemplate"
QT_MOC_LITERAL(10, 160, 6), // "accept"
QT_MOC_LITERAL(11, 167, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(12, 194, 19), // "setParticleTemplate"
QT_MOC_LITERAL(13, 214, 31), // "osgParticle::QReflect_Particle*"
QT_MOC_LITERAL(14, 246, 21), // "setUseDefaultTemplate"
QT_MOC_LITERAL(15, 268, 18) // "UseDefaultTemplate"

    },
    "osgParticle::QReflect_Emitter\0"
    "UseDefaultTemplateChanged\0\0updateModel\0"
    "isSameKindAs\0osg::QReflect_Object*\0"
    "className\0const char*\0libraryName\0"
    "getUseDefaultTemplate\0accept\0"
    "osg::QReflect_NodeVisitor*\0"
    "setParticleTemplate\0osgParticle::QReflect_Particle*\0"
    "setUseDefaultTemplate\0UseDefaultTemplate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_Emitter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   62,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   63,    2, 0x02 /* Public */,
       6,    0,   66,    2, 0x02 /* Public */,
       8,    0,   67,    2, 0x02 /* Public */,
       9,    0,   68,    2, 0x02 /* Public */,
      10,    1,   69,    2, 0x02 /* Public */,
      12,    1,   72,    2, 0x02 /* Public */,
      14,    1,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 5,    2,
    0x80000000 | 7,
    0x80000000 | 7,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osgParticle::QReflect_Emitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Emitter *_t = static_cast<QReflect_Emitter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UseDefaultTemplateChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->getUseDefaultTemplate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->accept((*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[1]))); break;
        case 7: _t->setParticleTemplate((*reinterpret_cast< osgParticle::QReflect_Particle*(*)>(_a[1]))); break;
        case 8: _t->setUseDefaultTemplate((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Emitter::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Emitter::UseDefaultTemplateChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Emitter *_t = static_cast<QReflect_Emitter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getUseDefaultTemplate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Emitter *_t = static_cast<QReflect_Emitter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUseDefaultTemplate(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_Emitter::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_Emitter.data,
      qt_meta_data_osgParticle__QReflect_Emitter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_Emitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_Emitter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_Emitter.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Emitter*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_Emitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void osgParticle::QReflect_Emitter::UseDefaultTemplateChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
