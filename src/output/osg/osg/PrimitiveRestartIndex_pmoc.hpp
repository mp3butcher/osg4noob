#ifndef osg_PrimitiveRestartIndex_pmocHPP
#define  osg_PrimitiveRestartIndex_pmocHPP 1
#include <osg/PrimitiveRestartIndex_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/PrimitiveRestartIndex>
#include <osg/PrimitiveRestartIndex>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_PrimitiveRestartIndex: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
PrimitiveRestartIndex * _model;
QReflect_PrimitiveRestartIndex(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrimitiveRestartIndex( );
//PrimitiveRestartIndex
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const unsigned int  getRestartIndex()const;
Q_INVOKABLE void setRestartIndex(const unsigned int &);
Q_PROPERTY(unsigned int RestartIndex  READ getRestartIndex WRITE setRestartIndex NOTIFY RestartIndexChanged)
signals: void RestartIndexChanged(const unsigned int&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_PrimitiveRestartIndex: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::PrimitiveRestartIndex> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_PrimitiveRestartIndex();
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

#endif //osg_PrimitiveRestartIndex_pmocHPP

