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
struct qt_meta_stringdata_osg__QReflect_ShaderBinary_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ShaderBinary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ShaderBinary_t qt_meta_stringdata_osg__QReflect_ShaderBinary = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_ShaderBinary"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "getSize"
QT_MOC_LITERAL(4, 48, 20), // "readShaderBinaryFile"
QT_MOC_LITERAL(5, 69, 27), // "osg::QReflect_ShaderBinary*"
QT_MOC_LITERAL(6, 97, 8) // "allocate"

    },
    "osg::QReflect_ShaderBinary\0updateModel\0"
    "\0getSize\0readShaderBinaryFile\0"
    "osg::QReflect_ShaderBinary*\0allocate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ShaderBinary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x02 /* Public */,
       4,    1,   36,    2, 0x02 /* Public */,
       6,    1,   39,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    0x80000000 | 5, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::UInt,    2,

       0        // eod
};

void osg::QReflect_ShaderBinary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ShaderBinary *_t = static_cast<QReflect_ShaderBinary *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { uint _r = _t->getSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 2: { osg::QReflect_ShaderBinary* _r = _t->readShaderBinaryFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_ShaderBinary**>(_a[0]) = _r; }  break;
        case 3: _t->allocate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_ShaderBinary::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ShaderBinary.data,
      qt_meta_data_osg__QReflect_ShaderBinary,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ShaderBinary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ShaderBinary::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ShaderBinary.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ShaderBinary*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ShaderBinary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_ShaderComponent_t {
    QByteArrayData data[9];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ShaderComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ShaderComponent_t qt_meta_stringdata_osg__QReflect_ShaderComponent = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QReflect_ShaderComponent"
QT_MOC_LITERAL(1, 30, 11), // "updateModel"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "addShader"
QT_MOC_LITERAL(4, 53, 21), // "osg::QReflect_Shader*"
QT_MOC_LITERAL(5, 75, 13), // "getNumShaders"
QT_MOC_LITERAL(6, 89, 9), // "getShader"
QT_MOC_LITERAL(7, 99, 12), // "removeShader"
QT_MOC_LITERAL(8, 112, 21) // "resizeGLObjectBuffers"

    },
    "osg::QReflect_ShaderComponent\0updateModel\0"
    "\0addShader\0osg::QReflect_Shader*\0"
    "getNumShaders\0getShader\0removeShader\0"
    "resizeGLObjectBuffers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ShaderComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x02 /* Public */,
       5,    0,   53,    2, 0x02 /* Public */,
       6,    1,   54,    2, 0x02 /* Public */,
       6,    1,   57,    2, 0x02 /* Public */,
       7,    1,   60,    2, 0x02 /* Public */,
       8,    1,   63,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt, 0x80000000 | 4,    2,
    QMetaType::UInt,
    0x80000000 | 4, QMetaType::UInt,    2,
    0x80000000 | 4, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,

       0        // eod
};

void osg::QReflect_ShaderComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ShaderComponent *_t = static_cast<QReflect_ShaderComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { uint _r = _t->addShader((*reinterpret_cast< osg::QReflect_Shader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 2: { uint _r = _t->getNumShaders();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_Shader* _r = _t->getShader((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Shader**>(_a[0]) = _r; }  break;
        case 4: { osg::QReflect_Shader* _r = _t->getShader((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Shader**>(_a[0]) = _r; }  break;
        case 5: _t->removeShader((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Shader* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_ShaderComponent::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ShaderComponent.data,
      qt_meta_data_osg__QReflect_ShaderComponent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ShaderComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ShaderComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ShaderComponent.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ShaderComponent*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ShaderComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_Shader_t {
    QByteArrayData data[45];
    char stringdata0[706];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Shader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Shader_t qt_meta_stringdata_osg__QReflect_Shader = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_Shader"
QT_MOC_LITERAL(1, 21, 15), // "FileNameChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "ShaderBinaryChanged"
QT_MOC_LITERAL(4, 58, 33), // "const osg::QReflect_ShaderBin..."
QT_MOC_LITERAL(5, 92, 19), // "ShaderSourceChanged"
QT_MOC_LITERAL(6, 112, 11), // "updateModel"
QT_MOC_LITERAL(7, 124, 24), // "loadShaderSourceFromFile"
QT_MOC_LITERAL(8, 149, 7), // "setType"
QT_MOC_LITERAL(9, 157, 26), // "osg::QReflect_Shader::Type"
QT_MOC_LITERAL(10, 184, 7), // "compare"
QT_MOC_LITERAL(11, 192, 21), // "osg::QReflect_Shader*"
QT_MOC_LITERAL(12, 214, 15), // "getShaderBinary"
QT_MOC_LITERAL(13, 230, 27), // "osg::QReflect_ShaderBinary*"
QT_MOC_LITERAL(14, 258, 11), // "getTypename"
QT_MOC_LITERAL(15, 270, 11), // "const char*"
QT_MOC_LITERAL(16, 282, 11), // "getFileName"
QT_MOC_LITERAL(17, 294, 15), // "getShaderSource"
QT_MOC_LITERAL(18, 310, 14), // "readShaderFile"
QT_MOC_LITERAL(19, 325, 20), // "getShaderDefinesMode"
QT_MOC_LITERAL(20, 346, 39), // "osg::QReflect_Shader::ShaderD..."
QT_MOC_LITERAL(21, 386, 7), // "getType"
QT_MOC_LITERAL(22, 394, 9), // "getTypeId"
QT_MOC_LITERAL(23, 404, 16), // "addCodeInjection"
QT_MOC_LITERAL(24, 421, 11), // "dirtyShader"
QT_MOC_LITERAL(25, 433, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(26, 455, 20), // "setShaderDefinesMode"
QT_MOC_LITERAL(27, 476, 28), // "pmoc_reverse_setShaderBinary"
QT_MOC_LITERAL(28, 505, 3), // "par"
QT_MOC_LITERAL(29, 509, 11), // "setFileName"
QT_MOC_LITERAL(30, 521, 15), // "setShaderBinary"
QT_MOC_LITERAL(31, 537, 15), // "setShaderSource"
QT_MOC_LITERAL(32, 553, 8), // "FileName"
QT_MOC_LITERAL(33, 562, 12), // "ShaderSource"
QT_MOC_LITERAL(34, 575, 17), // "ShaderDefinesMode"
QT_MOC_LITERAL(35, 593, 17), // "USE_SHADER_PRAGMA"
QT_MOC_LITERAL(36, 611, 19), // "USE_MANUAL_SETTINGS"
QT_MOC_LITERAL(37, 631, 4), // "Type"
QT_MOC_LITERAL(38, 636, 6), // "VERTEX"
QT_MOC_LITERAL(39, 643, 11), // "TESSCONTROL"
QT_MOC_LITERAL(40, 655, 14), // "TESSEVALUATION"
QT_MOC_LITERAL(41, 670, 8), // "GEOMETRY"
QT_MOC_LITERAL(42, 679, 8), // "FRAGMENT"
QT_MOC_LITERAL(43, 688, 7), // "COMPUTE"
QT_MOC_LITERAL(44, 696, 9) // "UNDEFINED"

    },
    "osg::QReflect_Shader\0FileNameChanged\0"
    "\0ShaderBinaryChanged\0"
    "const osg::QReflect_ShaderBinary*\0"
    "ShaderSourceChanged\0updateModel\0"
    "loadShaderSourceFromFile\0setType\0"
    "osg::QReflect_Shader::Type\0compare\0"
    "osg::QReflect_Shader*\0getShaderBinary\0"
    "osg::QReflect_ShaderBinary*\0getTypename\0"
    "const char*\0getFileName\0getShaderSource\0"
    "readShaderFile\0getShaderDefinesMode\0"
    "osg::QReflect_Shader::ShaderDefinesMode\0"
    "getType\0getTypeId\0addCodeInjection\0"
    "dirtyShader\0resizeGLObjectBuffers\0"
    "setShaderDefinesMode\0pmoc_reverse_setShaderBinary\0"
    "par\0setFileName\0setShaderBinary\0"
    "setShaderSource\0FileName\0ShaderSource\0"
    "ShaderDefinesMode\0USE_SHADER_PRAGMA\0"
    "USE_MANUAL_SETTINGS\0Type\0VERTEX\0"
    "TESSCONTROL\0TESSEVALUATION\0GEOMETRY\0"
    "FRAGMENT\0COMPUTE\0UNDEFINED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Shader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       2,  192, // properties
       2,  200, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  134,    2, 0x06 /* Public */,
       3,    1,  137,    2, 0x06 /* Public */,
       5,    1,  140,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  143,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,  144,    2, 0x02 /* Public */,
       8,    1,  147,    2, 0x02 /* Public */,
      10,    1,  150,    2, 0x02 /* Public */,
      12,    0,  153,    2, 0x02 /* Public */,
      14,    0,  154,    2, 0x02 /* Public */,
      16,    0,  155,    2, 0x02 /* Public */,
      17,    0,  156,    2, 0x02 /* Public */,
      18,    2,  157,    2, 0x02 /* Public */,
      19,    0,  162,    2, 0x02 /* Public */,
      21,    0,  163,    2, 0x02 /* Public */,
      22,    1,  164,    2, 0x02 /* Public */,
      23,    2,  167,    2, 0x02 /* Public */,
      24,    0,  172,    2, 0x02 /* Public */,
      25,    1,  173,    2, 0x02 /* Public */,
      26,    1,  176,    2, 0x02 /* Public */,
      27,    1,  179,    2, 0x02 /* Public */,
      27,    0,  182,    2, 0x22 /* Public | MethodCloned */,
      29,    1,  183,    2, 0x02 /* Public */,
      30,    1,  186,    2, 0x02 /* Public */,
      31,    1,  189,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, 0x80000000 | 9,    2,
    QMetaType::Int, 0x80000000 | 11,    2,
    0x80000000 | 13,
    0x80000000 | 15,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 11, 0x80000000 | 9, QMetaType::QString,    2,    2,
    0x80000000 | 20,
    0x80000000 | 9,
    0x80000000 | 9, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 13,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 13,   28,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      32, QMetaType::QString, 0x00495103,
      33, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       2,

 // enums: name, flags, count, data
      34, 0x0,    2,  208,
      37, 0x0,    7,  212,

 // enum data: key, value
      35, uint(osg::QReflect_Shader::USE_SHADER_PRAGMA),
      36, uint(osg::QReflect_Shader::USE_MANUAL_SETTINGS),
      38, uint(osg::QReflect_Shader::VERTEX),
      39, uint(osg::QReflect_Shader::TESSCONTROL),
      40, uint(osg::QReflect_Shader::TESSEVALUATION),
      41, uint(osg::QReflect_Shader::GEOMETRY),
      42, uint(osg::QReflect_Shader::FRAGMENT),
      43, uint(osg::QReflect_Shader::COMPUTE),
      44, uint(osg::QReflect_Shader::UNDEFINED),

       0        // eod
};

void osg::QReflect_Shader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Shader *_t = static_cast<QReflect_Shader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ShaderBinaryChanged((*reinterpret_cast< const osg::QReflect_ShaderBinary*(*)>(_a[1]))); break;
        case 2: _t->ShaderSourceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { bool _r = _t->loadShaderSourceFromFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setType((*reinterpret_cast< osg::QReflect_Shader::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_Shader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_ShaderBinary* _r = _t->getShaderBinary();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ShaderBinary**>(_a[0]) = _r; }  break;
        case 8: { const char* _r = _t->getTypename();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->getFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->getShaderSource();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { osg::QReflect_Shader* _r = _t->readShaderFile((*reinterpret_cast< osg::QReflect_Shader::Type(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Shader**>(_a[0]) = _r; }  break;
        case 12: { osg::QReflect_Shader::ShaderDefinesMode _r = _t->getShaderDefinesMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Shader::ShaderDefinesMode*>(_a[0]) = _r; }  break;
        case 13: { osg::QReflect_Shader::Type _r = _t->getType();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Shader::Type*>(_a[0]) = _r; }  break;
        case 14: { osg::QReflect_Shader::Type _r = _t->getTypeId((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_Shader::Type*>(_a[0]) = _r; }  break;
        case 15: _t->addCodeInjection((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->dirtyShader(); break;
        case 17: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 18: _t->setShaderDefinesMode((*reinterpret_cast< osg::QReflect_Shader::ShaderDefinesMode(*)>(_a[1]))); break;
        case 19: _t->pmoc_reverse_setShaderBinary((*reinterpret_cast< osg::QReflect_ShaderBinary*(*)>(_a[1]))); break;
        case 20: _t->pmoc_reverse_setShaderBinary(); break;
        case 21: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setShaderBinary((*reinterpret_cast< osg::QReflect_ShaderBinary*(*)>(_a[1]))); break;
        case 23: _t->setShaderSource((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Shader* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_ShaderBinary* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_ShaderBinary* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Shader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Shader::FileNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Shader::*_t)(const osg::QReflect_ShaderBinary * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Shader::ShaderBinaryChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_Shader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Shader::ShaderSourceChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Shader *_t = static_cast<QReflect_Shader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFileName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getShaderSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Shader *_t = static_cast<QReflect_Shader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setShaderSource(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Shader::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Shader.data,
      qt_meta_data_osg__QReflect_Shader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Shader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Shader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Shader.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Shader*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Shader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
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
void osg::QReflect_Shader::FileNameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Shader::ShaderBinaryChanged(const osg::QReflect_ShaderBinary * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_Shader::ShaderSourceChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
