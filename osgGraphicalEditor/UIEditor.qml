import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0
import QtQuick.Controls.Styles 1.0
import osgQtQuick 1.0
import QtQml 2.0
import QtQuick.Dialogs 1.0
Rectangle{id:screen
width:800;height:600; color: "transparent"
Menu{
id:osg_Group
MenuItem{
text: "new osg::Node "
onTriggered: globalEditor.addNew_osg_Node();
}
MenuItem{
text: "new osg::Transform "
onTriggered: globalEditor.addNew_osg_Transform();
}
MenuItem{
text: "new osg::TexGenNode "
onTriggered: globalEditor.addNew_osg_TexGenNode();
}
MenuItem{
text: "new osg::Switch "
onTriggered: globalEditor.addNew_osg_Switch();
}
MenuItem{
text: "new osg::Sequence "
onTriggered: globalEditor.addNew_osg_Sequence();
}
MenuItem{
text: "new osg::ProxyNode "
onTriggered: globalEditor.addNew_osg_ProxyNode();
}
MenuItem{
text: "new osg::Projection "
onTriggered: globalEditor.addNew_osg_Projection();
}
MenuItem{
text: "new osg::OcclusionQueryNode "
onTriggered: globalEditor.addNew_osg_OcclusionQueryNode();
}
MenuItem{
text: "new osg::OccluderNode "
onTriggered: globalEditor.addNew_osg_OccluderNode();
}
MenuItem{
text: "new osg::LightSource "
onTriggered: globalEditor.addNew_osg_LightSource();
}
MenuItem{
text: "new osg::LOD "
onTriggered: globalEditor.addNew_osg_LOD();
}
MenuItem{
text: "new osg::Geode "
onTriggered: globalEditor.addNew_osg_Geode();
}
MenuItem{
text: "new osg::Group "
onTriggered: globalEditor.addNew_osg_Group();
}
MenuItem{
text: "new osg::CoordinateSystemNode "
onTriggered: globalEditor.addNew_osg_CoordinateSystemNode();
}
MenuItem{
text: "new osg::ClipNode "
onTriggered: globalEditor.addNew_osg_ClipNode();
}
MenuItem{
text: "new osg::ClearNode "
onTriggered: globalEditor.addNew_osg_ClearNode();
}
MenuItem{
text: "new osg::Billboard "
onTriggered: globalEditor.addNew_osg_Billboard();
}
}
Menu{
id:osg_StateSet
MenuItem{
text: "new osg::StateAttribute "
onTriggered: globalEditor.addNew_osg_StateAttribute();
}
MenuItem{
text: "new osg::Viewport "
onTriggered: globalEditor.addNew_osg_Viewport();
}
MenuItem{
text: "new osg::VertexProgram "
onTriggered: globalEditor.addNew_osg_VertexProgram();
}
MenuItem{
text: "new osg::UniformBufferBinding "
onTriggered: globalEditor.addNew_osg_UniformBufferBinding();
}
MenuItem{
text: "new osg::TransformFeedbackBufferBinding "
onTriggered: globalEditor.addNew_osg_TransformFeedbackBufferBinding();
}
MenuItem{
text: "new osg::TexEnvFilter "
onTriggered: globalEditor.addNew_osg_TexEnvFilter();
}
MenuItem{
text: "new osg::Texture2DMultisample "
onTriggered: globalEditor.addNew_osg_Texture2DMultisample();
}
MenuItem{
text: "new osg::TextureCubeMap "
onTriggered: globalEditor.addNew_osg_TextureCubeMap();
}
MenuItem{
text: "new osg::TextureRectangle "
onTriggered: globalEditor.addNew_osg_TextureRectangle();
}
MenuItem{
text: "new osg::TextureBuffer "
onTriggered: globalEditor.addNew_osg_TextureBuffer();
}
MenuItem{
text: "new osg::Texture3D "
onTriggered: globalEditor.addNew_osg_Texture3D();
}
MenuItem{
text: "new osg::Texture "
onTriggered: globalEditor.addNew_osg_Texture();
}
MenuItem{
text: "new osg::Texture2D "
onTriggered: globalEditor.addNew_osg_Texture2D();
}
MenuItem{
text: "new osg::Texture2DArray "
onTriggered: globalEditor.addNew_osg_Texture2DArray();
}
MenuItem{
text: "new osg::Texture1D "
onTriggered: globalEditor.addNew_osg_Texture1D();
}
MenuItem{
text: "new osg::TexMat "
onTriggered: globalEditor.addNew_osg_TexMat();
}
MenuItem{
text: "new osg::TexGen "
onTriggered: globalEditor.addNew_osg_TexGen();
}
MenuItem{
text: "new osg::TexEnv "
onTriggered: globalEditor.addNew_osg_TexEnv();
}
MenuItem{
text: "new osg::TexEnvCombine "
onTriggered: globalEditor.addNew_osg_TexEnvCombine();
}
MenuItem{
text: "new osg::Stencil "
onTriggered: globalEditor.addNew_osg_Stencil();
}
MenuItem{
text: "new osg::StencilTwoSided "
onTriggered: globalEditor.addNew_osg_StencilTwoSided();
}
MenuItem{
text: "new osg::SampleMaski "
onTriggered: globalEditor.addNew_osg_SampleMaski();
}
MenuItem{
text: "new osg::ShaderAttribute "
onTriggered: globalEditor.addNew_osg_ShaderAttribute();
}
MenuItem{
text: "new osg::ShadeModel "
onTriggered: globalEditor.addNew_osg_ShadeModel();
}
MenuItem{
text: "new osg::Scissor "
onTriggered: globalEditor.addNew_osg_Scissor();
}
MenuItem{
text: "new osg::Program "
onTriggered: globalEditor.addNew_osg_Program();
}
MenuItem{
text: "new osg::PolygonMode "
onTriggered: globalEditor.addNew_osg_PolygonMode();
}
MenuItem{
text: "new osg::PrimitiveRestartIndex "
onTriggered: globalEditor.addNew_osg_PrimitiveRestartIndex();
}
MenuItem{
text: "new osg::PolygonStipple "
onTriggered: globalEditor.addNew_osg_PolygonStipple();
}
MenuItem{
text: "new osg::PolygonOffset "
onTriggered: globalEditor.addNew_osg_PolygonOffset();
}
MenuItem{
text: "new osg::Point "
onTriggered: globalEditor.addNew_osg_Point();
}
MenuItem{
text: "new osg::PointSprite "
onTriggered: globalEditor.addNew_osg_PointSprite();
}
MenuItem{
text: "new osg::PatchParameter "
onTriggered: globalEditor.addNew_osg_PatchParameter();
}
MenuItem{
text: "new osg::LogicOp "
onTriggered: globalEditor.addNew_osg_LogicOp();
}
MenuItem{
text: "new osg::Multisample "
onTriggered: globalEditor.addNew_osg_Multisample();
}
MenuItem{
text: "new osg::Material "
onTriggered: globalEditor.addNew_osg_Material();
}
MenuItem{
text: "new osg::LineStipple "
onTriggered: globalEditor.addNew_osg_LineStipple();
}
MenuItem{
text: "new osg::LineWidth "
onTriggered: globalEditor.addNew_osg_LineWidth();
}
MenuItem{
text: "new osg::Light "
onTriggered: globalEditor.addNew_osg_Light();
}
MenuItem{
text: "new osg::LightModel "
onTriggered: globalEditor.addNew_osg_LightModel();
}
MenuItem{
text: "new osg::Hint "
onTriggered: globalEditor.addNew_osg_Hint();
}
MenuItem{
text: "new osg::FrontFace "
onTriggered: globalEditor.addNew_osg_FrontFace();
}
MenuItem{
text: "new osg::Fog "
onTriggered: globalEditor.addNew_osg_Fog();
}
MenuItem{
text: "new osg::FrameBufferObject "
onTriggered: globalEditor.addNew_osg_FrameBufferObject();
}
MenuItem{
text: "new osg::FragmentProgram "
onTriggered: globalEditor.addNew_osg_FragmentProgram();
}
MenuItem{
text: "new osg::Depth "
onTriggered: globalEditor.addNew_osg_Depth();
}
MenuItem{
text: "new osg::CullFace "
onTriggered: globalEditor.addNew_osg_CullFace();
}
MenuItem{
text: "new osg::ColorMask "
onTriggered: globalEditor.addNew_osg_ColorMask();
}
MenuItem{
text: "new osg::ColorMatrix "
onTriggered: globalEditor.addNew_osg_ColorMatrix();
}
MenuItem{
text: "new osg::ClipPlane "
onTriggered: globalEditor.addNew_osg_ClipPlane();
}
MenuItem{
text: "new osg::ClampColor "
onTriggered: globalEditor.addNew_osg_ClampColor();
}
MenuItem{
text: "new osg::BufferIndexBinding "
onTriggered: globalEditor.addNew_osg_BufferIndexBinding();
}
MenuItem{
text: "new osg::BlendEquation "
onTriggered: globalEditor.addNew_osg_BlendEquation();
}
MenuItem{
text: "new osg::BlendFunc "
onTriggered: globalEditor.addNew_osg_BlendFunc();
}
MenuItem{
text: "new osg::BlendColor "
onTriggered: globalEditor.addNew_osg_BlendColor();
}
MenuItem{
text: "new osg::AtomicCounterBufferBinding "
onTriggered: globalEditor.addNew_osg_AtomicCounterBufferBinding();
}
MenuItem{
text: "new osg::AlphaFunc "
onTriggered: globalEditor.addNew_osg_AlphaFunc();
}
}
ToolBar {
 id: maintoolbar
  anchors.top: parent.top
     Row { 
anchors.centerIn: parent
 Button {
menu:osg_Group
text:"Add toosg::Group "  
}
 Button {
menu:osg_StateSet
text:"Add toosg::StateSet "  
 }
}}}
