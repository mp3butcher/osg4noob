#include <osg/Texture3D>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture3D_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <osgDB/FileUtils>
#include <osgDB/FileNameUtils>
#include <osgDB/WriteFile>
#include <osgDB/ReadFile>
using namespace std;
using namespace pmoc;
using namespace osg;


void osg::QMLTexture3D::addToStateSet(QQModel*parentQQQModel)
{
    osg::QMLStateSet * par =dynamic_cast<osg::QMLStateSet *>(parentQQQModel);
    std::cerr<<"setTexAttribute"<<((QMLTexture*)getParentBox(0) )->gettextureUnit()<<endl;
//_model->setFilter(Texture2D::MIN_FILTER, Texture2D::LINEAR_MIPMAP_LINEAR);
//_model->setFilter(Texture2D::MAG_FILTER, Texture2D::LINEAR);
    par->_model->removeAttribute(_model);
    par->_model->setTextureAttribute(((QMLTexture*)getParentBox(0) )->gettextureUnit(),_model,osg::StateAttribute::ON );//|osg::StateAttribute::OVERRIDE);
//_model->dirtyTextureObject();
    if(_model->getImage())_model->getImage()->dirty();

//par->getModel()->
}
QUrl osg::QMLTexture3D::getfilename( )const
{
    QUrl ret;
    if(_model->getImage())
    {
        ret=QUrl::fromLocalFile( QString(_model->getImage()->getFileName().c_str()));
    }
    return ret;
}
void osg::QMLTexture3D::setfilename(QUrl sss)
{
    QString s=sss.toLocalFile();//replace("file://","");
    /*cout<<"wiriting filemen"<<endl;
    cout<<osgDB::getCurrentWorkingDirectory()<<endl;
    cout<<osgDB::getPathRelative(osgDB::getCurrentWorkingDirectory()+"/",s.toStdString())<<endl;
    */
    QString curpath=QString(osgDB::getCurrentWorkingDirectory().c_str()).replace("\\","/")+"/";///replace \ in osg path
    s=s.replace(curpath,QString(""));
    cout<<"selected image file"<< s.toStdString()<<endl;
    if(sss!=_filename)
    {osg::ref_ptr< osgDB::Options> options=new osgDB::Options;
                    options->setOptionString(options->getOptionString() + " compressed=1");
        osg::ref_ptr<osg::Image>im= osgDB::readImageFile(s.toStdString(),options);



        if (im.get())
        {
             cerr<<"Setting image "<<(unsigned long int)im.get()<<" to texture2d "<< (unsigned long int)_model<<endl;
            _filename=sss;

            _model->setImage(im.get());
            // protect from being optimized away as static state:
         //   _model->setDataVariance(osg::Object::DYNAMIC);
            // im->dirty();



            string ss=im->getFileName();
            if (ss !="")
            {
                string pate=osgDB::findDataFile(ss);
                string ext=osgDB::getFileExtension(pate);
              /*  emit qtimageChanged(QString());
                if (ext=="png")//Type supported by QT
                    //#pate=pate.replace('\\','/')
                    this->_qtimage=QString(replace(pate,"\\","/").c_str());
                else
                {
                    this->_qtimage=QString("../../tempimage4Qt.png");

                    osgDB::writeImageFile(*im,"tempimage4Qt.png");

                }
                emit qtimageChanged(_qtimage);*/

                //    cerr<<_filename.toStdString()<<endl;
            }


            emit filenameChanged(s);
        }
       else      cerr<<"Setting image "<<s.toStdString()<<" FAILED  "<< (unsigned long int)_model<<endl;

    }
}
osg::QMLTexture3D::QMLTexture3D(pmoc::Instance *i,QObject* parent):QReflect_Texture3D(i,parent){
//custom initializations
}

QQuickItem* osg::QMLTexture3D::connect2View(QQuickItem*i){
	this->_view=QReflect_Texture3D::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLTexture3D::updateModel(){
	  QReflect_Texture3D::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture3D_pmoc.cpp"
#endif


