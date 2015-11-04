/****************************************************************************
** Meta object code from reading C++ file 'Camera_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Camera_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_osg__QReflect_CameraRenderOrderSortOp_t {
    QByteArrayData data[3];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_CameraRenderOrderSortOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_CameraRenderOrderSortOp_t qt_meta_stringdata_osg__QReflect_CameraRenderOrderSortOp = {
    {
QT_MOC_LITERAL(0, 0, 37), // "osg::QReflect_CameraRenderOrd..."
QT_MOC_LITERAL(1, 38, 11), // "updateModel"
QT_MOC_LITERAL(2, 50, 0) // ""

    },
    "osg::QReflect_CameraRenderOrderSortOp\0"
    "updateModel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_CameraRenderOrderSortOp[] = {

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

void osg::QReflect_CameraRenderOrderSortOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_CameraRenderOrderSortOp *_t = static_cast<QReflect_CameraRenderOrderSortOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateModel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject osg::QReflect_CameraRenderOrderSortOp::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_CameraRenderOrderSortOp.data,
      qt_meta_data_osg__QReflect_CameraRenderOrderSortOp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_CameraRenderOrderSortOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_CameraRenderOrderSortOp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_CameraRenderOrderSortOp.stringdata0))
        return static_cast<void*>(const_cast< QReflect_CameraRenderOrderSortOp*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_CameraRenderOrderSortOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_osg__QReflect_Camera_t {
    QByteArrayData data[159];
    char stringdata0[3286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_osg__QReflect_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_osg__QReflect_Camera_t qt_meta_stringdata_osg__QReflect_Camera = {
    {
QT_MOC_LITERAL(0, 0, 20), // "osg::QReflect_Camera"
QT_MOC_LITERAL(1, 21, 22), // "AllowEventFocusChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 33), // "AttachmentMapModifiedCountCha..."
QT_MOC_LITERAL(4, 79, 19), // "CameraThreadChanged"
QT_MOC_LITERAL(5, 99, 36), // "const osg::QReflect_Operation..."
QT_MOC_LITERAL(6, 136, 17), // "ClearDepthChanged"
QT_MOC_LITERAL(7, 154, 19), // "ClearStencilChanged"
QT_MOC_LITERAL(8, 174, 22), // "DisplaySettingsChanged"
QT_MOC_LITERAL(9, 197, 36), // "const osg::QReflect_DisplaySe..."
QT_MOC_LITERAL(10, 234, 22), // "GraphicsContextChanged"
QT_MOC_LITERAL(11, 257, 36), // "const osg::QReflect_GraphicsC..."
QT_MOC_LITERAL(12, 294, 15), // "RendererChanged"
QT_MOC_LITERAL(13, 310, 38), // "const osg::QReflect_GraphicsO..."
QT_MOC_LITERAL(14, 349, 21), // "RenderingCacheChanged"
QT_MOC_LITERAL(15, 371, 27), // "const osg::QReflect_Object*"
QT_MOC_LITERAL(16, 399, 12), // "StatsChanged"
QT_MOC_LITERAL(17, 412, 26), // "const osg::QReflect_Stats*"
QT_MOC_LITERAL(18, 439, 11), // "updateModel"
QT_MOC_LITERAL(19, 451, 23), // "isRenderToTextureCamera"
QT_MOC_LITERAL(20, 475, 37), // "getImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(21, 513, 38), // "getImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(22, 552, 17), // "getRenderOrderNum"
QT_MOC_LITERAL(23, 570, 18), // "getDisplaySettings"
QT_MOC_LITERAL(24, 589, 30), // "osg::QReflect_DisplaySettings*"
QT_MOC_LITERAL(25, 620, 18), // "getGraphicsContext"
QT_MOC_LITERAL(26, 639, 30), // "osg::QReflect_GraphicsContext*"
QT_MOC_LITERAL(27, 670, 11), // "getRenderer"
QT_MOC_LITERAL(28, 682, 32), // "osg::QReflect_GraphicsOperation*"
QT_MOC_LITERAL(29, 715, 17), // "getRenderingCache"
QT_MOC_LITERAL(30, 733, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(31, 755, 15), // "getCameraThread"
QT_MOC_LITERAL(32, 771, 30), // "osg::QReflect_OperationThread*"
QT_MOC_LITERAL(33, 802, 8), // "getStats"
QT_MOC_LITERAL(34, 811, 20), // "osg::QReflect_Stats*"
QT_MOC_LITERAL(35, 832, 18), // "getAllowEventFocus"
QT_MOC_LITERAL(36, 851, 13), // "getClearDepth"
QT_MOC_LITERAL(37, 865, 15), // "getClearStencil"
QT_MOC_LITERAL(38, 881, 29), // "getAttachmentMapModifiedCount"
QT_MOC_LITERAL(39, 911, 8), // "asCamera"
QT_MOC_LITERAL(40, 920, 21), // "osg::QReflect_Camera*"
QT_MOC_LITERAL(41, 942, 25), // "getProjectionResizePolicy"
QT_MOC_LITERAL(42, 968, 44), // "osg::QReflect_Camera::Project..."
QT_MOC_LITERAL(43, 1013, 14), // "getRenderOrder"
QT_MOC_LITERAL(44, 1028, 33), // "osg::QReflect_Camera::RenderO..."
QT_MOC_LITERAL(45, 1062, 23), // "getRenderTargetFallback"
QT_MOC_LITERAL(46, 1086, 48), // "osg::QReflect_Camera::RenderT..."
QT_MOC_LITERAL(47, 1135, 29), // "getRenderTargetImplementation"
QT_MOC_LITERAL(48, 1165, 17), // "getTransformOrder"
QT_MOC_LITERAL(49, 1183, 36), // "osg::QReflect_Camera::Transfo..."
QT_MOC_LITERAL(50, 1220, 12), // "getColorMask"
QT_MOC_LITERAL(51, 1233, 24), // "osg::QReflect_ColorMask*"
QT_MOC_LITERAL(52, 1258, 11), // "getViewport"
QT_MOC_LITERAL(53, 1270, 23), // "osg::QReflect_Viewport*"
QT_MOC_LITERAL(54, 1294, 6), // "attach"
QT_MOC_LITERAL(55, 1301, 37), // "osg::QReflect_Camera::BufferC..."
QT_MOC_LITERAL(56, 1339, 20), // "osg::QReflect_Image*"
QT_MOC_LITERAL(57, 1360, 22), // "osg::QReflect_Texture*"
QT_MOC_LITERAL(58, 1383, 18), // "createCameraThread"
QT_MOC_LITERAL(59, 1402, 6), // "detach"
QT_MOC_LITERAL(60, 1409, 18), // "dirtyAttachmentMap"
QT_MOC_LITERAL(61, 1428, 19), // "inheritCullSettings"
QT_MOC_LITERAL(62, 1448, 27), // "osg::QReflect_CullSettings*"
QT_MOC_LITERAL(63, 1476, 16), // "releaseGLObjects"
QT_MOC_LITERAL(64, 1493, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(65, 1514, 6), // "resize"
QT_MOC_LITERAL(66, 1521, 17), // "resizeAttachments"
QT_MOC_LITERAL(67, 1539, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(68, 1561, 13), // "setClearAccum"
QT_MOC_LITERAL(69, 1575, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(70, 1596, 13), // "setClearColor"
QT_MOC_LITERAL(71, 1610, 12), // "setColorMask"
QT_MOC_LITERAL(72, 1623, 31), // "setImplicitBufferAttachmentMask"
QT_MOC_LITERAL(73, 1655, 37), // "setImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(74, 1693, 38), // "setImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(75, 1732, 19), // "setProjectionMatrix"
QT_MOC_LITERAL(76, 1752, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(77, 1775, 22), // "osg::QReflect_Matrixf*"
QT_MOC_LITERAL(78, 1798, 28), // "setProjectionMatrixAsFrustum"
QT_MOC_LITERAL(79, 1827, 26), // "setProjectionMatrixAsOrtho"
QT_MOC_LITERAL(80, 1854, 28), // "setProjectionMatrixAsOrtho2D"
QT_MOC_LITERAL(81, 1883, 32), // "setProjectionMatrixAsPerspective"
QT_MOC_LITERAL(82, 1916, 25), // "setProjectionResizePolicy"
QT_MOC_LITERAL(83, 1942, 14), // "setRenderOrder"
QT_MOC_LITERAL(84, 1957, 29), // "setRenderTargetImplementation"
QT_MOC_LITERAL(85, 1987, 17), // "setTransformOrder"
QT_MOC_LITERAL(86, 2005, 13), // "setViewMatrix"
QT_MOC_LITERAL(87, 2019, 21), // "setViewMatrixAsLookAt"
QT_MOC_LITERAL(88, 2041, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(89, 2062, 11), // "setViewport"
QT_MOC_LITERAL(90, 2074, 28), // "pmoc_reverse_setCameraThread"
QT_MOC_LITERAL(91, 2103, 3), // "par"
QT_MOC_LITERAL(92, 2107, 31), // "pmoc_reverse_setDisplaySettings"
QT_MOC_LITERAL(93, 2139, 31), // "pmoc_reverse_setGraphicsContext"
QT_MOC_LITERAL(94, 2171, 24), // "pmoc_reverse_setRenderer"
QT_MOC_LITERAL(95, 2196, 30), // "pmoc_reverse_setRenderingCache"
QT_MOC_LITERAL(96, 2227, 21), // "pmoc_reverse_setStats"
QT_MOC_LITERAL(97, 2249, 18), // "setAllowEventFocus"
QT_MOC_LITERAL(98, 2268, 29), // "setAttachmentMapModifiedCount"
QT_MOC_LITERAL(99, 2298, 15), // "setCameraThread"
QT_MOC_LITERAL(100, 2314, 13), // "setClearDepth"
QT_MOC_LITERAL(101, 2328, 15), // "setClearStencil"
QT_MOC_LITERAL(102, 2344, 18), // "setDisplaySettings"
QT_MOC_LITERAL(103, 2363, 18), // "setGraphicsContext"
QT_MOC_LITERAL(104, 2382, 11), // "setRenderer"
QT_MOC_LITERAL(105, 2394, 17), // "setRenderingCache"
QT_MOC_LITERAL(106, 2412, 8), // "setStats"
QT_MOC_LITERAL(107, 2421, 15), // "AllowEventFocus"
QT_MOC_LITERAL(108, 2437, 10), // "ClearDepth"
QT_MOC_LITERAL(109, 2448, 12), // "ClearStencil"
QT_MOC_LITERAL(110, 2461, 26), // "AttachmentMapModifiedCount"
QT_MOC_LITERAL(111, 2488, 15), // "BufferComponent"
QT_MOC_LITERAL(112, 2504, 12), // "DEPTH_BUFFER"
QT_MOC_LITERAL(113, 2517, 14), // "STENCIL_BUFFER"
QT_MOC_LITERAL(114, 2532, 27), // "PACKED_DEPTH_STENCIL_BUFFER"
QT_MOC_LITERAL(115, 2560, 12), // "COLOR_BUFFER"
QT_MOC_LITERAL(116, 2573, 13), // "COLOR_BUFFER0"
QT_MOC_LITERAL(117, 2587, 13), // "COLOR_BUFFER1"
QT_MOC_LITERAL(118, 2601, 13), // "COLOR_BUFFER2"
QT_MOC_LITERAL(119, 2615, 13), // "COLOR_BUFFER3"
QT_MOC_LITERAL(120, 2629, 13), // "COLOR_BUFFER4"
QT_MOC_LITERAL(121, 2643, 13), // "COLOR_BUFFER5"
QT_MOC_LITERAL(122, 2657, 13), // "COLOR_BUFFER6"
QT_MOC_LITERAL(123, 2671, 13), // "COLOR_BUFFER7"
QT_MOC_LITERAL(124, 2685, 13), // "COLOR_BUFFER8"
QT_MOC_LITERAL(125, 2699, 13), // "COLOR_BUFFER9"
QT_MOC_LITERAL(126, 2713, 14), // "COLOR_BUFFER10"
QT_MOC_LITERAL(127, 2728, 14), // "COLOR_BUFFER11"
QT_MOC_LITERAL(128, 2743, 14), // "COLOR_BUFFER12"
QT_MOC_LITERAL(129, 2758, 14), // "COLOR_BUFFER13"
QT_MOC_LITERAL(130, 2773, 14), // "COLOR_BUFFER14"
QT_MOC_LITERAL(131, 2788, 14), // "COLOR_BUFFER15"
QT_MOC_LITERAL(132, 2803, 24), // "ImplicitBufferAttachment"
QT_MOC_LITERAL(133, 2828, 32), // "IMPLICIT_DEPTH_BUFFER_ATTACHMENT"
QT_MOC_LITERAL(134, 2861, 34), // "IMPLICIT_STENCIL_BUFFER_ATTAC..."
QT_MOC_LITERAL(135, 2896, 32), // "IMPLICIT_COLOR_BUFFER_ATTACHMENT"
QT_MOC_LITERAL(136, 2929, 25), // "USE_DISPLAY_SETTINGS_MASK"
QT_MOC_LITERAL(137, 2955, 22), // "ProjectionResizePolicy"
QT_MOC_LITERAL(138, 2978, 5), // "FIXED"
QT_MOC_LITERAL(139, 2984, 10), // "HORIZONTAL"
QT_MOC_LITERAL(140, 2995, 8), // "VERTICAL"
QT_MOC_LITERAL(141, 3004, 11), // "RenderOrder"
QT_MOC_LITERAL(142, 3016, 10), // "PRE_RENDER"
QT_MOC_LITERAL(143, 3027, 13), // "NESTED_RENDER"
QT_MOC_LITERAL(144, 3041, 11), // "POST_RENDER"
QT_MOC_LITERAL(145, 3053, 26), // "RenderTargetImplementation"
QT_MOC_LITERAL(146, 3080, 19), // "FRAME_BUFFER_OBJECT"
QT_MOC_LITERAL(147, 3100, 16), // "PIXEL_BUFFER_RTT"
QT_MOC_LITERAL(148, 3117, 12), // "PIXEL_BUFFER"
QT_MOC_LITERAL(149, 3130, 12), // "FRAME_BUFFER"
QT_MOC_LITERAL(150, 3143, 15), // "SEPARATE_WINDOW"
QT_MOC_LITERAL(151, 3159, 10), // "ResizeMask"
QT_MOC_LITERAL(152, 3170, 15), // "RESIZE_VIEWPORT"
QT_MOC_LITERAL(153, 3186, 18), // "RESIZE_ATTACHMENTS"
QT_MOC_LITERAL(154, 3205, 23), // "RESIZE_PROJECTIONMATRIX"
QT_MOC_LITERAL(155, 3229, 14), // "RESIZE_DEFAULT"
QT_MOC_LITERAL(156, 3244, 14), // "TransformOrder"
QT_MOC_LITERAL(157, 3259, 12), // "PRE_MULTIPLY"
QT_MOC_LITERAL(158, 3272, 13) // "POST_MULTIPLY"

    },
    "osg::QReflect_Camera\0AllowEventFocusChanged\0"
    "\0AttachmentMapModifiedCountChanged\0"
    "CameraThreadChanged\0"
    "const osg::QReflect_OperationThread*\0"
    "ClearDepthChanged\0ClearStencilChanged\0"
    "DisplaySettingsChanged\0"
    "const osg::QReflect_DisplaySettings*\0"
    "GraphicsContextChanged\0"
    "const osg::QReflect_GraphicsContext*\0"
    "RendererChanged\0const osg::QReflect_GraphicsOperation*\0"
    "RenderingCacheChanged\0const osg::QReflect_Object*\0"
    "StatsChanged\0const osg::QReflect_Stats*\0"
    "updateModel\0isRenderToTextureCamera\0"
    "getImplicitBufferAttachmentRenderMask\0"
    "getImplicitBufferAttachmentResolveMask\0"
    "getRenderOrderNum\0getDisplaySettings\0"
    "osg::QReflect_DisplaySettings*\0"
    "getGraphicsContext\0osg::QReflect_GraphicsContext*\0"
    "getRenderer\0osg::QReflect_GraphicsOperation*\0"
    "getRenderingCache\0osg::QReflect_Object*\0"
    "getCameraThread\0osg::QReflect_OperationThread*\0"
    "getStats\0osg::QReflect_Stats*\0"
    "getAllowEventFocus\0getClearDepth\0"
    "getClearStencil\0getAttachmentMapModifiedCount\0"
    "asCamera\0osg::QReflect_Camera*\0"
    "getProjectionResizePolicy\0"
    "osg::QReflect_Camera::ProjectionResizePolicy\0"
    "getRenderOrder\0osg::QReflect_Camera::RenderOrder\0"
    "getRenderTargetFallback\0"
    "osg::QReflect_Camera::RenderTargetImplementation\0"
    "getRenderTargetImplementation\0"
    "getTransformOrder\0"
    "osg::QReflect_Camera::TransformOrder\0"
    "getColorMask\0osg::QReflect_ColorMask*\0"
    "getViewport\0osg::QReflect_Viewport*\0"
    "attach\0osg::QReflect_Camera::BufferComponent\0"
    "osg::QReflect_Image*\0osg::QReflect_Texture*\0"
    "createCameraThread\0detach\0dirtyAttachmentMap\0"
    "inheritCullSettings\0osg::QReflect_CullSettings*\0"
    "releaseGLObjects\0osg::QReflect_State*\0"
    "resize\0resizeAttachments\0resizeGLObjectBuffers\0"
    "setClearAccum\0osg::QReflect_Vec4f*\0"
    "setClearColor\0setColorMask\0"
    "setImplicitBufferAttachmentMask\0"
    "setImplicitBufferAttachmentRenderMask\0"
    "setImplicitBufferAttachmentResolveMask\0"
    "setProjectionMatrix\0osg::QReflect_Matrixd*\0"
    "osg::QReflect_Matrixf*\0"
    "setProjectionMatrixAsFrustum\0"
    "setProjectionMatrixAsOrtho\0"
    "setProjectionMatrixAsOrtho2D\0"
    "setProjectionMatrixAsPerspective\0"
    "setProjectionResizePolicy\0setRenderOrder\0"
    "setRenderTargetImplementation\0"
    "setTransformOrder\0setViewMatrix\0"
    "setViewMatrixAsLookAt\0osg::QReflect_Vec3d*\0"
    "setViewport\0pmoc_reverse_setCameraThread\0"
    "par\0pmoc_reverse_setDisplaySettings\0"
    "pmoc_reverse_setGraphicsContext\0"
    "pmoc_reverse_setRenderer\0"
    "pmoc_reverse_setRenderingCache\0"
    "pmoc_reverse_setStats\0setAllowEventFocus\0"
    "setAttachmentMapModifiedCount\0"
    "setCameraThread\0setClearDepth\0"
    "setClearStencil\0setDisplaySettings\0"
    "setGraphicsContext\0setRenderer\0"
    "setRenderingCache\0setStats\0AllowEventFocus\0"
    "ClearDepth\0ClearStencil\0"
    "AttachmentMapModifiedCount\0BufferComponent\0"
    "DEPTH_BUFFER\0STENCIL_BUFFER\0"
    "PACKED_DEPTH_STENCIL_BUFFER\0COLOR_BUFFER\0"
    "COLOR_BUFFER0\0COLOR_BUFFER1\0COLOR_BUFFER2\0"
    "COLOR_BUFFER3\0COLOR_BUFFER4\0COLOR_BUFFER5\0"
    "COLOR_BUFFER6\0COLOR_BUFFER7\0COLOR_BUFFER8\0"
    "COLOR_BUFFER9\0COLOR_BUFFER10\0"
    "COLOR_BUFFER11\0COLOR_BUFFER12\0"
    "COLOR_BUFFER13\0COLOR_BUFFER14\0"
    "COLOR_BUFFER15\0ImplicitBufferAttachment\0"
    "IMPLICIT_DEPTH_BUFFER_ATTACHMENT\0"
    "IMPLICIT_STENCIL_BUFFER_ATTACHMENT\0"
    "IMPLICIT_COLOR_BUFFER_ATTACHMENT\0"
    "USE_DISPLAY_SETTINGS_MASK\0"
    "ProjectionResizePolicy\0FIXED\0HORIZONTAL\0"
    "VERTICAL\0RenderOrder\0PRE_RENDER\0"
    "NESTED_RENDER\0POST_RENDER\0"
    "RenderTargetImplementation\0"
    "FRAME_BUFFER_OBJECT\0PIXEL_BUFFER_RTT\0"
    "PIXEL_BUFFER\0FRAME_BUFFER\0SEPARATE_WINDOW\0"
    "ResizeMask\0RESIZE_VIEWPORT\0"
    "RESIZE_ATTACHMENTS\0RESIZE_PROJECTIONMATRIX\0"
    "RESIZE_DEFAULT\0TransformOrder\0"
    "PRE_MULTIPLY\0POST_MULTIPLY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_osg__QReflect_Camera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      91,   14, // methods
       4,  758, // properties
       7,  774, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  469,    2, 0x06 /* Public */,
       3,    1,  472,    2, 0x06 /* Public */,
       4,    1,  475,    2, 0x06 /* Public */,
       6,    1,  478,    2, 0x06 /* Public */,
       7,    1,  481,    2, 0x06 /* Public */,
       8,    1,  484,    2, 0x06 /* Public */,
      10,    1,  487,    2, 0x06 /* Public */,
      12,    1,  490,    2, 0x06 /* Public */,
      14,    1,  493,    2, 0x06 /* Public */,
      16,    1,  496,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  499,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    0,  500,    2, 0x02 /* Public */,
      20,    1,  501,    2, 0x02 /* Public */,
      21,    1,  504,    2, 0x02 /* Public */,
      22,    0,  507,    2, 0x02 /* Public */,
      23,    0,  508,    2, 0x02 /* Public */,
      25,    0,  509,    2, 0x02 /* Public */,
      27,    0,  510,    2, 0x02 /* Public */,
      29,    0,  511,    2, 0x02 /* Public */,
      31,    0,  512,    2, 0x02 /* Public */,
      33,    0,  513,    2, 0x02 /* Public */,
      35,    0,  514,    2, 0x02 /* Public */,
      36,    0,  515,    2, 0x02 /* Public */,
      37,    0,  516,    2, 0x02 /* Public */,
      38,    0,  517,    2, 0x02 /* Public */,
      39,    0,  518,    2, 0x02 /* Public */,
      39,    0,  519,    2, 0x02 /* Public */,
      41,    0,  520,    2, 0x02 /* Public */,
      43,    0,  521,    2, 0x02 /* Public */,
      45,    0,  522,    2, 0x02 /* Public */,
      47,    0,  523,    2, 0x02 /* Public */,
      48,    0,  524,    2, 0x02 /* Public */,
      50,    0,  525,    2, 0x02 /* Public */,
      50,    0,  526,    2, 0x02 /* Public */,
      52,    0,  527,    2, 0x02 /* Public */,
      52,    0,  528,    2, 0x02 /* Public */,
      54,    4,  529,    2, 0x02 /* Public */,
      54,    7,  538,    2, 0x02 /* Public */,
      58,    0,  553,    2, 0x02 /* Public */,
      59,    1,  554,    2, 0x02 /* Public */,
      60,    0,  557,    2, 0x02 /* Public */,
      61,    2,  558,    2, 0x02 /* Public */,
      63,    1,  563,    2, 0x02 /* Public */,
      65,    3,  566,    2, 0x02 /* Public */,
      66,    2,  573,    2, 0x02 /* Public */,
      67,    1,  578,    2, 0x02 /* Public */,
      68,    1,  581,    2, 0x02 /* Public */,
      70,    1,  584,    2, 0x02 /* Public */,
      71,    4,  587,    2, 0x02 /* Public */,
      71,    1,  596,    2, 0x02 /* Public */,
      72,    2,  599,    2, 0x02 /* Public */,
      73,    1,  604,    2, 0x02 /* Public */,
      74,    1,  607,    2, 0x02 /* Public */,
      75,    1,  610,    2, 0x02 /* Public */,
      75,    1,  613,    2, 0x02 /* Public */,
      78,    6,  616,    2, 0x02 /* Public */,
      79,    6,  629,    2, 0x02 /* Public */,
      80,    4,  642,    2, 0x02 /* Public */,
      81,    4,  651,    2, 0x02 /* Public */,
      82,    1,  660,    2, 0x02 /* Public */,
      83,    2,  663,    2, 0x02 /* Public */,
      84,    2,  668,    2, 0x02 /* Public */,
      84,    1,  673,    2, 0x02 /* Public */,
      85,    1,  676,    2, 0x02 /* Public */,
      86,    1,  679,    2, 0x02 /* Public */,
      86,    1,  682,    2, 0x02 /* Public */,
      87,    3,  685,    2, 0x02 /* Public */,
      89,    4,  692,    2, 0x02 /* Public */,
      89,    1,  701,    2, 0x02 /* Public */,
      90,    1,  704,    2, 0x02 /* Public */,
      90,    0,  707,    2, 0x22 /* Public | MethodCloned */,
      92,    1,  708,    2, 0x02 /* Public */,
      92,    0,  711,    2, 0x22 /* Public | MethodCloned */,
      93,    1,  712,    2, 0x02 /* Public */,
      93,    0,  715,    2, 0x22 /* Public | MethodCloned */,
      94,    1,  716,    2, 0x02 /* Public */,
      94,    0,  719,    2, 0x22 /* Public | MethodCloned */,
      95,    1,  720,    2, 0x02 /* Public */,
      95,    0,  723,    2, 0x22 /* Public | MethodCloned */,
      96,    1,  724,    2, 0x02 /* Public */,
      96,    0,  727,    2, 0x22 /* Public | MethodCloned */,
      97,    1,  728,    2, 0x02 /* Public */,
      98,    1,  731,    2, 0x02 /* Public */,
      99,    1,  734,    2, 0x02 /* Public */,
     100,    1,  737,    2, 0x02 /* Public */,
     101,    1,  740,    2, 0x02 /* Public */,
     102,    1,  743,    2, 0x02 /* Public */,
     103,    1,  746,    2, 0x02 /* Public */,
     104,    1,  749,    2, 0x02 /* Public */,
     105,    1,  752,    2, 0x02 /* Public */,
     106,    1,  755,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 17,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Int, QMetaType::Bool,    2,
    QMetaType::Int, QMetaType::Bool,    2,
    QMetaType::Int,
    0x80000000 | 24,
    0x80000000 | 26,
    0x80000000 | 28,
    0x80000000 | 30,
    0x80000000 | 32,
    0x80000000 | 34,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Int,
    QMetaType::UInt,
    0x80000000 | 40,
    0x80000000 | 40,
    0x80000000 | 42,
    0x80000000 | 44,
    0x80000000 | 46,
    0x80000000 | 46,
    0x80000000 | 49,
    0x80000000 | 51,
    0x80000000 | 51,
    0x80000000 | 53,
    0x80000000 | 53,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 56, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 57, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 62, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 64,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 69,    2,
    QMetaType::Void, 0x80000000 | 69,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 76,    2,
    QMetaType::Void, 0x80000000 | 77,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 42,    2,
    QMetaType::Void, 0x80000000 | 44, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 46, 0x80000000 | 46,    2,    2,
    QMetaType::Void, 0x80000000 | 46,    2,
    QMetaType::Void, 0x80000000 | 49,    2,
    QMetaType::Void, 0x80000000 | 76,    2,
    QMetaType::Void, 0x80000000 | 77,    2,
    QMetaType::Void, 0x80000000 | 88, 0x80000000 | 88, 0x80000000 | 88,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 53,    2,
    QMetaType::Void, 0x80000000 | 32,   91,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   91,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   91,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   91,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   91,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   91,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 32,   91,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 24,   91,
    QMetaType::Void, 0x80000000 | 26,   91,
    QMetaType::Void, 0x80000000 | 28,   91,
    QMetaType::Void, 0x80000000 | 30,   91,
    QMetaType::Void, 0x80000000 | 34,   91,

 // properties: name, type, flags
     107, QMetaType::Bool, 0x00495103,
     108, QMetaType::Double, 0x00495103,
     109, QMetaType::Int, 0x00495103,
     110, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       4,
       1,

 // enums: name, flags, count, data
     111, 0x0,   20,  802,
     132, 0x0,    4,  842,
     137, 0x0,    3,  850,
     141, 0x0,    3,  856,
     145, 0x0,    5,  862,
     151, 0x0,    4,  872,
     156, 0x0,    2,  880,

 // enum data: key, value
     112, uint(osg::QReflect_Camera::DEPTH_BUFFER),
     113, uint(osg::QReflect_Camera::STENCIL_BUFFER),
     114, uint(osg::QReflect_Camera::PACKED_DEPTH_STENCIL_BUFFER),
     115, uint(osg::QReflect_Camera::COLOR_BUFFER),
     116, uint(osg::QReflect_Camera::COLOR_BUFFER0),
     117, uint(osg::QReflect_Camera::COLOR_BUFFER1),
     118, uint(osg::QReflect_Camera::COLOR_BUFFER2),
     119, uint(osg::QReflect_Camera::COLOR_BUFFER3),
     120, uint(osg::QReflect_Camera::COLOR_BUFFER4),
     121, uint(osg::QReflect_Camera::COLOR_BUFFER5),
     122, uint(osg::QReflect_Camera::COLOR_BUFFER6),
     123, uint(osg::QReflect_Camera::COLOR_BUFFER7),
     124, uint(osg::QReflect_Camera::COLOR_BUFFER8),
     125, uint(osg::QReflect_Camera::COLOR_BUFFER9),
     126, uint(osg::QReflect_Camera::COLOR_BUFFER10),
     127, uint(osg::QReflect_Camera::COLOR_BUFFER11),
     128, uint(osg::QReflect_Camera::COLOR_BUFFER12),
     129, uint(osg::QReflect_Camera::COLOR_BUFFER13),
     130, uint(osg::QReflect_Camera::COLOR_BUFFER14),
     131, uint(osg::QReflect_Camera::COLOR_BUFFER15),
     133, uint(osg::QReflect_Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT),
     134, uint(osg::QReflect_Camera::IMPLICIT_STENCIL_BUFFER_ATTACHMENT),
     135, uint(osg::QReflect_Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT),
     136, uint(osg::QReflect_Camera::USE_DISPLAY_SETTINGS_MASK),
     138, uint(osg::QReflect_Camera::FIXED),
     139, uint(osg::QReflect_Camera::HORIZONTAL),
     140, uint(osg::QReflect_Camera::VERTICAL),
     142, uint(osg::QReflect_Camera::PRE_RENDER),
     143, uint(osg::QReflect_Camera::NESTED_RENDER),
     144, uint(osg::QReflect_Camera::POST_RENDER),
     146, uint(osg::QReflect_Camera::FRAME_BUFFER_OBJECT),
     147, uint(osg::QReflect_Camera::PIXEL_BUFFER_RTT),
     148, uint(osg::QReflect_Camera::PIXEL_BUFFER),
     149, uint(osg::QReflect_Camera::FRAME_BUFFER),
     150, uint(osg::QReflect_Camera::SEPARATE_WINDOW),
     152, uint(osg::QReflect_Camera::RESIZE_VIEWPORT),
     153, uint(osg::QReflect_Camera::RESIZE_ATTACHMENTS),
     154, uint(osg::QReflect_Camera::RESIZE_PROJECTIONMATRIX),
     155, uint(osg::QReflect_Camera::RESIZE_DEFAULT),
     157, uint(osg::QReflect_Camera::PRE_MULTIPLY),
     158, uint(osg::QReflect_Camera::POST_MULTIPLY),

       0        // eod
};

void osg::QReflect_Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QReflect_Camera *_t = static_cast<QReflect_Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AllowEventFocusChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->AttachmentMapModifiedCountChanged((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 2: _t->CameraThreadChanged((*reinterpret_cast< const osg::QReflect_OperationThread*(*)>(_a[1]))); break;
        case 3: _t->ClearDepthChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->ClearStencilChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->DisplaySettingsChanged((*reinterpret_cast< const osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 6: _t->GraphicsContextChanged((*reinterpret_cast< const osg::QReflect_GraphicsContext*(*)>(_a[1]))); break;
        case 7: _t->RendererChanged((*reinterpret_cast< const osg::QReflect_GraphicsOperation*(*)>(_a[1]))); break;
        case 8: _t->RenderingCacheChanged((*reinterpret_cast< const osg::QReflect_Object*(*)>(_a[1]))); break;
        case 9: _t->StatsChanged((*reinterpret_cast< const osg::QReflect_Stats*(*)>(_a[1]))); break;
        case 10: _t->updateModel(); break;
        case 11: { bool _r = _t->isRenderToTextureCamera();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->getImplicitBufferAttachmentRenderMask((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->getImplicitBufferAttachmentResolveMask((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->getRenderOrderNum();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { osg::QReflect_DisplaySettings* _r = _t->getDisplaySettings();
            if (_a[0]) *reinterpret_cast< osg::QReflect_DisplaySettings**>(_a[0]) = _r; }  break;
        case 16: { osg::QReflect_GraphicsContext* _r = _t->getGraphicsContext();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsContext**>(_a[0]) = _r; }  break;
        case 17: { osg::QReflect_GraphicsOperation* _r = _t->getRenderer();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsOperation**>(_a[0]) = _r; }  break;
        case 18: { osg::QReflect_Object* _r = _t->getRenderingCache();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 19: { osg::QReflect_OperationThread* _r = _t->getCameraThread();
            if (_a[0]) *reinterpret_cast< osg::QReflect_OperationThread**>(_a[0]) = _r; }  break;
        case 20: { osg::QReflect_Stats* _r = _t->getStats();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Stats**>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->getAllowEventFocus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { double _r = _t->getClearDepth();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->getClearStencil();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { uint _r = _t->getAttachmentMapModifiedCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 25: { osg::QReflect_Camera* _r = _t->asCamera();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera**>(_a[0]) = _r; }  break;
        case 26: { osg::QReflect_Camera* _r = _t->asCamera();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera**>(_a[0]) = _r; }  break;
        case 27: { osg::QReflect_Camera::ProjectionResizePolicy _r = _t->getProjectionResizePolicy();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::ProjectionResizePolicy*>(_a[0]) = _r; }  break;
        case 28: { osg::QReflect_Camera::RenderOrder _r = _t->getRenderOrder();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::RenderOrder*>(_a[0]) = _r; }  break;
        case 29: { osg::QReflect_Camera::RenderTargetImplementation _r = _t->getRenderTargetFallback();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation*>(_a[0]) = _r; }  break;
        case 30: { osg::QReflect_Camera::RenderTargetImplementation _r = _t->getRenderTargetImplementation();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation*>(_a[0]) = _r; }  break;
        case 31: { osg::QReflect_Camera::TransformOrder _r = _t->getTransformOrder();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::TransformOrder*>(_a[0]) = _r; }  break;
        case 32: { osg::QReflect_ColorMask* _r = _t->getColorMask();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ColorMask**>(_a[0]) = _r; }  break;
        case 33: { osg::QReflect_ColorMask* _r = _t->getColorMask();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ColorMask**>(_a[0]) = _r; }  break;
        case 34: { osg::QReflect_Viewport* _r = _t->getViewport();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Viewport**>(_a[0]) = _r; }  break;
        case 35: { osg::QReflect_Viewport* _r = _t->getViewport();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Viewport**>(_a[0]) = _r; }  break;
        case 36: _t->attach((*reinterpret_cast< osg::QReflect_Camera::BufferComponent(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Image*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 37: _t->attach((*reinterpret_cast< osg::QReflect_Camera::BufferComponent(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Texture*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7]))); break;
        case 38: _t->createCameraThread(); break;
        case 39: _t->detach((*reinterpret_cast< osg::QReflect_Camera::BufferComponent(*)>(_a[1]))); break;
        case 40: _t->dirtyAttachmentMap(); break;
        case 41: _t->inheritCullSettings((*reinterpret_cast< osg::QReflect_CullSettings*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 42: _t->releaseGLObjects((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 43: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 44: _t->resizeAttachments((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 45: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: _t->setClearAccum((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 47: _t->setClearColor((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 48: _t->setColorMask((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 49: _t->setColorMask((*reinterpret_cast< osg::QReflect_ColorMask*(*)>(_a[1]))); break;
        case 50: _t->setImplicitBufferAttachmentMask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 51: _t->setImplicitBufferAttachmentRenderMask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->setImplicitBufferAttachmentResolveMask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->setProjectionMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 54: _t->setProjectionMatrix((*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[1]))); break;
        case 55: _t->setProjectionMatrixAsFrustum((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 56: _t->setProjectionMatrixAsOrtho((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 57: _t->setProjectionMatrixAsOrtho2D((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 58: _t->setProjectionMatrixAsPerspective((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 59: _t->setProjectionResizePolicy((*reinterpret_cast< osg::QReflect_Camera::ProjectionResizePolicy(*)>(_a[1]))); break;
        case 60: _t->setRenderOrder((*reinterpret_cast< osg::QReflect_Camera::RenderOrder(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->setRenderTargetImplementation((*reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation(*)>(_a[2]))); break;
        case 62: _t->setRenderTargetImplementation((*reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation(*)>(_a[1]))); break;
        case 63: _t->setTransformOrder((*reinterpret_cast< osg::QReflect_Camera::TransformOrder(*)>(_a[1]))); break;
        case 64: _t->setViewMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 65: _t->setViewMatrix((*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[1]))); break;
        case 66: _t->setViewMatrixAsLookAt((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[3]))); break;
        case 67: _t->setViewport((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 68: _t->setViewport((*reinterpret_cast< osg::QReflect_Viewport*(*)>(_a[1]))); break;
        case 69: _t->pmoc_reverse_setCameraThread((*reinterpret_cast< osg::QReflect_OperationThread*(*)>(_a[1]))); break;
        case 70: _t->pmoc_reverse_setCameraThread(); break;
        case 71: _t->pmoc_reverse_setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 72: _t->pmoc_reverse_setDisplaySettings(); break;
        case 73: _t->pmoc_reverse_setGraphicsContext((*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[1]))); break;
        case 74: _t->pmoc_reverse_setGraphicsContext(); break;
        case 75: _t->pmoc_reverse_setRenderer((*reinterpret_cast< osg::QReflect_GraphicsOperation*(*)>(_a[1]))); break;
        case 76: _t->pmoc_reverse_setRenderer(); break;
        case 77: _t->pmoc_reverse_setRenderingCache((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        case 78: _t->pmoc_reverse_setRenderingCache(); break;
        case 79: _t->pmoc_reverse_setStats((*reinterpret_cast< osg::QReflect_Stats*(*)>(_a[1]))); break;
        case 80: _t->pmoc_reverse_setStats(); break;
        case 81: _t->setAllowEventFocus((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 82: _t->setAttachmentMapModifiedCount((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 83: _t->setCameraThread((*reinterpret_cast< osg::QReflect_OperationThread*(*)>(_a[1]))); break;
        case 84: _t->setClearDepth((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 85: _t->setClearStencil((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 86: _t->setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 87: _t->setGraphicsContext((*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[1]))); break;
        case 88: _t->setRenderer((*reinterpret_cast< osg::QReflect_GraphicsOperation*(*)>(_a[1]))); break;
        case 89: _t->setRenderingCache((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        case 90: _t->setStats((*reinterpret_cast< osg::QReflect_Stats*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QReflect_Camera::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::AllowEventFocusChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::AttachmentMapModifiedCountChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const osg::QReflect_OperationThread * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::CameraThreadChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::ClearDepthChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::ClearStencilChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const osg::QReflect_DisplaySettings * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::DisplaySettingsChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const osg::QReflect_GraphicsContext * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::GraphicsContextChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const osg::QReflect_GraphicsOperation * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::RendererChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const osg::QReflect_Object * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::RenderingCacheChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QReflect_Camera::*_t)(const osg::QReflect_Stats * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QReflect_Camera::StatsChanged)) {
                *result = 9;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QReflect_Camera *_t = static_cast<QReflect_Camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getAllowEventFocus(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getClearDepth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getClearStencil(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->getAttachmentMapModifiedCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QReflect_Camera *_t = static_cast<QReflect_Camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAllowEventFocus(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setClearDepth(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setClearStencil(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAttachmentMapModifiedCount(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject osg::QReflect_Camera::staticMetaObject = {
    { &pmoc::QQModel::staticMetaObject, qt_meta_stringdata_osg__QReflect_Camera.data,
      qt_meta_data_osg__QReflect_Camera,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *osg::QReflect_Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *osg::QReflect_Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_osg__QReflect_Camera.stringdata0))
        return static_cast<void*>(const_cast< QReflect_Camera*>(this));
    return pmoc::QQModel::qt_metacast(_clname);
}

int osg::QReflect_Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = pmoc::QQModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 91)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 91;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 91)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 91;
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
void osg::QReflect_Camera::AllowEventFocusChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void osg::QReflect_Camera::AttachmentMapModifiedCountChanged(const unsigned int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void osg::QReflect_Camera::CameraThreadChanged(const osg::QReflect_OperationThread * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void osg::QReflect_Camera::ClearDepthChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void osg::QReflect_Camera::ClearStencilChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void osg::QReflect_Camera::DisplaySettingsChanged(const osg::QReflect_DisplaySettings * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void osg::QReflect_Camera::GraphicsContextChanged(const osg::QReflect_GraphicsContext * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void osg::QReflect_Camera::RendererChanged(const osg::QReflect_GraphicsOperation * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void osg::QReflect_Camera::RenderingCacheChanged(const osg::QReflect_Object * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void osg::QReflect_Camera::StatsChanged(const osg::QReflect_Stats * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
