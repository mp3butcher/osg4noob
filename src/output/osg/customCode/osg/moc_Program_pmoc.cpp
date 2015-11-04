/****************************************************************************
** Meta object code from reading C++ file 'Program_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Program_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Program_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLProgram_t {
    QByteArrayData data[11];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLProgram_t qt_meta_stringdata_osg__QMLProgram = {
    {
QT_MOC_LITERAL(0, 0, 15), // "osg::QMLProgram"
QT_MOC_LITERAL(1, 16, 17), // "shaderlistChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 27), // "pmoc::StateAttribListModel*"
QT_MOC_LITERAL(4, 63, 28), // "vertexAttribLocationsChanged"
QT_MOC_LITERAL(5, 92, 11), // "updateModel"
QT_MOC_LITERAL(6, 104, 9), // "popShader"
QT_MOC_LITERAL(7, 114, 23), // "addVertexAttribLocation"
QT_MOC_LITERAL(8, 138, 26), // "removeVertexAttribLocation"
QT_MOC_LITERAL(9, 165, 10), // "shaderlist"
QT_MOC_LITERAL(10, 176, 21) // "vertexAttribLocations"

    },
    "osg::QMLProgram\0shaderlistChanged\0\0"
    "pmoc::StateAttribListModel*\0"
    "vertexAttribLocationsChanged\0updateModel\0"
    "popShader\0addVertexAttribLocation\0"
    "removeVertexAttribLocation\0shaderlist\0"
    "vertexAttribLocations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   50,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   54,    2, 0x02 /* Public */,
       8,    1,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
       9, 0x80000000 | 3, 0x00495009,
      10, 0x80000000 | 3, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QMLProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLProgram *_t = static_cast<QMLProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shaderlistChanged((*reinterpret_cast< pmoc::StateAttribListModel*(*)>(_a[1]))); break;
        case 1: _t->vertexAttribLocationsChanged((*reinterpret_cast< pmoc::StateAttribListModel*(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: _t->popShader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->addVertexAttribLocation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->removeVertexAttribLocation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLProgram::*_t)(pmoc::StateAttribListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLProgram::shaderlistChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLProgram::*_t)(pmoc::StateAttribListModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLProgram::vertexAttribLocationsChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLProgram *_t = static_cast<QMLProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< pmoc::StateAttribListModel**>(_v) = _t->getshaderlist(); break;
        case 1: *reinterpret_cast< pmoc::StateAttribListModel**>(_v) = _t->vertexAttribLocations(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLProgram::staticMetaObject = {
    { &QReflect_Program::staticMetaObject, qt_meta_stringdata_osg__QMLProgram.data,
      qt_meta_data_osg__QMLProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLProgram.stringdata0))
        return static_cast<void*>(const_cast< QMLProgram*>(this));
    return QReflect_Program::qt_metacast(_clname);
}

int osg::QMLProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Program::qt_metacall(_c, _id, _a);
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
void osg::QMLProgram::shaderlistChanged(pmoc::StateAttribListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLProgram::vertexAttribLocationsChanged(pmoc::StateAttribListModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
