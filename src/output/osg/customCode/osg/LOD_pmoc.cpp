#include <osg/LOD>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/LOD_pmoc.hpp>
#include <osgDB/FileUtils>
using namespace pmoc;
using namespace osg;
osg::QMLLOD::QMLLOD(const pmoc::Instance *i,QObject* parent):QReflect_LOD(i,parent){
//custom initializations
}
QQuickItem* osg::QMLLOD::connect2View(QQuickItem*i){
	this->_view=QReflect_LOD::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here

updateModel();

return this->_view;
}
void  osg::QMLLOD::updateModel(){
	  QReflect_LOD::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here

    _qrangelist.resetListViewModel();
    //addChild(Node *child, float min, float max,const std::string& filename, float priorityOffset=0.0f, float priorityScale=1.0f);
    for(unsigned int i=0; i<_model->getNumRanges(); i++)
    {

        std::string dbfile="";
        //   osg::Vec2 fok=_model->getRange(i); // LOD::void setRange(unsigned int childNo, float min,float max);

        // Instance inst=PMOCADDOBJECT(   *dr);
        //  QString classname=QString( dbfile.c_str(),fok.minimum,fok.maximum);
        LODRangeObject dra(QString(dbfile.c_str()) ,_model->getMinRange(i),_model->getMaxRange(i));
        _qrangelist.addRange(dra);

    }
      emit rangeListChanged(&_qrangelist );

}

    unsigned int osg::QMLLOD::centerMode()const{
    switch(_model->getCenterMode()){
    case  LOD::USE_BOUNDING_SPHERE_CENTER:return 0;break;
    case  LOD::USER_DEFINED_CENTER:return 1;break;
    case  LOD::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED:return 2;break;
    }
    }
    void osg::QMLLOD::centerMode(unsigned int i){
    if(i!=centerMode() )
     switch(i){
    case 0:  _model->setCenterMode(LOD::USE_BOUNDING_SPHERE_CENTER);break;
    case 1:   _model->setCenterMode(LOD::USER_DEFINED_CENTER);;break;
    case 2:  _model->setCenterMode( LOD::UNION_OF_BOUNDING_SPHERE_AND_USER_DEFINED);break;
    default:_model->setCenterMode(LOD::USE_BOUNDING_SPHERE_CENTER);;
    }
    _centerMode=i;
    emit centerModeChanged(_centerMode);

    }
void osg::QMLLOD::setRange(int curindex,float mins,float maxs){



  QString curpath=QString(osgDB::getCurrentWorkingDirectory().c_str()).replace("\\","/")+"/";///replace \ in osg path

   // int curindex=_model->getNumFileNames();
  //  _model->setFileName(curindex,s.toStdString());
    _model->setRange(curindex,mins,maxs );

    updateModel();

}

#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_LOD_pmoc.cpp"
#endif



