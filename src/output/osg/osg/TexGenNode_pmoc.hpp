#ifndef osg_TexGenNode_pmocHPP
#define  osg_TexGenNode_pmocHPP 1


#include <osg/TexGenNode_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_TexGen;
			} ;
#include <osg/TexGenNode>
#include <osg/TexGenNode>

#include <osg/ref_ptr>
#include<osg/TexGenNode_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_TexGenNode: public pmoc::QQModel
{
Q_OBJECT
public:
 enum ReferenceFrame{
RELATIVE_RF =TexGenNode::RELATIVE_RF,
ABSOLUTE_RF =TexGenNode::ABSOLUTE_RF};
  Q_ENUMS(ReferenceFrame)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
TexGenNode * _model;
QReflect_TexGenNode(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_TexGenNode( );
//TexGenNode
Q_INVOKABLE  unsigned int  getTextureUnit()const;
Q_INVOKABLE osg::QReflect_TexGen*  getTexGen();
Q_INVOKABLE osg::QReflect_TexGen*  getTexGen()const;
Q_INVOKABLE osg::QReflect_TexGenNode::ReferenceFrame  getReferenceFrame()const;
Q_INVOKABLE void  setReferenceFrame(osg::QReflect_TexGenNode::ReferenceFrame rf);
Q_INVOKABLE void  setTexGen(osg::QReflect_TexGen *texgen);
Q_INVOKABLE void  setTextureUnit( unsigned int textureUnit);
Q_INVOKABLE void  setThreadSafeRefUnref( bool threadSafe);
Q_PROPERTY(osg::QReflect_TexGen * TexGen  READ getTexGen WRITE setTexGen NOTIFY TexGenChanged)
Q_PROPERTY(osg::QReflect_TexGenNode::ReferenceFrame  ReferenceFrame  READ getReferenceFrame WRITE setReferenceFrame NOTIFY ReferenceFrameChanged)
Q_PROPERTY(unsigned int  TextureUnit  READ getTextureUnit WRITE setTextureUnit NOTIFY TextureUnitChanged)
signals: void ReferenceFrameChanged();
public:
signals: void TexGenChanged();
public:
signals: void TextureUnitChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_TexGenNode: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::TexGenNode> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_TexGenNode();
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


#endif //osg_TexGenNode_pmocHPP

