#ifndef osg_ColorMaski_pmocHPP
#define  osg_ColorMaski_pmocHPP 1


#include <osg/ColorMaski_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/ColorMaski>
#include <osg/ColorMaski>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_ColorMaski: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
ColorMaski * _model;
QReflect_ColorMaski(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_ColorMaski( );
//ColorMaski
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  getIndex()const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE void  apply(osg::QReflect_State *state)const;
Q_INVOKABLE void  setIndex( unsigned int buf);
Q_PROPERTY(unsigned int  Index  READ getIndex WRITE setIndex NOTIFY IndexChanged)
signals: void IndexChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_ColorMaski: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::ColorMaski> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_ColorMaski();
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


#endif //osg_ColorMaski_pmocHPP

