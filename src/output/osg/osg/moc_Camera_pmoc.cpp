/****************************************************************************
** Meta object code from reading C++ file 'Camera_pmoc.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Camera_pmoc.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera_pmoc.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
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
    QByteArrayData data[168];
    char stringdata0[3505];
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
QT_MOC_LITERAL(19, 451, 25), // "computeLocalToWorldMatrix"
QT_MOC_LITERAL(20, 477, 22), // "osg::QReflect_Matrixd*"
QT_MOC_LITERAL(21, 500, 26), // "osg::QReflect_NodeVisitor*"
QT_MOC_LITERAL(22, 527, 25), // "computeWorldToLocalMatrix"
QT_MOC_LITERAL(23, 553, 28), // "getProjectionMatrixAsFrustum"
QT_MOC_LITERAL(24, 582, 7), // "double&"
QT_MOC_LITERAL(25, 590, 26), // "getProjectionMatrixAsOrtho"
QT_MOC_LITERAL(26, 617, 32), // "getProjectionMatrixAsPerspective"
QT_MOC_LITERAL(27, 650, 23), // "isRenderToTextureCamera"
QT_MOC_LITERAL(28, 674, 37), // "getImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(29, 712, 38), // "getImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(30, 751, 17), // "getRenderOrderNum"
QT_MOC_LITERAL(31, 769, 18), // "getDisplaySettings"
QT_MOC_LITERAL(32, 788, 30), // "osg::QReflect_DisplaySettings*"
QT_MOC_LITERAL(33, 819, 18), // "getGraphicsContext"
QT_MOC_LITERAL(34, 838, 30), // "osg::QReflect_GraphicsContext*"
QT_MOC_LITERAL(35, 869, 11), // "getRenderer"
QT_MOC_LITERAL(36, 881, 32), // "osg::QReflect_GraphicsOperation*"
QT_MOC_LITERAL(37, 914, 17), // "getRenderingCache"
QT_MOC_LITERAL(38, 932, 21), // "osg::QReflect_Object*"
QT_MOC_LITERAL(39, 954, 15), // "getCameraThread"
QT_MOC_LITERAL(40, 970, 30), // "osg::QReflect_OperationThread*"
QT_MOC_LITERAL(41, 1001, 8), // "getStats"
QT_MOC_LITERAL(42, 1010, 20), // "osg::QReflect_Stats*"
QT_MOC_LITERAL(43, 1031, 18), // "getAllowEventFocus"
QT_MOC_LITERAL(44, 1050, 13), // "getClearDepth"
QT_MOC_LITERAL(45, 1064, 15), // "getClearStencil"
QT_MOC_LITERAL(46, 1080, 29), // "getAttachmentMapModifiedCount"
QT_MOC_LITERAL(47, 1110, 8), // "asCamera"
QT_MOC_LITERAL(48, 1119, 21), // "osg::QReflect_Camera*"
QT_MOC_LITERAL(49, 1141, 25), // "getProjectionResizePolicy"
QT_MOC_LITERAL(50, 1167, 44), // "osg::QReflect_Camera::Project..."
QT_MOC_LITERAL(51, 1212, 14), // "getRenderOrder"
QT_MOC_LITERAL(52, 1227, 33), // "osg::QReflect_Camera::RenderO..."
QT_MOC_LITERAL(53, 1261, 23), // "getRenderTargetFallback"
QT_MOC_LITERAL(54, 1285, 48), // "osg::QReflect_Camera::RenderT..."
QT_MOC_LITERAL(55, 1334, 29), // "getRenderTargetImplementation"
QT_MOC_LITERAL(56, 1364, 17), // "getTransformOrder"
QT_MOC_LITERAL(57, 1382, 36), // "osg::QReflect_Camera::Transfo..."
QT_MOC_LITERAL(58, 1419, 12), // "getColorMask"
QT_MOC_LITERAL(59, 1432, 24), // "osg::QReflect_ColorMask*"
QT_MOC_LITERAL(60, 1457, 11), // "getViewport"
QT_MOC_LITERAL(61, 1469, 23), // "osg::QReflect_Viewport*"
QT_MOC_LITERAL(62, 1493, 6), // "attach"
QT_MOC_LITERAL(63, 1500, 37), // "osg::QReflect_Camera::BufferC..."
QT_MOC_LITERAL(64, 1538, 20), // "osg::QReflect_Image*"
QT_MOC_LITERAL(65, 1559, 22), // "osg::QReflect_Texture*"
QT_MOC_LITERAL(66, 1582, 18), // "createCameraThread"
QT_MOC_LITERAL(67, 1601, 6), // "detach"
QT_MOC_LITERAL(68, 1608, 18), // "dirtyAttachmentMap"
QT_MOC_LITERAL(69, 1627, 21), // "getViewMatrixAsLookAt"
QT_MOC_LITERAL(70, 1649, 20), // "osg::QReflect_Vec3d*"
QT_MOC_LITERAL(71, 1670, 20), // "osg::QReflect_Vec3f*"
QT_MOC_LITERAL(72, 1691, 19), // "inheritCullSettings"
QT_MOC_LITERAL(73, 1711, 27), // "osg::QReflect_CullSettings*"
QT_MOC_LITERAL(74, 1739, 16), // "releaseGLObjects"
QT_MOC_LITERAL(75, 1756, 20), // "osg::QReflect_State*"
QT_MOC_LITERAL(76, 1777, 6), // "resize"
QT_MOC_LITERAL(77, 1784, 17), // "resizeAttachments"
QT_MOC_LITERAL(78, 1802, 21), // "resizeGLObjectBuffers"
QT_MOC_LITERAL(79, 1824, 13), // "setClearAccum"
QT_MOC_LITERAL(80, 1838, 20), // "osg::QReflect_Vec4f*"
QT_MOC_LITERAL(81, 1859, 13), // "setClearColor"
QT_MOC_LITERAL(82, 1873, 12), // "setColorMask"
QT_MOC_LITERAL(83, 1886, 31), // "setImplicitBufferAttachmentMask"
QT_MOC_LITERAL(84, 1918, 37), // "setImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(85, 1956, 38), // "setImplicitBufferAttachmentRe..."
QT_MOC_LITERAL(86, 1995, 19), // "setProjectionMatrix"
QT_MOC_LITERAL(87, 2015, 22), // "osg::QReflect_Matrixf*"
QT_MOC_LITERAL(88, 2038, 28), // "setProjectionMatrixAsFrustum"
QT_MOC_LITERAL(89, 2067, 26), // "setProjectionMatrixAsOrtho"
QT_MOC_LITERAL(90, 2094, 28), // "setProjectionMatrixAsOrtho2D"
QT_MOC_LITERAL(91, 2123, 32), // "setProjectionMatrixAsPerspective"
QT_MOC_LITERAL(92, 2156, 25), // "setProjectionResizePolicy"
QT_MOC_LITERAL(93, 2182, 14), // "setRenderOrder"
QT_MOC_LITERAL(94, 2197, 29), // "setRenderTargetImplementation"
QT_MOC_LITERAL(95, 2227, 17), // "setTransformOrder"
QT_MOC_LITERAL(96, 2245, 13), // "setViewMatrix"
QT_MOC_LITERAL(97, 2259, 21), // "setViewMatrixAsLookAt"
QT_MOC_LITERAL(98, 2281, 11), // "setViewport"
QT_MOC_LITERAL(99, 2293, 28), // "pmoc_reverse_setCameraThread"
QT_MOC_LITERAL(100, 2322, 3), // "par"
QT_MOC_LITERAL(101, 2326, 31), // "pmoc_reverse_setDisplaySettings"
QT_MOC_LITERAL(102, 2358, 31), // "pmoc_reverse_setGraphicsContext"
QT_MOC_LITERAL(103, 2390, 24), // "pmoc_reverse_setRenderer"
QT_MOC_LITERAL(104, 2415, 30), // "pmoc_reverse_setRenderingCache"
QT_MOC_LITERAL(105, 2446, 21), // "pmoc_reverse_setStats"
QT_MOC_LITERAL(106, 2468, 18), // "setAllowEventFocus"
QT_MOC_LITERAL(107, 2487, 29), // "setAttachmentMapModifiedCount"
QT_MOC_LITERAL(108, 2517, 15), // "setCameraThread"
QT_MOC_LITERAL(109, 2533, 13), // "setClearDepth"
QT_MOC_LITERAL(110, 2547, 15), // "setClearStencil"
QT_MOC_LITERAL(111, 2563, 18), // "setDisplaySettings"
QT_MOC_LITERAL(112, 2582, 18), // "setGraphicsContext"
QT_MOC_LITERAL(113, 2601, 11), // "setRenderer"
QT_MOC_LITERAL(114, 2613, 17), // "setRenderingCache"
QT_MOC_LITERAL(115, 2631, 8), // "setStats"
QT_MOC_LITERAL(116, 2640, 15), // "AllowEventFocus"
QT_MOC_LITERAL(117, 2656, 10), // "ClearDepth"
QT_MOC_LITERAL(118, 2667, 12), // "ClearStencil"
QT_MOC_LITERAL(119, 2680, 26), // "AttachmentMapModifiedCount"
QT_MOC_LITERAL(120, 2707, 15), // "BufferComponent"
QT_MOC_LITERAL(121, 2723, 12), // "DEPTH_BUFFER"
QT_MOC_LITERAL(122, 2736, 14), // "STENCIL_BUFFER"
QT_MOC_LITERAL(123, 2751, 27), // "PACKED_DEPTH_STENCIL_BUFFER"
QT_MOC_LITERAL(124, 2779, 12), // "COLOR_BUFFER"
QT_MOC_LITERAL(125, 2792, 13), // "COLOR_BUFFER0"
QT_MOC_LITERAL(126, 2806, 13), // "COLOR_BUFFER1"
QT_MOC_LITERAL(127, 2820, 13), // "COLOR_BUFFER2"
QT_MOC_LITERAL(128, 2834, 13), // "COLOR_BUFFER3"
QT_MOC_LITERAL(129, 2848, 13), // "COLOR_BUFFER4"
QT_MOC_LITERAL(130, 2862, 13), // "COLOR_BUFFER5"
QT_MOC_LITERAL(131, 2876, 13), // "COLOR_BUFFER6"
QT_MOC_LITERAL(132, 2890, 13), // "COLOR_BUFFER7"
QT_MOC_LITERAL(133, 2904, 13), // "COLOR_BUFFER8"
QT_MOC_LITERAL(134, 2918, 13), // "COLOR_BUFFER9"
QT_MOC_LITERAL(135, 2932, 14), // "COLOR_BUFFER10"
QT_MOC_LITERAL(136, 2947, 14), // "COLOR_BUFFER11"
QT_MOC_LITERAL(137, 2962, 14), // "COLOR_BUFFER12"
QT_MOC_LITERAL(138, 2977, 14), // "COLOR_BUFFER13"
QT_MOC_LITERAL(139, 2992, 14), // "COLOR_BUFFER14"
QT_MOC_LITERAL(140, 3007, 14), // "COLOR_BUFFER15"
QT_MOC_LITERAL(141, 3022, 24), // "ImplicitBufferAttachment"
QT_MOC_LITERAL(142, 3047, 32), // "IMPLICIT_DEPTH_BUFFER_ATTACHMENT"
QT_MOC_LITERAL(143, 3080, 34), // "IMPLICIT_STENCIL_BUFFER_ATTAC..."
QT_MOC_LITERAL(144, 3115, 32), // "IMPLICIT_COLOR_BUFFER_ATTACHMENT"
QT_MOC_LITERAL(145, 3148, 25), // "USE_DISPLAY_SETTINGS_MASK"
QT_MOC_LITERAL(146, 3174, 22), // "ProjectionResizePolicy"
QT_MOC_LITERAL(147, 3197, 5), // "FIXED"
QT_MOC_LITERAL(148, 3203, 10), // "HORIZONTAL"
QT_MOC_LITERAL(149, 3214, 8), // "VERTICAL"
QT_MOC_LITERAL(150, 3223, 11), // "RenderOrder"
QT_MOC_LITERAL(151, 3235, 10), // "PRE_RENDER"
QT_MOC_LITERAL(152, 3246, 13), // "NESTED_RENDER"
QT_MOC_LITERAL(153, 3260, 11), // "POST_RENDER"
QT_MOC_LITERAL(154, 3272, 26), // "RenderTargetImplementation"
QT_MOC_LITERAL(155, 3299, 19), // "FRAME_BUFFER_OBJECT"
QT_MOC_LITERAL(156, 3319, 16), // "PIXEL_BUFFER_RTT"
QT_MOC_LITERAL(157, 3336, 12), // "PIXEL_BUFFER"
QT_MOC_LITERAL(158, 3349, 12), // "FRAME_BUFFER"
QT_MOC_LITERAL(159, 3362, 15), // "SEPARATE_WINDOW"
QT_MOC_LITERAL(160, 3378, 10), // "ResizeMask"
QT_MOC_LITERAL(161, 3389, 15), // "RESIZE_VIEWPORT"
QT_MOC_LITERAL(162, 3405, 18), // "RESIZE_ATTACHMENTS"
QT_MOC_LITERAL(163, 3424, 23), // "RESIZE_PROJECTIONMATRIX"
QT_MOC_LITERAL(164, 3448, 14), // "RESIZE_DEFAULT"
QT_MOC_LITERAL(165, 3463, 14), // "TransformOrder"
QT_MOC_LITERAL(166, 3478, 12), // "PRE_MULTIPLY"
QT_MOC_LITERAL(167, 3491, 13) // "POST_MULTIPLY"

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
    "updateModel\0computeLocalToWorldMatrix\0"
    "osg::QReflect_Matrixd*\0"
    "osg::QReflect_NodeVisitor*\0"
    "computeWorldToLocalMatrix\0"
    "getProjectionMatrixAsFrustum\0double&\0"
    "getProjectionMatrixAsOrtho\0"
    "getProjectionMatrixAsPerspective\0"
    "isRenderToTextureCamera\0"
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
    "getViewMatrixAsLookAt\0osg::QReflect_Vec3d*\0"
    "osg::QReflect_Vec3f*\0inheritCullSettings\0"
    "osg::QReflect_CullSettings*\0"
    "releaseGLObjects\0osg::QReflect_State*\0"
    "resize\0resizeAttachments\0resizeGLObjectBuffers\0"
    "setClearAccum\0osg::QReflect_Vec4f*\0"
    "setClearColor\0setColorMask\0"
    "setImplicitBufferAttachmentMask\0"
    "setImplicitBufferAttachmentRenderMask\0"
    "setImplicitBufferAttachmentResolveMask\0"
    "setProjectionMatrix\0osg::QReflect_Matrixf*\0"
    "setProjectionMatrixAsFrustum\0"
    "setProjectionMatrixAsOrtho\0"
    "setProjectionMatrixAsOrtho2D\0"
    "setProjectionMatrixAsPerspective\0"
    "setProjectionResizePolicy\0setRenderOrder\0"
    "setRenderTargetImplementation\0"
    "setTransformOrder\0setViewMatrix\0"
    "setViewMatrixAsLookAt\0setViewport\0"
    "pmoc_reverse_setCameraThread\0par\0"
    "pmoc_reverse_setDisplaySettings\0"
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
      98,   14, // methods
       4,  856, // properties
       7,  872, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  504,    2, 0x06 /* Public */,
       3,    1,  507,    2, 0x06 /* Public */,
       4,    1,  510,    2, 0x06 /* Public */,
       6,    1,  513,    2, 0x06 /* Public */,
       7,    1,  516,    2, 0x06 /* Public */,
       8,    1,  519,    2, 0x06 /* Public */,
      10,    1,  522,    2, 0x06 /* Public */,
      12,    1,  525,    2, 0x06 /* Public */,
      14,    1,  528,    2, 0x06 /* Public */,
      16,    1,  531,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  534,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      19,    2,  535,    2, 0x02 /* Public */,
      22,    2,  540,    2, 0x02 /* Public */,
      23,    6,  545,    2, 0x02 /* Public */,
      25,    6,  558,    2, 0x02 /* Public */,
      26,    4,  571,    2, 0x02 /* Public */,
      27,    0,  580,    2, 0x02 /* Public */,
      28,    1,  581,    2, 0x02 /* Public */,
      29,    1,  584,    2, 0x02 /* Public */,
      30,    0,  587,    2, 0x02 /* Public */,
      31,    0,  588,    2, 0x02 /* Public */,
      33,    0,  589,    2, 0x02 /* Public */,
      35,    0,  590,    2, 0x02 /* Public */,
      37,    0,  591,    2, 0x02 /* Public */,
      39,    0,  592,    2, 0x02 /* Public */,
      41,    0,  593,    2, 0x02 /* Public */,
      43,    0,  594,    2, 0x02 /* Public */,
      44,    0,  595,    2, 0x02 /* Public */,
      45,    0,  596,    2, 0x02 /* Public */,
      46,    0,  597,    2, 0x02 /* Public */,
      47,    0,  598,    2, 0x02 /* Public */,
      47,    0,  599,    2, 0x02 /* Public */,
      49,    0,  600,    2, 0x02 /* Public */,
      51,    0,  601,    2, 0x02 /* Public */,
      53,    0,  602,    2, 0x02 /* Public */,
      55,    0,  603,    2, 0x02 /* Public */,
      56,    0,  604,    2, 0x02 /* Public */,
      58,    0,  605,    2, 0x02 /* Public */,
      58,    0,  606,    2, 0x02 /* Public */,
      60,    0,  607,    2, 0x02 /* Public */,
      60,    0,  608,    2, 0x02 /* Public */,
      62,    4,  609,    2, 0x02 /* Public */,
      62,    7,  618,    2, 0x02 /* Public */,
      66,    0,  633,    2, 0x02 /* Public */,
      67,    1,  634,    2, 0x02 /* Public */,
      68,    0,  637,    2, 0x02 /* Public */,
      69,    4,  638,    2, 0x02 /* Public */,
      69,    4,  647,    2, 0x02 /* Public */,
      72,    2,  656,    2, 0x02 /* Public */,
      74,    1,  661,    2, 0x02 /* Public */,
      76,    3,  664,    2, 0x02 /* Public */,
      77,    2,  671,    2, 0x02 /* Public */,
      78,    1,  676,    2, 0x02 /* Public */,
      79,    1,  679,    2, 0x02 /* Public */,
      81,    1,  682,    2, 0x02 /* Public */,
      82,    4,  685,    2, 0x02 /* Public */,
      82,    1,  694,    2, 0x02 /* Public */,
      83,    2,  697,    2, 0x02 /* Public */,
      84,    1,  702,    2, 0x02 /* Public */,
      85,    1,  705,    2, 0x02 /* Public */,
      86,    1,  708,    2, 0x02 /* Public */,
      86,    1,  711,    2, 0x02 /* Public */,
      88,    6,  714,    2, 0x02 /* Public */,
      89,    6,  727,    2, 0x02 /* Public */,
      90,    4,  740,    2, 0x02 /* Public */,
      91,    4,  749,    2, 0x02 /* Public */,
      92,    1,  758,    2, 0x02 /* Public */,
      93,    2,  761,    2, 0x02 /* Public */,
      94,    2,  766,    2, 0x02 /* Public */,
      94,    1,  771,    2, 0x02 /* Public */,
      95,    1,  774,    2, 0x02 /* Public */,
      96,    1,  777,    2, 0x02 /* Public */,
      96,    1,  780,    2, 0x02 /* Public */,
      97,    3,  783,    2, 0x02 /* Public */,
      98,    4,  790,    2, 0x02 /* Public */,
      98,    1,  799,    2, 0x02 /* Public */,
      99,    1,  802,    2, 0x02 /* Public */,
      99,    0,  805,    2, 0x22 /* Public | MethodCloned */,
     101,    1,  806,    2, 0x02 /* Public */,
     101,    0,  809,    2, 0x22 /* Public | MethodCloned */,
     102,    1,  810,    2, 0x02 /* Public */,
     102,    0,  813,    2, 0x22 /* Public | MethodCloned */,
     103,    1,  814,    2, 0x02 /* Public */,
     103,    0,  817,    2, 0x22 /* Public | MethodCloned */,
     104,    1,  818,    2, 0x02 /* Public */,
     104,    0,  821,    2, 0x22 /* Public | MethodCloned */,
     105,    1,  822,    2, 0x02 /* Public */,
     105,    0,  825,    2, 0x22 /* Public | MethodCloned */,
     106,    1,  826,    2, 0x02 /* Public */,
     107,    1,  829,    2, 0x02 /* Public */,
     108,    1,  832,    2, 0x02 /* Public */,
     109,    1,  835,    2, 0x02 /* Public */,
     110,    1,  838,    2, 0x02 /* Public */,
     111,    1,  841,    2, 0x02 /* Public */,
     112,    1,  844,    2, 0x02 /* Public */,
     113,    1,  847,    2, 0x02 /* Public */,
     114,    1,  850,    2, 0x02 /* Public */,
     115,    1,  853,    2, 0x02 /* Public */,

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
    QMetaType::Bool, 0x80000000 | 20, 0x80000000 | 21,    2,    2,
    QMetaType::Bool, 0x80000000 | 20, 0x80000000 | 21,    2,    2,
    QMetaType::Bool, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24,    2,    2,    2,    2,    2,    2,
    QMetaType::Bool, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24,    2,    2,    2,    2,    2,    2,
    QMetaType::Bool, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24, 0x80000000 | 24,    2,    2,    2,    2,
    QMetaType::Bool,
    QMetaType::Int, QMetaType::Bool,    2,
    QMetaType::Int, QMetaType::Bool,    2,
    QMetaType::Int,
    0x80000000 | 32,
    0x80000000 | 34,
    0x80000000 | 36,
    0x80000000 | 38,
    0x80000000 | 40,
    0x80000000 | 42,
    QMetaType::Bool,
    QMetaType::Double,
    QMetaType::Int,
    QMetaType::UInt,
    0x80000000 | 48,
    0x80000000 | 48,
    0x80000000 | 50,
    0x80000000 | 52,
    0x80000000 | 54,
    0x80000000 | 54,
    0x80000000 | 57,
    0x80000000 | 59,
    0x80000000 | 59,
    0x80000000 | 61,
    0x80000000 | 61,
    QMetaType::Void, 0x80000000 | 63, 0x80000000 | 64, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 63, 0x80000000 | 65, QMetaType::UInt, QMetaType::UInt, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70, 0x80000000 | 70, 0x80000000 | 70, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 71, 0x80000000 | 71, 0x80000000 | 71, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 73, QMetaType::UInt,    2,    2,
    QMetaType::Void, 0x80000000 | 75,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 59,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 87,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 50,    2,
    QMetaType::Void, 0x80000000 | 52, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 54, 0x80000000 | 54,    2,    2,
    QMetaType::Void, 0x80000000 | 54,    2,
    QMetaType::Void, 0x80000000 | 57,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 87,    2,
    QMetaType::Void, 0x80000000 | 70, 0x80000000 | 70, 0x80000000 | 70,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 61,    2,
    QMetaType::Void, 0x80000000 | 40,  100,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,  100,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,  100,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,  100,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,  100,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 42,  100,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 40,  100,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 32,  100,
    QMetaType::Void, 0x80000000 | 34,  100,
    QMetaType::Void, 0x80000000 | 36,  100,
    QMetaType::Void, 0x80000000 | 38,  100,
    QMetaType::Void, 0x80000000 | 42,  100,

 // properties: name, type, flags
     116, QMetaType::Bool, 0x00495103,
     117, QMetaType::Double, 0x00495103,
     118, QMetaType::Int, 0x00495103,
     119, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       4,
       1,

 // enums: name, flags, count, data
     120, 0x0,   20,  900,
     141, 0x0,    4,  940,
     146, 0x0,    3,  948,
     150, 0x0,    3,  954,
     154, 0x0,    5,  960,
     160, 0x0,    4,  970,
     165, 0x0,    2,  978,

 // enum data: key, value
     121, uint(osg::QReflect_Camera::DEPTH_BUFFER),
     122, uint(osg::QReflect_Camera::STENCIL_BUFFER),
     123, uint(osg::QReflect_Camera::PACKED_DEPTH_STENCIL_BUFFER),
     124, uint(osg::QReflect_Camera::COLOR_BUFFER),
     125, uint(osg::QReflect_Camera::COLOR_BUFFER0),
     126, uint(osg::QReflect_Camera::COLOR_BUFFER1),
     127, uint(osg::QReflect_Camera::COLOR_BUFFER2),
     128, uint(osg::QReflect_Camera::COLOR_BUFFER3),
     129, uint(osg::QReflect_Camera::COLOR_BUFFER4),
     130, uint(osg::QReflect_Camera::COLOR_BUFFER5),
     131, uint(osg::QReflect_Camera::COLOR_BUFFER6),
     132, uint(osg::QReflect_Camera::COLOR_BUFFER7),
     133, uint(osg::QReflect_Camera::COLOR_BUFFER8),
     134, uint(osg::QReflect_Camera::COLOR_BUFFER9),
     135, uint(osg::QReflect_Camera::COLOR_BUFFER10),
     136, uint(osg::QReflect_Camera::COLOR_BUFFER11),
     137, uint(osg::QReflect_Camera::COLOR_BUFFER12),
     138, uint(osg::QReflect_Camera::COLOR_BUFFER13),
     139, uint(osg::QReflect_Camera::COLOR_BUFFER14),
     140, uint(osg::QReflect_Camera::COLOR_BUFFER15),
     142, uint(osg::QReflect_Camera::IMPLICIT_DEPTH_BUFFER_ATTACHMENT),
     143, uint(osg::QReflect_Camera::IMPLICIT_STENCIL_BUFFER_ATTACHMENT),
     144, uint(osg::QReflect_Camera::IMPLICIT_COLOR_BUFFER_ATTACHMENT),
     145, uint(osg::QReflect_Camera::USE_DISPLAY_SETTINGS_MASK),
     147, uint(osg::QReflect_Camera::FIXED),
     148, uint(osg::QReflect_Camera::HORIZONTAL),
     149, uint(osg::QReflect_Camera::VERTICAL),
     151, uint(osg::QReflect_Camera::PRE_RENDER),
     152, uint(osg::QReflect_Camera::NESTED_RENDER),
     153, uint(osg::QReflect_Camera::POST_RENDER),
     155, uint(osg::QReflect_Camera::FRAME_BUFFER_OBJECT),
     156, uint(osg::QReflect_Camera::PIXEL_BUFFER_RTT),
     157, uint(osg::QReflect_Camera::PIXEL_BUFFER),
     158, uint(osg::QReflect_Camera::FRAME_BUFFER),
     159, uint(osg::QReflect_Camera::SEPARATE_WINDOW),
     161, uint(osg::QReflect_Camera::RESIZE_VIEWPORT),
     162, uint(osg::QReflect_Camera::RESIZE_ATTACHMENTS),
     163, uint(osg::QReflect_Camera::RESIZE_PROJECTIONMATRIX),
     164, uint(osg::QReflect_Camera::RESIZE_DEFAULT),
     166, uint(osg::QReflect_Camera::PRE_MULTIPLY),
     167, uint(osg::QReflect_Camera::POST_MULTIPLY),

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
        case 11: { bool _r = _t->computeLocalToWorldMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->computeWorldToLocalMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_NodeVisitor*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->getProjectionMatrixAsFrustum((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->getProjectionMatrixAsOrtho((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->getProjectionMatrixAsPerspective((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isRenderToTextureCamera();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->getImplicitBufferAttachmentRenderMask((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->getImplicitBufferAttachmentResolveMask((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->getRenderOrderNum();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { osg::QReflect_DisplaySettings* _r = _t->getDisplaySettings();
            if (_a[0]) *reinterpret_cast< osg::QReflect_DisplaySettings**>(_a[0]) = _r; }  break;
        case 21: { osg::QReflect_GraphicsContext* _r = _t->getGraphicsContext();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsContext**>(_a[0]) = _r; }  break;
        case 22: { osg::QReflect_GraphicsOperation* _r = _t->getRenderer();
            if (_a[0]) *reinterpret_cast< osg::QReflect_GraphicsOperation**>(_a[0]) = _r; }  break;
        case 23: { osg::QReflect_Object* _r = _t->getRenderingCache();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Object**>(_a[0]) = _r; }  break;
        case 24: { osg::QReflect_OperationThread* _r = _t->getCameraThread();
            if (_a[0]) *reinterpret_cast< osg::QReflect_OperationThread**>(_a[0]) = _r; }  break;
        case 25: { osg::QReflect_Stats* _r = _t->getStats();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Stats**>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->getAllowEventFocus();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { double _r = _t->getClearDepth();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->getClearStencil();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { uint _r = _t->getAttachmentMapModifiedCount();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 30: { osg::QReflect_Camera* _r = _t->asCamera();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera**>(_a[0]) = _r; }  break;
        case 31: { osg::QReflect_Camera* _r = _t->asCamera();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera**>(_a[0]) = _r; }  break;
        case 32: { osg::QReflect_Camera::ProjectionResizePolicy _r = _t->getProjectionResizePolicy();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::ProjectionResizePolicy*>(_a[0]) = _r; }  break;
        case 33: { osg::QReflect_Camera::RenderOrder _r = _t->getRenderOrder();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::RenderOrder*>(_a[0]) = _r; }  break;
        case 34: { osg::QReflect_Camera::RenderTargetImplementation _r = _t->getRenderTargetFallback();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation*>(_a[0]) = _r; }  break;
        case 35: { osg::QReflect_Camera::RenderTargetImplementation _r = _t->getRenderTargetImplementation();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation*>(_a[0]) = _r; }  break;
        case 36: { osg::QReflect_Camera::TransformOrder _r = _t->getTransformOrder();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Camera::TransformOrder*>(_a[0]) = _r; }  break;
        case 37: { osg::QReflect_ColorMask* _r = _t->getColorMask();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ColorMask**>(_a[0]) = _r; }  break;
        case 38: { osg::QReflect_ColorMask* _r = _t->getColorMask();
            if (_a[0]) *reinterpret_cast< osg::QReflect_ColorMask**>(_a[0]) = _r; }  break;
        case 39: { osg::QReflect_Viewport* _r = _t->getViewport();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Viewport**>(_a[0]) = _r; }  break;
        case 40: { osg::QReflect_Viewport* _r = _t->getViewport();
            if (_a[0]) *reinterpret_cast< osg::QReflect_Viewport**>(_a[0]) = _r; }  break;
        case 41: _t->attach((*reinterpret_cast< osg::QReflect_Camera::BufferComponent(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Image*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 42: _t->attach((*reinterpret_cast< osg::QReflect_Camera::BufferComponent(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Texture*(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7]))); break;
        case 43: _t->createCameraThread(); break;
        case 44: _t->detach((*reinterpret_cast< osg::QReflect_Camera::BufferComponent(*)>(_a[1]))); break;
        case 45: _t->dirtyAttachmentMap(); break;
        case 46: _t->getViewMatrixAsLookAt((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 47: _t->getViewMatrixAsLookAt((*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3f*(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 48: _t->inheritCullSettings((*reinterpret_cast< osg::QReflect_CullSettings*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 49: _t->releaseGLObjects((*reinterpret_cast< osg::QReflect_State*(*)>(_a[1]))); break;
        case 50: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 51: _t->resizeAttachments((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 52: _t->resizeGLObjectBuffers((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 53: _t->setClearAccum((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 54: _t->setClearColor((*reinterpret_cast< osg::QReflect_Vec4f*(*)>(_a[1]))); break;
        case 55: _t->setColorMask((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 56: _t->setColorMask((*reinterpret_cast< osg::QReflect_ColorMask*(*)>(_a[1]))); break;
        case 57: _t->setImplicitBufferAttachmentMask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 58: _t->setImplicitBufferAttachmentRenderMask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->setImplicitBufferAttachmentResolveMask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->setProjectionMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 61: _t->setProjectionMatrix((*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[1]))); break;
        case 62: _t->setProjectionMatrixAsFrustum((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 63: _t->setProjectionMatrixAsOrtho((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 64: _t->setProjectionMatrixAsOrtho2D((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 65: _t->setProjectionMatrixAsPerspective((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 66: _t->setProjectionResizePolicy((*reinterpret_cast< osg::QReflect_Camera::ProjectionResizePolicy(*)>(_a[1]))); break;
        case 67: _t->setRenderOrder((*reinterpret_cast< osg::QReflect_Camera::RenderOrder(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 68: _t->setRenderTargetImplementation((*reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation(*)>(_a[2]))); break;
        case 69: _t->setRenderTargetImplementation((*reinterpret_cast< osg::QReflect_Camera::RenderTargetImplementation(*)>(_a[1]))); break;
        case 70: _t->setTransformOrder((*reinterpret_cast< osg::QReflect_Camera::TransformOrder(*)>(_a[1]))); break;
        case 71: _t->setViewMatrix((*reinterpret_cast< osg::QReflect_Matrixd*(*)>(_a[1]))); break;
        case 72: _t->setViewMatrix((*reinterpret_cast< osg::QReflect_Matrixf*(*)>(_a[1]))); break;
        case 73: _t->setViewMatrixAsLookAt((*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[1])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[2])),(*reinterpret_cast< osg::QReflect_Vec3d*(*)>(_a[3]))); break;
        case 74: _t->setViewport((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 75: _t->setViewport((*reinterpret_cast< osg::QReflect_Viewport*(*)>(_a[1]))); break;
        case 76: _t->pmoc_reverse_setCameraThread((*reinterpret_cast< osg::QReflect_OperationThread*(*)>(_a[1]))); break;
        case 77: _t->pmoc_reverse_setCameraThread(); break;
        case 78: _t->pmoc_reverse_setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 79: _t->pmoc_reverse_setDisplaySettings(); break;
        case 80: _t->pmoc_reverse_setGraphicsContext((*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[1]))); break;
        case 81: _t->pmoc_reverse_setGraphicsContext(); break;
        case 82: _t->pmoc_reverse_setRenderer((*reinterpret_cast< osg::QReflect_GraphicsOperation*(*)>(_a[1]))); break;
        case 83: _t->pmoc_reverse_setRenderer(); break;
        case 84: _t->pmoc_reverse_setRenderingCache((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        case 85: _t->pmoc_reverse_setRenderingCache(); break;
        case 86: _t->pmoc_reverse_setStats((*reinterpret_cast< osg::QReflect_Stats*(*)>(_a[1]))); break;
        case 87: _t->pmoc_reverse_setStats(); break;
        case 88: _t->setAllowEventFocus((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 89: _t->setAttachmentMapModifiedCount((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 90: _t->setCameraThread((*reinterpret_cast< osg::QReflect_OperationThread*(*)>(_a[1]))); break;
        case 91: _t->setClearDepth((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 92: _t->setClearStencil((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 93: _t->setDisplaySettings((*reinterpret_cast< osg::QReflect_DisplaySettings*(*)>(_a[1]))); break;
        case 94: _t->setGraphicsContext((*reinterpret_cast< osg::QReflect_GraphicsContext*(*)>(_a[1]))); break;
        case 95: _t->setRenderer((*reinterpret_cast< osg::QReflect_GraphicsOperation*(*)>(_a[1]))); break;
        case 96: _t->setRenderingCache((*reinterpret_cast< osg::QReflect_Object*(*)>(_a[1]))); break;
        case 97: _t->setStats((*reinterpret_cast< osg::QReflect_Stats*(*)>(_a[1]))); break;
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
        if (_id < 98)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 98;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 98)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 98;
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
