/****************************************************************************
** Meta object code from reading C++ file 'VertexProgram_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "VertexProgram_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VertexProgram_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_VertexProgram_t {
    QByteArrayData data[12];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_VertexProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_VertexProgram_t qt_meta_stringdata_osg__QReflect_VertexProgram = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_VertexProgram"
QT_MOC_LITERAL(1, 28, 20), // "VertexProgramChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "updateModel"
QT_MOC_LITERAL(4, 62, 7), // "compare"
QT_MOC_LITERAL(5, 70, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(6, 100, 16), // "getVertexProgram"
QT_MOC_LITERAL(7, 117, 24), // "dirtyVertexProgramObject"
QT_MOC_LITERAL(8, 142, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(9, 164, 16), // "setVertexProgram"
QT_MOC_LITERAL(10, 181, 11), // "const char*"
QT_MOC_LITERAL(11, 193, 13) // "VertexProgram"

    },
    "osg::QReflect_VertexProgram\0"
    "VertexProgramChanged\0\0updateModel\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getVertexProgram\0dirtyVertexProgramObject\0"
    "resizeGLObjectBuffers\0setVertexProgram\0"
    "const char*\0VertexProgram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_VertexProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   58,    2, 0x02 /* Public */,
       6,    0,   61,    2, 0x02 /* Public */,
       7,    0,   62,    2, 0x02 /* Public */,
       8,    1,   63,    2, 0x02 /* Public */,
       9,    1,   66,    2, 0x02 /* Public */,
       9,    1,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 5,    2,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_VertexProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_VertexProgram *_t = static_cast<QReflect_VertexProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VertexProgramChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->getVertexProgram();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->dirtyVertexProgramObject(); break;
        case 5: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->setVertexProgram((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 7: _t->setVertexProgram((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_VertexProgram::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_VertexProgram::VertexProgramChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_VertexProgram *_t = static_cast<QReflect_VertexProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVertexProgram(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_VertexProgram *_t = static_cast<QReflect_VertexProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVertexProgram(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_VertexProgram::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_VertexProgram.data,
      qt_meta_data_osg__QReflect_VertexProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_VertexProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_VertexProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_VertexProgram.stringdata0))
        return static_cast<void*>(const_cast< QReflect_VertexProgram*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_VertexProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void osg::QReflect_VertexProgram::VertexProgramChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
