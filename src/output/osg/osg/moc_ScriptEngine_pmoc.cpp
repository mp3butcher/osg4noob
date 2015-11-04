/****************************************************************************
** Meta object code from reading C++ file 'ScriptEngine_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ScriptEngine_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptEngine_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_ScriptEngine_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ScriptEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ScriptEngine_t qt_meta_stringdata_osg__QReflect_ScriptEngine = {
    {
QT_MOC_LITERAL(0, 0, 26), // "osg::QReflect_ScriptEngine"
QT_MOC_LITERAL(1, 27, 11), // "updateModel"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "run"
QT_MOC_LITERAL(4, 44, 21), // "osg::QReflect_Script*"
QT_MOC_LITERAL(5, 66, 11) // "getLanguage"

    },
    "osg::QReflect_ScriptEngine\0updateModel\0"
    "\0run\0osg::QReflect_Script*\0getLanguage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ScriptEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       5,    0,   33,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    QMetaType::QString,

       0        // eod
};

void osg::QReflect_ScriptEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ScriptEngine *_t = static_cast<QReflect_ScriptEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->run((*reinterpret_cast< osg::QReflect_Script*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->getLanguage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Script* >(); break;
            }
            break;
        }
    }
}

const QMetaObject osg::QReflect_ScriptEngine::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ScriptEngine.data,
      qt_meta_data_osg__QReflect_ScriptEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ScriptEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ScriptEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ScriptEngine.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ScriptEngine*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ScriptEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_Script_t {
    QByteArrayData data[13];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Script_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Script_t qt_meta_stringdata_osg__QReflect_Script = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_Script"
QT_MOC_LITERAL(1, 21, 15), // "LanguageChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "ScriptChanged"
QT_MOC_LITERAL(4, 52, 11), // "updateModel"
QT_MOC_LITERAL(5, 64, 16), // "getModifiedCount"
QT_MOC_LITERAL(6, 81, 11), // "getLanguage"
QT_MOC_LITERAL(7, 93, 9), // "getScript"
QT_MOC_LITERAL(8, 103, 5), // "dirty"
QT_MOC_LITERAL(9, 109, 11), // "setLanguage"
QT_MOC_LITERAL(10, 121, 9), // "setScript"
QT_MOC_LITERAL(11, 131, 8), // "Language"
QT_MOC_LITERAL(12, 140, 6) // "Script"

    },
    "osg::QReflect_Script\0LanguageChanged\0"
    "\0ScriptChanged\0updateModel\0getModifiedCount\0"
    "getLanguage\0getScript\0dirty\0setLanguage\0"
    "setScript\0Language\0Script"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Script[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   65,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   66,    2, 0x02 /* Public */,
       6,    0,   67,    2, 0x02 /* Public */,
       7,    0,   68,    2, 0x02 /* Public */,
       8,    0,   69,    2, 0x02 /* Public */,
       9,    1,   70,    2, 0x02 /* Public */,
      10,    1,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::UInt,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QReflect_Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Script *_t = static_cast<QReflect_Script *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LanguageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ScriptChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { uint _r = _t->getModifiedCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getLanguage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getScript();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: _t->dirty(); break;
        case 7: _t->setLanguage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Script::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Script::LanguageChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Script::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Script::ScriptChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Script *_t = static_cast<QReflect_Script *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLanguage(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getScript(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Script *_t = static_cast<QReflect_Script *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLanguage(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setScript(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Script::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Script.data,
      qt_meta_data_osg__QReflect_Script,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Script::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Script.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Script*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void osg::QReflect_Script::LanguageChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Script::ScriptChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_osg__QReflect_ScriptNodeCallback_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_ScriptNodeCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_ScriptNodeCallback_t qt_meta_stringdata_osg__QReflect_ScriptNodeCallback = {
    {
QT_MOC_LITERAL(0, 0, 32), // "osg::QReflect_ScriptNodeCallback"
QT_MOC_LITERAL(1, 33, 13), // "ScriptChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 27), // "const osg::QReflect_Script*"
QT_MOC_LITERAL(4, 76, 11), // "updateModel"
QT_MOC_LITERAL(5, 88, 9), // "getScript"
QT_MOC_LITERAL(6, 98, 21), // "osg::QReflect_Script*"
QT_MOC_LITERAL(7, 120, 22), // "pmoc_reverse_setScript"
QT_MOC_LITERAL(8, 143, 3), // "par"
QT_MOC_LITERAL(9, 147, 9) // "setScript"

    },
    "osg::QReflect_ScriptNodeCallback\0"
    "ScriptChanged\0\0const osg::QReflect_Script*\0"
    "updateModel\0getScript\0osg::QReflect_Script*\0"
    "pmoc_reverse_setScript\0par\0setScript"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_ScriptNodeCallback[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x02 /* Public */,
       7,    1,   49,    2, 0x02 /* Public */,
       7,    0,   52,    2, 0x22 /* Public | MethodCloned */,
       9,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 6,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    8,

       0        // eod
};

void osg::QReflect_ScriptNodeCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_ScriptNodeCallback *_t = static_cast<QReflect_ScriptNodeCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ScriptChanged((*reinterpret_cast< const osg::QReflect_Script*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { osg::QReflect_Script* _r = _t->getScript();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Script**>(_a[0]) = _r; }  break;
        case 3: _t->pmoc_reverse_setScript((*reinterpret_cast< osg::QReflect_Script*(*)>(_a[1]))); break;
        case 4: _t->pmoc_reverse_setScript(); break;
        case 5: _t->setScript((*reinterpret_cast< osg::QReflect_Script*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Script* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_Script* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_ScriptNodeCallback::*_t)(const osg::QReflect_Script * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_ScriptNodeCallback::ScriptChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_ScriptNodeCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_ScriptNodeCallback.data,
      qt_meta_data_osg__QReflect_ScriptNodeCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_ScriptNodeCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_ScriptNodeCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_ScriptNodeCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_ScriptNodeCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_ScriptNodeCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_ScriptNodeCallback::ScriptChanged(const osg::QReflect_Script * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
