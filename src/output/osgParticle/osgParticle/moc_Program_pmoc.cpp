/****************************************************************************
** Meta object code from reading C++ file 'Program_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Program_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Program_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_Program_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_Program_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_Program_t qt_meta_stringdata_osgParticle__QReflect_Program = {
    {
QT_MOC_LITERAL(0, 0, 29), // "osgParticle::QReflect_Program"
QT_MOC_LITERAL(1, 30, 11), // "updateModel"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "isSameKindAs"
QT_MOC_LITERAL(4, 56, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(5, 78, 9), // "className"
QT_MOC_LITERAL(6, 88, 11), // "const char*"
QT_MOC_LITERAL(7, 100, 11), // "libraryName"
QT_MOC_LITERAL(8, 112, 6), // "accept"
QT_MOC_LITERAL(9, 119, 26) // "osg::QReflect_NodeVisitor*"

    },
    "osgParticle::QReflect_Program\0updateModel\0"
    "\0isSameKindAs\0osg::QReflect_Object*\0"
    "className\0const char*\0libraryName\0"
    "accept\0osg::QReflect_NodeVisitor*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_Program[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x02 /* Public */,
       5,    0,   43,    2, 0x02 /* Public */,
       7,    0,   44,    2, 0x02 /* Public */,
       8,    1,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 4,    2,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void osgParticle::QReflect_Program::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Program *_t = static_cast<QReflect_Program *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->isSameKindAs((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { const char* _r = _t->className();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->libraryName();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: _t->accept((*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osgParticle::QReflect_Program::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_Program.data,
      qt_meta_data_osgParticle__QReflect_Program,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_Program::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_Program::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_Program.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Program*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_Program::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
