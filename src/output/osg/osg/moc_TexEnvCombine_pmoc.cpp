/****************************************************************************
** Meta object code from reading C++ file 'TexEnvCombine_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "TexEnvCombine_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexEnvCombine_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_TexEnvCombine_t {
    QByteArrayData data[74];
    char stringdata0[1052];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_TexEnvCombine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_TexEnvCombine_t qt_meta_stringdata_osg__QReflect_TexEnvCombine = {
    {
QT_MOC_LITERAL(0, 0, 27), // "osg::QReflect_TexEnvCombine"
QT_MOC_LITERAL(1, 28, 18), // "Scale_AlphaChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "Scale_RGBChanged"
QT_MOC_LITERAL(4, 65, 11), // "updateModel"
QT_MOC_LITERAL(5, 77, 16), // "getCombine_Alpha"
QT_MOC_LITERAL(6, 94, 5), // "GLint"
QT_MOC_LITERAL(7, 100, 14), // "getCombine_RGB"
QT_MOC_LITERAL(8, 115, 17), // "getOperand0_Alpha"
QT_MOC_LITERAL(9, 133, 15), // "getOperand0_RGB"
QT_MOC_LITERAL(10, 149, 17), // "getOperand1_Alpha"
QT_MOC_LITERAL(11, 167, 15), // "getOperand1_RGB"
QT_MOC_LITERAL(12, 183, 17), // "getOperand2_Alpha"
QT_MOC_LITERAL(13, 201, 15), // "getOperand2_RGB"
QT_MOC_LITERAL(14, 217, 16), // "getSource0_Alpha"
QT_MOC_LITERAL(15, 234, 14), // "getSource0_RGB"
QT_MOC_LITERAL(16, 249, 16), // "getSource1_Alpha"
QT_MOC_LITERAL(17, 266, 14), // "getSource1_RGB"
QT_MOC_LITERAL(18, 281, 16), // "getSource2_Alpha"
QT_MOC_LITERAL(19, 298, 14), // "getSource2_RGB"
QT_MOC_LITERAL(20, 313, 18), // "isTextureAttribute"
QT_MOC_LITERAL(21, 332, 7), // "compare"
QT_MOC_LITERAL(22, 340, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(23, 370, 14), // "getScale_Alpha"
QT_MOC_LITERAL(24, 385, 12), // "getScale_RGB"
QT_MOC_LITERAL(25, 398, 16), // "setCombine_Alpha"
QT_MOC_LITERAL(26, 415, 14), // "setCombine_RGB"
QT_MOC_LITERAL(27, 430, 16), // "setConstantColor"
QT_MOC_LITERAL(28, 447, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(29, 468, 32), // "setConstantColorAsLightDirection"
QT_MOC_LITERAL(30, 501, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(31, 522, 17), // "setOperand0_Alpha"
QT_MOC_LITERAL(32, 540, 15), // "setOperand0_RGB"
QT_MOC_LITERAL(33, 556, 17), // "setOperand1_Alpha"
QT_MOC_LITERAL(34, 574, 15), // "setOperand1_RGB"
QT_MOC_LITERAL(35, 590, 17), // "setOperand2_Alpha"
QT_MOC_LITERAL(36, 608, 15), // "setOperand2_RGB"
QT_MOC_LITERAL(37, 624, 16), // "setSource0_Alpha"
QT_MOC_LITERAL(38, 641, 14), // "setSource0_RGB"
QT_MOC_LITERAL(39, 656, 16), // "setSource1_Alpha"
QT_MOC_LITERAL(40, 673, 14), // "setSource1_RGB"
QT_MOC_LITERAL(41, 688, 16), // "setSource2_Alpha"
QT_MOC_LITERAL(42, 705, 14), // "setSource2_RGB"
QT_MOC_LITERAL(43, 720, 14), // "setScale_Alpha"
QT_MOC_LITERAL(44, 735, 12), // "setScale_RGB"
QT_MOC_LITERAL(45, 748, 11), // "Scale_Alpha"
QT_MOC_LITERAL(46, 760, 9), // "Scale_RGB"
QT_MOC_LITERAL(47, 770, 12), // "CombineParam"
QT_MOC_LITERAL(48, 783, 7), // "REPLACE"
QT_MOC_LITERAL(49, 791, 8), // "MODULATE"
QT_MOC_LITERAL(50, 800, 3), // "ADD"
QT_MOC_LITERAL(51, 804, 10), // "ADD_SIGNED"
QT_MOC_LITERAL(52, 815, 11), // "INTERPOLATE"
QT_MOC_LITERAL(53, 827, 8), // "SUBTRACT"
QT_MOC_LITERAL(54, 836, 8), // "DOT3_RGB"
QT_MOC_LITERAL(55, 845, 9), // "DOT3_RGBA"
QT_MOC_LITERAL(56, 855, 12), // "OperandParam"
QT_MOC_LITERAL(57, 868, 9), // "SRC_COLOR"
QT_MOC_LITERAL(58, 878, 19), // "ONE_MINUS_SRC_COLOR"
QT_MOC_LITERAL(59, 898, 9), // "SRC_ALPHA"
QT_MOC_LITERAL(60, 908, 19), // "ONE_MINUS_SRC_ALPHA"
QT_MOC_LITERAL(61, 928, 11), // "SourceParam"
QT_MOC_LITERAL(62, 940, 8), // "CONSTANT"
QT_MOC_LITERAL(63, 949, 13), // "PRIMARY_COLOR"
QT_MOC_LITERAL(64, 963, 8), // "PREVIOUS"
QT_MOC_LITERAL(65, 972, 7), // "TEXTURE"
QT_MOC_LITERAL(66, 980, 8), // "TEXTURE0"
QT_MOC_LITERAL(67, 989, 8), // "TEXTURE1"
QT_MOC_LITERAL(68, 998, 8), // "TEXTURE2"
QT_MOC_LITERAL(69, 1007, 8), // "TEXTURE3"
QT_MOC_LITERAL(70, 1016, 8), // "TEXTURE4"
QT_MOC_LITERAL(71, 1025, 8), // "TEXTURE5"
QT_MOC_LITERAL(72, 1034, 8), // "TEXTURE6"
QT_MOC_LITERAL(73, 1043, 8) // "TEXTURE7"

    },
    "osg::QReflect_TexEnvCombine\0"
    "Scale_AlphaChanged\0\0Scale_RGBChanged\0"
    "updateModel\0getCombine_Alpha\0GLint\0"
    "getCombine_RGB\0getOperand0_Alpha\0"
    "getOperand0_RGB\0getOperand1_Alpha\0"
    "getOperand1_RGB\0getOperand2_Alpha\0"
    "getOperand2_RGB\0getSource0_Alpha\0"
    "getSource0_RGB\0getSource1_Alpha\0"
    "getSource1_RGB\0getSource2_Alpha\0"
    "getSource2_RGB\0isTextureAttribute\0"
    "compare\0osg::QReflect_StateAttribute*\0"
    "getScale_Alpha\0getScale_RGB\0"
    "setCombine_Alpha\0setCombine_RGB\0"
    "setConstantColor\0osg::QReflect_Vec4f*\0"
    "setConstantColorAsLightDirection\0"
    "osg::QReflect_Vec3f*\0setOperand0_Alpha\0"
    "setOperand0_RGB\0setOperand1_Alpha\0"
    "setOperand1_RGB\0setOperand2_Alpha\0"
    "setOperand2_RGB\0setSource0_Alpha\0"
    "setSource0_RGB\0setSource1_Alpha\0"
    "setSource1_RGB\0setSource2_Alpha\0"
    "setSource2_RGB\0setScale_Alpha\0"
    "setScale_RGB\0Scale_Alpha\0Scale_RGB\0"
    "CombineParam\0REPLACE\0MODULATE\0ADD\0"
    "ADD_SIGNED\0INTERPOLATE\0SUBTRACT\0"
    "DOT3_RGB\0DOT3_RGBA\0OperandParam\0"
    "SRC_COLOR\0ONE_MINUS_SRC_COLOR\0SRC_ALPHA\0"
    "ONE_MINUS_SRC_ALPHA\0SourceParam\0"
    "CONSTANT\0PRIMARY_COLOR\0PREVIOUS\0TEXTURE\0"
    "TEXTURE0\0TEXTURE1\0TEXTURE2\0TEXTURE3\0"
    "TEXTURE4\0TEXTURE5\0TEXTURE6\0TEXTURE7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_TexEnvCombine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       2,  290, // properties
       3,  298, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       3,    1,  212,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  215,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,  216,    2, 0x02 /* Public */,
       7,    0,  217,    2, 0x02 /* Public */,
       8,    0,  218,    2, 0x02 /* Public */,
       9,    0,  219,    2, 0x02 /* Public */,
      10,    0,  220,    2, 0x02 /* Public */,
      11,    0,  221,    2, 0x02 /* Public */,
      12,    0,  222,    2, 0x02 /* Public */,
      13,    0,  223,    2, 0x02 /* Public */,
      14,    0,  224,    2, 0x02 /* Public */,
      15,    0,  225,    2, 0x02 /* Public */,
      16,    0,  226,    2, 0x02 /* Public */,
      17,    0,  227,    2, 0x02 /* Public */,
      18,    0,  228,    2, 0x02 /* Public */,
      19,    0,  229,    2, 0x02 /* Public */,
      20,    0,  230,    2, 0x02 /* Public */,
      21,    1,  231,    2, 0x02 /* Public */,
      23,    0,  234,    2, 0x02 /* Public */,
      24,    0,  235,    2, 0x02 /* Public */,
      25,    1,  236,    2, 0x02 /* Public */,
      26,    1,  239,    2, 0x02 /* Public */,
      27,    1,  242,    2, 0x02 /* Public */,
      29,    1,  245,    2, 0x02 /* Public */,
      31,    1,  248,    2, 0x02 /* Public */,
      32,    1,  251,    2, 0x02 /* Public */,
      33,    1,  254,    2, 0x02 /* Public */,
      34,    1,  257,    2, 0x02 /* Public */,
      35,    1,  260,    2, 0x02 /* Public */,
      36,    1,  263,    2, 0x02 /* Public */,
      37,    1,  266,    2, 0x02 /* Public */,
      38,    1,  269,    2, 0x02 /* Public */,
      39,    1,  272,    2, 0x02 /* Public */,
      40,    1,  275,    2, 0x02 /* Public */,
      41,    1,  278,    2, 0x02 /* Public */,
      42,    1,  281,    2, 0x02 /* Public */,
      43,    1,  284,    2, 0x02 /* Public */,
      44,    1,  287,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 22,    2,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // properties: name, type, flags
      45, QMetaType::Float, 0x00495103,
      46, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      47, 0x0,    8,  310,
      56, 0x0,    4,  326,
      61, 0x0,   12,  334,

 // enum data: key, value
      48, uint(osg::QReflect_TexEnvCombine::REPLACE),
      49, uint(osg::QReflect_TexEnvCombine::MODULATE),
      50, uint(osg::QReflect_TexEnvCombine::ADD),
      51, uint(osg::QReflect_TexEnvCombine::ADD_SIGNED),
      52, uint(osg::QReflect_TexEnvCombine::INTERPOLATE),
      53, uint(osg::QReflect_TexEnvCombine::SUBTRACT),
      54, uint(osg::QReflect_TexEnvCombine::DOT3_RGB),
      55, uint(osg::QReflect_TexEnvCombine::DOT3_RGBA),
      57, uint(osg::QReflect_TexEnvCombine::SRC_COLOR),
      58, uint(osg::QReflect_TexEnvCombine::ONE_MINUS_SRC_COLOR),
      59, uint(osg::QReflect_TexEnvCombine::SRC_ALPHA),
      60, uint(osg::QReflect_TexEnvCombine::ONE_MINUS_SRC_ALPHA),
      62, uint(osg::QReflect_TexEnvCombine::CONSTANT),
      63, uint(osg::QReflect_TexEnvCombine::PRIMARY_COLOR),
      64, uint(osg::QReflect_TexEnvCombine::PREVIOUS),
      65, uint(osg::QReflect_TexEnvCombine::TEXTURE),
      66, uint(osg::QReflect_TexEnvCombine::TEXTURE0),
      67, uint(osg::QReflect_TexEnvCombine::TEXTURE1),
      68, uint(osg::QReflect_TexEnvCombine::TEXTURE2),
      69, uint(osg::QReflect_TexEnvCombine::TEXTURE3),
      70, uint(osg::QReflect_TexEnvCombine::TEXTURE4),
      71, uint(osg::QReflect_TexEnvCombine::TEXTURE5),
      72, uint(osg::QReflect_TexEnvCombine::TEXTURE6),
      73, uint(osg::QReflect_TexEnvCombine::TEXTURE7),

       0        // eod
};

void osg::QReflect_TexEnvCombine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_TexEnvCombine *_t = static_cast<QReflect_TexEnvCombine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Scale_AlphaChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 1: _t->Scale_RGBChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 2: _t->updateModel(); break;
        case 3: { GLint _r = _t->getCombine_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 4: { GLint _r = _t->getCombine_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 5: { GLint _r = _t->getOperand0_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 6: { GLint _r = _t->getOperand0_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 7: { GLint _r = _t->getOperand1_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 8: { GLint _r = _t->getOperand1_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 9: { GLint _r = _t->getOperand2_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 10: { GLint _r = _t->getOperand2_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 11: { GLint _r = _t->getSource0_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 12: { GLint _r = _t->getSource0_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 13: { GLint _r = _t->getSource1_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 14: { GLint _r = _t->getSource1_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 15: { GLint _r = _t->getSource2_Alpha();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 16: { GLint _r = _t->getSource2_RGB();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isTextureAttribute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->compare((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { float _r = _t->getScale_Alpha();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 20: { float _r = _t->getScale_RGB();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 21: _t->setCombine_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 22: _t->setCombine_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 23: _t->setConstantColor((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 24: _t->setConstantColorAsLightDirection((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 25: _t->setOperand0_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 26: _t->setOperand0_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 27: _t->setOperand1_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 28: _t->setOperand1_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 29: _t->setOperand2_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 30: _t->setOperand2_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 31: _t->setSource0_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 32: _t->setSource0_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 33: _t->setSource1_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 34: _t->setSource1_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 35: _t->setSource2_Alpha((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 36: _t->setSource2_RGB((*reinterpret_cast< GLint(*)>(_a[1]))); break;
        case 37: _t->setScale_Alpha((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 38: _t->setScale_RGB((*reinterpret_cast< const float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_TexEnvCombine::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_TexEnvCombine::Scale_AlphaChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_TexEnvCombine::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_TexEnvCombine::Scale_RGBChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_TexEnvCombine *_t = static_cast<QReflect_TexEnvCombine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getScale_Alpha(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getScale_RGB(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_TexEnvCombine *_t = static_cast<QReflect_TexEnvCombine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScale_Alpha(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setScale_RGB(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_TexEnvCombine::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_TexEnvCombine.data,
      qt_meta_data_osg__QReflect_TexEnvCombine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_TexEnvCombine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_TexEnvCombine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_TexEnvCombine.stringdata0))
        return static_cast<void*>(const_cast< QReflect_TexEnvCombine*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_TexEnvCombine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
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
void osg::QReflect_TexEnvCombine::Scale_AlphaChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_TexEnvCombine::Scale_RGBChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
