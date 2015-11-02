#ifndef osg_Uniform_customHPP
#define  osg_Uniform_customHPP 1

//includes
#include <osg/Uniform_pmoc.hpp>
#include <QObject>
namespace osg{
class QReflect_UniformCallback;
			} ;

#include <osg/Object_pmoc.hpp>
#include <osg/Uniform>

#include <osg/Uniform_pmoc.hpp>
namespace osg{
class  QMLUniform: public QReflect_Uniform
{
Q_OBJECT

Q_PROPERTY(QString name READ name WRITE name NOTIFY nameChanged)
Q_PROPERTY(int type READ type WRITE type NOTIFY typeChanged)
Q_PROPERTY(QString stringValue READ stringValue WRITE setValuetoParse NOTIFY stringValueChanged)
Q_PROPERTY(QStringList  uniformtypelist READ uniformtypelist   NOTIFY uniformtypelistChanged)
///parse string and dispatch on the correct
QString name(){return QString(_model->getName().c_str());}
void name(QString n){
if(n!=name()){ _model->setName(n.toStdString()); _model->dirty();
emit nameChanged(n);}}
int type();
void type(int n);

void setValuetoParse(QString);
QString stringValue();

QStringList &uniformtypelist(){return _uniformstringlist;}
signals:
void stringValueChanged(QString);
void nameChanged(QString);
void typeChanged(int);
void uniformtypelistChanged(QStringList);
protected:
QString _stringvalue;
QStringList _uniformstringlist;
public:
QMLUniform(pmoc::Instance *i=0,QObject* parent=0);
virtual QQuickItem * connect2View(QQuickItem*);
public slots:
 virtual void  updateModel();

};

class   MetaQMLUniform :public MetaQReflect_Uniform{};
}
  Q_DECLARE_METATYPE(osg::QMLUniform)

#endif //osg_Uniform_customHPP

