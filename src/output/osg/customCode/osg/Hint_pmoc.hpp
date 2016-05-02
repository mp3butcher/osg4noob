#ifndef osg_Hint_customHPP
#define  osg_Hint_customHPP 1

//includes
#include <osg/Hint_pmoc.hpp>
#include <QObject>
#include <osg/Hint>

#include <osg/StateAttribute_pmoc.hpp>
#include <osg/Hint_pmoc.hpp>
namespace osg{
class  QMLHint: public QReflect_Hint
{
Q_OBJECT
public:
QMLHint(const pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};
class   MetaQMLHint :public MetaQReflect_Hint{};

}
  Q_DECLARE_METATYPE(osg::QMLHint)

#endif //osg_Hint_customHPP

