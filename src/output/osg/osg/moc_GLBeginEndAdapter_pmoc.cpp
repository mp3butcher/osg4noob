/****************************************************************************
** Meta object code from reading C++ file 'GLBeginEndAdapter_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GLBeginEndAdapter_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLBeginEndAdapter_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_GLBeginEndAdapter_t {
    QByteArrayData data[13];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_GLBeginEndAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_GLBeginEndAdapter_t qt_meta_stringdata_osg__QReflect_GLBeginEndAdapter = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_GLBeginEndAdapter"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "setMatrixMode"
QT_MOC_LITERAL(4, 59, 43), // "osg::QReflect_GLBeginEndAdapt..."
QT_MOC_LITERAL(5, 103, 3), // "End"
QT_MOC_LITERAL(6, 107, 12), // "LoadIdentity"
QT_MOC_LITERAL(7, 120, 9), // "PopMatrix"
QT_MOC_LITERAL(8, 130, 10), // "PushMatrix"
QT_MOC_LITERAL(9, 141, 5), // "reset"
QT_MOC_LITERAL(10, 147, 10), // "MatrixMode"
QT_MOC_LITERAL(11, 158, 32), // "APPLY_LOCAL_MATRICES_TO_VERTICES"
QT_MOC_LITERAL(12, 191, 33) // "APPLY_LOCAL_MATRICES_TO_MODEL..."

    },
    "osg::QReflect_GLBeginEndAdapter\0"
    "updateModel\0\0setMatrixMode\0"
    "osg::QReflect_GLBeginEndAdapter::MatrixMode\0"
    "End\0LoadIdentity\0PopMatrix\0PushMatrix\0"
    "reset\0MatrixMode\0APPLY_LOCAL_MATRICES_TO_VERTICES\0"
    "APPLY_LOCAL_MATRICES_TO_MODELVIEW"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_GLBeginEndAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x02 /* Public */,
       5,    0,   56,    2, 0x02 /* Public */,
       6,    0,   57,    2, 0x02 /* Public */,
       7,    0,   58,    2, 0x02 /* Public */,
       8,    0,   59,    2, 0x02 /* Public */,
       9,    0,   60,    2, 0x02 /* Public */,
       3,    1,   61,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // enums: name, flags, count, data
      10, 0x0,    2,   68,

 // enum data: key, value
      11, uint(osg::QReflect_GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_VERTICES),
      12, uint(osg::QReflect_GLBeginEndAdapter::APPLY_LOCAL_MATRICES_TO_MODELVIEW),

       0        // eod
};

void osg::QReflect_GLBeginEndAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_GLBeginEndAdapter *_t = static_cast<QReflect_GLBeginEndAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { osg::QReflect_GLBeginEndAdapter::MatrixMode _r = _t->setMatrixMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBeginEndAdapter::MatrixMode*>(_a[0]) = _r; }  break;
        case 2: _t->End(); break;
        case 3: _t->LoadIdentity(); break;
        case 4: _t->PopMatrix(); break;
        case 5: _t->PushMatrix(); break;
        case 6: _t->reset(); break;
        case 7: _t->setMatrixMode((*reinterpret_cast< osg::QReflect_GLBeginEndAdapter::MatrixMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_GLBeginEndAdapter::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_GLBeginEndAdapter.data,
      qt_meta_data_osg__QReflect_GLBeginEndAdapter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_GLBeginEndAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_GLBeginEndAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_GLBeginEndAdapter.stringdata0))
        return static_cast<void*>(const_cast< QReflect_GLBeginEndAdapter*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_GLBeginEndAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_END_MOC_NAMESPACE
