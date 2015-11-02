/****************************************************************************
** Meta object code from reading C++ file 'CoordinateSystemNode_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CoordinateSystemNode_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoordinateSystemNode_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_EllipsoidModel_t {
    QByteArrayData data[19];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_EllipsoidModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_EllipsoidModel_t qt_meta_stringdata_osg__QReflect_EllipsoidModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "osg::QReflect_EllipsoidModel"
QT_MOC_LITERAL(1, 29, 20), // "RadiusEquatorChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 18), // "RadiusPolarChanged"
QT_MOC_LITERAL(4, 70, 11), // "updateModel"
QT_MOC_LITERAL(5, 82, 7), // "isWGS84"
QT_MOC_LITERAL(6, 90, 16), // "getRadiusEquator"
QT_MOC_LITERAL(7, 107, 14), // "getRadiusPolar"
QT_MOC_LITERAL(8, 122, 22), // "computeCoordinateFrame"
QT_MOC_LITERAL(9, 145, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(10, 168, 45), // "computeLocalToWorldTransformF..."
QT_MOC_LITERAL(11, 214, 35), // "computeLocalToWorldTransformF..."
QT_MOC_LITERAL(12, 250, 25), // "convertLatLongHeightToXYZ"
QT_MOC_LITERAL(13, 276, 7), // "double&"
QT_MOC_LITERAL(14, 284, 25), // "convertXYZToLatLongHeight"
QT_MOC_LITERAL(15, 310, 16), // "setRadiusEquator"
QT_MOC_LITERAL(16, 327, 14), // "setRadiusPolar"
QT_MOC_LITERAL(17, 342, 13), // "RadiusEquator"
QT_MOC_LITERAL(18, 356, 11) // "RadiusPolar"

    },
    "osg::QReflect_EllipsoidModel\0"
    "RadiusEquatorChanged\0\0RadiusPolarChanged\0"
    "updateModel\0isWGS84\0getRadiusEquator\0"
    "getRadiusPolar\0computeCoordinateFrame\0"
    "osg::QReflect_Matrixd*\0"
    "computeLocalToWorldTransformFromLatLongHeight\0"
    "computeLocalToWorldTransformFromXYZ\0"
    "convertLatLongHeightToXYZ\0double&\0"
    "convertXYZToLatLongHeight\0setRadiusEquator\0"
    "setRadiusPolar\0RadiusEquator\0RadiusPolar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_EllipsoidModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  146, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   85,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   86,    2, 0x02 /* Public */,
       6,    0,   87,    2, 0x02 /* Public */,
       7,    0,   88,    2, 0x02 /* Public */,
       8,    3,   89,    2, 0x02 /* Public */,
      10,    4,   96,    2, 0x02 /* Public */,
      11,    4,  105,    2, 0x02 /* Public */,
      12,    6,  114,    2, 0x02 /* Public */,
      14,    6,  127,    2, 0x02 /* Public */,
      15,    1,  140,    2, 0x02 /* Public */,
      16,    1,  143,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 9,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 9,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 9,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
      17, QMetaType::Double, 0x00495103,
      18, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void osg::QReflect_EllipsoidModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_EllipsoidModel *_t = static_cast<QReflect_EllipsoidModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RadiusEquatorChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->RadiusPolarChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { bool _r = _t->isWGS84();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { double _r = _t->getRadiusEquator();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 5: { double _r = _t->getRadiusPolar();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 6: _t->computeCoordinateFrame((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[3]))); break;
        case 7: _t->computeLocalToWorldTransformFromLatLongHeight((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[4]))); break;
        case 8: _t->computeLocalToWorldTransformFromXYZ((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[4]))); break;
        case 9: _t->convertLatLongHeightToXYZ((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 10: _t->convertXYZToLatLongHeight((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 11: _t->setRadiusEquator((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 12: _t->setRadiusPolar((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_EllipsoidModel::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_EllipsoidModel::RadiusEquatorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_EllipsoidModel::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_EllipsoidModel::RadiusPolarChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_EllipsoidModel *_t = static_cast<QReflect_EllipsoidModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getRadiusEquator(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getRadiusPolar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_EllipsoidModel *_t = static_cast<QReflect_EllipsoidModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRadiusEquator(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setRadiusPolar(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_EllipsoidModel::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_EllipsoidModel.data,
      qt_meta_data_osg__QReflect_EllipsoidModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_EllipsoidModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_EllipsoidModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_EllipsoidModel.stringdata0))
        return static_cast<void*>(const_cast< QReflect_EllipsoidModel*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_EllipsoidModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void osg::QReflect_EllipsoidModel::RadiusEquatorChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_EllipsoidModel::RadiusPolarChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_osg__QReflect_CoordinateSystemNode_t {
    QByteArrayData data[20];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_CoordinateSystemNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_CoordinateSystemNode_t qt_meta_stringdata_osg__QReflect_CoordinateSystemNode = {
    {
QT_MOC_LITERAL(0, 0, 34), // "osg::QReflect_CoordinateSyste..."
QT_MOC_LITERAL(1, 35, 23), // "CoordinateSystemChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 21), // "EllipsoidModelChanged"
QT_MOC_LITERAL(4, 82, 35), // "const osg::QReflect_Ellipsoid..."
QT_MOC_LITERAL(5, 118, 13), // "FormatChanged"
QT_MOC_LITERAL(6, 132, 11), // "updateModel"
QT_MOC_LITERAL(7, 144, 17), // "getEllipsoidModel"
QT_MOC_LITERAL(8, 162, 29), // "osg::QReflect_EllipsoidModel*"
QT_MOC_LITERAL(9, 192, 19), // "getCoordinateSystem"
QT_MOC_LITERAL(10, 212, 9), // "getFormat"
QT_MOC_LITERAL(11, 222, 3), // "set"
QT_MOC_LITERAL(12, 226, 35), // "osg::QReflect_CoordinateSyste..."
QT_MOC_LITERAL(13, 262, 30), // "pmoc_reverse_setEllipsoidModel"
QT_MOC_LITERAL(14, 293, 3), // "par"
QT_MOC_LITERAL(15, 297, 19), // "setCoordinateSystem"
QT_MOC_LITERAL(16, 317, 17), // "setEllipsoidModel"
QT_MOC_LITERAL(17, 335, 9), // "setFormat"
QT_MOC_LITERAL(18, 345, 16), // "CoordinateSystem"
QT_MOC_LITERAL(19, 362, 6) // "Format"

    },
    "osg::QReflect_CoordinateSystemNode\0"
    "CoordinateSystemChanged\0\0EllipsoidModelChanged\0"
    "const osg::QReflect_EllipsoidModel*\0"
    "FormatChanged\0updateModel\0getEllipsoidModel\0"
    "osg::QReflect_EllipsoidModel*\0"
    "getCoordinateSystem\0getFormat\0set\0"
    "osg::QReflect_CoordinateSystemNode*\0"
    "pmoc_reverse_setEllipsoidModel\0par\0"
    "setCoordinateSystem\0setEllipsoidModel\0"
    "setFormat\0CoordinateSystem\0Format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_CoordinateSystemNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   88,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   89,    2, 0x02 /* Public */,
       9,    0,   90,    2, 0x02 /* Public */,
      10,    0,   91,    2, 0x02 /* Public */,
      11,    1,   92,    2, 0x02 /* Public */,
      13,    1,   95,    2, 0x02 /* Public */,
      13,    0,   98,    2, 0x22 /* Public | MethodCloned */,
      15,    1,   99,    2, 0x02 /* Public */,
      16,    1,  102,    2, 0x02 /* Public */,
      17,    1,  105,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 8,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 8,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8,   14,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       2,

       0        // eod
};

void osg::QReflect_CoordinateSystemNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CoordinateSystemNode *_t = static_cast<QReflect_CoordinateSystemNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CoordinateSystemChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->EllipsoidModelChanged((*reinterpret_cast< const osg::QReflect_EllipsoidModel*(*)>(_a[1]))); break;
        case 2: _t->FormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateModel(); break;
        case 4: { osg::QReflect_EllipsoidModel* _r = _t->getEllipsoidModel();
            if (_a[0]) *reinterpret_cast< osg::QReflect_EllipsoidModel**>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->getCoordinateSystem();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->getFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->set((*reinterpret_cast< osg::QReflect_CoordinateSystemNode*(*)>(_a[1]))); break;
        case 8: _t->pmoc_reverse_setEllipsoidModel((*reinterpret_cast< osg::QReflect_EllipsoidModel*(*)>(_a[1]))); break;
        case 9: _t->pmoc_reverse_setEllipsoidModel(); break;
        case 10: _t->setCoordinateSystem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setEllipsoidModel((*reinterpret_cast< osg::QReflect_EllipsoidModel*(*)>(_a[1]))); break;
        case 12: _t->setFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_CoordinateSystemNode* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_EllipsoidModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_EllipsoidModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_CoordinateSystemNode::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_CoordinateSystemNode::CoordinateSystemChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_CoordinateSystemNode::*_t)(const osg::QReflect_EllipsoidModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_CoordinateSystemNode::EllipsoidModelChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_CoordinateSystemNode::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_CoordinateSystemNode::FormatChanged)) {
                *result = 2;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_CoordinateSystemNode *_t = static_cast<QReflect_CoordinateSystemNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getCoordinateSystem(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getFormat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_CoordinateSystemNode *_t = static_cast<QReflect_CoordinateSystemNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCoordinateSystem(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFormat(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_CoordinateSystemNode::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_CoordinateSystemNode.data,
      qt_meta_data_osg__QReflect_CoordinateSystemNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_CoordinateSystemNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_CoordinateSystemNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_CoordinateSystemNode.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CoordinateSystemNode*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_CoordinateSystemNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
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
void osg::QReflect_CoordinateSystemNode::CoordinateSystemChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_CoordinateSystemNode::EllipsoidModelChanged(const osg::QReflect_EllipsoidModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_CoordinateSystemNode::FormatChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
