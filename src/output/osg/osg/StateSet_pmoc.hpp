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
class QReflect_CopyOp;
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
QReflect_StateSet(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_StateSet( );
//StateSet
// AttributeList & getAttributeList();
// Callback * getEventCallback();
// Callback * getUpdateCallback();
// DefineList & getDefineList();
// DefinePair * getDefinePair(const  std::string &);
// ModeList & getModeList();
// Node * getParent( unsigned int );
// ParentList  getParents();
// TextureAttributeList & getTextureAttributeList();
// TextureModeList & getTextureModeList();
// UniformList & getUniformList();
// bool  checkValidityOfAssociatedModes( State &);
// bool  operator!=(const  StateSet &);
// bool  operator<(const  StateSet &);
// bool  operator==(const  StateSet &);
// void  compileGLObjects( State &);
//virtual  void  releaseGLObjects( State *);
// void  runEventCallbacks( osg::NodeVisitor *);
// void  runUpdateCallbacks( osg::NodeVisitor *);
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
//const  Node * getParent( unsigned int );
//const  ParentList & getParents();
//const  RefAttributePair * getAttributePair( StateAttribute::Type  , unsigned int );
//const  RefAttributePair * getTextureAttributePair( unsigned int  , StateAttribute::Type );
//const  RefUniformPair * getUniformPair(const  std::string &);
//const  TextureAttributeList & getTextureAttributeList();
//const  TextureModeList & getTextureModeList();
//const  UniformList & getUniformList();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *)const;
Q_INVOKABLE  bool  requiresEventTraversal()const;
Q_INVOKABLE  bool  requiresUpdateTraversal()const;
Q_INVOKABLE  bool  useRenderBinDetails()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateSet * , bool )const;
Q_INVOKABLE  unsigned int  getMode( GLenum )const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringEventTraversal()const;
Q_INVOKABLE  unsigned int  getNumChildrenRequiringUpdateTraversal()const;
Q_INVOKABLE  unsigned int  getNumParents()const;
Q_INVOKABLE  unsigned int  getNumTextureAttributeLists()const;
Q_INVOKABLE  unsigned int  getNumTextureModeLists()const;
Q_INVOKABLE  unsigned int  getTextureMode( unsigned int  , GLenum )const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE const QString  getBinName()const;
Q_INVOKABLE const bool  getNestRenderBins()const;
Q_INVOKABLE const int  getBinNumber()const;
Q_INVOKABLE const int  getRenderingHint()const;
Q_INVOKABLE osg::QReflect_Object*  clone(osg::QReflect_CopyOp *)const;
Q_INVOKABLE osg::QReflect_Object*  cloneType()const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getAttribute(osg::QReflect_StateAttribute::Type  , unsigned int );
Q_INVOKABLE osg::QReflect_StateAttribute*  getAttribute(osg::QReflect_StateAttribute::Type  , unsigned int )const;
Q_INVOKABLE osg::QReflect_StateAttribute*  getTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute::Type );
Q_INVOKABLE osg::QReflect_StateAttribute*  getTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute::Type )const;
Q_INVOKABLE osg::QReflect_StateSet::RenderBinMode  getRenderBinMode()const;
Q_INVOKABLE osg::QReflect_Uniform*  getOrCreateUniform(const  QString & ,osg::QReflect_Uniform::Type  , unsigned int );
Q_INVOKABLE osg::QReflect_Uniform*  getUniform(const  QString &);
Q_INVOKABLE osg::QReflect_Uniform*  getUniform(const  QString &)const;
Q_INVOKABLE void  addUniform(osg::QReflect_Uniform * , unsigned int );
Q_INVOKABLE void  clear();
Q_INVOKABLE void  computeDataVariance();
Q_INVOKABLE void  merge(osg::QReflect_StateSet *);
Q_INVOKABLE void  removeAssociatedModes(osg::QReflect_StateAttribute *);
Q_INVOKABLE void  removeAssociatedTextureModes( unsigned int  ,osg::QReflect_StateAttribute *);
Q_INVOKABLE void  removeAttribute(osg::QReflect_StateAttribute *);
Q_INVOKABLE void  removeAttribute(osg::QReflect_StateAttribute::Type  , unsigned int );
Q_INVOKABLE void  removeDefine(const  QString &);
Q_INVOKABLE void  removeMode( GLenum );
Q_INVOKABLE void  removeTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute *);
Q_INVOKABLE void  removeTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute::Type );
Q_INVOKABLE void  removeTextureMode( unsigned int  , GLenum );
Q_INVOKABLE void  removeUniform(const  QString &);
Q_INVOKABLE void  removeUniform(osg::QReflect_Uniform *);
Q_INVOKABLE void  resizeGLObjectBuffers( unsigned int );
Q_INVOKABLE void  setAssociatedModes(osg::QReflect_StateAttribute * , unsigned int );
Q_INVOKABLE void  setAssociatedTextureModes( unsigned int  ,osg::QReflect_StateAttribute * , unsigned int );
Q_INVOKABLE void  setAttribute(osg::QReflect_StateAttribute * , unsigned int );
Q_INVOKABLE void  setAttributeAndModes(osg::QReflect_StateAttribute * , unsigned int );
Q_INVOKABLE void  setDefine(const  QString & , unsigned int );
Q_INVOKABLE void  setDefine(const  QString & ,const  QString & , unsigned int );
Q_INVOKABLE void  setGlobalDefaults();
Q_INVOKABLE void  setMode( GLenum  , unsigned int );
Q_INVOKABLE void  setRenderBinDetails( int  ,const  QString & ,osg::QReflect_StateSet::RenderBinMode );
Q_INVOKABLE void  setRenderBinMode(osg::QReflect_StateSet::RenderBinMode );
Q_INVOKABLE void  setRenderBinToInherit();
Q_INVOKABLE void  setTextureAttribute( unsigned int  ,osg::QReflect_StateAttribute * , unsigned int );
Q_INVOKABLE void  setTextureAttributeAndModes( unsigned int  ,osg::QReflect_StateAttribute * , unsigned int );
Q_INVOKABLE void  setTextureMode( unsigned int  , GLenum  , unsigned int );
Q_INVOKABLE void  setThreadSafeRefUnref( bool );
Q_INVOKABLE void setBinName(const QString &);
Q_INVOKABLE void setBinNumber(const int &);
Q_INVOKABLE void setNestRenderBins(const bool &);
Q_INVOKABLE void setRenderingHint(const int &);
Q_PROPERTY(QString BinName  READ getBinName WRITE setBinName NOTIFY BinNameChanged)
Q_PROPERTY(bool NestRenderBins  READ getNestRenderBins WRITE setNestRenderBins NOTIFY NestRenderBinsChanged)
Q_PROPERTY(int BinNumber  READ getBinNumber WRITE setBinNumber NOTIFY BinNumberChanged)
Q_PROPERTY(int RenderingHint  READ getRenderingHint WRITE setRenderingHint NOTIFY RenderingHintChanged)
signals: void BinNameChanged(const QString&);
public:
signals: void BinNumberChanged(const int&);
public:
signals: void NestRenderBinsChanged(const bool&);
public:
signals: void RenderingHintChanged(const int&);
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
    virtual pmoc::QQModel* createQQModel(pmoc::Instance*i);
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

