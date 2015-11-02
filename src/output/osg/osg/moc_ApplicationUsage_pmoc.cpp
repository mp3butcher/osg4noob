/****************************************************************************
** Meta object code from reading C++ file 'ApplicationUsage_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ApplicationUsage_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationUsage_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ApplicationUsageProxy_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ApplicationUsageProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ApplicationUsageProxy_t qt_meta_stringdata_osg__QReflect_ApplicationUsageProxy = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osg::QReflect_ApplicationUsag..."
QT_MOC_LITERAL(1, 36, 11), // "updateModel"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "osg::QReflect_ApplicationUsageProxy\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ApplicationUsageProxy[] = {

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

void osg::QReflect_ApplicationUsageProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ApplicationUsageProxy *_t = static_cast<QReflect_ApplicationUsageProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_ApplicationUsageProxy::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ApplicationUsageProxy.data,
      qt_meta_data_osg__QReflect_ApplicationUsageProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ApplicationUsageProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ApplicationUsageProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ApplicationUsageProxy.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ApplicationUsageProxy*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ApplicationUsageProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_osg__QReflect_ApplicationUsage_t {
    QByteArrayData data[28];
    char stringdata0[519];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ApplicationUsage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ApplicationUsage_t qt_meta_stringdata_osg__QReflect_ApplicationUsage = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osg::QReflect_ApplicationUsage"
QT_MOC_LITERAL(1, 31, 22), // "ApplicationNameChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 23), // "CommandLineUsageChanged"
QT_MOC_LITERAL(4, 79, 18), // "DescriptionChanged"
QT_MOC_LITERAL(5, 98, 11), // "updateModel"
QT_MOC_LITERAL(6, 110, 18), // "getApplicationName"
QT_MOC_LITERAL(7, 129, 19), // "getCommandLineUsage"
QT_MOC_LITERAL(8, 149, 14), // "getDescription"
QT_MOC_LITERAL(9, 164, 8), // "instance"
QT_MOC_LITERAL(10, 173, 31), // "osg::QReflect_ApplicationUsage*"
QT_MOC_LITERAL(11, 205, 20), // "addCommandLineOption"
QT_MOC_LITERAL(12, 226, 24), // "addEnvironmentalVariable"
QT_MOC_LITERAL(13, 251, 23), // "addKeyboardMouseBinding"
QT_MOC_LITERAL(14, 275, 19), // "addUsageExplanation"
QT_MOC_LITERAL(15, 295, 36), // "osg::QReflect_ApplicationUsag..."
QT_MOC_LITERAL(16, 332, 18), // "setApplicationName"
QT_MOC_LITERAL(17, 351, 19), // "setCommandLineUsage"
QT_MOC_LITERAL(18, 371, 14), // "setDescription"
QT_MOC_LITERAL(19, 386, 15), // "ApplicationName"
QT_MOC_LITERAL(20, 402, 16), // "CommandLineUsage"
QT_MOC_LITERAL(21, 419, 11), // "Description"
QT_MOC_LITERAL(22, 431, 4), // "Type"
QT_MOC_LITERAL(23, 436, 7), // "NO_HELP"
QT_MOC_LITERAL(24, 444, 19), // "COMMAND_LINE_OPTION"
QT_MOC_LITERAL(25, 464, 22), // "ENVIRONMENTAL_VARIABLE"
QT_MOC_LITERAL(26, 487, 22), // "KEYBOARD_MOUSE_BINDING"
QT_MOC_LITERAL(27, 510, 8) // "HELP_ALL"

    },
    "osg::QReflect_ApplicationUsage\0"
    "ApplicationNameChanged\0\0CommandLineUsageChanged\0"
    "DescriptionChanged\0updateModel\0"
    "getApplicationName\0getCommandLineUsage\0"
    "getDescription\0instance\0"
    "osg::QReflect_ApplicationUsage*\0"
    "addCommandLineOption\0addEnvironmentalVariable\0"
    "addKeyboardMouseBinding\0addUsageExplanation\0"
    "osg::QReflect_ApplicationUsage::Type\0"
    "setApplicationName\0setCommandLineUsage\0"
    "setDescription\0ApplicationName\0"
    "CommandLineUsage\0Description\0Type\0"
    "NO_HELP\0COMMAND_LINE_OPTION\0"
    "ENVIRONMENTAL_VARIABLE\0KEYBOARD_MOUSE_BINDING\0"
    "HELP_ALL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ApplicationUsage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       3,  160, // properties
       1,  172, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    1,  102,    2, 0x06 /* Public */,
       4,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  108,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,  109,    2, 0x02 /* Public */,
       7,    0,  110,    2, 0x02 /* Public */,
       8,    0,  111,    2, 0x02 /* Public */,
       9,    0,  112,    2, 0x02 /* Public */,
      11,    3,  113,    2, 0x02 /* Public */,
      12,    3,  120,    2, 0x02 /* Public */,
      13,    2,  127,    2, 0x02 /* Public */,
      13,    3,  132,    2, 0x02 /* Public */,
      13,    2,  139,    2, 0x02 /* Public */,
      14,    3,  144,    2, 0x02 /* Public */,
      16,    1,  151,    2, 0x02 /* Public */,
      17,    1,  154,    2, 0x02 /* Public */,
      18,    1,  157,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      22, 0x0,    5,  176,

 // enum data: key, value
      23, uint(osg::QReflect_ApplicationUsage::NO_HELP),
      24, uint(osg::QReflect_ApplicationUsage::COMMAND_LINE_OPTION),
      25, uint(osg::QReflect_ApplicationUsage::ENVIRONMENTAL_VARIABLE),
      26, uint(osg::QReflect_ApplicationUsage::KEYBOARD_MOUSE_BINDING),
      27, uint(osg::QReflect_ApplicationUsage::HELP_ALL),

       0        // eod
};

void osg::QReflect_ApplicationUsage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ApplicationUsage *_t = static_cast<QReflect_ApplicationUsage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ApplicationNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->CommandLineUsageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->DescriptionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { QString _r = _t->getApplicationName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getCommandLineUsage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_ApplicationUsage* _r = _t->instance();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ApplicationUsage**>(_a[0]) = _r; }  break;
        case 8: _t->addCommandLineOption((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->addEnvironmentalVariable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->addKeyboardMouseBinding((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->addKeyboardMouseBinding((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->addKeyboardMouseBinding((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->addUsageExplanation((*reinterpret_cast< osg::QReflect_ApplicationUsage::Type(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->setApplicationName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setCommandLineUsage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ApplicationUsage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ApplicationUsage::ApplicationNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_ApplicationUsage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ApplicationUsage::CommandLineUsageChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_ApplicationUsage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ApplicationUsage::DescriptionChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_ApplicationUsage *_t = static_cast<QReflect_ApplicationUsage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getApplicationName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getCommandLineUsage(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getDescription(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_ApplicationUsage *_t = static_cast<QReflect_ApplicationUsage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setApplicationName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCommandLineUsage(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_ApplicationUsage::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ApplicationUsage.data,
      qt_meta_data_osg__QReflect_ApplicationUsage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ApplicationUsage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ApplicationUsage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ApplicationUsage.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ApplicationUsage*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ApplicationUsage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
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
void osg::QReflect_ApplicationUsage::ApplicationNameChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_ApplicationUsage::CommandLineUsageChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_ApplicationUsage::DescriptionChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
