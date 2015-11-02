/****************************************************************************
** Meta object code from reading C++ file 'AnimationPath_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AnimationPath_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimationPath_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_AnimationPath_t {
    QByteArrayData data[19];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_AnimationPath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_AnimationPath_t qt_meta_stringdata_osg__QReflect_AnimationPath = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_AnimationPath"
QT_MOC_LITERAL(1, 28, 11), // "updateModel"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "empty"
QT_MOC_LITERAL(4, 47, 10), // "getInverse"
QT_MOC_LITERAL(5, 58, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(6, 81, 22), // "osg::QReflect_Matrixf*"
QT_MOC_LITERAL(7, 104, 9), // "getMatrix"
QT_MOC_LITERAL(8, 114, 12), // "getFirstTime"
QT_MOC_LITERAL(9, 127, 11), // "getLastTime"
QT_MOC_LITERAL(10, 139, 9), // "getPeriod"
QT_MOC_LITERAL(11, 149, 11), // "getLoopMode"
QT_MOC_LITERAL(12, 161, 37), // "osg::QReflect_AnimationPath::..."
QT_MOC_LITERAL(13, 199, 5), // "clear"
QT_MOC_LITERAL(14, 205, 11), // "setLoopMode"
QT_MOC_LITERAL(15, 217, 8), // "LoopMode"
QT_MOC_LITERAL(16, 226, 5), // "SWING"
QT_MOC_LITERAL(17, 232, 4), // "LOOP"
QT_MOC_LITERAL(18, 237, 10) // "NO_LOOPING"

    },
    "osg::QReflect_AnimationPath\0updateModel\0"
    "\0empty\0getInverse\0osg::QReflect_Matrixd*\0"
    "osg::QReflect_Matrixf*\0getMatrix\0"
    "getFirstTime\0getLastTime\0getPeriod\0"
    "getLoopMode\0osg::QReflect_AnimationPath::LoopMode\0"
    "clear\0setLoopMode\0LoopMode\0SWING\0LOOP\0"
    "NO_LOOPING"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_AnimationPath[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x02 /* Public */,
       4,    2,   76,    2, 0x02 /* Public */,
       4,    2,   81,    2, 0x02 /* Public */,
       7,    2,   86,    2, 0x02 /* Public */,
       7,    2,   91,    2, 0x02 /* Public */,
       8,    0,   96,    2, 0x02 /* Public */,
       9,    0,   97,    2, 0x02 /* Public */,
      10,    0,   98,    2, 0x02 /* Public */,
      11,    0,   99,    2, 0x02 /* Public */,
      13,    0,  100,    2, 0x02 /* Public */,
      14,    1,  101,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double, 0x80000000 | 5,    2,    2,
    QMetaType::Bool, QMetaType::Double, 0x80000000 | 6,    2,    2,
    QMetaType::Bool, QMetaType::Double, 0x80000000 | 5,    2,    2,
    QMetaType::Bool, QMetaType::Double, 0x80000000 | 6,    2,    2,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    0x80000000 | 12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,

 // enums: name, flags, count, data
      15, 0x0,    3,  108,

 // enum data: key, value
      16, uint(osg::QReflect_AnimationPath::SWING),
      17, uint(osg::QReflect_AnimationPath::LOOP),
      18, uint(osg::QReflect_AnimationPath::NO_LOOPING),

       0        // eod
};

void osg::QReflect_AnimationPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AnimationPath *_t = static_cast<QReflect_AnimationPath *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        case 1: { bool _r = _t->empty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->getInverse((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->getInverse((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->getMatrix((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->getMatrix((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { double _r = _t->getFirstTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { double _r = _t->getLastTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 8: { double _r = _t->getPeriod();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 9: { osg::QReflect_AnimationPath::LoopMode _r = _t->getLoopMode();
            if (_a[0]) *reinterpret_cast< osg::QReflect_AnimationPath::LoopMode*>(_a[0]) = _r; }  break;
        case 10: _t->clear(); break;
        case 11: _t->setLoopMode((*reinterpret_cast< osg::QReflect_AnimationPath::LoopMode(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject osg::QReflect_AnimationPath::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_AnimationPath.data,
      qt_meta_data_osg__QReflect_AnimationPath,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_AnimationPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_AnimationPath::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_AnimationPath.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AnimationPath*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_AnimationPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_osg__QReflect_AnimationPathCallback_t {
    QByteArrayData data[30];
    char stringdata0[508];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_AnimationPathCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_AnimationPathCallback_t qt_meta_stringdata_osg__QReflect_AnimationPathCallback = {
    {
QT_MOC_LITERAL(0, 0, 35), // "osg::QReflect_AnimationPathCa..."
QT_MOC_LITERAL(1, 36, 20), // "AnimationPathChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 34), // "const osg::QReflect_Animation..."
QT_MOC_LITERAL(4, 93, 12), // "PauseChanged"
QT_MOC_LITERAL(5, 106, 21), // "TimeMultiplierChanged"
QT_MOC_LITERAL(6, 128, 17), // "TimeOffsetChanged"
QT_MOC_LITERAL(7, 146, 23), // "UseInverseMatrixChanged"
QT_MOC_LITERAL(8, 170, 11), // "updateModel"
QT_MOC_LITERAL(9, 182, 16), // "getAnimationTime"
QT_MOC_LITERAL(10, 199, 16), // "getAnimationPath"
QT_MOC_LITERAL(11, 216, 28), // "osg::QReflect_AnimationPath*"
QT_MOC_LITERAL(12, 245, 8), // "getPause"
QT_MOC_LITERAL(13, 254, 19), // "getUseInverseMatrix"
QT_MOC_LITERAL(14, 274, 17), // "getTimeMultiplier"
QT_MOC_LITERAL(15, 292, 13), // "getTimeOffset"
QT_MOC_LITERAL(16, 306, 5), // "reset"
QT_MOC_LITERAL(17, 312, 13), // "setPivotPoint"
QT_MOC_LITERAL(18, 326, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(19, 347, 29), // "pmoc_reverse_setAnimationPath"
QT_MOC_LITERAL(20, 377, 3), // "par"
QT_MOC_LITERAL(21, 381, 16), // "setAnimationPath"
QT_MOC_LITERAL(22, 398, 8), // "setPause"
QT_MOC_LITERAL(23, 407, 17), // "setTimeMultiplier"
QT_MOC_LITERAL(24, 425, 13), // "setTimeOffset"
QT_MOC_LITERAL(25, 439, 19), // "setUseInverseMatrix"
QT_MOC_LITERAL(26, 459, 5), // "Pause"
QT_MOC_LITERAL(27, 465, 16), // "UseInverseMatrix"
QT_MOC_LITERAL(28, 482, 14), // "TimeMultiplier"
QT_MOC_LITERAL(29, 497, 10) // "TimeOffset"

    },
    "osg::QReflect_AnimationPathCallback\0"
    "AnimationPathChanged\0\0"
    "const osg::QReflect_AnimationPath*\0"
    "PauseChanged\0TimeMultiplierChanged\0"
    "TimeOffsetChanged\0UseInverseMatrixChanged\0"
    "updateModel\0getAnimationTime\0"
    "getAnimationPath\0osg::QReflect_AnimationPath*\0"
    "getPause\0getUseInverseMatrix\0"
    "getTimeMultiplier\0getTimeOffset\0reset\0"
    "setPivotPoint\0osg::QReflect_Vec3d*\0"
    "pmoc_reverse_setAnimationPath\0par\0"
    "setAnimationPath\0setPause\0setTimeMultiplier\0"
    "setTimeOffset\0setUseInverseMatrix\0"
    "Pause\0UseInverseMatrix\0TimeMultiplier\0"
    "TimeOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_AnimationPathCallback[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       4,  164, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    1,  122,    2, 0x06 /* Public */,
       5,    1,  125,    2, 0x06 /* Public */,
       6,    1,  128,    2, 0x06 /* Public */,
       7,    1,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  134,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,  135,    2, 0x02 /* Public */,
      10,    0,  136,    2, 0x02 /* Public */,
      12,    0,  137,    2, 0x02 /* Public */,
      13,    0,  138,    2, 0x02 /* Public */,
      14,    0,  139,    2, 0x02 /* Public */,
      15,    0,  140,    2, 0x02 /* Public */,
      16,    0,  141,    2, 0x02 /* Public */,
      17,    1,  142,    2, 0x02 /* Public */,
      19,    1,  145,    2, 0x02 /* Public */,
      19,    0,  148,    2, 0x22 /* Public | MethodCloned */,
      21,    1,  149,    2, 0x02 /* Public */,
      22,    1,  152,    2, 0x02 /* Public */,
      23,    1,  155,    2, 0x02 /* Public */,
      24,    1,  158,    2, 0x02 /* Public */,
      25,    1,  161,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Double,
    0x80000000 | 11,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void, 0x80000000 | 11,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   20,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00495103,
      27, QMetaType::Bool, 0x00495103,
      28, QMetaType::Double, 0x00495103,
      29, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       1,
       4,
       2,
       3,

       0        // eod
};

void osg::QReflect_AnimationPathCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_AnimationPathCallback *_t = static_cast<QReflect_AnimationPathCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AnimationPathChanged((*reinterpret_cast< const osg::QReflect_AnimationPath*(*)>(_a[1]))); break;
        case 1: _t->PauseChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->TimeMultiplierChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->TimeOffsetChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->UseInverseMatrixChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->updateModel(); break;
        case 6: { double _r = _t->getAnimationTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 7: { osg::QReflect_AnimationPath* _r = _t->getAnimationPath();
            if (_a[0]) *reinterpret_cast< osg::QReflect_AnimationPath**>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->getPause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->getUseInverseMatrix();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { double _r = _t->getTimeMultiplier();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 11: { double _r = _t->getTimeOffset();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 12: _t->reset(); break;
        case 13: _t->setPivotPoint((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1]))); break;
        case 14: _t->pmoc_reverse_setAnimationPath((*reinterpret_cast< osg::QReflect_AnimationPath*(*)>(_a[1]))); break;
        case 15: _t->pmoc_reverse_setAnimationPath(); break;
        case 16: _t->setAnimationPath((*reinterpret_cast< osg::QReflect_AnimationPath*(*)>(_a[1]))); break;
        case 17: _t->setPause((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->setTimeMultiplier((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 19: _t->setTimeOffset((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 20: _t->setUseInverseMatrix((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_AnimationPath* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_AnimationPath* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_AnimationPathCallback::*_t)(const osg::QReflect_AnimationPath * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AnimationPathCallback::AnimationPathChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_AnimationPathCallback::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AnimationPathCallback::PauseChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_AnimationPathCallback::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AnimationPathCallback::TimeMultiplierChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_AnimationPathCallback::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AnimationPathCallback::TimeOffsetChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QReflect_AnimationPathCallback::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_AnimationPathCallback::UseInverseMatrixChanged)) {
                *result = 4;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_AnimationPathCallback *_t = static_cast<QReflect_AnimationPathCallback *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getPause(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getUseInverseMatrix(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getTimeMultiplier(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getTimeOffset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_AnimationPathCallback *_t = static_cast<QReflect_AnimationPathCallback *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPause(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUseInverseMatrix(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTimeMultiplier(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setTimeOffset(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_AnimationPathCallback::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_AnimationPathCallback.data,
      qt_meta_data_osg__QReflect_AnimationPathCallback,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_AnimationPathCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_AnimationPathCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_AnimationPathCallback.stringdata0))
        return static_cast<void*>(const_cast< QReflect_AnimationPathCallback*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_AnimationPathCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_AnimationPathCallback::AnimationPathChanged(const osg::QReflect_AnimationPath * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_AnimationPathCallback::PauseChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_AnimationPathCallback::TimeMultiplierChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QReflect_AnimationPathCallback::TimeOffsetChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QReflect_AnimationPathCallback::UseInverseMatrixChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
