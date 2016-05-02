#ifndef osg_PrimitiveRestartIndex_pmocHPP
#define  osg_PrimitiveRestartIndex_pmocHPP 1


#include <osg/PrimitiveRestartIndex_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
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
QReflect_PrimitiveRestartIndex(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_PrimitiveRestartIndex( );
//PrimitiveRestartIndex
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  getRestartIndex()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setRestartIndex( unsigned int restartIndex);
Q_PROPERTY(unsigned int  RestartIndex  READ getRestartIndex WRITE setRestartIndex NOTIFY RestartIndexChanged)
signals: void RestartIndexChanged();
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


#endif //osg_PrimitiveRestartIndex_pmocHPP

