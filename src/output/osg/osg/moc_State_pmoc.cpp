/****************************************************************************
** Meta object code from reading C++ file 'State_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "State_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'State_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_VertexAttribAlias_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_VertexAttribAlias_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_VertexAttribAlias_t qt_meta_stringdata_osg__QReflect_VertexAttribAlias = {
    {
QT_MOC_LITERAL(0, 0, 31), // "osg::QReflect_VertexAttribAlias"
QT_MOC_LITERAL(1, 32, 11), // "updateModel"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "osg::QReflect_VertexAttribAlias\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_VertexAttribAlias[] = {

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

void osg::QReflect_VertexAttribAlias::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_VertexAttribAlias *_t = static_cast<QReflect_VertexAttribAlias *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_VertexAttribAlias::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_VertexAttribAlias.data,
      qt_meta_data_osg__QReflect_VertexAttribAlias,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_VertexAttribAlias::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_VertexAttribAlias::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_VertexAttribAlias.stringdata0))
        return static_cast<void*>(const_cast< QReflect_VertexAttribAlias*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_VertexAttribAlias::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_State_t {
    QByteArrayData data[186];
    char stringdata0[4345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_State_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_State_t qt_meta_stringdata_osg__QReflect_State = {
    {
QT_MOC_LITERAL(0, 0, 19), // "osg::QReflect_State"
QT_MOC_LITERAL(1, 20, 24), // "ActiveTextureUnitChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 30), // "ClientActiveTextureUnitChanged"
QT_MOC_LITERAL(4, 77, 16), // "ContextIDChanged"
QT_MOC_LITERAL(5, 94, 22), // "DisplaySettingsChanged"
QT_MOC_LITERAL(6, 117, 36), // "const osg::QReflect_DisplaySe..."
QT_MOC_LITERAL(7, 154, 17), // "FrameStampChanged"
QT_MOC_LITERAL(8, 172, 31), // "const osg::QReflect_FrameStamp*"
QT_MOC_LITERAL(9, 204, 28), // "GraphicsCostEstimatorChanged"
QT_MOC_LITERAL(10, 233, 42), // "const osg::QReflect_GraphicsC..."
QT_MOC_LITERAL(11, 276, 30), // "MaxBufferObjectPoolSizeChanged"
QT_MOC_LITERAL(12, 307, 25), // "MaxTexturePoolSizeChanged"
QT_MOC_LITERAL(13, 333, 21), // "ShaderComposerChanged"
QT_MOC_LITERAL(14, 355, 35), // "const osg::QReflect_ShaderCom..."
QT_MOC_LITERAL(15, 391, 31), // "ShaderCompositionEnabledChanged"
QT_MOC_LITERAL(16, 423, 20), // "TimestampBitsChanged"
QT_MOC_LITERAL(17, 444, 40), // "UseModelViewAndProjectionUnif..."
QT_MOC_LITERAL(18, 485, 33), // "UseVertexAttributeAliasingCha..."
QT_MOC_LITERAL(19, 519, 11), // "updateModel"
QT_MOC_LITERAL(20, 531, 14), // "applyAttribute"
QT_MOC_LITERAL(21, 546, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(22, 576, 21), // "applyTextureAttribute"
QT_MOC_LITERAL(23, 598, 13), // "checkGLErrors"
QT_MOC_LITERAL(24, 612, 11), // "const char*"
QT_MOC_LITERAL(25, 624, 17), // "getAbortRendering"
QT_MOC_LITERAL(26, 642, 19), // "isFogCoordSupported"
QT_MOC_LITERAL(27, 662, 25), // "isSecondaryColorSupported"
QT_MOC_LITERAL(28, 688, 29), // "isVertexBufferObjectSupported"
QT_MOC_LITERAL(29, 718, 25), // "supportsShaderRequirement"
QT_MOC_LITERAL(30, 744, 10), // "getGpuTime"
QT_MOC_LITERAL(31, 755, 18), // "getDisplaySettings"
QT_MOC_LITERAL(32, 774, 30), // "osg::QReflect_DisplaySettings*"
QT_MOC_LITERAL(33, 805, 13), // "getFrameStamp"
QT_MOC_LITERAL(34, 819, 25), // "osg::QReflect_FrameStamp*"
QT_MOC_LITERAL(35, 845, 24), // "getGraphicsCostEstimator"
QT_MOC_LITERAL(36, 870, 36), // "osg::QReflect_GraphicsCostEst..."
QT_MOC_LITERAL(37, 907, 17), // "getShaderComposer"
QT_MOC_LITERAL(38, 925, 29), // "osg::QReflect_ShaderComposer*"
QT_MOC_LITERAL(39, 955, 21), // "getDynamicObjectCount"
QT_MOC_LITERAL(40, 977, 20), // "getStateSetStackSize"
QT_MOC_LITERAL(41, 998, 27), // "getShaderCompositionEnabled"
QT_MOC_LITERAL(42, 1026, 36), // "getUseModelViewAndProjectionU..."
QT_MOC_LITERAL(43, 1063, 29), // "getUseVertexAttributeAliasing"
QT_MOC_LITERAL(44, 1093, 16), // "getTimestampBits"
QT_MOC_LITERAL(45, 1110, 20), // "getActiveTextureUnit"
QT_MOC_LITERAL(46, 1131, 26), // "getClientActiveTextureUnit"
QT_MOC_LITERAL(47, 1158, 12), // "getContextID"
QT_MOC_LITERAL(48, 1171, 26), // "getMaxBufferObjectPoolSize"
QT_MOC_LITERAL(49, 1198, 21), // "getMaxTexturePoolSize"
QT_MOC_LITERAL(50, 1220, 29), // "getCurrentElementBufferObject"
QT_MOC_LITERAL(51, 1250, 29), // "osg::QReflect_GLBufferObject*"
QT_MOC_LITERAL(52, 1280, 27), // "getCurrentPixelBufferObject"
QT_MOC_LITERAL(53, 1308, 28), // "getCurrentVertexBufferObject"
QT_MOC_LITERAL(54, 1337, 19), // "getCheckForGLErrors"
QT_MOC_LITERAL(55, 1357, 37), // "osg::QReflect_State::CheckFor..."
QT_MOC_LITERAL(56, 1395, 25), // "getGlobalDefaultAttribute"
QT_MOC_LITERAL(57, 1421, 34), // "osg::QReflect_StateAttribute:..."
QT_MOC_LITERAL(58, 1456, 32), // "getGlobalDefaultTextureAttribute"
QT_MOC_LITERAL(59, 1489, 23), // "getLastAppliedAttribute"
QT_MOC_LITERAL(60, 1513, 30), // "getLastAppliedTextureAttribute"
QT_MOC_LITERAL(61, 1544, 25), // "getModelViewMatrixUniform"
QT_MOC_LITERAL(62, 1570, 22), // "osg::QReflect_Uniform*"
QT_MOC_LITERAL(63, 1593, 35), // "getModelViewProjectionMatrixU..."
QT_MOC_LITERAL(64, 1629, 22), // "getNormalMatrixUniform"
QT_MOC_LITERAL(65, 1652, 26), // "getProjectionMatrixUniform"
QT_MOC_LITERAL(66, 1679, 18), // "getCurrentViewport"
QT_MOC_LITERAL(67, 1698, 23), // "osg::QReflect_Viewport*"
QT_MOC_LITERAL(68, 1722, 5), // "Color"
QT_MOC_LITERAL(69, 1728, 13), // "MultiTexCoord"
QT_MOC_LITERAL(70, 1742, 6), // "Normal"
QT_MOC_LITERAL(71, 1749, 8), // "TexCoord"
QT_MOC_LITERAL(72, 1758, 11), // "VerteAttrib"
QT_MOC_LITERAL(73, 1770, 6), // "Vertex"
QT_MOC_LITERAL(74, 1777, 5), // "apply"
QT_MOC_LITERAL(75, 1783, 23), // "osg::QReflect_StateSet*"
QT_MOC_LITERAL(76, 1807, 32), // "applyDisablingOfVertexAttributes"
QT_MOC_LITERAL(77, 1840, 45), // "applyModelViewAndProjectionUn..."
QT_MOC_LITERAL(78, 1886, 20), // "applyModelViewMatrix"
QT_MOC_LITERAL(79, 1907, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(80, 1930, 25), // "osg::QReflect_RefMatrixd*"
QT_MOC_LITERAL(81, 1956, 21), // "applyProjectionMatrix"
QT_MOC_LITERAL(82, 1978, 22), // "applyShaderComposition"
QT_MOC_LITERAL(83, 2001, 29), // "applyShaderCompositionUniform"
QT_MOC_LITERAL(84, 2031, 23), // "bindElementBufferObject"
QT_MOC_LITERAL(85, 2055, 21), // "bindPixelBufferObject"
QT_MOC_LITERAL(86, 2077, 22), // "bindVertexBufferObject"
QT_MOC_LITERAL(87, 2100, 19), // "captureCurrentState"
QT_MOC_LITERAL(88, 2120, 27), // "decrementDynamicObjectCount"
QT_MOC_LITERAL(89, 2148, 18), // "dirtyAllAttributes"
QT_MOC_LITERAL(90, 2167, 13), // "dirtyAllModes"
QT_MOC_LITERAL(91, 2181, 20), // "dirtyAllVertexArrays"
QT_MOC_LITERAL(92, 2202, 17), // "dirtyColorPointer"
QT_MOC_LITERAL(93, 2220, 20), // "dirtyFogCoordPointer"
QT_MOC_LITERAL(94, 2241, 18), // "dirtyNormalPointer"
QT_MOC_LITERAL(95, 2260, 26), // "dirtySecondaryColorPointer"
QT_MOC_LITERAL(96, 2287, 20), // "dirtyTexCoordPointer"
QT_MOC_LITERAL(97, 2308, 38), // "dirtyTexCoordPointersAboveAnd..."
QT_MOC_LITERAL(98, 2347, 24), // "dirtyVertexAttribPointer"
QT_MOC_LITERAL(99, 2372, 42), // "dirtyVertexAttribPointersAbov..."
QT_MOC_LITERAL(100, 2415, 18), // "dirtyVertexPointer"
QT_MOC_LITERAL(101, 2434, 22), // "disableAllVertexArrays"
QT_MOC_LITERAL(102, 2457, 19), // "disableColorPointer"
QT_MOC_LITERAL(103, 2477, 22), // "disableFogCoordPointer"
QT_MOC_LITERAL(104, 2500, 20), // "disableNormalPointer"
QT_MOC_LITERAL(105, 2521, 28), // "disableSecondaryColorPointer"
QT_MOC_LITERAL(106, 2550, 22), // "disableTexCoordPointer"
QT_MOC_LITERAL(107, 2573, 40), // "disableTexCoordPointersAboveA..."
QT_MOC_LITERAL(108, 2614, 26), // "disableVertexAttribPointer"
QT_MOC_LITERAL(109, 2641, 44), // "disableVertexAttribPointersAb..."
QT_MOC_LITERAL(110, 2686, 20), // "disableVertexPointer"
QT_MOC_LITERAL(111, 2707, 14), // "frameCompleted"
QT_MOC_LITERAL(112, 2722, 20), // "haveAppliedAttribute"
QT_MOC_LITERAL(113, 2743, 27), // "haveAppliedTextureAttribute"
QT_MOC_LITERAL(114, 2771, 24), // "initializeExtensionProcs"
QT_MOC_LITERAL(115, 2796, 14), // "insertStateSet"
QT_MOC_LITERAL(116, 2811, 31), // "lazyDisablingOfVertexAttributes"
QT_MOC_LITERAL(117, 2843, 15), // "popAllStateSets"
QT_MOC_LITERAL(118, 2859, 11), // "popStateSet"
QT_MOC_LITERAL(119, 2871, 22), // "popStateSetStackToSize"
QT_MOC_LITERAL(120, 2894, 12), // "pushStateSet"
QT_MOC_LITERAL(121, 2907, 16), // "releaseGLObjects"
QT_MOC_LITERAL(122, 2924, 14), // "removeStateSet"
QT_MOC_LITERAL(123, 2939, 5), // "reset"
QT_MOC_LITERAL(124, 2945, 25), // "resetVertexAttributeAlias"
QT_MOC_LITERAL(125, 2971, 20), // "setAbortRenderingPtr"
QT_MOC_LITERAL(126, 2992, 5), // "bool*"
QT_MOC_LITERAL(127, 2998, 19), // "setCheckForGLErrors"
QT_MOC_LITERAL(128, 3018, 13), // "setColorAlias"
QT_MOC_LITERAL(129, 3032, 32), // "osg::QReflect_VertexAttribAlias*"
QT_MOC_LITERAL(130, 3065, 15), // "setColorPointer"
QT_MOC_LITERAL(131, 3081, 20), // "osg::QReflect_Array*"
QT_MOC_LITERAL(132, 3102, 29), // "setCurrentElementBufferObject"
QT_MOC_LITERAL(133, 3132, 27), // "setCurrentPixelBufferObject"
QT_MOC_LITERAL(134, 3160, 28), // "setCurrentVertexBufferObject"
QT_MOC_LITERAL(135, 3189, 21), // "setDynamicObjectCount"
QT_MOC_LITERAL(136, 3211, 16), // "setFogCoordAlias"
QT_MOC_LITERAL(137, 3228, 18), // "setFogCoordPointer"
QT_MOC_LITERAL(138, 3247, 25), // "setGlobalDefaultAttribute"
QT_MOC_LITERAL(139, 3273, 32), // "setGlobalDefaultTextureAttribute"
QT_MOC_LITERAL(140, 3306, 20), // "setInitialViewMatrix"
QT_MOC_LITERAL(141, 3327, 14), // "setNormalAlias"
QT_MOC_LITERAL(142, 3342, 16), // "setNormalPointer"
QT_MOC_LITERAL(143, 3359, 22), // "setSecondaryColorAlias"
QT_MOC_LITERAL(144, 3382, 24), // "setSecondaryColorPointer"
QT_MOC_LITERAL(145, 3407, 18), // "setTexCoordPointer"
QT_MOC_LITERAL(146, 3426, 14), // "setVertexAlias"
QT_MOC_LITERAL(147, 3441, 23), // "setVertexAttribIPointer"
QT_MOC_LITERAL(148, 3465, 23), // "setVertexAttribLPointer"
QT_MOC_LITERAL(149, 3489, 22), // "setVertexAttribPointer"
QT_MOC_LITERAL(150, 3512, 16), // "setVertexPointer"
QT_MOC_LITERAL(151, 3529, 25), // "unbindElementBufferObject"
QT_MOC_LITERAL(152, 3555, 23), // "unbindPixelBufferObject"
QT_MOC_LITERAL(153, 3579, 24), // "unbindVertexBufferObject"
QT_MOC_LITERAL(154, 3604, 42), // "updateModelViewAndProjectionM..."
QT_MOC_LITERAL(155, 3647, 31), // "pmoc_reverse_setDisplaySettings"
QT_MOC_LITERAL(156, 3679, 3), // "par"
QT_MOC_LITERAL(157, 3683, 26), // "pmoc_reverse_setFrameStamp"
QT_MOC_LITERAL(158, 3710, 37), // "pmoc_reverse_setGraphicsCostE..."
QT_MOC_LITERAL(159, 3748, 30), // "pmoc_reverse_setShaderComposer"
QT_MOC_LITERAL(160, 3779, 20), // "setActiveTextureUnit"
QT_MOC_LITERAL(161, 3800, 26), // "setClientActiveTextureUnit"
QT_MOC_LITERAL(162, 3827, 12), // "setContextID"
QT_MOC_LITERAL(163, 3840, 18), // "setDisplaySettings"
QT_MOC_LITERAL(164, 3859, 13), // "setFrameStamp"
QT_MOC_LITERAL(165, 3873, 24), // "setGraphicsCostEstimator"
QT_MOC_LITERAL(166, 3898, 26), // "setMaxBufferObjectPoolSize"
QT_MOC_LITERAL(167, 3925, 21), // "setMaxTexturePoolSize"
QT_MOC_LITERAL(168, 3947, 17), // "setShaderComposer"
QT_MOC_LITERAL(169, 3965, 27), // "setShaderCompositionEnabled"
QT_MOC_LITERAL(170, 3993, 16), // "setTimestampBits"
QT_MOC_LITERAL(171, 4010, 36), // "setUseModelViewAndProjectionU..."
QT_MOC_LITERAL(172, 4047, 29), // "setUseVertexAttributeAliasing"
QT_MOC_LITERAL(173, 4077, 24), // "ShaderCompositionEnabled"
QT_MOC_LITERAL(174, 4102, 33), // "UseModelViewAndProjectionUnif..."
QT_MOC_LITERAL(175, 4136, 26), // "UseVertexAttributeAliasing"
QT_MOC_LITERAL(176, 4163, 13), // "TimestampBits"
QT_MOC_LITERAL(177, 4177, 17), // "ActiveTextureUnit"
QT_MOC_LITERAL(178, 4195, 23), // "ClientActiveTextureUnit"
QT_MOC_LITERAL(179, 4219, 9), // "ContextID"
QT_MOC_LITERAL(180, 4229, 23), // "MaxBufferObjectPoolSize"
QT_MOC_LITERAL(181, 4253, 18), // "MaxTexturePoolSize"
QT_MOC_LITERAL(182, 4272, 16), // "CheckForGLErrors"
QT_MOC_LITERAL(183, 4289, 21), // "NEVER_CHECK_GL_ERRORS"
QT_MOC_LITERAL(184, 4311, 14), // "ONCE_PER_FRAME"
QT_MOC_LITERAL(185, 4326, 18) // "ONCE_PER_ATTRIBUTE"

    },
    "osg::QReflect_State\0ActiveTextureUnitChanged\0"
    "\0ClientActiveTextureUnitChanged\0"
    "ContextIDChanged\0DisplaySettingsChanged\0"
    "const osg::QReflect_DisplaySettings*\0"
    "FrameStampChanged\0const osg::QReflect_FrameStamp*\0"
    "GraphicsCostEstimatorChanged\0"
    "const osg::QReflect_GraphicsCostEstimator*\0"
    "MaxBufferObjectPoolSizeChanged\0"
    "MaxTexturePoolSizeChanged\0"
    "ShaderComposerChanged\0"
    "const osg::QReflect_ShaderComposer*\0"
    "ShaderCompositionEnabledChanged\0"
    "TimestampBitsChanged\0"
    "UseModelViewAndProjectionUniformsChanged\0"
    "UseVertexAttributeAliasingChanged\0"
    "updateModel\0applyAttribute\0"
    "osg::QReflect_StateAttribute*\0"
    "applyTextureAttribute\0checkGLErrors\0"
    "const char*\0getAbortRendering\0"
    "isFogCoordSupported\0isSecondaryColorSupported\0"
    "isVertexBufferObjectSupported\0"
    "supportsShaderRequirement\0getGpuTime\0"
    "getDisplaySettings\0osg::QReflect_DisplaySettings*\0"
    "getFrameStamp\0osg::QReflect_FrameStamp*\0"
    "getGraphicsCostEstimator\0"
    "osg::QReflect_GraphicsCostEstimator*\0"
    "getShaderComposer\0osg::QReflect_ShaderComposer*\0"
    "getDynamicObjectCount\0getStateSetStackSize\0"
    "getShaderCompositionEnabled\0"
    "getUseModelViewAndProjectionUniforms\0"
    "getUseVertexAttributeAliasing\0"
    "getTimestampBits\0getActiveTextureUnit\0"
    "getClientActiveTextureUnit\0getContextID\0"
    "getMaxBufferObjectPoolSize\0"
    "getMaxTexturePoolSize\0"
    "getCurrentElementBufferObject\0"
    "osg::QReflect_GLBufferObject*\0"
    "getCurrentPixelBufferObject\0"
    "getCurrentVertexBufferObject\0"
    "getCheckForGLErrors\0"
    "osg::QReflect_State::CheckForGLErrors\0"
    "getGlobalDefaultAttribute\0"
    "osg::QReflect_StateAttribute::Type\0"
    "getGlobalDefaultTextureAttribute\0"
    "getLastAppliedAttribute\0"
    "getLastAppliedTextureAttribute\0"
    "getModelViewMatrixUniform\0"
    "osg::QReflect_Uniform*\0"
    "getModelViewProjectionMatrixUniform\0"
    "getNormalMatrixUniform\0"
    "getProjectionMatrixUniform\0"
    "getCurrentViewport\0osg::QReflect_Viewport*\0"
    "Color\0MultiTexCoord\0Normal\0TexCoord\0"
    "VerteAttrib\0Vertex\0apply\0"
    "osg::QReflect_StateSet*\0"
    "applyDisablingOfVertexAttributes\0"
    "applyModelViewAndProjectionUniformsIfRequired\0"
    "applyModelViewMatrix\0osg::QReflect_Matrixd*\0"
    "osg::QReflect_RefMatrixd*\0"
    "applyProjectionMatrix\0applyShaderComposition\0"
    "applyShaderCompositionUniform\0"
    "bindElementBufferObject\0bindPixelBufferObject\0"
    "bindVertexBufferObject\0captureCurrentState\0"
    "decrementDynamicObjectCount\0"
    "dirtyAllAttributes\0dirtyAllModes\0"
    "dirtyAllVertexArrays\0dirtyColorPointer\0"
    "dirtyFogCoordPointer\0dirtyNormalPointer\0"
    "dirtySecondaryColorPointer\0"
    "dirtyTexCoordPointer\0"
    "dirtyTexCoordPointersAboveAndIncluding\0"
    "dirtyVertexAttribPointer\0"
    "dirtyVertexAttribPointersAboveAndIncluding\0"
    "dirtyVertexPointer\0disableAllVertexArrays\0"
    "disableColorPointer\0disableFogCoordPointer\0"
    "disableNormalPointer\0disableSecondaryColorPointer\0"
    "disableTexCoordPointer\0"
    "disableTexCoordPointersAboveAndIncluding\0"
    "disableVertexAttribPointer\0"
    "disableVertexAttribPointersAboveAndIncluding\0"
    "disableVertexPointer\0frameCompleted\0"
    "haveAppliedAttribute\0haveAppliedTextureAttribute\0"
    "initializeExtensionProcs\0insertStateSet\0"
    "lazyDisablingOfVertexAttributes\0"
    "popAllStateSets\0popStateSet\0"
    "popStateSetStackToSize\0pushStateSet\0"
    "releaseGLObjects\0removeStateSet\0reset\0"
    "resetVertexAttributeAlias\0"
    "setAbortRenderingPtr\0bool*\0"
    "setCheckForGLErrors\0setColorAlias\0"
    "osg::QReflect_VertexAttribAlias*\0"
    "setColorPointer\0osg::QReflect_Array*\0"
    "setCurrentElementBufferObject\0"
    "setCurrentPixelBufferObject\0"
    "setCurrentVertexBufferObject\0"
    "setDynamicObjectCount\0setFogCoordAlias\0"
    "setFogCoordPointer\0setGlobalDefaultAttribute\0"
    "setGlobalDefaultTextureAttribute\0"
    "setInitialViewMatrix\0setNormalAlias\0"
    "setNormalPointer\0setSecondaryColorAlias\0"
    "setSecondaryColorPointer\0setTexCoordPointer\0"
    "setVertexAlias\0setVertexAttribIPointer\0"
    "setVertexAttribLPointer\0setVertexAttribPointer\0"
    "setVertexPointer\0unbindElementBufferObject\0"
    "unbindPixelBufferObject\0"
    "unbindVertexBufferObject\0"
    "updateModelViewAndProjectionMatrixUniforms\0"
    "pmoc_reverse_setDisplaySettings\0par\0"
    "pmoc_reverse_setFrameStamp\0"
    "pmoc_reverse_setGraphicsCostEstimator\0"
    "pmoc_reverse_setShaderComposer\0"
    "setActiveTextureUnit\0setClientActiveTextureUnit\0"
    "setContextID\0setDisplaySettings\0"
    "setFrameStamp\0setGraphicsCostEstimator\0"
    "setMaxBufferObjectPoolSize\0"
    "setMaxTexturePoolSize\0setShaderComposer\0"
    "setShaderCompositionEnabled\0"
    "setTimestampBits\0setUseModelViewAndProjectionUniforms\0"
    "setUseVertexAttributeAliasing\0"
    "ShaderCompositionEnabled\0"
    "UseModelViewAndProjectionUniforms\0"
    "UseVertexAttributeAliasing\0TimestampBits\0"
    "ActiveTextureUnit\0ClientActiveTextureUnit\0"
    "ContextID\0MaxBufferObjectPoolSize\0"
    "MaxTexturePoolSize\0CheckForGLErrors\0"
    "NEVER_CHECK_GL_ERRORS\0ONCE_PER_FRAME\0"
    "ONCE_PER_ATTRIBUTE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_State[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     158,   14, // methods
       9, 1228, // properties
       1, 1264, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  804,    2, 0x06 /* Public */,
       3,    1,  807,    2, 0x06 /* Public */,
       4,    1,  810,    2, 0x06 /* Public */,
       5,    1,  813,    2, 0x06 /* Public */,
       7,    1,  816,    2, 0x06 /* Public */,
       9,    1,  819,    2, 0x06 /* Public */,
      11,    1,  822,    2, 0x06 /* Public */,
      12,    1,  825,    2, 0x06 /* Public */,
      13,    1,  828,    2, 0x06 /* Public */,
      15,    1,  831,    2, 0x06 /* Public */,
      16,    1,  834,    2, 0x06 /* Public */,
      17,    1,  837,    2, 0x06 /* Public */,
      18,    1,  840,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  843,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    1,  844,    2, 0x02 /* Public */,
      22,    2,  847,    2, 0x02 /* Public */,
      23,    1,  852,    2, 0x02 /* Public */,
      23,    1,  855,    2, 0x02 /* Public */,
      25,    0,  858,    2, 0x02 /* Public */,
      26,    0,  859,    2, 0x02 /* Public */,
      27,    0,  860,    2, 0x02 /* Public */,
      28,    0,  861,    2, 0x02 /* Public */,
      29,    1,  862,    2, 0x02 /* Public */,
      30,    0,  865,    2, 0x02 /* Public */,
      31,    0,  866,    2, 0x02 /* Public */,
      33,    0,  867,    2, 0x02 /* Public */,
      35,    0,  868,    2, 0x02 /* Public */,
      37,    0,  869,    2, 0x02 /* Public */,
      39,    0,  870,    2, 0x02 /* Public */,
      40,    0,  871,    2, 0x02 /* Public */,
      41,    0,  872,    2, 0x02 /* Public */,
      42,    0,  873,    2, 0x02 /* Public */,
      43,    0,  874,    2, 0x02 /* Public */,
      44,    0,  875,    2, 0x02 /* Public */,
      45,    0,  876,    2, 0x02 /* Public */,
      46,    0,  877,    2, 0x02 /* Public */,
      47,    0,  878,    2, 0x02 /* Public */,
      48,    0,  879,    2, 0x02 /* Public */,
      49,    0,  880,    2, 0x02 /* Public */,
      50,    0,  881,    2, 0x02 /* Public */,
      52,    0,  882,    2, 0x02 /* Public */,
      53,    0,  883,    2, 0x02 /* Public */,
      54,    0,  884,    2, 0x02 /* Public */,
      56,    2,  885,    2, 0x02 /* Public */,
      58,    3,  890,    2, 0x02 /* Public */,
      59,    2,  897,    2, 0x02 /* Public */,
      60,    3,  902,    2, 0x02 /* Public */,
      61,    0,  909,    2, 0x02 /* Public */,
      63,    0,  910,    2, 0x02 /* Public */,
      64,    0,  911,    2, 0x02 /* Public */,
      65,    0,  912,    2, 0x02 /* Public */,
      66,    0,  913,    2, 0x02 /* Public */,
      68,    4,  914,    2, 0x02 /* Public */,
      69,    5,  923,    2, 0x02 /* Public */,
      70,    3,  934,    2, 0x02 /* Public */,
      71,    4,  941,    2, 0x02 /* Public */,
      72,    5,  950,    2, 0x02 /* Public */,
      73,    4,  961,    2, 0x02 /* Public */,
      74,    0,  970,    2, 0x02 /* Public */,
      74,    1,  971,    2, 0x02 /* Public */,
      76,    0,  974,    2, 0x02 /* Public */,
      77,    0,  975,    2, 0x02 /* Public */,
      78,    1,  976,    2, 0x02 /* Public */,
      78,    1,  979,    2, 0x02 /* Public */,
      81,    1,  982,    2, 0x02 /* Public */,
      82,    0,  985,    2, 0x02 /* Public */,
      83,    2,  986,    2, 0x02 /* Public */,
      84,    1,  991,    2, 0x02 /* Public */,
      85,    1,  994,    2, 0x02 /* Public */,
      86,    1,  997,    2, 0x02 /* Public */,
      87,    1, 1000,    2, 0x02 /* Public */,
      88,    0, 1003,    2, 0x02 /* Public */,
      89,    0, 1004,    2, 0x02 /* Public */,
      90,    0, 1005,    2, 0x02 /* Public */,
      91,    0, 1006,    2, 0x02 /* Public */,
      92,    0, 1007,    2, 0x02 /* Public */,
      93,    0, 1008,    2, 0x02 /* Public */,
      94,    0, 1009,    2, 0x02 /* Public */,
      95,    0, 1010,    2, 0x02 /* Public */,
      96,    1, 1011,    2, 0x02 /* Public */,
      97,    1, 1014,    2, 0x02 /* Public */,
      98,    1, 1017,    2, 0x02 /* Public */,
      99,    1, 1020,    2, 0x02 /* Public */,
     100,    0, 1023,    2, 0x02 /* Public */,
     101,    0, 1024,    2, 0x02 /* Public */,
     102,    0, 1025,    2, 0x02 /* Public */,
     103,    0, 1026,    2, 0x02 /* Public */,
     104,    0, 1027,    2, 0x02 /* Public */,
     105,    0, 1028,    2, 0x02 /* Public */,
     106,    1, 1029,    2, 0x02 /* Public */,
     107,    1, 1032,    2, 0x02 /* Public */,
     108,    1, 1035,    2, 0x02 /* Public */,
     109,    1, 1038,    2, 0x02 /* Public */,
     110,    0, 1041,    2, 0x02 /* Public */,
     111,    0, 1042,    2, 0x02 /* Public */,
     112,    1, 1043,    2, 0x02 /* Public */,
     112,    2, 1046,    2, 0x02 /* Public */,
     113,    2, 1051,    2, 0x02 /* Public */,
     113,    3, 1056,    2, 0x02 /* Public */,
     114,    0, 1063,    2, 0x02 /* Public */,
     115,    2, 1064,    2, 0x02 /* Public */,
     116,    0, 1069,    2, 0x02 /* Public */,
     117,    0, 1070,    2, 0x02 /* Public */,
     118,    0, 1071,    2, 0x02 /* Public */,
     119,    1, 1072,    2, 0x02 /* Public */,
     120,    1, 1075,    2, 0x02 /* Public */,
     121,    0, 1078,    2, 0x02 /* Public */,
     122,    1, 1079,    2, 0x02 /* Public */,
     123,    0, 1082,    2, 0x02 /* Public */,
     124,    2, 1083,    2, 0x02 /* Public */,
     125,    1, 1088,    2, 0x02 /* Public */,
     127,    1, 1091,    2, 0x02 /* Public */,
     128,    1, 1094,    2, 0x02 /* Public */,
     130,    1, 1097,    2, 0x02 /* Public */,
     132,    1, 1100,    2, 0x02 /* Public */,
     133,    1, 1103,    2, 0x02 /* Public */,
     134,    1, 1106,    2, 0x02 /* Public */,
     135,    2, 1109,    2, 0x02 /* Public */,
     136,    1, 1114,    2, 0x02 /* Public */,
     137,    1, 1117,    2, 0x02 /* Public */,
     138,    1, 1120,    2, 0x02 /* Public */,
     139,    2, 1123,    2, 0x02 /* Public */,
     140,    1, 1128,    2, 0x02 /* Public */,
     141,    1, 1131,    2, 0x02 /* Public */,
     142,    1, 1134,    2, 0x02 /* Public */,
     143,    1, 1137,    2, 0x02 /* Public */,
     144,    1, 1140,    2, 0x02 /* Public */,
     145,    2, 1143,    2, 0x02 /* Public */,
     146,    1, 1148,    2, 0x02 /* Public */,
     147,    2, 1151,    2, 0x02 /* Public */,
     148,    2, 1156,    2, 0x02 /* Public */,
     149,    2, 1161,    2, 0x02 /* Public */,
     150,    1, 1166,    2, 0x02 /* Public */,
     151,    0, 1169,    2, 0x02 /* Public */,
     152,    0, 1170,    2, 0x02 /* Public */,
     153,    0, 1171,    2, 0x02 /* Public */,
     154,    0, 1172,    2, 0x02 /* Public */,
     155,    1, 1173,    2, 0x02 /* Public */,
     155,    0, 1176,    2, 0x22 /* Public | MethodCloned */,
     157,    1, 1177,    2, 0x02 /* Public */,
     157,    0, 1180,    2, 0x22 /* Public | MethodCloned */,
     158,    1, 1181,    2, 0x02 /* Public */,
     158,    0, 1184,    2, 0x22 /* Public | MethodCloned */,
     159,    1, 1185,    2, 0x02 /* Public */,
     159,    0, 1188,    2, 0x22 /* Public | MethodCloned */,
     160,    1, 1189,    2, 0x02 /* Public */,
     161,    1, 1192,    2, 0x02 /* Public */,
     162,    1, 1195,    2, 0x02 /* Public */,
     163,    1, 1198,    2, 0x02 /* Public */,
     164,    1, 1201,    2, 0x02 /* Public */,
     165,    1, 1204,    2, 0x02 /* Public */,
     166,    1, 1207,    2, 0x02 /* Public */,
     167,    1, 1210,    2, 0x02 /* Public */,
     168,    1, 1213,    2, 0x02 /* Public */,
     169,    1, 1216,    2, 0x02 /* Public */,
     170,    1, 1219,    2, 0x02 /* Public */,
     171,    1, 1222,    2, 0x02 /* Public */,
     172,    1, 1225,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 21,    2,
    QMetaType::Bool, QMetaType::UInt, 0x80000000 | 21,    2,    2,
    QMetaType::Bool, 0x80000000 | 24,    2,
    QMetaType::Bool, 0x80000000 | 21,    2,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Double,
    0x80000000 | 32,
    0x80000000 | 34,
    0x80000000 | 36,
    0x80000000 | 38,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::UInt,
    0x80000000 | 51,
    0x80000000 | 51,
    0x80000000 | 51,
    0x80000000 | 55,
    0x80000000 | 21, 0x80000000 | 57, QMetaType::UInt,    2,    2,
    0x80000000 | 21, QMetaType::UInt, 0x80000000 | 57, QMetaType::UInt,    2,    2,    2,
    0x80000000 | 21, 0x80000000 | 57, QMetaType::UInt,    2,    2,
    0x80000000 | 21, QMetaType::UInt, 0x80000000 | 57, QMetaType::UInt,    2,    2,    2,
    0x80000000 | 62,
    0x80000000 | 62,
    0x80000000 | 62,
    0x80000000 | 62,
    0x80000000 | 67,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 75,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 79,    2,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 75,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 57, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 21,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 57, QMetaType::UInt,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 75,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 75,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 126,    2,
    QMetaType::Void, 0x80000000 | 55,    2,
    QMetaType::Void, 0x80000000 | 129,    2,
    QMetaType::Void, 0x80000000 | 131,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 129,    2,
    QMetaType::Void, 0x80000000 | 131,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 21,    2,    2,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void, 0x80000000 | 129,    2,
    QMetaType::Void, 0x80000000 | 131,    2,
    QMetaType::Void, 0x80000000 | 129,    2,
    QMetaType::Void, 0x80000000 | 131,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 131,    2,    2,
    QMetaType::Void, 0x80000000 | 129,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 131,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 131,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 131,    2,    2,
    QMetaType::Void, 0x80000000 | 131,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,  156,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,  156,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,  156,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,  156,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 32,  156,
    QMetaType::Void, 0x80000000 | 34,  156,
    QMetaType::Void, 0x80000000 | 36,  156,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 38,  156,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
     173, QMetaType::Bool, 0x00495103,
     174, QMetaType::Bool, 0x00495103,
     175, QMetaType::Bool, 0x00495103,
     176, QMetaType::Int, 0x00495103,
     177, QMetaType::UInt, 0x00495103,
     178, QMetaType::UInt, 0x00495103,
     179, QMetaType::UInt, 0x00495103,
     180, QMetaType::UInt, 0x00495103,
     181, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       9,
      11,
      12,
      10,
       0,
       1,
       2,
       6,
       7,

 // enums: name, flags, count, data
     182, 0x0,    3, 1268,

 // enum data: key, value
     183, uint(osg::QReflect_State::NEVER_CHECK_GL_ERRORS),
     184, uint(osg::QReflect_State::ONCE_PER_FRAME),
     185, uint(osg::QReflect_State::ONCE_PER_ATTRIBUTE),

       0        // eod
};

void osg::QReflect_State::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_State *_t = static_cast<QReflect_State *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActiveTextureUnitChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 1: _t->ClientActiveTextureUnitChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 2: _t->ContextIDChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 3: _t->DisplaySettingsChanged((*reinterpret_cast< const osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 4: _t->FrameStampChanged((*reinterpret_cast< const osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 5: _t->GraphicsCostEstimatorChanged((*reinterpret_cast< const osg::QReflect_GraphicsCostEstimator*(*)>(_a[1]))); break;
        case 6: _t->MaxBufferObjectPoolSizeChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 7: _t->MaxTexturePoolSizeChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 8: _t->ShaderComposerChanged((*reinterpret_cast< const osg::QReflect_ShaderComposer*(*)>(_a[1]))); break;
        case 9: _t->ShaderCompositionEnabledChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->TimestampBitsChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 11: _t->UseModelViewAndProjectionUniformsChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->UseVertexAttributeAliasingChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 13: _t->updateModel(); break;
        case 14: { bool _r = _t->applyAttribute((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->applyTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->checkGLErrors((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->checkGLErrors((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->getAbortRendering();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isFogCoordSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isSecondaryColorSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isVertexBufferObjectSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->supportsShaderRequirement((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { double _r = _t->getGpuTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 24: { osg::QReflect_DisplaySettings* _r = _t->getDisplaySettings();
            if (_a[0]) *reinterpret_cast< osg::QReflect_DisplaySettings**>(_a[0]) = _r; }  break;
        case 25: { osg::QReflect_FrameStamp* _r = _t->getFrameStamp();
            if (_a[0]) *reinterpret_cast< osg::QReflect_FrameStamp**>(_a[0]) = _r; }  break;
        case 26: { osg::QReflect_GraphicsCostEstimator* _r = _t->getGraphicsCostEstimator();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsCostEstimator**>(_a[0]) = _r; }  break;
        case 27: { osg::QReflect_ShaderComposer* _r = _t->getShaderComposer();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ShaderComposer**>(_a[0]) = _r; }  break;
        case 28: { uint _r = _t->getDynamicObjectCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 29: { uint _r = _t->getStateSetStackSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->getShaderCompositionEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->getUseModelViewAndProjectionUniforms();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->getUseVertexAttributeAliasing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->getTimestampBits();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { uint _r = _t->getActiveTextureUnit();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 35: { uint _r = _t->getClientActiveTextureUnit();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 36: { uint _r = _t->getContextID();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 37: { uint _r = _t->getMaxBufferObjectPoolSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 38: { uint _r = _t->getMaxTexturePoolSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 39: { osg::QReflect_GLBufferObject* _r = _t->getCurrentElementBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBufferObject**>(_a[0]) = _r; }  break;
        case 40: { osg::QReflect_GLBufferObject* _r = _t->getCurrentPixelBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBufferObject**>(_a[0]) = _r; }  break;
        case 41: { osg::QReflect_GLBufferObject* _r = _t->getCurrentVertexBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBufferObject**>(_a[0]) = _r; }  break;
        case 42: { osg::QReflect_State::CheckForGLErrors _r = _t->getCheckForGLErrors();
            if (_a[0]) *reinterpret_cast< osg::QReflect_State::CheckForGLErrors*>(_a[0]) = _r; }  break;
        case 43: { osg::QReflect_StateAttribute* _r = _t->getGlobalDefaultAttribute((*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 44: { osg::QReflect_StateAttribute* _r = _t->getGlobalDefaultTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 45: { osg::QReflect_StateAttribute* _r = _t->getLastAppliedAttribute((*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 46: { osg::QReflect_StateAttribute* _r = _t->getLastAppliedTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 47: { osg::QReflect_Uniform* _r = _t->getModelViewMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 48: { osg::QReflect_Uniform* _r = _t->getModelViewProjectionMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 49: { osg::QReflect_Uniform* _r = _t->getNormalMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 50: { osg::QReflect_Uniform* _r = _t->getProjectionMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 51: { osg::QReflect_Viewport* _r = _t->getCurrentViewport();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Viewport**>(_a[0]) = _r; }  break;
        case 52: _t->Color((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 53: _t->MultiTexCoord((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 54: _t->Normal((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 55: _t->TexCoord((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 56: _t->VerteAttrib((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 57: _t->Vertex((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 58: _t->apply(); break;
        case 59: _t->apply((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 60: _t->applyDisablingOfVertexAttributes(); break;
        case 61: _t->applyModelViewAndProjectionUniformsIfRequired(); break;
        case 62: _t->applyModelViewMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 63: _t->applyModelViewMatrix((*reinterpret_cast< osg::QReflect_RefMatrixd*(*)>(_a[1]))); break;
        case 64: _t->applyProjectionMatrix((*reinterpret_cast< osg::QReflect_RefMatrixd*(*)>(_a[1]))); break;
        case 65: _t->applyShaderComposition(); break;
        case 66: _t->applyShaderCompositionUniform((*reinterpret_cast< osg::QReflect_Uniform*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 67: _t->bindElementBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 68: _t->bindPixelBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 69: _t->bindVertexBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 70: _t->captureCurrentState((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 71: _t->decrementDynamicObjectCount(); break;
        case 72: _t->dirtyAllAttributes(); break;
        case 73: _t->dirtyAllModes(); break;
        case 74: _t->dirtyAllVertexArrays(); break;
        case 75: _t->dirtyColorPointer(); break;
        case 76: _t->dirtyFogCoordPointer(); break;
        case 77: _t->dirtyNormalPointer(); break;
        case 78: _t->dirtySecondaryColorPointer(); break;
        case 79: _t->dirtyTexCoordPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 80: _t->dirtyTexCoordPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 81: _t->dirtyVertexAttribPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 82: _t->dirtyVertexAttribPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 83: _t->dirtyVertexPointer(); break;
        case 84: _t->disableAllVertexArrays(); break;
        case 85: _t->disableColorPointer(); break;
        case 86: _t->disableFogCoordPointer(); break;
        case 87: _t->disableNormalPointer(); break;
        case 88: _t->disableSecondaryColorPointer(); break;
        case 89: _t->disableTexCoordPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 90: _t->disableTexCoordPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 91: _t->disableVertexAttribPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 92: _t->disableVertexAttribPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 93: _t->disableVertexPointer(); break;
        case 94: _t->frameCompleted(); break;
        case 95: _t->haveAppliedAttribute((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1]))); break;
        case 96: _t->haveAppliedAttribute((*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 97: _t->haveAppliedTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[2]))); break;
        case 98: _t->haveAppliedTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 99: _t->initializeExtensionProcs(); break;
        case 100: _t->insertStateSet((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[2]))); break;
        case 101: _t->lazyDisablingOfVertexAttributes(); break;
        case 102: _t->popAllStateSets(); break;
        case 103: _t->popStateSet(); break;
        case 104: _t->popStateSetStackToSize((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 105: _t->pushStateSet((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 106: _t->releaseGLObjects(); break;
        case 107: _t->removeStateSet((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 108: _t->reset(); break;
        case 109: _t->resetVertexAttributeAlias((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 110: _t->setAbortRenderingPtr((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 111: _t->setCheckForGLErrors((*reinterpret_cast< osg::QReflect_State::CheckForGLErrors(*)>(_a[1]))); break;
        case 112: _t->setColorAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 113: _t->setColorPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 114: _t->setCurrentElementBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 115: _t->setCurrentPixelBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 116: _t->setCurrentVertexBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 117: _t->setDynamicObjectCount((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 118: _t->setFogCoordAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 119: _t->setFogCoordPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 120: _t->setGlobalDefaultAttribute((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1]))); break;
        case 121: _t->setGlobalDefaultTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[2]))); break;
        case 122: _t->setInitialViewMatrix((*reinterpret_cast< osg::QReflect_RefMatrixd*(*)>(_a[1]))); break;
        case 123: _t->setNormalAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 124: _t->setNormalPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 125: _t->setSecondaryColorAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 126: _t->setSecondaryColorPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 127: _t->setTexCoordPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 128: _t->setVertexAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 129: _t->setVertexAttribIPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 130: _t->setVertexAttribLPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 131: _t->setVertexAttribPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 132: _t->setVertexPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 133: _t->unbindElementBufferObject(); break;
        case 134: _t->unbindPixelBufferObject(); break;
        case 135: _t->unbindVertexBufferObject(); break;
        case 136: _t->updateModelViewAndProjectionMatrixUniforms(); break;
        case 137: _t->pmoc_reverse_setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 138: _t->pmoc_reverse_setDisplaySettings(); break;
        case 139: _t->pmoc_reverse_setFrameStamp((*reinterpret_cast< osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 140: _t->pmoc_reverse_setFrameStamp(); break;
        case 141: _t->pmoc_reverse_setGraphicsCostEstimator((*reinterpret_cast< osg::QReflect_GraphicsCostEstimator*(*)>(_a[1]))); break;
        case 142: _t->pmoc_reverse_setGraphicsCostEstimator(); break;
        case 143: _t->pmoc_reverse_setShaderComposer((*reinterpret_cast< osg::QReflect_ShaderComposer*(*)>(_a[1]))); break;
        case 144: _t->pmoc_reverse_setShaderComposer(); break;
        case 145: _t->setActiveTextureUnit((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 146: _t->setClientActiveTextureUnit((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 147: _t->setContextID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 148: _t->setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 149: _t->setFrameStamp((*reinterpret_cast< osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 150: _t->setGraphicsCostEstimator((*reinterpret_cast< osg::QReflect_GraphicsCostEstimator*(*)>(_a[1]))); break;
        case 151: _t->setMaxBufferObjectPoolSize((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 152: _t->setMaxTexturePoolSize((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 153: _t->setShaderComposer((*reinterpret_cast< osg::QReflect_ShaderComposer*(*)>(_a[1]))); break;
        case 154: _t->setShaderCompositionEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 155: _t->setTimestampBits((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 156: _t->setUseModelViewAndProjectionUniforms((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 157: _t->setUseVertexAttributeAliasing((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 118:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 125:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 128:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_State::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::ActiveTextureUnitChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::ClientActiveTextureUnitChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::ContextIDChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const osg::QReflect_DisplaySettings * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::DisplaySettingsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const osg::QReflect_FrameStamp * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::FrameStampChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const osg::QReflect_GraphicsCostEstimator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::GraphicsCostEstimatorChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::MaxBufferObjectPoolSizeChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::MaxTexturePoolSizeChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const osg::QReflect_ShaderComposer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::ShaderComposerChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::ShaderCompositionEnabledChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::TimestampBitsChanged)) {
                *result = 10;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::UseModelViewAndProjectionUniformsChanged)) {
                *result = 11;
            }
        }
        {
            typedef void (QReflect_State::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_State::UseVertexAttributeAliasingChanged)) {
                *result = 12;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_State *_t = static_cast<QReflect_State *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getShaderCompositionEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getUseModelViewAndProjectionUniforms(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getUseVertexAttributeAliasing(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getTimestampBits(); break;
        case 4: *reinterpret_cast< uint*>(_v) = _t->getActiveTextureUnit(); break;
        case 5: *reinterpret_cast< uint*>(_v) = _t->getClientActiveTextureUnit(); break;
        case 6: *reinterpret_cast< uint*>(_v) = _t->getContextID(); break;
        case 7: *reinterpret_cast< uint*>(_v) = _t->getMaxBufferObjectPoolSize(); break;
        case 8: *reinterpret_cast< uint*>(_v) = _t->getMaxTexturePoolSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_State *_t = static_cast<QReflect_State *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShaderCompositionEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUseModelViewAndProjectionUniforms(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setUseVertexAttributeAliasing(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTimestampBits(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setActiveTextureUnit(*reinterpret_cast< uint*>(_v)); break;
        case 5: _t->setClientActiveTextureUnit(*reinterpret_cast< uint*>(_v)); break;
        case 6: _t->setContextID(*reinterpret_cast< uint*>(_v)); break;
        case 7: _t->setMaxBufferObjectPoolSize(*reinterpret_cast< uint*>(_v)); break;
        case 8: _t->setMaxTexturePoolSize(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_State::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_State.data,
      qt_meta_data_osg__QReflect_State,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_State::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_State::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_State.stringdata0))
        return static_cast<void*>(const_cast< QReflect_State*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_State::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 158)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 158;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 158)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 158;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void osg::QReflect_State::ActiveTextureUnitChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_State::ClientActiveTextureUnitChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_State::ContextIDChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QReflect_State::DisplaySettingsChanged(const osg::QReflect_DisplaySettings * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QReflect_State::FrameStampChanged(const osg::QReflect_FrameStamp * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void osg::QReflect_State::GraphicsCostEstimatorChanged(const osg::QReflect_GraphicsCostEstimator * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void osg::QReflect_State::MaxBufferObjectPoolSizeChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void osg::QReflect_State::MaxTexturePoolSizeChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void osg::QReflect_State::ShaderComposerChanged(const osg::QReflect_ShaderComposer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void osg::QReflect_State::ShaderCompositionEnabledChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void osg::QReflect_State::TimestampBitsChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void osg::QReflect_State::UseModelViewAndProjectionUniformsChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void osg::QReflect_State::UseVertexAttributeAliasingChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
