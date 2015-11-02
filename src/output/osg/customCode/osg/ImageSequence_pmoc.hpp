#ifndef osg_ImageSequence_customHPP
#define  osg_ImageSequence_customHPP 1

//includes
#include <osg/ImageSequence_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_Referenced;
			} ;
#include <osg/ImageSequence>

#include <osg/ImageStream_pmoc.hpp>
#include <osg/Referenced>
#include <osg/Referenced_pmoc.hpp>
#include <osg/ImageSequence_pmoc.hpp>
namespace osg{
class  QMLImageSequence: public QReflect_ImageSequence
{
Q_OBJECT
public:
QMLImageSequence(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLImageSequence :public MetaQReflect_ImageSequence{};

}
  Q_DECLARE_METATYPE(osg::QMLImageSequence)

#endif //osg_ImageSequence_customHPP

