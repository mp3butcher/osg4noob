/****************************************************************************
** Meta object code from reading C++ file 'Shader_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Shader_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Shader_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QMLShaderBinary_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLShaderBinary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLShaderBinary_t qt_meta_stringdata_osg__QMLShaderBinary = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QMLShaderBinary"
QT_MOC_LITERAL(1, 21, 11), // "updateModel"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "osg::QMLShaderBinary\0updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLShaderBinary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QMLShaderBinary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLShaderBinary *_t = static_cast<QMLShaderBinary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLShaderBinary::staticMetaObject = {
    { &QReflect_ShaderBinary::staticMetaObject, qt_meta_stringdata_osg__QMLShaderBinary.data,
      qt_meta_data_osg__QMLShaderBinary,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLShaderBinary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLShaderBinary::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLShaderBinary.stringdata0))
        return static_cast<void*>(const_cast< QMLShaderBinary*>(this));
    return QReflect_ShaderBinary::qt_metacast(_clname);
}

int osg::QMLShaderBinary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_ShaderBinary::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QMLShaderComponent_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLShaderComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLShaderComponent_t qt_meta_stringdata_osg__QMLShaderComponent = {
    {
QT_MOC_LITERAL(0, 0, 23), // "osg::QMLShaderComponent"
QT_MOC_LITERAL(1, 24, 11), // "updateModel"
QT_MOC_LITERAL(2, 36, 0) // ""

    },
    "osg::QMLShaderComponent\0updateModel\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLShaderComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void osg::QMLShaderComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLShaderComponent *_t = static_cast<QMLShaderComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QMLShaderComponent::staticMetaObject = {
    { &QReflect_ShaderComponent::staticMetaObject, qt_meta_stringdata_osg__QMLShaderComponent.data,
      qt_meta_data_osg__QMLShaderComponent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLShaderComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLShaderComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLShaderComponent.stringdata0))
        return static_cast<void*>(const_cast< QMLShaderComponent*>(this));
    return QReflect_ShaderComponent::qt_metacast(_clname);
}

int osg::QMLShaderComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_ShaderComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QMLShader_t {
    QByteArrayData data[11];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QMLShader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QMLShader_t qt_meta_stringdata_osg__QMLShader = {
    {
QT_MOC_LITERAL(0, 0, 14), // "osg::QMLShader"
QT_MOC_LITERAL(1, 15, 15), // "typeListChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "QStringList&"
QT_MOC_LITERAL(4, 45, 17), // "shaderTypeChanged"
QT_MOC_LITERAL(5, 63, 17), // "setSourceFromFile"
QT_MOC_LITERAL(6, 81, 10), // "saveChange"
QT_MOC_LITERAL(7, 92, 13), // "popQscintilla"
QT_MOC_LITERAL(8, 106, 11), // "updateModel"
QT_MOC_LITERAL(9, 118, 10), // "shaderType"
QT_MOC_LITERAL(10, 129, 8) // "typeList"

    },
    "osg::QMLShader\0typeListChanged\0\0"
    "QStringList&\0shaderTypeChanged\0"
    "setSourceFromFile\0saveChange\0popQscintilla\0"
    "updateModel\0shaderType\0typeList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QMLShader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void osg::QMLShader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMLShader *_t = static_cast<QMLShader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeListChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->shaderTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSourceFromFile((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 3: _t->saveChange(); break;
        case 4: _t->popQscintilla(); break;
        case 5: _t->updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMLShader::*_t)(QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLShader::typeListChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMLShader::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMLShader::shaderTypeChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMLShader *_t = static_cast<QMLShader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getshaderType(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->typeList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMLShader *_t = static_cast<QMLShader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setshaderType(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QMLShader::staticMetaObject = {
    { &QReflect_Shader::staticMetaObject, qt_meta_stringdata_osg__QMLShader.data,
      qt_meta_data_osg__QMLShader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QMLShader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QMLShader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QMLShader.stringdata0))
        return static_cast<void*>(const_cast< QMLShader*>(this));
    return QReflect_Shader::qt_metacast(_clname);
}

int osg::QMLShader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QReflect_Shader::qt_metacall(_c, _id, _a);
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
void osg::QMLShader::typeListChanged(QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QMLShader::shaderTypeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
