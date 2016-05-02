#include <osg/Group>
//includes
#include <QQuickItem>
#include <customCode/osg/Group_pmoc.hpp>
#include <MetaQQuickLibraryRegistry.h>
#include <MetaQQuickLibraryRegistry.h>
#include <osgDB/ReadFile>
#include <osgDB/FileUtils>
using namespace std;
using namespace pmoc;

osg::QMLGroup::QMLGroup(const pmoc::Instance *i,QObject* parent):QReflect_Group(i,parent)
{
    ///custom initializations
    qmlRegisterType<pmoc::StateAttribListModel>();_clickedchild=0;

}
QQuickItem* osg::QMLGroup::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Group::connect2View(i);
    ///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here

    emit childrenChanged(&_qchildren);
    return this->_view;
}
 void osg::QMLGroup::addTexturedQuad(){
_model->addChild(osg::createTexturedQuadGeometry(osg::Vec3(-1.0f, -1.0f,0.0), osg::Vec3(2.0f,0.0f,0.0), osg::Vec3(0.0f,2.0f,0.0f)));
}
void osg::QMLGroup::updateModel()
{osg::QReflect_Group::updateModel();
    _qchildren.resetListViewModel();
    for(int i=0; i<_model->getNumChildren(); i++)
    {

        osg::Node *dr=_model->getChild(i);

        PMOCSAFEADDVIRTUALOBJECT( *dr,inst,osg::Node);
        QString classname=QString( inst.model->id().c_str());
        pmoc::StateAttribObject dra(QString( dr->getName().c_str()),classname);
        _qchildren.addStateAttrib(dra);

    }
    emit childrenChanged(&_qchildren );

}

void osg::QMLGroup::childSelected(int i)
{
    ///get QuickComponent for children i
    if(_model->getChild(i)){
   // PMOCQCOMPONENT(*_model->getChild(i),_view,_clickedchild);

if(_clickedchild)_clickedchild->deleteLater();
        PMOCSAFEADDOBJECT( *_model->getChild(i),inst);

        _clickedchild=QQUICKCOMPONENTWITHNAME(inst,_view,"Child");

}
}

void osg::QMLGroup::addChildFromFile(QUrl sss)
{



    QString s = sss.toLocalFile();//    QString s = sss.replace("file://", "");
    /*cout<<"wiriting filemen"<<endl;
    cout<<osgDB::getCurrentWorkingDirectory()<<endl;
    cout<<osgDB::getPathRelative(osgDB::getCurrentWorkingDirectory()+"/",s.toStdString())<<endl;
    */
    QString curpath=QString(osgDB::getCurrentWorkingDirectory().c_str()).replace("\\","/")+"/";///replace \ in osg path
    s=s.replace(curpath,QString(""));
    cout<<"selected image file"<< s.toStdString()<<endl;


    osg::ref_ptr<osg::Node>n=osgDB::readNodeFile(s.toStdString());



    if (n.get())
    {
        _model->addChild(n);
        emit modelChanged();
    }
}


#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Group_pmoc.cpp"
#endif
