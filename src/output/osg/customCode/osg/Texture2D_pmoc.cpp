#include <osg/Texture2D>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Texture2D_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
#include <customCode/osg/Texture_pmoc.hpp>

#include <QQuickItem>
#include <QQmlProperty>
#include <osgDB/FileUtils>
#include <osgDB/FileNameUtils>
#include <osgDB/WriteFile>
#include <osgDB/ReadFile>
using namespace std;
using namespace pmoc;
using namespace osg;

std::string  replace(std::string f, std::string pattern, std::string replace)
{


    std::vector< string > tstrings;
    string fp = f;
    int posend = fp.find(pattern);

    while (posend >= 0)
    {
        // std::cout << s << std::endl;
        string s = fp.substr(0, posend);
        //if (!s.empty())
        tstrings.push_back(s);
        fp = fp.substr(posend + pattern.size(), fp.size());
        posend = fp.find(pattern);
    }
    if (!fp.empty())tstrings.push_back(fp);
    std::string out;
    for (std::vector< string >::iterator i = tstrings.begin(); i != --tstrings.end(); i++)
        out += (*i) + replace;
    return out + tstrings.back();
}



void osg::QMLTexture2D::addToStateSet(QQModel*parentQQQModel)
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
void osg::QMLTexture2D::removeFromStateSet(QQModel*parentQQQModel)
{
    if(parentQQQModel)
    {
        osg::QMLStateSet * par =dynamic_cast<osg::QMLStateSet *>(parentQQQModel);
        par->_model->removeTextureAttribute(((QMLTexture*)getParentBox(0) )->gettextureUnit(),_model);
    }
    else cerr<<"osg::QMLTexture2D::removeFromStateSet called with null parameter"<<endl;
}
void osg::QMLTexture2D::setwrap_s(QString s)
{
    if(s!=_wrap_s)
    {
        _wrap_s=s;
        if(s=="REPEAT")_model->setWrap(osg::Texture2D::WRAP_S,osg::Texture::REPEAT);
        else if(s=="CLAMP")_model->setWrap(osg::Texture2D::WRAP_S,osg::Texture::CLAMP);
        else if(s=="CLAMP_TO_BORDER")_model->setWrap(osg::Texture2D::WRAP_S,osg::Texture::CLAMP_TO_BORDER);
        else if(s=="CLAMP_TO_EDGE")_model->setWrap(osg::Texture2D::WRAP_S,osg::Texture::CLAMP_TO_EDGE);
        else std::cerr<<s.toStdString()<< " is not a Wrap mode"<<endl;
//_model->dirtyTextureObject();
        emit wrap_sChanged(s);
    }
}
void osg::QMLTexture2D::setwrap_t(QString s)
{
    if(s!=_wrap_t)
    {
        _wrap_t=s;
        if(s=="REPEAT")_model->setWrap(osg::Texture2D::WRAP_T,osg::Texture::REPEAT);
        else if(s=="CLAMP")_model->setWrap(osg::Texture2D::WRAP_T,osg::Texture::CLAMP);
        else if(s=="CLAMP_TO_BORDER")_model->setWrap(osg::Texture2D::WRAP_T,osg::Texture::CLAMP_TO_BORDER);
        else if(s=="CLAMP_TO_EDGE")_model->setWrap(osg::Texture2D::WRAP_S,osg::Texture::CLAMP_TO_EDGE);
        else std::cerr<<s.toStdString()<< " is not a Wrap mode"<<endl;
//_model->dirtyTextureObject();
        emit wrap_tChanged(s);
    }
}
QUrl osg::QMLTexture2D::getfilename( )const
{
    QUrl ret;
    if(_model->getImage())
    {
        ret=QUrl::fromLocalFile( QString(_model->getImage()->getFileName().c_str()));
    }
    return ret;
}
void osg::QMLTexture2D::setfilename(QUrl sss)
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
    {
        osg::ref_ptr<osg::Image>im=osgDB::readImageFile(s.toStdString());



        if (im.get())
        {
            // cerr<<"Setting image "<<(unsigned long int)im.get()<<" to texture2d "<< (unsigned long int)_model<<endl;
            _filename=sss;

            _model->setImage(im.get());
            // protect from being optimized away as static state:
            _model->setDataVariance(osg::Object::DYNAMIC);
            // im->dirty();



            string ss=im->getFileName();
            if (ss !="")
            {
                string pate=osgDB::findDataFile(ss);
                string ext=osgDB::getFileExtension(pate);
                emit qtimageChanged(QString());
                if (ext=="png")//Type supported by QT
                    //#pate=pate.replace('\\','/')
                    this->_qtimage=QString(replace(pate,"\\","/").c_str());
                else
                {
                    this->_qtimage=QString("../../tempimage4Qt.png");

                    osgDB::writeImageFile(*im,"tempimage4Qt.png");

                }
                emit qtimageChanged(_qtimage);

                //    cerr<<_filename.toStdString()<<endl;
            }


            emit filenameChanged(s);
        }
    }
}
osg::QMLTexture2D::QMLTexture2D(const pmoc::Instance *i,QObject* parent):QReflect_Texture2D(i,parent)
{
//custom initializations
}
QQuickItem* osg::QMLTexture2D::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Texture2D::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here




   // updateModel();


    return this->_view;
}
void  osg::QMLTexture2D::updateModel()
{
    QReflect_Texture2D::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here
    ///retrieve parent item and convert to stateset to retrieve texture unit
    QVariant var=QQmlProperty::read(_view->parentItem(), "qmodel");
    osg::QMLStateSet *qmlss=var.value<osg::QMLStateSet *>();

    // osg::QMLStateSet *qmlss = qobject_cast<osg::QMLStateSet*>(object);

//    if(qmlss)
//    {
//
//        for( osg::StateSet::TextureAttributeList::const_iterator it= qmlss->_model->getTextureAttributeList().begin();
//                it!=qmlss->_model->getTextureAttributeList().end() ; it++)
//        {
//
//            for(osg::StateSet::AttributeList::const_iterator it2=(*it).begin(); it2!=(*it).end(); it2++)
//            {
//                osg::StateAttribute * s=(*it2).second.first;
//                if(s==_model)//this is the model... finallly :/
//                    _textureUnit=(*it2).second.second;
//            }
//        }
//
//    }
//    emit textureUnitChanged(_textureUnit);


    if(_model->getWrap(osg::Texture2D::WRAP_S) == osg::Texture::REPEAT)
        _wrap_s= "REPEAT";
    if(_model->getWrap(osg::Texture2D::WRAP_S) == osg::Texture::CLAMP)
        _wrap_s= "CLAMP";
    if(_model->getWrap(osg::Texture2D::WRAP_S) == osg::Texture::CLAMP_TO_BORDER)
        _wrap_s= "CLAMP_TO_BORDER";
    if(_model->getWrap(osg::Texture2D::WRAP_S) == osg::Texture::CLAMP_TO_EDGE)
        _wrap_s= "CLAMP_TO_EDGE";



    if(_model->getWrap(osg::Texture2D::WRAP_T) == osg::Texture::REPEAT)
        _wrap_t= "REPEAT";
    if(_model->getWrap(osg::Texture2D::WRAP_T) == osg::Texture::CLAMP)
        _wrap_t= "CLAMP";
    if(_model->getWrap(osg::Texture2D::WRAP_T) == osg::Texture::CLAMP_TO_BORDER)
        _wrap_t= "CLAMP_TO_BORDER";
    if(_model->getWrap(osg::Texture2D::WRAP_T) == osg::Texture::CLAMP_TO_EDGE)
        _wrap_t= "CLAMP_TO_EDGE";
    emit wrap_tChanged(_wrap_t);
    emit wrap_sChanged(_wrap_s);

    /* if(_model->getWrap(osg::Texture2D::WRAP_R) == osg::Texture::REPEAT)
     _wrap_r= "REPEAT";
     if(_model->getWrap(osg::Texture2D::WRAP_R) == osg::Texture::CLAMP)
     _wrap_r= "CLAMP";
     if(_model->getWrap(osg::Texture2D::WRAP_R) == osg::Texture::CLAMP_TO_BORDER)
     _wrap_r= "CLAMP_TO_BORDER";
     if(_model->getWrap(osg::Texture2D::WRAP_R) == osg::Texture::CLAMP_TO_EDGE)
     _wrap_r= "CLAMP_TO_EDGE";*/

    ////////////////
    osg::Image *im=_model->getImage();

    if (im)
    {
        string ss=im->getFileName();
        if (ss !="")
        {
            string pate=osgDB::findDataFile(ss);
            string ext=osgDB::getFileExtension(pate);

            if (ext=="png")//Type supported by QT
                //#pate=pate.replace('\\','/')
                this->_qtimage=QString(replace(pate,"\\","/").c_str());
            else
            {
                this->_qtimage=QString("../../tempimage4Qt.png");

                osgDB::writeImageFile(*im,"tempimage4Qt.png");

            }
            emit qtimageChanged(_qtimage);

            //    cerr<<_filename.toStdString()<<endl;
        }
        else
        {

            cerr<<"texture is not bind to external file create a temp file on the disk to display in Qml"<<endl;
            osgDB::writeImageFile(*im,"tempimage4Qt.png");
            this->_qtimage=QString("../../tempimage4Qt.png");
            emit qtimageChanged(_qtimage);

        }

    }
    else cerr<<"osg::QMLTexture2D"<<(unsigned long int)_model<<":  Texture2D has no image attached"<<endl;

}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Texture2D_pmoc.cpp"
#endif


