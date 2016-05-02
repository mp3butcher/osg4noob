#ifndef osg_StateSet_pmocHPP
#define  osg_StateSet_pmocHPP 1


#include <osg/StateSet_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
namespace osg{ 
class QReflect_StateSet;
			} ;
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_Uniform;
			} ;
namespace osg{ 
class QReflect_Node;
			} ;
namespace osg{ 
class QReflect_CopyOp;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
#include <osg/StateSet>
#include <osg/StateSet>

#include <osg/ref_ptr>
#include<osg/StateAttribute_pmoc.hpp>
#include<osg/StateSet_pmoc.hpp>
#include<osg/Uniform_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_StateSet: public pmoc::QQModel
{
Q_OBJECT
public:
 enum RenderBinMode{
INHERIT_RENDERBIN_DETAILS =StateSet::INHERIT_RENDERBIN_DETAILS,
USE_RENDERBIN_DETAILS =StateSet::USE_RENDERBIN_DETAILS,
OVERRIDE_RENDERBIN_DETAILS =StateSet::OVERRIDE_RENDERBIN_DETAILS,
PROTECTED_RENDERBIN_DETAILS =StateSet::PROTECTED_RENDERBIN_DETAILS,
OVERRIDE_PROTECTED_RENDERBIN_DETAILS =StateSet::OVERRIDE_PROTECTED_RENDERBIN_DETAILS};
  Q_ENUMS(RenderBinMode)
private:
public:
 enum RenderingHint{
DEFAULT_BIN =StateSet::DEFAULT_BIN,
OPAQUE_BIN =StateSet::OPAQUE_BIN,
TRANSPARENT_BIN =StateSet::TRANSPARENT_BIN};
  Q_ENUMS(RenderingHint)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
StateSet * _model;
QReflect_StateSet(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_StateSet( );
//StateSet
// AttributeList & getAttributeList();
// Callback * getEventCallback();
// Callback * getUpdateCallback();
// DefineList & getDefineList();
// DefinePair * getDefinePair(const  std::string &);
// ModeList & getModeList();
// ParentList  getParents();
// TextureAttributeList & getTextureAttributeList();
// TextureModeList & getTextureModeList();
// UniformList & getUniformList();
// void  setAttributeList( AttributeList &);
// void  setDefineList(const  DefineList &);
// void  setEventCallback( Callback *);
// void  setModeList( ModeList &);
// void  setTextureAttributeList( TextureAttributeList &);
// void  setTextureModeList( TextureModeList &);
// void  setUniformList( UniformList &);
// void  setUpdateCallback( Callback *);
//const  AttributeList & getAttributeList();
//const  Callback * getEventCallback();
//const  Callback * getUpdateCallback();
//const  DefineList & getDefineList();
//const  DefinePair * getDefinePair(const  std::string &);
//const  ModeList & getModeList();
//const  ParentList & getParents();
//const  RefAttributePair * getAttributePair( StateAttribute::Type  , unsigned int );
//const  RefAttributePair * getTextureAttributePair( unsigned int  , StateAttribute::Type );
//const  RefUniformPair * getUniformPair(const  std::string &);
//const  TextureAttributeList & getTextureAttributeList();
//const  TextureModeList & getTextureModeList();
//const  UniformList & getUniformList();
Q_INVOKABLE  bool  checkValidityOfAssociatedModes(osg::QReflect_State *state)const;
Q_INVOKABLE  bool  getNestRenderBins()const;
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE  bool  operator!=(osg::QReflect_StateSet &rhs)const;
Q_INVOKABLE  bool  operator<(osg::QReflect_StateSet &rhs)const;
Q_INVOKABLE  bool  operator==(osg::QReflect_StateSet &rhs)const;
Q_INVOKABLE  bool  requiresEventTraversal()const;
Q_INVOKABLE  bool  requiresUpdateTraversal()const;
Q_INVOKABLE  bool  useRenderBinDetails()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateSet *rhs , bool compareAttributeContents)const;
Q_INVOKABLE  int  getBinNumber()const;
Q_INVOKABLE  int  getRenderingHint()const;
Q_INVOKABLE  unsigned int  getMode( GLenum mode)const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringEventTraversal()const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringUpdateTraversal()const;
Q_INVOKABLE  unsigned int  getNumParents()const;
Q_INVOKABLE  unsigned int  getNumTextureAttributeLists()const;
Q_INVOKABLE  unsigned int  getNumTextureModeLists()const;
Q_INVOKABLE  unsigned int  getTextureMode( unsigned int unit , GLenum mode)const;
Q_INVOKABLE QString  getBinName()const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE osg::QReflect_Node*  getParent( unsigned int i);
Q_INVOKABLE osg::QReflect_Node*  getParent( unsigned int i)const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *copyop)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getAttribute(osg::QReflect_StateAttribute::Type type , unsigned int member);
Q_INVOKABLE osg::QReflect_StateAttribute*  getAttribute(osg::QReflect_StateAttribute::Type type , unsigned int member)const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute::Type type);
Q_INVOKABLE osg::QReflect_StateAttribute*  getTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute::Type type)const;
Q_INVOKABLE osg::QReflect_StateSet::RenderBinMode  getRenderBinMode()const;
Q_INVOKABLE osg::QReflect_Uniform*  getOrCreateUniform(const  QString &name ,osg::QReflect_Uniform::Type type , unsigned int numElements);
Q_INVOKABLE osg::QReflect_Uniform*  getUniform(const  QString &name);
Q_INVOKABLE osg::QReflect_Uniform*  getUniform(const  QString &name)const;
Q_INVOKABLE void  addUniform(osg::QReflect_Uniform *uniform , unsigned int value);
Q_INVOKABLE void  clear();
Q_INVOKABLE void  compileGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  computeDataVariance();
Q_INVOKABLE void  merge(osg::QReflect_StateSet *rhs);
Q_INVOKABLE void  releaseGLObjects(osg::QReflect_State *state)const;
Q_INVOKABLE void  removeAssociatedModes(osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  removeAssociatedTextureModes( unsigned int unit ,osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  removeAttribute(osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  removeAttribute(osg::QReflect_StateAttribute::Type type , unsigned int member);
Q_INVOKABLE void  removeDefine(const  QString &defineName);
Q_INVOKABLE void  removeMode( GLenum mode);
Q_INVOKABLE void  removeTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute *attribute);
Q_INVOKABLE void  removeTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute::Type type);
Q_INVOKABLE void  removeTextureMode( unsigned int unit , GLenum mode);
Q_INVOKABLE void  removeUniform(const  QString &name);
Q_INVOKABLE void  removeUniform(osg::QReflect_Uniform *uniform);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int maxSize);
Q_INVOKABLE void  runEventCallbacks(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  runUpdateCallbacks(osg::QReflect_NodeVisitor *nv);
Q_INVOKABLE void  setAssociatedModes(osg::QReflect_StateAttribute *attribute , unsigned int value);
Q_INVOKABLE void  setAssociatedTextureModes( unsigned int unit ,osg::QReflect_StateAttribute *attribute , unsigned int value);
Q_INVOKABLE void  setAttribute(osg::QReflect_StateAttribute *attribute , unsigned int value);
Q_INVOKABLE void  setAttributeAndModes(osg::QReflect_StateAttribute *attribute , unsigned int value);
Q_INVOKABLE void  setBinName(const  QString &name);
Q_INVOKABLE void  setBinNumber( int num);
Q_INVOKABLE void  setDefine(const  QString &defineName , unsigned int value);
Q_INVOKABLE void  setDefine(const  QString &defineName ,const  QString &defineValue , unsigned int value);
Q_INVOKABLE void  setGlobalDefaults();
Q_INVOKABLE void  setMode( GLenum mode , unsigned int value);
Q_INVOKABLE void  setNestRenderBins( bool val);
Q_INVOKABLE void  setRenderBinDetails( int binNum ,const  QString &binName ,osg::QReflect_StateSet::RenderBinMode mode);
Q_INVOKABLE void  setRenderBinMode(osg::QReflect_StateSet::RenderBinMode mode);
Q_INVOKABLE void  setRenderBinToInherit();
Q_INVOKABLE void  setRenderingHint( int hint);
Q_INVOKABLE void  setTextureAttribute( unsigned int unit ,osg::QReflect_StateAttribute *attribute , unsigned int value);
Q_INVOKABLE void  setTextureAttributeAndModes( unsigned int unit ,osg::QReflect_StateAttribute *attribute , unsigned int value);
Q_INVOKABLE void  setTextureMode( unsigned int unit , GLenum mode , unsigned int value);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_PROPERTY(QString  BinName  READ getBinName WRITE setBinName NOTIFY BinNameChanged)
Q_PROPERTY(bool  NestRenderBins  READ getNestRenderBins WRITE setNestRenderBins NOTIFY NestRenderBinsChanged)
Q_PROPERTY(int  BinNumber  READ getBinNumber WRITE setBinNumber NOTIFY BinNumberChanged)
Q_PROPERTY(int  RenderingHint  READ getRenderingHint WRITE setRenderingHint NOTIFY RenderingHintChanged)
Q_PROPERTY(osg::QReflect_StateSet::RenderBinMode  RenderBinMode  READ getRenderBinMode WRITE setRenderBinMode NOTIFY RenderBinModeChanged)
signals: void BinNameChanged();
public:
signals: void BinNumberChanged();
public:
signals: void NestRenderBinsChanged();
public:
signals: void RenderBinModeChanged();
public:
signals: void RenderingHintChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_StateSet: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::StateSet> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_StateSet();
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


#endif //osg_StateSet_pmocHPP

