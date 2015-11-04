#include <osg/PagedLOD>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/PagedLOD_pmoc.hpp>

#include <osgDB/FileUtils>
using namespace pmoc;
using namespace std;


void osg::QMLPagedLOD::addRange(QUrl filename,float mins,float maxs){


   QString s=filename.toLocalFile();//replace("file://","");
  QString curpath=QString(osgDB::getCurrentWorkingDirectory().c_str()).replace("\\","/")+"/";///replace \ in osg path
    s=s.replace(curpath,QString(""));
    int curindex=_model->getNumFileNames();
    _model->setFileName(curindex,s.toStdString());
    _model->setRange(curindex,mins,maxs );
    updateModel();
    cout<<"selected image file"<< s.toStdString()<<endl;
}

osg::QMLPagedLOD::QMLPagedLOD(pmoc::Instance *i,QObject* parent):QReflect_PagedLOD(i,parent){
//custom initializations

}
QQuickItem* osg::QMLPagedLOD::connect2View(QQuickItem*i){
	this->_view=QReflect_PagedLOD::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here
updateModel();


return this->_view;
}
void  osg::QMLPagedLOD::updateModel(){
	  QReflect_PagedLOD::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here

    _qrangelist.resetListViewModel();
    //addChild(Node *child, float min, float max,const std::string& filename, float priorityOffset=0.0f, float priorityScale=1.0f);
    for(unsigned int i=0; i<_model->getNumFileNames(); i++)
    {

        std::string dbfile=_model->getFileName(i);
        //   osg::Vec2 fok=_model->getRange(i); // LOD::void setRange(unsigned int childNo, float min,float max);

        // Instance inst=PMOCADDOBJECT(   *dr);
        //  QString classname=QString( dbfile.c_str(),fok.minimum,fok.maximum);
        LODRangeObject dra(QString(dbfile.c_str()) ,_model->getMinRange(i),_model->getMaxRange(i));
        _qrangelist.addRange(dra);

    }
      emit rangeListChanged(&_qrangelist );

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_PagedLOD_pmoc.cpp"
#endif



