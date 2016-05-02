#ifndef osg_FragmentProgram_customHPP
#define  osg_FragmentProgram_customHPP 1

//includes
#include <osg/FragmentProgram_pmoc.hpp>
#include <QObject>
#include <osg/FragmentProgram>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/FragmentProgram_pmoc.hpp>
namespace osg{
class  QMLFragmentProgram: public QReflect_FragmentProgram
{
Q_OBJECT
public:
QMLFragmentProgram(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLFragmentProgram :public MetaQReflect_FragmentProgram{};

}
  Q_DECLARE_METATYPE(osg::QMLFragmentProgram)

#endif //osg_FragmentProgram_customHPP

