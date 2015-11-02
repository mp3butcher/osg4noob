#ifndef osg_LineWidth_pmocHPP
#define  osg_LineWidth_pmocHPP 1
#include <osg/LineWidth_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/LineWidth>
#include <osg/LineWidth>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_LineWidth: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
LineWidth * _model;
QReflect_LineWidth(pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_LineWidth( );
//LineWidth
//virtual  void  apply( State &);
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *)const;
Q_INVOKABLE const float  getWidth()const;
Q_INVOKABLE void setWidth(const float &);
Q_PROPERTY(float Width  READ getWidth WRITE setWidth NOTIFY WidthChanged)
signals: void WidthChanged(const float&);
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_LineWidth: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::LineWidth> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_LineWidth();
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

#endif //osg_LineWidth_pmocHPP

