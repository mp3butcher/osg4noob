#ifndef osg_StateAttribute_pmocHPP
#define  osg_StateAttribute_pmocHPP 1


#include <osg/StateAttribute_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_Texture;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_StateAttributeCallback;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_ShaderComponent;
			} ;
#include <osg/StateAttribute>
#include <osg/StateAttribute>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_StateAttribute: public pmoc::QQModel
{
Q_OBJECT
public:
 enum Type{
TEXTURE =StateAttribute::TEXTURE,
POLYGONMODE =StateAttribute::POLYGONMODE,
POLYGONOFFSET =StateAttribute::POLYGONOFFSET,
MATERIAL =StateAttribute::MATERIAL,
ALPHAFUNC =StateAttribute::ALPHAFUNC,
ANTIALIAS =StateAttribute::ANTIALIAS,
COLORTABLE =StateAttribute::COLORTABLE,
CULLFACE =StateAttribute::CULLFACE,
FOG =StateAttribute::FOG,
FRONTFACE =StateAttribute::FRONTFACE,
LIGHT =StateAttribute::LIGHT,
POINT =StateAttribute::POINT,
LINEWIDTH =StateAttribute::LINEWIDTH,
LINESTIPPLE =StateAttribute::LINESTIPPLE,
POLYGONSTIPPLE =StateAttribute::POLYGONSTIPPLE,
SHADEMODEL =StateAttribute::SHADEMODEL,
TEXENV =StateAttribute::TEXENV,
TEXENVFILTER =StateAttribute::TEXENVFILTER,
TEXGEN =StateAttribute::TEXGEN,
TEXMAT =StateAttribute::TEXMAT,
LIGHTMODEL =StateAttribute::LIGHTMODEL,
BLENDFUNC =StateAttribute::BLENDFUNC,
BLENDEQUATION =StateAttribute::BLENDEQUATION,
LOGICOP =StateAttribute::LOGICOP,
STENCIL =StateAttribute::STENCIL,
COLORMASK =StateAttribute::COLORMASK,
DEPTH =StateAttribute::DEPTH,
VIEWPORT =StateAttribute::VIEWPORT,
SCISSOR =StateAttribute::SCISSOR,
BLENDCOLOR =StateAttribute::BLENDCOLOR,
MULTISAMPLE =StateAttribute::MULTISAMPLE,
CLIPPLANE =StateAttribute::CLIPPLANE,
COLORMATRIX =StateAttribute::COLORMATRIX,
VERTEXPROGRAM =StateAttribute::VERTEXPROGRAM,
FRAGMENTPROGRAM =StateAttribute::FRAGMENTPROGRAM,
POINTSPRITE =StateAttribute::POINTSPRITE,
PROGRAM =StateAttribute::PROGRAM,
CLAMPCOLOR =StateAttribute::CLAMPCOLOR,
HINT =StateAttribute::HINT,
SAMPLEMASKI =StateAttribute::SAMPLEMASKI,
PRIMITIVERESTARTINDEX =StateAttribute::PRIMITIVERESTARTINDEX,
CLIPCONTROL =StateAttribute::CLIPCONTROL,
VALIDATOR =StateAttribute::VALIDATOR,
VIEWMATRIXEXTRACTOR =StateAttribute::VIEWMATRIXEXTRACTOR,
OSGNV_PARAMETER_BLOCK =StateAttribute::OSGNV_PARAMETER_BLOCK,
OSGNVEXT_TEXTURE_SHADER =StateAttribute::OSGNVEXT_TEXTURE_SHADER,
OSGNVEXT_VERTEX_PROGRAM =StateAttribute::OSGNVEXT_VERTEX_PROGRAM,
OSGNVEXT_REGISTER_COMBINERS =StateAttribute::OSGNVEXT_REGISTER_COMBINERS,
OSGNVCG_PROGRAM =StateAttribute::OSGNVCG_PROGRAM,
OSGNVSLANG_PROGRAM =StateAttribute::OSGNVSLANG_PROGRAM,
OSGNVPARSE_PROGRAM_PARSER =StateAttribute::OSGNVPARSE_PROGRAM_PARSER,
UNIFORMBUFFERBINDING =StateAttribute::UNIFORMBUFFERBINDING,
TRANSFORMFEEDBACKBUFFERBINDING =StateAttribute::TRANSFORMFEEDBACKBUFFERBINDING,
ATOMICCOUNTERBUFFERBINDING =StateAttribute::ATOMICCOUNTERBUFFERBINDING,
PATCH_PARAMETER =StateAttribute::PATCH_PARAMETER,
FRAME_BUFFER_OBJECT =StateAttribute::FRAME_BUFFER_OBJECT,
VERTEX_ATTRIB_DIVISOR =StateAttribute::VERTEX_ATTRIB_DIVISOR,
SHADERSTORAGEBUFFERBINDING =StateAttribute::SHADERSTORAGEBUFFERBINDING,
CAPABILITY =StateAttribute::CAPABILITY};
  Q_ENUMS(Type)
private:
public:
 enum Values{
OFF =StateAttribute::OFF,
ON =StateAttribute::ON,
OVERRIDE =StateAttribute::OVERRIDE,
PROTECTED =StateAttribute::PROTECTED,
INHERIT =StateAttribute::INHERIT};
  Q_ENUMS(Values)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
StateAttribute * _model;
QReflect_StateAttribute(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_StateAttribute( );
//StateAttribute
// TypeMemberPair  getTypeMemberPair();
//virtual  bool  getModeUsage( ModeUsage &);
//const  ParentList & getParents();
Q_INVOKABLE  bool  checkValidityOfAssociatedModes(osg::QReflect_State *)const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  isTextureAttribute()const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_StateAttribute &rhs)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_StateAttribute &rhs)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_StateAttribute &rhs)const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE  unsigned int  getNumParents()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_ShaderComponent*  getShaderComponent();
Q_INVOKABLE osg::QReflect_ShaderComponent*  getShaderComponent()const;
Q_INVOKABLE osg::QReflect_StateAttribute*  asStateAttribute();
Q_INVOKABLE osg::QReflect_StateAttribute*  asStateAttribute()const;
Q_INVOKABLE osg::QReflect_StateAttributeCallback*  getEventCallback();
Q_INVOKABLE osg::QReflect_StateAttributeCallback*  getEventCallback()const;
Q_INVOKABLE osg::QReflect_StateAttributeCallback*  getUpdateCallback();
Q_INVOKABLE osg::QReflect_StateAttributeCallback*  getUpdateCallback()const;
Q_INVOKABLE osg::QReflect_StateSet*  getParent( unsigned int i);
Q_INVOKABLE osg::QReflect_StateSet*  getParent( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Texture*  asTexture();
Q_INVOKABLE osg::QReflect_Texture*  asTexture()const;
Q_INVOKABLE void  apply(osg::QReflect_State *)const;
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *)const;
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setEventCallback(osg::QReflect_StateAttributeCallback *ec);
Q_INVOKABLE void  setShaderComponent(osg::QReflect_ShaderComponent *sc);
Q_INVOKABLE void  setUpdateCallback(osg::QReflect_StateAttributeCallback *uc);
Q_PROPERTY(osg::QReflect_ShaderComponent * ShaderComponent  READ getShaderComponent WRITE setShaderComponent NOTIFY ShaderComponentChanged)
Q_PROPERTY(osg::QReflect_StateAttributeCallback * EventCallback  READ getEventCallback WRITE setEventCallback NOTIFY EventCallbackChanged)
Q_PROPERTY(osg::QReflect_StateAttributeCallback * UpdateCallback  READ getUpdateCallback WRITE setUpdateCallback NOTIFY UpdateCallbackChanged)
signals: void EventCallbackChanged();
public:
signals: void ShaderComponentChanged();
public:
signals: void UpdateCallbackChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_StateAttribute: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_StateAttribute();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 


#endif //osg_StateAttribute_pmocHPP

