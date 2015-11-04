/****************************************************************************
** Meta object code from reading C++ file 'Particle_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Particle_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Particle_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osgParticle__QReflect_Particle_t {
    QByteArrayData data[88];
    char stringdata0[1382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osgParticle__QReflect_Particle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osgParticle__QReflect_Particle_t qt_meta_stringdata_osgParticle__QReflect_Particle = {
    {
QT_MOC_LITERAL(0, 0, 30), // "osgParticle::QReflect_Particle"
QT_MOC_LITERAL(1, 31, 24), // "AlphaInterpolatorChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 41), // "const osgParticle::QReflect_I..."
QT_MOC_LITERAL(4, 99, 24), // "ColorInterpolatorChanged"
QT_MOC_LITERAL(5, 124, 12), // "DepthChanged"
QT_MOC_LITERAL(6, 137, 15), // "DrawableChanged"
QT_MOC_LITERAL(7, 153, 29), // "const osg::QReflect_Drawable*"
QT_MOC_LITERAL(8, 183, 15), // "LifeTimeChanged"
QT_MOC_LITERAL(9, 199, 11), // "MassChanged"
QT_MOC_LITERAL(10, 211, 19), // "NextParticleChanged"
QT_MOC_LITERAL(11, 231, 23), // "PreviousParticleChanged"
QT_MOC_LITERAL(12, 255, 13), // "RadiusChanged"
QT_MOC_LITERAL(13, 269, 23), // "SizeInterpolatorChanged"
QT_MOC_LITERAL(14, 293, 11), // "updateModel"
QT_MOC_LITERAL(15, 305, 7), // "isAlive"
QT_MOC_LITERAL(16, 313, 6), // "update"
QT_MOC_LITERAL(17, 320, 6), // "getAge"
QT_MOC_LITERAL(18, 327, 15), // "getCurrentAlpha"
QT_MOC_LITERAL(19, 343, 14), // "getCurrentSize"
QT_MOC_LITERAL(20, 358, 10), // "getMassInv"
QT_MOC_LITERAL(21, 369, 12), // "getSTexCoord"
QT_MOC_LITERAL(22, 382, 12), // "getTTexCoord"
QT_MOC_LITERAL(23, 395, 10), // "getEndTile"
QT_MOC_LITERAL(24, 406, 11), // "getNumTiles"
QT_MOC_LITERAL(25, 418, 12), // "getStartTile"
QT_MOC_LITERAL(26, 431, 8), // "getTileS"
QT_MOC_LITERAL(27, 440, 8), // "getTileT"
QT_MOC_LITERAL(28, 449, 11), // "getDrawable"
QT_MOC_LITERAL(29, 461, 23), // "osg::QReflect_Drawable*"
QT_MOC_LITERAL(30, 485, 20), // "getAlphaInterpolator"
QT_MOC_LITERAL(31, 506, 35), // "osgParticle::QReflect_Interpo..."
QT_MOC_LITERAL(32, 542, 20), // "getColorInterpolator"
QT_MOC_LITERAL(33, 563, 19), // "getSizeInterpolator"
QT_MOC_LITERAL(34, 583, 8), // "getDepth"
QT_MOC_LITERAL(35, 592, 11), // "getLifeTime"
QT_MOC_LITERAL(36, 604, 7), // "getMass"
QT_MOC_LITERAL(37, 612, 9), // "getRadius"
QT_MOC_LITERAL(38, 622, 15), // "getNextParticle"
QT_MOC_LITERAL(39, 638, 19), // "getPreviousParticle"
QT_MOC_LITERAL(40, 658, 8), // "getShape"
QT_MOC_LITERAL(41, 667, 37), // "osgParticle::QReflect_Particl..."
QT_MOC_LITERAL(42, 705, 18), // "addAngularVelocity"
QT_MOC_LITERAL(43, 724, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(44, 745, 11), // "addVelocity"
QT_MOC_LITERAL(45, 757, 11), // "beginRender"
QT_MOC_LITERAL(46, 769, 32), // "osg::QReflect_GLBeginEndAdapter*"
QT_MOC_LITERAL(47, 802, 9), // "endRender"
QT_MOC_LITERAL(48, 812, 4), // "kill"
QT_MOC_LITERAL(49, 817, 6), // "render"
QT_MOC_LITERAL(50, 824, 8), // "setAngle"
QT_MOC_LITERAL(51, 833, 18), // "setAngularVelocity"
QT_MOC_LITERAL(52, 852, 11), // "setPosition"
QT_MOC_LITERAL(53, 864, 8), // "setShape"
QT_MOC_LITERAL(54, 873, 14), // "setTextureTile"
QT_MOC_LITERAL(55, 888, 19), // "setTextureTileRange"
QT_MOC_LITERAL(56, 908, 11), // "setVelocity"
QT_MOC_LITERAL(57, 920, 22), // "transformAngleVelocity"
QT_MOC_LITERAL(58, 943, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(59, 966, 25), // "transformPositionVelocity"
QT_MOC_LITERAL(60, 992, 33), // "pmoc_reverse_setAlphaInterpol..."
QT_MOC_LITERAL(61, 1026, 3), // "par"
QT_MOC_LITERAL(62, 1030, 33), // "pmoc_reverse_setColorInterpol..."
QT_MOC_LITERAL(63, 1064, 24), // "pmoc_reverse_setDrawable"
QT_MOC_LITERAL(64, 1089, 32), // "pmoc_reverse_setSizeInterpolator"
QT_MOC_LITERAL(65, 1122, 20), // "setAlphaInterpolator"
QT_MOC_LITERAL(66, 1143, 20), // "setColorInterpolator"
QT_MOC_LITERAL(67, 1164, 8), // "setDepth"
QT_MOC_LITERAL(68, 1173, 11), // "setDrawable"
QT_MOC_LITERAL(69, 1185, 11), // "setLifeTime"
QT_MOC_LITERAL(70, 1197, 7), // "setMass"
QT_MOC_LITERAL(71, 1205, 15), // "setNextParticle"
QT_MOC_LITERAL(72, 1221, 19), // "setPreviousParticle"
QT_MOC_LITERAL(73, 1241, 9), // "setRadius"
QT_MOC_LITERAL(74, 1251, 19), // "setSizeInterpolator"
QT_MOC_LITERAL(75, 1271, 5), // "Depth"
QT_MOC_LITERAL(76, 1277, 8), // "LifeTime"
QT_MOC_LITERAL(77, 1286, 4), // "Mass"
QT_MOC_LITERAL(78, 1291, 6), // "Radius"
QT_MOC_LITERAL(79, 1298, 12), // "NextParticle"
QT_MOC_LITERAL(80, 1311, 16), // "PreviousParticle"
QT_MOC_LITERAL(81, 1328, 5), // "Shape"
QT_MOC_LITERAL(82, 1334, 5), // "POINT"
QT_MOC_LITERAL(83, 1340, 4), // "QUAD"
QT_MOC_LITERAL(84, 1345, 18), // "QUAD_TRIANGLESTRIP"
QT_MOC_LITERAL(85, 1364, 7), // "HEXAGON"
QT_MOC_LITERAL(86, 1372, 4), // "LINE"
QT_MOC_LITERAL(87, 1377, 4) // "USER"

    },
    "osgParticle::QReflect_Particle\0"
    "AlphaInterpolatorChanged\0\0"
    "const osgParticle::QReflect_Interpolator*\0"
    "ColorInterpolatorChanged\0DepthChanged\0"
    "DrawableChanged\0const osg::QReflect_Drawable*\0"
    "LifeTimeChanged\0MassChanged\0"
    "NextParticleChanged\0PreviousParticleChanged\0"
    "RadiusChanged\0SizeInterpolatorChanged\0"
    "updateModel\0isAlive\0update\0getAge\0"
    "getCurrentAlpha\0getCurrentSize\0"
    "getMassInv\0getSTexCoord\0getTTexCoord\0"
    "getEndTile\0getNumTiles\0getStartTile\0"
    "getTileS\0getTileT\0getDrawable\0"
    "osg::QReflect_Drawable*\0getAlphaInterpolator\0"
    "osgParticle::QReflect_Interpolator*\0"
    "getColorInterpolator\0getSizeInterpolator\0"
    "getDepth\0getLifeTime\0getMass\0getRadius\0"
    "getNextParticle\0getPreviousParticle\0"
    "getShape\0osgParticle::QReflect_Particle::Shape\0"
    "addAngularVelocity\0osg::QReflect_Vec3f*\0"
    "addVelocity\0beginRender\0"
    "osg::QReflect_GLBeginEndAdapter*\0"
    "endRender\0kill\0render\0setAngle\0"
    "setAngularVelocity\0setPosition\0setShape\0"
    "setTextureTile\0setTextureTileRange\0"
    "setVelocity\0transformAngleVelocity\0"
    "osg::QReflect_Matrixd*\0transformPositionVelocity\0"
    "pmoc_reverse_setAlphaInterpolator\0par\0"
    "pmoc_reverse_setColorInterpolator\0"
    "pmoc_reverse_setDrawable\0"
    "pmoc_reverse_setSizeInterpolator\0"
    "setAlphaInterpolator\0setColorInterpolator\0"
    "setDepth\0setDrawable\0setLifeTime\0"
    "setMass\0setNextParticle\0setPreviousParticle\0"
    "setRadius\0setSizeInterpolator\0Depth\0"
    "LifeTime\0Mass\0Radius\0NextParticle\0"
    "PreviousParticle\0Shape\0POINT\0QUAD\0"
    "QUAD_TRIANGLESTRIP\0HEXAGON\0LINE\0USER"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osgParticle__QReflect_Particle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       6,  532, // properties
       1,  556, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  359,    2, 0x06 /* Public */,
       4,    1,  362,    2, 0x06 /* Public */,
       5,    1,  365,    2, 0x06 /* Public */,
       6,    1,  368,    2, 0x06 /* Public */,
       8,    1,  371,    2, 0x06 /* Public */,
       9,    1,  374,    2, 0x06 /* Public */,
      10,    1,  377,    2, 0x06 /* Public */,
      11,    1,  380,    2, 0x06 /* Public */,
      12,    1,  383,    2, 0x06 /* Public */,
      13,    1,  386,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  389,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    0,  390,    2, 0x02 /* Public */,
      16,    2,  391,    2, 0x02 /* Public */,
      17,    0,  396,    2, 0x02 /* Public */,
      18,    0,  397,    2, 0x02 /* Public */,
      19,    0,  398,    2, 0x02 /* Public */,
      20,    0,  399,    2, 0x02 /* Public */,
      21,    0,  400,    2, 0x02 /* Public */,
      22,    0,  401,    2, 0x02 /* Public */,
      23,    0,  402,    2, 0x02 /* Public */,
      24,    0,  403,    2, 0x02 /* Public */,
      25,    0,  404,    2, 0x02 /* Public */,
      26,    0,  405,    2, 0x02 /* Public */,
      27,    0,  406,    2, 0x02 /* Public */,
      28,    0,  407,    2, 0x02 /* Public */,
      30,    0,  408,    2, 0x02 /* Public */,
      32,    0,  409,    2, 0x02 /* Public */,
      33,    0,  410,    2, 0x02 /* Public */,
      34,    0,  411,    2, 0x02 /* Public */,
      35,    0,  412,    2, 0x02 /* Public */,
      36,    0,  413,    2, 0x02 /* Public */,
      37,    0,  414,    2, 0x02 /* Public */,
      38,    0,  415,    2, 0x02 /* Public */,
      39,    0,  416,    2, 0x02 /* Public */,
      40,    0,  417,    2, 0x02 /* Public */,
      42,    1,  418,    2, 0x02 /* Public */,
      44,    1,  421,    2, 0x02 /* Public */,
      45,    1,  424,    2, 0x02 /* Public */,
      47,    1,  427,    2, 0x02 /* Public */,
      48,    0,  430,    2, 0x02 /* Public */,
      49,    5,  431,    2, 0x02 /* Public */,
      50,    1,  442,    2, 0x02 /* Public */,
      51,    1,  445,    2, 0x02 /* Public */,
      52,    1,  448,    2, 0x02 /* Public */,
      53,    1,  451,    2, 0x02 /* Public */,
      54,    3,  454,    2, 0x02 /* Public */,
      55,    4,  461,    2, 0x02 /* Public */,
      56,    1,  470,    2, 0x02 /* Public */,
      57,    1,  473,    2, 0x02 /* Public */,
      59,    3,  476,    2, 0x02 /* Public */,
      59,    1,  483,    2, 0x02 /* Public */,
      60,    1,  486,    2, 0x02 /* Public */,
      60,    0,  489,    2, 0x22 /* Public | MethodCloned */,
      62,    1,  490,    2, 0x02 /* Public */,
      62,    0,  493,    2, 0x22 /* Public | MethodCloned */,
      63,    1,  494,    2, 0x02 /* Public */,
      63,    0,  497,    2, 0x22 /* Public | MethodCloned */,
      64,    1,  498,    2, 0x02 /* Public */,
      64,    0,  501,    2, 0x22 /* Public | MethodCloned */,
      65,    1,  502,    2, 0x02 /* Public */,
      66,    1,  505,    2, 0x02 /* Public */,
      67,    1,  508,    2, 0x02 /* Public */,
      68,    1,  511,    2, 0x02 /* Public */,
      69,    1,  514,    2, 0x02 /* Public */,
      70,    1,  517,    2, 0x02 /* Public */,
      71,    1,  520,    2, 0x02 /* Public */,
      72,    1,  523,    2, 0x02 /* Public */,
      73,    1,  526,    2, 0x02 /* Public */,
      74,    1,  529,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Double, QMetaType::Bool,    2,    2,
    QMetaType::Double,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 29,
    0x80000000 | 31,
    0x80000000 | 31,
    0x80000000 | 31,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Int,
    0x80000000 | 41,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 46,    2,
    QMetaType::Void, 0x80000000 | 46,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46, 0x80000000 | 43, 0x80000000 | 43, 0x80000000 | 43, QMetaType::Float,    2,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 41,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 58,    2,
    QMetaType::Void, 0x80000000 | 58, 0x80000000 | 58, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 58,    2,
    QMetaType::Void, 0x80000000 | 31,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   61,
    QMetaType::Void, 0x80000000 | 31,   61,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 29,   61,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, 0x80000000 | 31,   61,

 // properties: name, type, flags
      75, QMetaType::Double, 0x00495103,
      76, QMetaType::Double, 0x00495103,
      77, QMetaType::Float, 0x00495103,
      78, QMetaType::Float, 0x00495103,
      79, QMetaType::Int, 0x00495103,
      80, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       2,
       4,
       5,
       8,
       6,
       7,

 // enums: name, flags, count, data
      81, 0x0,    6,  560,

 // enum data: key, value
      82, uint(osgParticle::QReflect_Particle::POINT),
      83, uint(osgParticle::QReflect_Particle::QUAD),
      84, uint(osgParticle::QReflect_Particle::QUAD_TRIANGLESTRIP),
      85, uint(osgParticle::QReflect_Particle::HEXAGON),
      86, uint(osgParticle::QReflect_Particle::LINE),
      87, uint(osgParticle::QReflect_Particle::USER),

       0        // eod
};

void osgParticle::QReflect_Particle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Particle *_t = static_cast<QReflect_Particle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AlphaInterpolatorChanged((*reinterpret_cast< const osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 1: _t->ColorInterpolatorChanged((*reinterpret_cast< const osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 2: _t->DepthChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->DrawableChanged((*reinterpret_cast< const osg::QReflect_Drawable*(*)>(_a[1]))); break;
        case 4: _t->LifeTimeChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->MassChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 6: _t->NextParticleChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->PreviousParticleChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 8: _t->RadiusChanged((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 9: _t->SizeInterpolatorChanged((*reinterpret_cast< const osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 10: _t->updateModel(); break;
        case 11: { bool _r = _t->isAlive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->update((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { double _r = _t->getAge();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 14: { float _r = _t->getCurrentAlpha();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 15: { float _r = _t->getCurrentSize();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 16: { float _r = _t->getMassInv();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 17: { float _r = _t->getSTexCoord();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 18: { float _r = _t->getTTexCoord();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->getEndTile();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->getNumTiles();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->getStartTile();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->getTileS();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->getTileT();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { osg::QReflect_Drawable* _r = _t->getDrawable();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Drawable**>(_a[0]) = _r; }  break;
        case 25: { osgParticle::QReflect_Interpolator* _r = _t->getAlphaInterpolator();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Interpolator**>(_a[0]) = _r; }  break;
        case 26: { osgParticle::QReflect_Interpolator* _r = _t->getColorInterpolator();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Interpolator**>(_a[0]) = _r; }  break;
        case 27: { osgParticle::QReflect_Interpolator* _r = _t->getSizeInterpolator();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Interpolator**>(_a[0]) = _r; }  break;
        case 28: { double _r = _t->getDepth();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 29: { double _r = _t->getLifeTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 30: { float _r = _t->getMass();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 31: { float _r = _t->getRadius();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->getNextParticle();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->getPreviousParticle();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { osgParticle::QReflect_Particle::Shape _r = _t->getShape();
            if (_a[0]) *reinterpret_cast< osgParticle::QReflect_Particle::Shape*>(_a[0]) = _r; }  break;
        case 35: _t->addAngularVelocity((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 36: _t->addVelocity((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 37: _t->beginRender((*reinterpret_cast< osg::QReflect_GLBeginEndAdapter*(*)>(_a[1]))); break;
        case 38: _t->endRender((*reinterpret_cast< osg::QReflect_GLBeginEndAdapter*(*)>(_a[1]))); break;
        case 39: _t->kill(); break;
        case 40: _t->render((*reinterpret_cast< osg::QReflect_GLBeginEndAdapter*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[3])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 41: _t->setAngle((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 42: _t->setAngularVelocity((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 43: _t->setPosition((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 44: _t->setShape((*reinterpret_cast< osgParticle::QReflect_Particle::Shape(*)>(_a[1]))); break;
        case 45: _t->setTextureTile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 46: _t->setTextureTileRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 47: _t->setVelocity((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1]))); break;
        case 48: _t->transformAngleVelocity((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 49: _t->transformPositionVelocity((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 50: _t->transformPositionVelocity((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 51: _t->pmoc_reverse_setAlphaInterpolator((*reinterpret_cast< osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 52: _t->pmoc_reverse_setAlphaInterpolator(); break;
        case 53: _t->pmoc_reverse_setColorInterpolator((*reinterpret_cast< osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 54: _t->pmoc_reverse_setColorInterpolator(); break;
        case 55: _t->pmoc_reverse_setDrawable((*reinterpret_cast< osg::QReflect_Drawable*(*)>(_a[1]))); break;
        case 56: _t->pmoc_reverse_setDrawable(); break;
        case 57: _t->pmoc_reverse_setSizeInterpolator((*reinterpret_cast< osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 58: _t->pmoc_reverse_setSizeInterpolator(); break;
        case 59: _t->setAlphaInterpolator((*reinterpret_cast< osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 60: _t->setColorInterpolator((*reinterpret_cast< osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        case 61: _t->setDepth((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 62: _t->setDrawable((*reinterpret_cast< osg::QReflect_Drawable*(*)>(_a[1]))); break;
        case 63: _t->setLifeTime((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 64: _t->setMass((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 65: _t->setNextParticle((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 66: _t->setPreviousParticle((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 67: _t->setRadius((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 68: _t->setSizeInterpolator((*reinterpret_cast< osgParticle::QReflect_Interpolator*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Particle::*_t)(const osgParticle::QReflect_Interpolator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::AlphaInterpolatorChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const osgParticle::QReflect_Interpolator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::ColorInterpolatorChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::DepthChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const osg::QReflect_Drawable * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::DrawableChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::LifeTimeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::MassChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::NextParticleChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::PreviousParticleChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const float & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::RadiusChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QReflect_Particle::*_t)(const osgParticle::QReflect_Interpolator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Particle::SizeInterpolatorChanged)) {
                *result = 9;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Particle *_t = static_cast<QReflect_Particle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getDepth(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getLifeTime(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getMass(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getRadius(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getNextParticle(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getPreviousParticle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Particle *_t = static_cast<QReflect_Particle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDepth(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setLifeTime(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMass(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setRadius(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setNextParticle(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPreviousParticle(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osgParticle::QReflect_Particle::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osgParticle__QReflect_Particle.data,
      qt_meta_data_osgParticle__QReflect_Particle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osgParticle::QReflect_Particle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osgParticle::QReflect_Particle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osgParticle__QReflect_Particle.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Particle*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osgParticle::QReflect_Particle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 69;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osgParticle::QReflect_Particle::AlphaInterpolatorChanged(const osgParticle::QReflect_Interpolator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osgParticle::QReflect_Particle::ColorInterpolatorChanged(const osgParticle::QReflect_Interpolator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osgParticle::QReflect_Particle::DepthChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osgParticle::QReflect_Particle::DrawableChanged(const osg::QReflect_Drawable * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osgParticle::QReflect_Particle::LifeTimeChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void osgParticle::QReflect_Particle::MassChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void osgParticle::QReflect_Particle::NextParticleChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void osgParticle::QReflect_Particle::PreviousParticleChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void osgParticle::QReflect_Particle::RadiusChanged(const float & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void osgParticle::QReflect_Particle::SizeInterpolatorChanged(const osgParticle::QReflect_Interpolator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
