#ifndef osg_ArgumentParser_customHPP
#define  osg_ArgumentParser_customHPP 1

//includes
#include <osg/ArgumentParser_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_ApplicationUsage;
			} ;
#include <osg/ApplicationUsage>
#include <osg/ApplicationUsage_pmoc.hpp>
#include <osg/ArgumentParser>

#include <osg/ArgumentParser_pmoc.hpp>
namespace osg{
class  QMLArgumentParser: public QReflect_ArgumentParser
{
Q_OBJECT
public:
QMLArgumentParser(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLArgumentParser :public MetaQReflect_ArgumentParser{};

}
  Q_DECLARE_METATYPE(osg::QMLArgumentParser)

#endif //osg_ArgumentParser_customHPP

