/****************************************************************************
** Meta object code from reading C++ file 'State_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "State_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'State_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
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
    QByteArrayData data[190];
    char stringdata0[4407];
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
QT_MOC_LITERAL(20, 531, 17), // "getAttribLocation"
QT_MOC_LITERAL(21, 549, 5), // "GLint"
QT_MOC_LITERAL(22, 555, 19), // "getMaxTextureCoords"
QT_MOC_LITERAL(23, 575, 18), // "getMaxTextureUnits"
QT_MOC_LITERAL(24, 594, 18), // "getUniformLocation"
QT_MOC_LITERAL(25, 613, 14), // "applyAttribute"
QT_MOC_LITERAL(26, 628, 29), // "osg::QReflect_StateAttribute*"
QT_MOC_LITERAL(27, 658, 21), // "applyTextureAttribute"
QT_MOC_LITERAL(28, 680, 13), // "checkGLErrors"
QT_MOC_LITERAL(29, 694, 11), // "const char*"
QT_MOC_LITERAL(30, 706, 17), // "getAbortRendering"
QT_MOC_LITERAL(31, 724, 19), // "isFogCoordSupported"
QT_MOC_LITERAL(32, 744, 25), // "isSecondaryColorSupported"
QT_MOC_LITERAL(33, 770, 29), // "isVertexBufferObjectSupported"
QT_MOC_LITERAL(34, 800, 25), // "supportsShaderRequirement"
QT_MOC_LITERAL(35, 826, 10), // "getGpuTime"
QT_MOC_LITERAL(36, 837, 18), // "getDisplaySettings"
QT_MOC_LITERAL(37, 856, 30), // "osg::QReflect_DisplaySettings*"
QT_MOC_LITERAL(38, 887, 13), // "getFrameStamp"
QT_MOC_LITERAL(39, 901, 25), // "osg::QReflect_FrameStamp*"
QT_MOC_LITERAL(40, 927, 24), // "getGraphicsCostEstimator"
QT_MOC_LITERAL(41, 952, 36), // "osg::QReflect_GraphicsCostEst..."
QT_MOC_LITERAL(42, 989, 17), // "getShaderComposer"
QT_MOC_LITERAL(43, 1007, 29), // "osg::QReflect_ShaderComposer*"
QT_MOC_LITERAL(44, 1037, 21), // "getDynamicObjectCount"
QT_MOC_LITERAL(45, 1059, 20), // "getStateSetStackSize"
QT_MOC_LITERAL(46, 1080, 27), // "getShaderCompositionEnabled"
QT_MOC_LITERAL(47, 1108, 36), // "getUseModelViewAndProjectionU..."
QT_MOC_LITERAL(48, 1145, 29), // "getUseVertexAttributeAliasing"
QT_MOC_LITERAL(49, 1175, 16), // "getTimestampBits"
QT_MOC_LITERAL(50, 1192, 20), // "getActiveTextureUnit"
QT_MOC_LITERAL(51, 1213, 26), // "getClientActiveTextureUnit"
QT_MOC_LITERAL(52, 1240, 12), // "getContextID"
QT_MOC_LITERAL(53, 1253, 26), // "getMaxBufferObjectPoolSize"
QT_MOC_LITERAL(54, 1280, 21), // "getMaxTexturePoolSize"
QT_MOC_LITERAL(55, 1302, 29), // "getCurrentElementBufferObject"
QT_MOC_LITERAL(56, 1332, 29), // "osg::QReflect_GLBufferObject*"
QT_MOC_LITERAL(57, 1362, 27), // "getCurrentPixelBufferObject"
QT_MOC_LITERAL(58, 1390, 28), // "getCurrentVertexBufferObject"
QT_MOC_LITERAL(59, 1419, 19), // "getCheckForGLErrors"
QT_MOC_LITERAL(60, 1439, 37), // "osg::QReflect_State::CheckFor..."
QT_MOC_LITERAL(61, 1477, 25), // "getGlobalDefaultAttribute"
QT_MOC_LITERAL(62, 1503, 34), // "osg::QReflect_StateAttribute:..."
QT_MOC_LITERAL(63, 1538, 32), // "getGlobalDefaultTextureAttribute"
QT_MOC_LITERAL(64, 1571, 23), // "getLastAppliedAttribute"
QT_MOC_LITERAL(65, 1595, 30), // "getLastAppliedTextureAttribute"
QT_MOC_LITERAL(66, 1626, 25), // "getModelViewMatrixUniform"
QT_MOC_LITERAL(67, 1652, 22), // "osg::QReflect_Uniform*"
QT_MOC_LITERAL(68, 1675, 35), // "getModelViewProjectionMatrixU..."
QT_MOC_LITERAL(69, 1711, 22), // "getNormalMatrixUniform"
QT_MOC_LITERAL(70, 1734, 26), // "getProjectionMatrixUniform"
QT_MOC_LITERAL(71, 1761, 18), // "getCurrentViewport"
QT_MOC_LITERAL(72, 1780, 23), // "osg::QReflect_Viewport*"
QT_MOC_LITERAL(73, 1804, 5), // "Color"
QT_MOC_LITERAL(74, 1810, 13), // "MultiTexCoord"
QT_MOC_LITERAL(75, 1824, 6), // "Normal"
QT_MOC_LITERAL(76, 1831, 8), // "TexCoord"
QT_MOC_LITERAL(77, 1840, 11), // "VerteAttrib"
QT_MOC_LITERAL(78, 1852, 6), // "Vertex"
QT_MOC_LITERAL(79, 1859, 5), // "apply"
QT_MOC_LITERAL(80, 1865, 23), // "osg::QReflect_StateSet*"
QT_MOC_LITERAL(81, 1889, 32), // "applyDisablingOfVertexAttributes"
QT_MOC_LITERAL(82, 1922, 45), // "applyModelViewAndProjectionUn..."
QT_MOC_LITERAL(83, 1968, 20), // "applyModelViewMatrix"
QT_MOC_LITERAL(84, 1989, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(85, 2012, 25), // "osg::QReflect_RefMatrixd*"
QT_MOC_LITERAL(86, 2038, 21), // "applyProjectionMatrix"
QT_MOC_LITERAL(87, 2060, 22), // "applyShaderComposition"
QT_MOC_LITERAL(88, 2083, 29), // "applyShaderCompositionUniform"
QT_MOC_LITERAL(89, 2113, 23), // "bindElementBufferObject"
QT_MOC_LITERAL(90, 2137, 21), // "bindPixelBufferObject"
QT_MOC_LITERAL(91, 2159, 22), // "bindVertexBufferObject"
QT_MOC_LITERAL(92, 2182, 27), // "decrementDynamicObjectCount"
QT_MOC_LITERAL(93, 2210, 18), // "dirtyAllAttributes"
QT_MOC_LITERAL(94, 2229, 13), // "dirtyAllModes"
QT_MOC_LITERAL(95, 2243, 20), // "dirtyAllVertexArrays"
QT_MOC_LITERAL(96, 2264, 17), // "dirtyColorPointer"
QT_MOC_LITERAL(97, 2282, 20), // "dirtyFogCoordPointer"
QT_MOC_LITERAL(98, 2303, 18), // "dirtyNormalPointer"
QT_MOC_LITERAL(99, 2322, 26), // "dirtySecondaryColorPointer"
QT_MOC_LITERAL(100, 2349, 20), // "dirtyTexCoordPointer"
QT_MOC_LITERAL(101, 2370, 38), // "dirtyTexCoordPointersAboveAnd..."
QT_MOC_LITERAL(102, 2409, 24), // "dirtyVertexAttribPointer"
QT_MOC_LITERAL(103, 2434, 42), // "dirtyVertexAttribPointersAbov..."
QT_MOC_LITERAL(104, 2477, 18), // "dirtyVertexPointer"
QT_MOC_LITERAL(105, 2496, 22), // "disableAllVertexArrays"
QT_MOC_LITERAL(106, 2519, 19), // "disableColorPointer"
QT_MOC_LITERAL(107, 2539, 22), // "disableFogCoordPointer"
QT_MOC_LITERAL(108, 2562, 20), // "disableNormalPointer"
QT_MOC_LITERAL(109, 2583, 28), // "disableSecondaryColorPointer"
QT_MOC_LITERAL(110, 2612, 22), // "disableTexCoordPointer"
QT_MOC_LITERAL(111, 2635, 40), // "disableTexCoordPointersAboveA..."
QT_MOC_LITERAL(112, 2676, 26), // "disableVertexAttribPointer"
QT_MOC_LITERAL(113, 2703, 44), // "disableVertexAttribPointersAb..."
QT_MOC_LITERAL(114, 2748, 20), // "disableVertexPointer"
QT_MOC_LITERAL(115, 2769, 14), // "frameCompleted"
QT_MOC_LITERAL(116, 2784, 20), // "haveAppliedAttribute"
QT_MOC_LITERAL(117, 2805, 27), // "haveAppliedTextureAttribute"
QT_MOC_LITERAL(118, 2833, 24), // "initializeExtensionProcs"
QT_MOC_LITERAL(119, 2858, 14), // "insertStateSet"
QT_MOC_LITERAL(120, 2873, 31), // "lazyDisablingOfVertexAttributes"
QT_MOC_LITERAL(121, 2905, 15), // "popAllStateSets"
QT_MOC_LITERAL(122, 2921, 11), // "popStateSet"
QT_MOC_LITERAL(123, 2933, 22), // "popStateSetStackToSize"
QT_MOC_LITERAL(124, 2956, 12), // "pushStateSet"
QT_MOC_LITERAL(125, 2969, 16), // "releaseGLObjects"
QT_MOC_LITERAL(126, 2986, 14), // "removeStateSet"
QT_MOC_LITERAL(127, 3001, 5), // "reset"
QT_MOC_LITERAL(128, 3007, 25), // "resetVertexAttributeAlias"
QT_MOC_LITERAL(129, 3033, 20), // "setAbortRenderingPtr"
QT_MOC_LITERAL(130, 3054, 5), // "bool*"
QT_MOC_LITERAL(131, 3060, 19), // "setCheckForGLErrors"
QT_MOC_LITERAL(132, 3080, 13), // "setColorAlias"
QT_MOC_LITERAL(133, 3094, 32), // "osg::QReflect_VertexAttribAlias*"
QT_MOC_LITERAL(134, 3127, 15), // "setColorPointer"
QT_MOC_LITERAL(135, 3143, 20), // "osg::QReflect_Array*"
QT_MOC_LITERAL(136, 3164, 29), // "setCurrentElementBufferObject"
QT_MOC_LITERAL(137, 3194, 27), // "setCurrentPixelBufferObject"
QT_MOC_LITERAL(138, 3222, 28), // "setCurrentVertexBufferObject"
QT_MOC_LITERAL(139, 3251, 21), // "setDynamicObjectCount"
QT_MOC_LITERAL(140, 3273, 16), // "setFogCoordAlias"
QT_MOC_LITERAL(141, 3290, 18), // "setFogCoordPointer"
QT_MOC_LITERAL(142, 3309, 25), // "setGlobalDefaultAttribute"
QT_MOC_LITERAL(143, 3335, 32), // "setGlobalDefaultTextureAttribute"
QT_MOC_LITERAL(144, 3368, 20), // "setInitialViewMatrix"
QT_MOC_LITERAL(145, 3389, 14), // "setNormalAlias"
QT_MOC_LITERAL(146, 3404, 16), // "setNormalPointer"
QT_MOC_LITERAL(147, 3421, 22), // "setSecondaryColorAlias"
QT_MOC_LITERAL(148, 3444, 24), // "setSecondaryColorPointer"
QT_MOC_LITERAL(149, 3469, 18), // "setTexCoordPointer"
QT_MOC_LITERAL(150, 3488, 14), // "setVertexAlias"
QT_MOC_LITERAL(151, 3503, 23), // "setVertexAttribIPointer"
QT_MOC_LITERAL(152, 3527, 23), // "setVertexAttribLPointer"
QT_MOC_LITERAL(153, 3551, 22), // "setVertexAttribPointer"
QT_MOC_LITERAL(154, 3574, 16), // "setVertexPointer"
QT_MOC_LITERAL(155, 3591, 25), // "unbindElementBufferObject"
QT_MOC_LITERAL(156, 3617, 23), // "unbindPixelBufferObject"
QT_MOC_LITERAL(157, 3641, 24), // "unbindVertexBufferObject"
QT_MOC_LITERAL(158, 3666, 42), // "updateModelViewAndProjectionM..."
QT_MOC_LITERAL(159, 3709, 31), // "pmoc_reverse_setDisplaySettings"
QT_MOC_LITERAL(160, 3741, 3), // "par"
QT_MOC_LITERAL(161, 3745, 26), // "pmoc_reverse_setFrameStamp"
QT_MOC_LITERAL(162, 3772, 37), // "pmoc_reverse_setGraphicsCostE..."
QT_MOC_LITERAL(163, 3810, 30), // "pmoc_reverse_setShaderComposer"
QT_MOC_LITERAL(164, 3841, 20), // "setActiveTextureUnit"
QT_MOC_LITERAL(165, 3862, 26), // "setClientActiveTextureUnit"
QT_MOC_LITERAL(166, 3889, 12), // "setContextID"
QT_MOC_LITERAL(167, 3902, 18), // "setDisplaySettings"
QT_MOC_LITERAL(168, 3921, 13), // "setFrameStamp"
QT_MOC_LITERAL(169, 3935, 24), // "setGraphicsCostEstimator"
QT_MOC_LITERAL(170, 3960, 26), // "setMaxBufferObjectPoolSize"
QT_MOC_LITERAL(171, 3987, 21), // "setMaxTexturePoolSize"
QT_MOC_LITERAL(172, 4009, 17), // "setShaderComposer"
QT_MOC_LITERAL(173, 4027, 27), // "setShaderCompositionEnabled"
QT_MOC_LITERAL(174, 4055, 16), // "setTimestampBits"
QT_MOC_LITERAL(175, 4072, 36), // "setUseModelViewAndProjectionU..."
QT_MOC_LITERAL(176, 4109, 29), // "setUseVertexAttributeAliasing"
QT_MOC_LITERAL(177, 4139, 24), // "ShaderCompositionEnabled"
QT_MOC_LITERAL(178, 4164, 33), // "UseModelViewAndProjectionUnif..."
QT_MOC_LITERAL(179, 4198, 26), // "UseVertexAttributeAliasing"
QT_MOC_LITERAL(180, 4225, 13), // "TimestampBits"
QT_MOC_LITERAL(181, 4239, 17), // "ActiveTextureUnit"
QT_MOC_LITERAL(182, 4257, 23), // "ClientActiveTextureUnit"
QT_MOC_LITERAL(183, 4281, 9), // "ContextID"
QT_MOC_LITERAL(184, 4291, 23), // "MaxBufferObjectPoolSize"
QT_MOC_LITERAL(185, 4315, 18), // "MaxTexturePoolSize"
QT_MOC_LITERAL(186, 4334, 16), // "CheckForGLErrors"
QT_MOC_LITERAL(187, 4351, 21), // "NEVER_CHECK_GL_ERRORS"
QT_MOC_LITERAL(188, 4373, 14), // "ONCE_PER_FRAME"
QT_MOC_LITERAL(189, 4388, 18) // "ONCE_PER_ATTRIBUTE"

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
    "updateModel\0getAttribLocation\0GLint\0"
    "getMaxTextureCoords\0getMaxTextureUnits\0"
    "getUniformLocation\0applyAttribute\0"
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
    "bindVertexBufferObject\0"
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
     162,   14, // methods
       9, 1256, // properties
       1, 1292, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  824,    2, 0x06 /* Public */,
       3,    1,  827,    2, 0x06 /* Public */,
       4,    1,  830,    2, 0x06 /* Public */,
       5,    1,  833,    2, 0x06 /* Public */,
       7,    1,  836,    2, 0x06 /* Public */,
       9,    1,  839,    2, 0x06 /* Public */,
      11,    1,  842,    2, 0x06 /* Public */,
      12,    1,  845,    2, 0x06 /* Public */,
      13,    1,  848,    2, 0x06 /* Public */,
      15,    1,  851,    2, 0x06 /* Public */,
      16,    1,  854,    2, 0x06 /* Public */,
      17,    1,  857,    2, 0x06 /* Public */,
      18,    1,  860,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  863,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    1,  864,    2, 0x02 /* Public */,
      22,    0,  867,    2, 0x02 /* Public */,
      23,    0,  868,    2, 0x02 /* Public */,
      24,    1,  869,    2, 0x02 /* Public */,
      24,    1,  872,    2, 0x02 /* Public */,
      25,    1,  875,    2, 0x02 /* Public */,
      27,    2,  878,    2, 0x02 /* Public */,
      28,    1,  883,    2, 0x02 /* Public */,
      28,    1,  886,    2, 0x02 /* Public */,
      30,    0,  889,    2, 0x02 /* Public */,
      31,    0,  890,    2, 0x02 /* Public */,
      32,    0,  891,    2, 0x02 /* Public */,
      33,    0,  892,    2, 0x02 /* Public */,
      34,    1,  893,    2, 0x02 /* Public */,
      35,    0,  896,    2, 0x02 /* Public */,
      36,    0,  897,    2, 0x02 /* Public */,
      38,    0,  898,    2, 0x02 /* Public */,
      40,    0,  899,    2, 0x02 /* Public */,
      42,    0,  900,    2, 0x02 /* Public */,
      44,    0,  901,    2, 0x02 /* Public */,
      45,    0,  902,    2, 0x02 /* Public */,
      46,    0,  903,    2, 0x02 /* Public */,
      47,    0,  904,    2, 0x02 /* Public */,
      48,    0,  905,    2, 0x02 /* Public */,
      49,    0,  906,    2, 0x02 /* Public */,
      50,    0,  907,    2, 0x02 /* Public */,
      51,    0,  908,    2, 0x02 /* Public */,
      52,    0,  909,    2, 0x02 /* Public */,
      53,    0,  910,    2, 0x02 /* Public */,
      54,    0,  911,    2, 0x02 /* Public */,
      55,    0,  912,    2, 0x02 /* Public */,
      57,    0,  913,    2, 0x02 /* Public */,
      58,    0,  914,    2, 0x02 /* Public */,
      59,    0,  915,    2, 0x02 /* Public */,
      61,    2,  916,    2, 0x02 /* Public */,
      63,    3,  921,    2, 0x02 /* Public */,
      64,    2,  928,    2, 0x02 /* Public */,
      65,    3,  933,    2, 0x02 /* Public */,
      66,    0,  940,    2, 0x02 /* Public */,
      68,    0,  941,    2, 0x02 /* Public */,
      69,    0,  942,    2, 0x02 /* Public */,
      70,    0,  943,    2, 0x02 /* Public */,
      71,    0,  944,    2, 0x02 /* Public */,
      73,    4,  945,    2, 0x02 /* Public */,
      74,    5,  954,    2, 0x02 /* Public */,
      75,    3,  965,    2, 0x02 /* Public */,
      76,    4,  972,    2, 0x02 /* Public */,
      77,    5,  981,    2, 0x02 /* Public */,
      78,    4,  992,    2, 0x02 /* Public */,
      79,    0, 1001,    2, 0x02 /* Public */,
      79,    1, 1002,    2, 0x02 /* Public */,
      81,    0, 1005,    2, 0x02 /* Public */,
      82,    0, 1006,    2, 0x02 /* Public */,
      83,    1, 1007,    2, 0x02 /* Public */,
      83,    1, 1010,    2, 0x02 /* Public */,
      86,    1, 1013,    2, 0x02 /* Public */,
      87,    0, 1016,    2, 0x02 /* Public */,
      88,    2, 1017,    2, 0x02 /* Public */,
      89,    1, 1022,    2, 0x02 /* Public */,
      90,    1, 1025,    2, 0x02 /* Public */,
      91,    1, 1028,    2, 0x02 /* Public */,
      92,    0, 1031,    2, 0x02 /* Public */,
      93,    0, 1032,    2, 0x02 /* Public */,
      94,    0, 1033,    2, 0x02 /* Public */,
      95,    0, 1034,    2, 0x02 /* Public */,
      96,    0, 1035,    2, 0x02 /* Public */,
      97,    0, 1036,    2, 0x02 /* Public */,
      98,    0, 1037,    2, 0x02 /* Public */,
      99,    0, 1038,    2, 0x02 /* Public */,
     100,    1, 1039,    2, 0x02 /* Public */,
     101,    1, 1042,    2, 0x02 /* Public */,
     102,    1, 1045,    2, 0x02 /* Public */,
     103,    1, 1048,    2, 0x02 /* Public */,
     104,    0, 1051,    2, 0x02 /* Public */,
     105,    0, 1052,    2, 0x02 /* Public */,
     106,    0, 1053,    2, 0x02 /* Public */,
     107,    0, 1054,    2, 0x02 /* Public */,
     108,    0, 1055,    2, 0x02 /* Public */,
     109,    0, 1056,    2, 0x02 /* Public */,
     110,    1, 1057,    2, 0x02 /* Public */,
     111,    1, 1060,    2, 0x02 /* Public */,
     112,    1, 1063,    2, 0x02 /* Public */,
     113,    1, 1066,    2, 0x02 /* Public */,
     114,    0, 1069,    2, 0x02 /* Public */,
     115,    0, 1070,    2, 0x02 /* Public */,
     116,    1, 1071,    2, 0x02 /* Public */,
     116,    2, 1074,    2, 0x02 /* Public */,
     117,    2, 1079,    2, 0x02 /* Public */,
     117,    3, 1084,    2, 0x02 /* Public */,
     118,    0, 1091,    2, 0x02 /* Public */,
     119,    2, 1092,    2, 0x02 /* Public */,
     120,    0, 1097,    2, 0x02 /* Public */,
     121,    0, 1098,    2, 0x02 /* Public */,
     122,    0, 1099,    2, 0x02 /* Public */,
     123,    1, 1100,    2, 0x02 /* Public */,
     124,    1, 1103,    2, 0x02 /* Public */,
     125,    0, 1106,    2, 0x02 /* Public */,
     126,    1, 1107,    2, 0x02 /* Public */,
     127,    0, 1110,    2, 0x02 /* Public */,
     128,    2, 1111,    2, 0x02 /* Public */,
     129,    1, 1116,    2, 0x02 /* Public */,
     131,    1, 1119,    2, 0x02 /* Public */,
     132,    1, 1122,    2, 0x02 /* Public */,
     134,    1, 1125,    2, 0x02 /* Public */,
     136,    1, 1128,    2, 0x02 /* Public */,
     137,    1, 1131,    2, 0x02 /* Public */,
     138,    1, 1134,    2, 0x02 /* Public */,
     139,    2, 1137,    2, 0x02 /* Public */,
     140,    1, 1142,    2, 0x02 /* Public */,
     141,    1, 1145,    2, 0x02 /* Public */,
     142,    1, 1148,    2, 0x02 /* Public */,
     143,    2, 1151,    2, 0x02 /* Public */,
     144,    1, 1156,    2, 0x02 /* Public */,
     145,    1, 1159,    2, 0x02 /* Public */,
     146,    1, 1162,    2, 0x02 /* Public */,
     147,    1, 1165,    2, 0x02 /* Public */,
     148,    1, 1168,    2, 0x02 /* Public */,
     149,    2, 1171,    2, 0x02 /* Public */,
     150,    1, 1176,    2, 0x02 /* Public */,
     151,    2, 1179,    2, 0x02 /* Public */,
     152,    2, 1184,    2, 0x02 /* Public */,
     153,    2, 1189,    2, 0x02 /* Public */,
     154,    1, 1194,    2, 0x02 /* Public */,
     155,    0, 1197,    2, 0x02 /* Public */,
     156,    0, 1198,    2, 0x02 /* Public */,
     157,    0, 1199,    2, 0x02 /* Public */,
     158,    0, 1200,    2, 0x02 /* Public */,
     159,    1, 1201,    2, 0x02 /* Public */,
     159,    0, 1204,    2, 0x22 /* Public | MethodCloned */,
     161,    1, 1205,    2, 0x02 /* Public */,
     161,    0, 1208,    2, 0x22 /* Public | MethodCloned */,
     162,    1, 1209,    2, 0x02 /* Public */,
     162,    0, 1212,    2, 0x22 /* Public | MethodCloned */,
     163,    1, 1213,    2, 0x02 /* Public */,
     163,    0, 1216,    2, 0x22 /* Public | MethodCloned */,
     164,    1, 1217,    2, 0x02 /* Public */,
     165,    1, 1220,    2, 0x02 /* Public */,
     166,    1, 1223,    2, 0x02 /* Public */,
     167,    1, 1226,    2, 0x02 /* Public */,
     168,    1, 1229,    2, 0x02 /* Public */,
     169,    1, 1232,    2, 0x02 /* Public */,
     170,    1, 1235,    2, 0x02 /* Public */,
     171,    1, 1238,    2, 0x02 /* Public */,
     172,    1, 1241,    2, 0x02 /* Public */,
     173,    1, 1244,    2, 0x02 /* Public */,
     174,    1, 1247,    2, 0x02 /* Public */,
     175,    1, 1250,    2, 0x02 /* Public */,
     176,    1, 1253,    2, 0x02 /* Public */,

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
    0x80000000 | 21, QMetaType::QString,    2,
    0x80000000 | 21,
    0x80000000 | 21,
    0x80000000 | 21, QMetaType::UInt,    2,
    0x80000000 | 21, QMetaType::QString,    2,
    QMetaType::Bool, 0x80000000 | 26,    2,
    QMetaType::Bool, QMetaType::UInt, 0x80000000 | 26,    2,    2,
    QMetaType::Bool, 0x80000000 | 29,    2,
    QMetaType::Bool, 0x80000000 | 26,    2,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Double,
    0x80000000 | 37,
    0x80000000 | 39,
    0x80000000 | 41,
    0x80000000 | 43,
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
    0x80000000 | 56,
    0x80000000 | 56,
    0x80000000 | 56,
    0x80000000 | 60,
    0x80000000 | 26, 0x80000000 | 62, QMetaType::UInt,    2,    2,
    0x80000000 | 26, QMetaType::UInt, 0x80000000 | 62, QMetaType::UInt,    2,    2,    2,
    0x80000000 | 26, 0x80000000 | 62, QMetaType::UInt,    2,    2,
    0x80000000 | 26, QMetaType::UInt, 0x80000000 | 62, QMetaType::UInt,    2,    2,    2,
    0x80000000 | 67,
    0x80000000 | 67,
    0x80000000 | 67,
    0x80000000 | 67,
    0x80000000 | 72,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 84,    2,
    QMetaType::Void, 0x80000000 | 85,    2,
    QMetaType::Void, 0x80000000 | 85,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 67, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void, 0x80000000 | 56,    2,
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
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, 0x80000000 | 62, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 26,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 62, QMetaType::UInt,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 80,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 130,    2,
    QMetaType::Void, 0x80000000 | 60,    2,
    QMetaType::Void, 0x80000000 | 133,    2,
    QMetaType::Void, 0x80000000 | 135,    2,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void, 0x80000000 | 56,    2,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 133,    2,
    QMetaType::Void, 0x80000000 | 135,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 26,    2,    2,
    QMetaType::Void, 0x80000000 | 85,    2,
    QMetaType::Void, 0x80000000 | 133,    2,
    QMetaType::Void, 0x80000000 | 135,    2,
    QMetaType::Void, 0x80000000 | 133,    2,
    QMetaType::Void, 0x80000000 | 135,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 135,    2,    2,
    QMetaType::Void, 0x80000000 | 133,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 135,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 135,    2,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 135,    2,    2,
    QMetaType::Void, 0x80000000 | 135,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,  160,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,  160,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,  160,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,  160,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 37,  160,
    QMetaType::Void, 0x80000000 | 39,  160,
    QMetaType::Void, 0x80000000 | 41,  160,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 43,  160,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
     177, QMetaType::Bool, 0x00495103,
     178, QMetaType::Bool, 0x00495103,
     179, QMetaType::Bool, 0x00495103,
     180, QMetaType::Int, 0x00495103,
     181, QMetaType::UInt, 0x00495103,
     182, QMetaType::UInt, 0x00495103,
     183, QMetaType::UInt, 0x00495103,
     184, QMetaType::UInt, 0x00495103,
     185, QMetaType::UInt, 0x00495103,

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
     186, 0x0,    3, 1296,

 // enum data: key, value
     187, uint(osg::QReflect_State::NEVER_CHECK_GL_ERRORS),
     188, uint(osg::QReflect_State::ONCE_PER_FRAME),
     189, uint(osg::QReflect_State::ONCE_PER_ATTRIBUTE),

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
        case 14: { GLint _r = _t->getAttribLocation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 15: { GLint _r = _t->getMaxTextureCoords();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 16: { GLint _r = _t->getMaxTextureUnits();
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 17: { GLint _r = _t->getUniformLocation((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 18: { GLint _r = _t->getUniformLocation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLint*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->applyAttribute((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->applyTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->checkGLErrors((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->checkGLErrors((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->getAbortRendering();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isFogCoordSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isSecondaryColorSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isVertexBufferObjectSupported();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->supportsShaderRequirement((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { double _r = _t->getGpuTime();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 29: { osg::QReflect_DisplaySettings* _r = _t->getDisplaySettings();
            if (_a[0]) *reinterpret_cast< osg::QReflect_DisplaySettings**>(_a[0]) = _r; }  break;
        case 30: { osg::QReflect_FrameStamp* _r = _t->getFrameStamp();
            if (_a[0]) *reinterpret_cast< osg::QReflect_FrameStamp**>(_a[0]) = _r; }  break;
        case 31: { osg::QReflect_GraphicsCostEstimator* _r = _t->getGraphicsCostEstimator();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsCostEstimator**>(_a[0]) = _r; }  break;
        case 32: { osg::QReflect_ShaderComposer* _r = _t->getShaderComposer();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ShaderComposer**>(_a[0]) = _r; }  break;
        case 33: { uint _r = _t->getDynamicObjectCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 34: { uint _r = _t->getStateSetStackSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->getShaderCompositionEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->getUseModelViewAndProjectionUniforms();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->getUseVertexAttributeAliasing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->getTimestampBits();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { uint _r = _t->getActiveTextureUnit();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 40: { uint _r = _t->getClientActiveTextureUnit();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 41: { uint _r = _t->getContextID();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 42: { uint _r = _t->getMaxBufferObjectPoolSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 43: { uint _r = _t->getMaxTexturePoolSize();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 44: { osg::QReflect_GLBufferObject* _r = _t->getCurrentElementBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBufferObject**>(_a[0]) = _r; }  break;
        case 45: { osg::QReflect_GLBufferObject* _r = _t->getCurrentPixelBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBufferObject**>(_a[0]) = _r; }  break;
        case 46: { osg::QReflect_GLBufferObject* _r = _t->getCurrentVertexBufferObject();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GLBufferObject**>(_a[0]) = _r; }  break;
        case 47: { osg::QReflect_State::CheckForGLErrors _r = _t->getCheckForGLErrors();
            if (_a[0]) *reinterpret_cast< osg::QReflect_State::CheckForGLErrors*>(_a[0]) = _r; }  break;
        case 48: { osg::QReflect_StateAttribute* _r = _t->getGlobalDefaultAttribute((*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 49: { osg::QReflect_StateAttribute* _r = _t->getGlobalDefaultTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 50: { osg::QReflect_StateAttribute* _r = _t->getLastAppliedAttribute((*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 51: { osg::QReflect_StateAttribute* _r = _t->getLastAppliedTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< osg::QReflect_StateAttribute**>(_a[0]) = _r; }  break;
        case 52: { osg::QReflect_Uniform* _r = _t->getModelViewMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 53: { osg::QReflect_Uniform* _r = _t->getModelViewProjectionMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 54: { osg::QReflect_Uniform* _r = _t->getNormalMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 55: { osg::QReflect_Uniform* _r = _t->getProjectionMatrixUniform();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Uniform**>(_a[0]) = _r; }  break;
        case 56: { osg::QReflect_Viewport* _r = _t->getCurrentViewport();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Viewport**>(_a[0]) = _r; }  break;
        case 57: _t->Color((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 58: _t->MultiTexCoord((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 59: _t->Normal((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 60: _t->TexCoord((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 61: _t->VerteAttrib((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 62: _t->Vertex((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 63: _t->apply(); break;
        case 64: _t->apply((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 65: _t->applyDisablingOfVertexAttributes(); break;
        case 66: _t->applyModelViewAndProjectionUniformsIfRequired(); break;
        case 67: _t->applyModelViewMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 68: _t->applyModelViewMatrix((*reinterpret_cast< osg::QReflect_RefMatrixd*(*)>(_a[1]))); break;
        case 69: _t->applyProjectionMatrix((*reinterpret_cast< osg::QReflect_RefMatrixd*(*)>(_a[1]))); break;
        case 70: _t->applyShaderComposition(); break;
        case 71: _t->applyShaderCompositionUniform((*reinterpret_cast< osg::QReflect_Uniform*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 72: _t->bindElementBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 73: _t->bindPixelBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 74: _t->bindVertexBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 75: _t->decrementDynamicObjectCount(); break;
        case 76: _t->dirtyAllAttributes(); break;
        case 77: _t->dirtyAllModes(); break;
        case 78: _t->dirtyAllVertexArrays(); break;
        case 79: _t->dirtyColorPointer(); break;
        case 80: _t->dirtyFogCoordPointer(); break;
        case 81: _t->dirtyNormalPointer(); break;
        case 82: _t->dirtySecondaryColorPointer(); break;
        case 83: _t->dirtyTexCoordPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 84: _t->dirtyTexCoordPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 85: _t->dirtyVertexAttribPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 86: _t->dirtyVertexAttribPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 87: _t->dirtyVertexPointer(); break;
        case 88: _t->disableAllVertexArrays(); break;
        case 89: _t->disableColorPointer(); break;
        case 90: _t->disableFogCoordPointer(); break;
        case 91: _t->disableNormalPointer(); break;
        case 92: _t->disableSecondaryColorPointer(); break;
        case 93: _t->disableTexCoordPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 94: _t->disableTexCoordPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 95: _t->disableVertexAttribPointer((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 96: _t->disableVertexAttribPointersAboveAndIncluding((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 97: _t->disableVertexPointer(); break;
        case 98: _t->frameCompleted(); break;
        case 99: _t->haveAppliedAttribute((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1]))); break;
        case 100: _t->haveAppliedAttribute((*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 101: _t->haveAppliedTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[2]))); break;
        case 102: _t->haveAppliedTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute::Type(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 103: _t->initializeExtensionProcs(); break;
        case 104: _t->insertStateSet((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[2]))); break;
        case 105: _t->lazyDisablingOfVertexAttributes(); break;
        case 106: _t->popAllStateSets(); break;
        case 107: _t->popStateSet(); break;
        case 108: _t->popStateSetStackToSize((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 109: _t->pushStateSet((*reinterpret_cast< osg::QReflect_StateSet*(*)>(_a[1]))); break;
        case 110: _t->releaseGLObjects(); break;
        case 111: _t->removeStateSet((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 112: _t->reset(); break;
        case 113: _t->resetVertexAttributeAlias((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 114: _t->setAbortRenderingPtr((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 115: _t->setCheckForGLErrors((*reinterpret_cast< osg::QReflect_State::CheckForGLErrors(*)>(_a[1]))); break;
        case 116: _t->setColorAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 117: _t->setColorPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 118: _t->setCurrentElementBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 119: _t->setCurrentPixelBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 120: _t->setCurrentVertexBufferObject((*reinterpret_cast< osg::QReflect_GLBufferObject*(*)>(_a[1]))); break;
        case 121: _t->setDynamicObjectCount((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 122: _t->setFogCoordAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 123: _t->setFogCoordPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 124: _t->setGlobalDefaultAttribute((*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[1]))); break;
        case 125: _t->setGlobalDefaultTextureAttribute((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_StateAttribute*(*)>(_a[2]))); break;
        case 126: _t->setInitialViewMatrix((*reinterpret_cast< osg::QReflect_RefMatrixd*(*)>(_a[1]))); break;
        case 127: _t->setNormalAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 128: _t->setNormalPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 129: _t->setSecondaryColorAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 130: _t->setSecondaryColorPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 131: _t->setTexCoordPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 132: _t->setVertexAlias((*reinterpret_cast< osg::QReflect_VertexAttribAlias*(*)>(_a[1]))); break;
        case 133: _t->setVertexAttribIPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 134: _t->setVertexAttribLPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 135: _t->setVertexAttribPointer((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Array*(*)>(_a[2]))); break;
        case 136: _t->setVertexPointer((*reinterpret_cast< osg::QReflect_Array*(*)>(_a[1]))); break;
        case 137: _t->unbindElementBufferObject(); break;
        case 138: _t->unbindPixelBufferObject(); break;
        case 139: _t->unbindVertexBufferObject(); break;
        case 140: _t->updateModelViewAndProjectionMatrixUniforms(); break;
        case 141: _t->pmoc_reverse_setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 142: _t->pmoc_reverse_setDisplaySettings(); break;
        case 143: _t->pmoc_reverse_setFrameStamp((*reinterpret_cast< osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 144: _t->pmoc_reverse_setFrameStamp(); break;
        case 145: _t->pmoc_reverse_setGraphicsCostEstimator((*reinterpret_cast< osg::QReflect_GraphicsCostEstimator*(*)>(_a[1]))); break;
        case 146: _t->pmoc_reverse_setGraphicsCostEstimator(); break;
        case 147: _t->pmoc_reverse_setShaderComposer((*reinterpret_cast< osg::QReflect_ShaderComposer*(*)>(_a[1]))); break;
        case 148: _t->pmoc_reverse_setShaderComposer(); break;
        case 149: _t->setActiveTextureUnit((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 150: _t->setClientActiveTextureUnit((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 151: _t->setContextID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 152: _t->setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 153: _t->setFrameStamp((*reinterpret_cast< osg::QReflect_FrameStamp*(*)>(_a[1]))); break;
        case 154: _t->setGraphicsCostEstimator((*reinterpret_cast< osg::QReflect_GraphicsCostEstimator*(*)>(_a[1]))); break;
        case 155: _t->setMaxBufferObjectPoolSize((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 156: _t->setMaxTexturePoolSize((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 157: _t->setShaderComposer((*reinterpret_cast< osg::QReflect_ShaderComposer*(*)>(_a[1]))); break;
        case 158: _t->setShaderCompositionEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 159: _t->setTimestampBits((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 160: _t->setUseModelViewAndProjectionUniforms((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 161: _t->setUseVertexAttributeAliasing((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 122:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 129:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< osg::QReflect_VertexAttribAlias* >(); break;
            }
            break;
        case 132:
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
        if (_id < 162)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 162;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 162)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 162;
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
