/****************************************************************************
** Meta object code from reading C++ file 'FragmentProgram_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FragmentProgram_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FragmentProgram_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_FragmentProgram_t {
    QByteArrayData data[16];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_FragmentProgram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_FragmentProgram_t qt_meta_stringdata_osg__QReflect_FragmentProgram = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osg::QReflect_FragmentProgram"
QT_MOC_LITERAL(1, 30, 22), // "FragmentProgramChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "updateModel"
QT_MOC_LITERAL(4, 66, 20), // "getFragmentProgramID"
QT_MOC_LITERAL(5, 87, 7), // "compare"
QT_MOC_LITERAL(6, 95, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(7, 125, 18), // "getFragmentProgram"
QT_MOC_LITERAL(8, 144, 26), // "dirtyFragmentProgramObject"
QT_MOC_LITERAL(9, 171, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(10, 193, 18), // "setFragmentProgram"
QT_MOC_LITERAL(11, 212, 11), // "const char*"
QT_MOC_LITERAL(12, 224, 24), // "setProgramLocalParameter"
QT_MOC_LITERAL(13, 249, 6), // "GLuint"
QT_MOC_LITERAL(14, 256, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(15, 277, 15) // "FragmentProgram"

    },
    "osg::QReflect_FragmentProgram\0"
    "FragmentProgramChanged\0\0updateModel\0"
    "getFragmentProgramID\0compare\0"
    "osg::QReflect_StateAttribute*\0"
    "getFragmentProgram\0dirtyFragmentProgramObject\0"
    "resizeGLObjectBuffers\0setFragmentProgram\0"
    "const char*\0setProgramLocalParameter\0"
    "GLuint\0osg::QReflect_Vec4f*\0FragmentProgram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_FragmentProgram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   68,    2, 0x02 /* Public */,
       5,    1,   71,    2, 0x02 /* Public */,
       7,    0,   74,    2, 0x02 /* Public */,
       8,    0,   75,    2, 0x02 /* Public */,
       9,    1,   76,    2, 0x02 /* Public */,
      10,    1,   79,    2, 0x02 /* Public */,
      12,    2,   82,    2, 0x02 /* Public */,
      10,    1,   87,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Int, 0x80000000 | 6,    2,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 14,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void osg::QReflect_FragmentProgram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_FragmentProgram *_t = static_cast<QReflect_FragmentProgram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FragmentProgramChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: _t->getFragmentProgramID((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->getFragmentProgram();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->dirtyFragmentProgramObject(); break;
        case 6: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->setFragmentProgram((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 8: _t->setProgramLocalParameter((*reinterpret_cast< const GLuint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[2]))); break;
        case 9: _t->setFragmentProgram((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_FragmentProgram::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_FragmentProgram::FragmentProgramChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_FragmentProgram *_t = static_cast<QReflect_FragmentProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFragmentProgram(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_FragmentProgram *_t = static_cast<QReflect_FragmentProgram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFragmentProgram(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_FragmentProgram::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_FragmentProgram.data,
      qt_meta_data_osg__QReflect_FragmentProgram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_FragmentProgram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_FragmentProgram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_FragmentProgram.stringdata0))
        return static_cast<void*>(const_cast< QReflect_FragmentProgram*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_FragmentProgram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void osg::QReflect_FragmentProgram::FragmentProgramChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
