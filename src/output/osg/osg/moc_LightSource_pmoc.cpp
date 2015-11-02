/****************************************************************************
** Meta object code from reading C++ file 'LightSource_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LightSource_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightSource_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_LightSource_t {
    QByteArrayData data[20];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_LightSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_LightSource_t qt_meta_stringdata_osg__QReflect_LightSource = {
    {
QT_MOC_LITERAL(0, 0, 25), // "osg::QReflect_LightSource"
QT_MOC_LITERAL(1, 26, 12), // "LightChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "const osg::QReflect_Light*"
QT_MOC_LITERAL(4, 67, 11), // "updateModel"
QT_MOC_LITERAL(5, 79, 8), // "getLight"
QT_MOC_LITERAL(6, 88, 20), // "osg::QReflect_Light*"
QT_MOC_LITERAL(7, 109, 17), // "getReferenceFrame"
QT_MOC_LITERAL(8, 127, 41), // "osg::QReflect_LightSource::Re..."
QT_MOC_LITERAL(9, 169, 21), // "setLocalStateSetModes"
QT_MOC_LITERAL(10, 191, 17), // "setReferenceFrame"
QT_MOC_LITERAL(11, 209, 16), // "setStateSetModes"
QT_MOC_LITERAL(12, 226, 23), // "osg::QReflect_StateSet*"
QT_MOC_LITERAL(13, 250, 21), // "setThreadSafeRefUnref"
QT_MOC_LITERAL(14, 272, 21), // "pmoc_reverse_setLight"
QT_MOC_LITERAL(15, 294, 3), // "par"
QT_MOC_LITERAL(16, 298, 8), // "setLight"
QT_MOC_LITERAL(17, 307, 14), // "ReferenceFrame"
QT_MOC_LITERAL(18, 322, 11), // "RELATIVE_RF"
QT_MOC_LITERAL(19, 334, 11) // "ABSOLUTE_RF"

    },
    "osg::QReflect_LightSource\0LightChanged\0"
    "\0const osg::QReflect_Light*\0updateModel\0"
    "getLight\0osg::QReflect_Light*\0"
    "getReferenceFrame\0"
    "osg::QReflect_LightSource::ReferenceFrame\0"
    "setLocalStateSetModes\0setReferenceFrame\0"
    "setStateSetModes\0osg::QReflect_StateSet*\0"
    "setThreadSafeRefUnref\0pmoc_reverse_setLight\0"
    "par\0setLight\0ReferenceFrame\0RELATIVE_RF\0"
    "ABSOLUTE_RF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_LightSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       1,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   73,    2, 0x02 /* Public */,
       7,    0,   74,    2, 0x02 /* Public */,
       9,    1,   75,    2, 0x02 /* Public */,
      10,    1,   78,    2, 0x02 /* Public */,
      11,    2,   81,    2, 0x02 /* Public */,
      13,    1,   86,    2, 0x02 /* Public */,
      14,    1,   89,    2, 0x02 /* Public */,
      14,    0,   92,    2, 0x22 /* Public | MethodCloned */,
      16,    1,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6,
    0x80000000 | 8,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   15,

 // enums: name, flags, count, data
      17, 0x0,    2,  100,

 // enum data: key, value
      18, uint(osg::QReflect_LightSource::RELATIVE_RF),
      19, uint(osg::QReflect_LightSource::ABSOLUTE_RF),

       0        // eod
};

void osg::QReflect_LightSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_LightSource *_t = static_cast<QReflect_LightSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LightChanged((*reinterpret_cast< const osg::QReflect_Light*(*)>(_a[1]))); break;
        case 1: _t->updateModel(); break;
        case 2: { osg::QReflect_Light* _r = _t->getLight();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Light**>(_a[0]) = _r; }  break;
        case 3: { osg::QReflect_LightSource::ReferenceFrame _r = _t->getReferenceFrame();
            if (_a[0]) *reinterpret_cast< osg::QReflect_LightSource::ReferenceFrame*>(_a[0]) = _r; }  break;
        case 4: _t->setLocalStateSetModes((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->setReferenceFrame((*reinterpret_cast< osg::QReflect_LightSource::ReferenceFrame(*)>(_a[1]))); break;
        case 6: _t->setStateSetModes((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 7: _t->setThreadSafeRefUnref((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->pmoc_reverse_setLight((*reinterpret_cast< osg::QReflect_Light*(*)>(_a[1]))); break;
        case 9: _t->pmoc_reverse_setLight(); break;
        case 10: _t->setLight((*reinterpret_cast< osg::QReflect_Light*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_LightSource::*_t)(const osg::QReflect_Light * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_LightSource::LightChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject osg::QReflect_LightSource::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_LightSource.data,
      qt_meta_data_osg__QReflect_LightSource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_LightSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_LightSource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_LightSource.stringdata0))
        return static_cast<void*>(const_cast< QReflect_LightSource*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_LightSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void osg::QReflect_LightSource::LightChanged(const osg::QReflect_Light * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
