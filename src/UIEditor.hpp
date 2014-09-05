#ifndef GEN_UIEDITOR_HPP
#define GEN_UIEDITOR_HPP

#include <MetaQQuickClass.h>
#include <list>
#include <map>
#include <typeinfo>
#include <memory>
#include <MetaLibraryRegistry.h>
#include <QtQml>
#include <QtQuick/QQuickView>
#include <QtQuick/QQuickItem>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>
#include <QtQml/QQmlContext>
#include <osg/Group>
#include <osg/Node>
#include <osg/Transform>
#include <osg/TexGenNode>
#include <osg/Switch>
#include <osg/Sequence>
#include <osg/ProxyNode>
#include <osg/Projection>
#include <osg/PagedLOD>
#include <osg/PositionAttitudeTransform>
#include <osg/OcclusionQueryNode>
#include <osg/OccluderNode>
#include <osg/MatrixTransform>
#include <osg/LightSource>
#include <osg/LOD>
#include <osg/Geode>
#include <osg/Group>
#include <osg/CoordinateSystemNode>
#include <osg/ClipNode>
#include <osg/ClearNode>
#include <osg/AutoTransform>
#include <osg/Camera>
#include <osg/CameraView>
#include <osg/Billboard>
#include <osg/Geometry>
#include <osg/StateSet>
#include <osg/StateSet>
#include <osg/TextureRectangle>
#include <osg/Viewport>
#include <osg/VertexProgram>
#include <osg/BufferIndexBinding>
#include <osg/BufferIndexBinding>
#include <osg/Texture1D>
#include <osg/Texture3D>
#include <osg/TextureCubeMap>
#include <osg/TextureBuffer>
#include <osg/Texture2DArray>
#include <osg/Texture2DMultisample>
#include <osg/Texture2D>
#include <osg/TexGen>
#include <osg/TexMat>
#include <osg/Texture>
#include <osg/TexEnvCombine>
#include <osg/TexEnvFilter>
#include <osg/TexEnv>
#include <osg/StencilTwoSided>
#include <osg/Stencil>
#include <osg/StateAttribute>
#include <osg/SampleMaski>
#include <osg/ShaderAttribute>
#include <osg/ShadeModel>
#include <osg/Scissor>
#include <osg/Program>
#include <osg/PolygonMode>
#include <osg/PrimitiveRestartIndex>
#include <osg/PolygonStipple>
#include <osg/PolygonOffset>
#include <osg/Point>
#include <osg/PointSprite>
#include <osg/PatchParameter>
#include <osg/LogicOp>
#include <osg/Multisample>
#include <osg/Material>
#include <osg/LineStipple>
#include <osg/LineWidth>
#include <osg/Light>
#include <osg/LightModel>
#include <osg/Hint>
#include <osg/FrontFace>
#include <osg/Fog>
#include <osg/FrameBufferObject>
#include <osg/FragmentProgram>
#include <osg/Depth>
#include <osg/CullFace>
#include <osg/ColorMask>
#include <osg/ColorMatrix>
#include <osg/ClipPlane>
#include <osg/ClampColor>
#include <osg/BufferIndexBinding>
#include <osg/BlendEquation>
#include <osg/BlendFunc>
#include <osg/BlendColor>
#include <osg/BufferIndexBinding>
#include <osg/AlphaFunc>
#include <osg/Node>
#include <osgUtil/IntersectVisitor>
#include <osgUtil/Optimizer>
#include <osgUtil/MeshOptimizers>
#include <osgUtil/UpdateVisitor>
#include <osgUtil/IncrementalCompileOperation>
#include <osgUtil/MeshOptimizers>
#include <osgUtil/MeshOptimizers>
#include <osgUtil/CullVisitor>
#include <osgUtil/TriStripVisitor>
#include <osgUtil/Statistics>
#include <osgUtil/DrawElementTypeSimplifier>
#include <osgUtil/DisplayRequirementsVisitor>
#include <osgUtil/ShaderGen>
#include <osgUtil/SmoothingVisitor>
#include <osgUtil/Simplifier>
#include <osgUtil/MeshOptimizers>
#include <osgUtil/GLObjectsVisitor>
#include <osgUtil/MeshOptimizers>
#include <osgUtil/IntersectionVisitor>
#include <osgUtil/IntersectVisitor>
#include <osgUtil/PrintVisitor>
#include <osg/NodeVisitor>
#include <osg/KdTree>
#include <osg/ComputeBoundsVisitor>
#include <osg/CollectOccludersVisitor>
#include <osg/Geode>
#include <osg/Geometry>
#include <osgUtil/DelaunayTriangulator>
#include <osg/OcclusionQueryNode>
#include <osg/Geometry>

namespace pmoc{
class QQModel;
class Action
{
public:
    Action(std::string n,pmoc::MetaClass * s1,pmoc::MetaClass * s2):name(n),operand(s2),operatorsubject(s1) {};
    Action(const Action&o)
    {
        name=o.name;
        operatorsubject=o.operatorsubject;
        operand=o.operand;
    }
    bool operator <( const Action&o)const
    {
        return (name!=o.name)?name<o.name:(operatorsubject!=o.operatorsubject)?operatorsubject<o.operatorsubject:operand<o.operand;
    }
    std::string name;
    pmoc::MetaClass * operatorsubject;//
    pmoc::MetaClass * operand;
};
typedef std::vector< Action > Actions;
	class UIEditor: public QObject{
	Q_OBJECT
	signals:
void osg_StateSet_added(QQModel*);
void osg_StateSet_removed();
void osg_Node_added(QQModel*);
void osg_Node_removed();
void osg_Geometry_added(QQModel*);
void osg_Geometry_removed();
void osg_StateAttribute_added(QQModel*);
void osg_StateAttribute_removed();
void osg_NodeVisitor_added(QQModel*);
void osg_NodeVisitor_removed();
	protected:
	 QQuickView *_win;
	 QQuickItem *_rootobject,*_thisqitem;
	 std::map<std::string, QObject*> _componentModels;
	//std::list<Instance> managedobjects;//store
///each operand_classname have a selected_instance
public:
           Actions _operators;//
           ///in order to get back currents
            Instance	cur_operand;
            Instance	cur_operatorsubject;

            void generateAmbiguitiesMenu(std::string operandstring,std::set<std::string> &possibleactions);
            ///cohersistion de l'operand
            ///dispatch on the good HxCinvoquable (where subject coercition is done)
            void resolvOperator(Instance*subject,Instance*operand);
            void resolvReverseOperator(Instance*subject,Instance*operand);

            Instance _cutSubject;//copied parent ref
            Instance _copyOperand;//copied ref
            ///fill it on copy or cut
            bool _isCutAction;//is the copied must be removed
            Instance savoperand,savsubject;///sav state during Edition Action (Copy Cut Del Paste)
           ///in order to set/retireve selected from outside pmocFrameWork
osg::Node* osg_Node_cur_selected;
bool osg_Node_selected;
Q_PROPERTY(bool osg_Node_selected READ getosg_Node_selected WRITE setosg_Node_selected NOTIFY osg_Node_selectedChanged)
signals:
void osg_Node_selectedChanged();
public:
inline bool getosg_Node_selected()const {return osg_Node_selected;}
void setosg_Node_selected(bool b){
if(osg_Node_selected!=b){
osg_Node_selected=b;
emit osg_Node_selectedChanged();
}
}
void setosg_Node_cur_selected(osg::Node*n){
osg_Node_cur_selected=n;
setosg_Node_selected(n!=0);
}
osg::StateSet* osg_StateSet_cur_selected;
bool osg_StateSet_selected;
Q_PROPERTY(bool osg_StateSet_selected READ getosg_StateSet_selected WRITE setosg_StateSet_selected NOTIFY osg_StateSet_selectedChanged)
signals:
void osg_StateSet_selectedChanged();
public:
inline bool getosg_StateSet_selected()const {return osg_StateSet_selected;}
void setosg_StateSet_selected(bool b){
if(osg_StateSet_selected!=b){
osg_StateSet_selected=b;
emit osg_StateSet_selectedChanged();
}
}
void setosg_StateSet_cur_selected(osg::StateSet*n){
osg_StateSet_cur_selected=n;
setosg_StateSet_selected(n!=0);
}
osg::Geode* osg_Geode_cur_selected;
bool osg_Geode_selected;
Q_PROPERTY(bool osg_Geode_selected READ getosg_Geode_selected WRITE setosg_Geode_selected NOTIFY osg_Geode_selectedChanged)
signals:
void osg_Geode_selectedChanged();
public:
inline bool getosg_Geode_selected()const {return osg_Geode_selected;}
void setosg_Geode_selected(bool b){
if(osg_Geode_selected!=b){
osg_Geode_selected=b;
emit osg_Geode_selectedChanged();
}
}
void setosg_Geode_cur_selected(osg::Geode*n){
osg_Geode_cur_selected=n;
setosg_Geode_selected(n!=0);
}
osg::Group* osg_Group_cur_selected;
bool osg_Group_selected;
Q_PROPERTY(bool osg_Group_selected READ getosg_Group_selected WRITE setosg_Group_selected NOTIFY osg_Group_selectedChanged)
signals:
void osg_Group_selectedChanged();
public:
inline bool getosg_Group_selected()const {return osg_Group_selected;}
void setosg_Group_selected(bool b){
if(osg_Group_selected!=b){
osg_Group_selected=b;
emit osg_Group_selectedChanged();
}
}
void setosg_Group_cur_selected(osg::Group*n){
osg_Group_cur_selected=n;
setosg_Group_selected(n!=0);
}
osg::Geometry* osg_Geometry_cur_selected;
bool osg_Geometry_selected;
Q_PROPERTY(bool osg_Geometry_selected READ getosg_Geometry_selected WRITE setosg_Geometry_selected NOTIFY osg_Geometry_selectedChanged)
signals:
void osg_Geometry_selectedChanged();
public:
inline bool getosg_Geometry_selected()const {return osg_Geometry_selected;}
void setosg_Geometry_selected(bool b){
if(osg_Geometry_selected!=b){
osg_Geometry_selected=b;
emit osg_Geometry_selectedChanged();
}
}
void setosg_Geometry_cur_selected(osg::Geometry*n){
osg_Geometry_cur_selected=n;
setosg_Geometry_selected(n!=0);
}

	UIEditor(QQuickView*win=0,QQuickItem*parent=0);
	UIEditor(const UIEditor &o){_win=o._win;}
Q_INVOKABLE void operator_with_operand_osg_Node(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Node(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Transform(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Transform(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TexGenNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TexGenNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Switch(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Switch(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Sequence(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Sequence(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ProxyNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ProxyNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Projection(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Projection(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PagedLOD(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PagedLOD(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PositionAttitudeTransform(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PositionAttitudeTransform(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_OcclusionQueryNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_OcclusionQueryNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_OccluderNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_OccluderNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_MatrixTransform(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_MatrixTransform(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_LightSource(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_LightSource(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_LOD(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_LOD(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Geode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Geode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Group(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Group(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_CoordinateSystemNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_CoordinateSystemNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ClipNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ClipNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ClearNode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ClearNode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_AutoTransform(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_AutoTransform(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Camera(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Camera(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_CameraView(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_CameraView(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Billboard(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Billboard(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_StateSet(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_StateSet(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TextureRectangle(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TextureRectangle(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Viewport(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Viewport(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_VertexProgram(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_VertexProgram(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_UniformBufferBinding(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_UniformBufferBinding(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TransformFeedbackBufferBinding(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TransformFeedbackBufferBinding(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Texture1D(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Texture1D(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Texture3D(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Texture3D(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TextureCubeMap(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TextureCubeMap(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TextureBuffer(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TextureBuffer(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Texture2DArray(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Texture2DArray(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Texture2DMultisample(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Texture2DMultisample(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Texture2D(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Texture2D(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TexGen(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TexGen(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TexMat(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TexMat(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Texture(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Texture(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TexEnvCombine(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TexEnvCombine(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TexEnvFilter(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TexEnvFilter(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_TexEnv(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_TexEnv(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_StencilTwoSided(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_StencilTwoSided(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Stencil(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Stencil(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_StateAttribute(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_StateAttribute(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_SampleMaski(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_SampleMaski(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ShaderAttribute(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ShaderAttribute(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ShadeModel(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ShadeModel(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Scissor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Scissor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Program(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Program(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PolygonMode(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PolygonMode(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PrimitiveRestartIndex(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PrimitiveRestartIndex(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PolygonStipple(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PolygonStipple(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PolygonOffset(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PolygonOffset(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Point(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Point(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PointSprite(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PointSprite(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_PatchParameter(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_PatchParameter(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_LogicOp(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_LogicOp(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Multisample(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Multisample(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Material(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Material(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_LineStipple(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_LineStipple(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_LineWidth(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_LineWidth(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Light(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Light(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_LightModel(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_LightModel(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Hint(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Hint(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_FrontFace(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_FrontFace(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Fog(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Fog(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_FrameBufferObject(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_FrameBufferObject(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_FragmentProgram(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_FragmentProgram(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Depth(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Depth(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_CullFace(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_CullFace(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ColorMask(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ColorMask(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ColorMatrix(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ColorMatrix(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ClipPlane(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ClipPlane(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ClampColor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ClampColor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_BufferIndexBinding(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_BufferIndexBinding(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_BlendEquation(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_BlendEquation(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_BlendFunc(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_BlendFunc(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_BlendColor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_BlendColor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_AtomicCounterBufferBinding(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_AtomicCounterBufferBinding(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_AlphaFunc(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_AlphaFunc(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_PickVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_PickVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_BaseOptimizerVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_BaseOptimizerVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_VertexCacheMissVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_VertexCacheMissVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_UpdateVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_UpdateVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_StateToCompile(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_StateToCompile(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_VertexCacheVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_VertexCacheVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_VertexAccessOrderVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_VertexAccessOrderVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_CullVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_CullVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_TriStripVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_TriStripVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_StatsVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_StatsVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_DrawElementTypeSimplifierVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_DrawElementTypeSimplifierVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_DisplayRequirementsVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_DisplayRequirementsVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_ShaderGenVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_ShaderGenVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_SmoothingVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_SmoothingVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_Simplifier(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_Simplifier(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_GeometryCollector(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_GeometryCollector(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_GLObjectsVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_GLObjectsVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_IndexMeshVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_IndexMeshVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_IntersectionVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_IntersectionVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_IntersectVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_IntersectVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_PrintVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_PrintVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_NodeVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_NodeVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_KdTreeBuilder(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_KdTreeBuilder(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_ComputeBoundsVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_ComputeBoundsVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_CollectOccludersVisitor(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_CollectOccludersVisitor(QString operatorName );
Q_INVOKABLE void operator_with_operand_deprecated_osg_Geometry(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_deprecated_osg_Geometry(QString operatorName );
Q_INVOKABLE void operator_with_operand_osgUtil_DelaunayConstraint(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osgUtil_DelaunayConstraint(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_QueryGeometry(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_QueryGeometry(QString operatorName );
Q_INVOKABLE void operator_with_operand_osg_Geometry(QString operatorName ,bool create=false);
Q_INVOKABLE void operator_remove_osg_Geometry(QString operatorName );
~UIEditor(){
}
void generatemenus(MetaClass* c,const Action&a,std::string &out);
signals:
void selectedChanged(pmoc::QQModel*m);
void copied(pmoc::QQModel*m);
void pasted(pmoc::QQModel*m);
void cutted(pmoc::QQModel*m);
void deleted(pmoc::QQModel*m);
public slots:
        Q_INVOKABLE void setSubject(pmoc::QQModel*m){cur_operatorsubject=m->_instance;}
        Q_INVOKABLE void setOperand(pmoc::QQModel*m){cur_operand=m->_instance;emit selectedChanged(m);
setosg_Geometry_selected(cur_operand.model->isSubClass(PMOCGETMETACLASS("osg::Geometry")));
setosg_Group_selected(cur_operand.model->isSubClass(PMOCGETMETACLASS("osg::Group")));
setosg_Geode_selected(cur_operand.model->isSubClass(PMOCGETMETACLASS("osg::Geode")));
setosg_StateSet_selected(cur_operand.model->isSubClass(PMOCGETMETACLASS("osg::StateSet")));
setosg_Node_selected(cur_operand.model->isSubClass(PMOCGETMETACLASS("osg::Node")));
setosg_Group_selected(cur_operand.model->isSubClass(PMOCGETMETACLASS("osg::Group")));
}
        ///call both of these in order to cut (setCopyOperand then  setCutSubject)
        ///call it in order to copy
        Q_INVOKABLE void setCopyOperand(pmoc::QQModel*m){_isCutAction=false;  _copyOperand=m->_instance;emit copied(m);}
        ///call it and the lattest to cur
        Q_INVOKABLE void setCutSubject(pmoc::QQModel*m){_isCutAction=true; _cutSubject=m->_instance;emit cutted(m);}

        Q_INVOKABLE void realPaste(){
        //save current state
         savoperand=cur_operand;savsubject=cur_operatorsubject;
       //setup subject assuming cur_operand is the selected QQModel
       cur_operatorsubject=cur_operand;
        //setup operand
        cur_operand=_copyOperand;
        resolvOperator(&cur_operatorsubject,&cur_operand);
        }
        Q_INVOKABLE void realRemoval(){
        cur_operatorsubject=_cutSubject;
        //setup operand
        cur_operand=_copyOperand;
        _isCutAction=false;
        resolvReverseOperator(&cur_operatorsubject,&cur_operand);
        }
        ///inner slot to restore State after Edition Action (Copy Cut Del Paste)
        void restoreState(){
        //restore state
        cur_operand=savoperand;
        cur_operatorsubject=savsubject;
        }
};
}
Q_DECLARE_METATYPE(pmoc::UIEditor)
QML_DECLARE_TYPE(pmoc::UIEditor)
#endif

