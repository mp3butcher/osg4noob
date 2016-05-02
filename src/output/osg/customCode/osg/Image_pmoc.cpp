#include <osg/Image>
#include <QtGui/qopengl.h>
//includes
#include <QQuickItem>
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Image_pmoc.hpp>

#include <QQmlProperty>
#include <osgDB/FileUtils>
#include <osgDB/FileNameUtils>
#include <osgDB/WriteFile>
#include <osgDB/ReadFile>
using namespace pmoc;
using namespace std;
using namespace osg;

QUrl osg::QMLImage::getfilename( )const
{
    QUrl ret;

        ret=QUrl::fromLocalFile( QString(_model->getFileName().c_str()));

    return ret;
}

   void osg::QMLImage::writeToFile(QString filename,QString options ){

    ref_ptr<osgDB::Options> opt=new osgDB::Options;
    opt->setOptionString(opt->getOptionString()+options.toStdString());
    osgDB::writeImageFile(*_model,filename.toStdString(),opt);

    }
void osg::QMLImage::setfilename(QUrl sss)
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
            //filename=sss;
_model->setFileName(s.toStdString());

            //*_model(*im.get());
            // protect from being optimized away as static state:
          //  _model->setDataVariance(osg::Object::DYNAMIC);
            // im->dirty();



            string ss=im->getFileName();
            if (ss !="")
            {
                string pate=osgDB::findDataFile(ss);
                string ext=osgDB::getFileExtension(pate);
                emit qtimageChanged(QString());
                if (ext=="png"){//Type supported by QT
                    //#pate=pate.replace('\\','/')
                    QString pa=QString(pate.c_str());
                    this->_qtimage=pa.replace("\\","/");//QString(replace(pate,"\\","/").c_str());
                    }
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
osg::QMLImage::QMLImage(const pmoc::Instance *i,QObject* parent):QReflect_Image(i,parent)
{
//custom initializations
}
void osg::QMLImage::internalTextureFormat(int i)
{
    if(i!=internalTextureFormat())
    {
        GLint itf;
        switch(i)
        {
        case 0:            itf=GL_RGBA8;            break;
        case 1:            itf=GL_RGBA16;            break;
        case 2:            itf=GL_RGBA16F;            break;
        case 3:            itf=GL_RGBA32F;            break;
        default:
            itf=GL_RGBA8;
        }
        _model->setInternalTextureFormat(itf);
        emit internalTextureFormatChanged(i);
    }
}
int osg::QMLImage::internalTextureFormat()const
{
    switch(_model->getInternalTextureFormat())
    {
    case GL_RGBA8:        return 0;
    case GL_RGBA16:        return 1;
    case GL_RGBA16F:        return 2;
    case GL_RGBA32F:        return 3;
    default:
        return 0;
    }



#if 0
#define GL_BITMAP               0x1A00
#define GL_COLOR_INDEX          0x1900
#define GL_INTENSITY12          0x804C
#define GL_INTENSITY16          0x804D
#define GL_INTENSITY            0x8049
#define GL_INTENSITY4           0x804A
#define GL_INTENSITY8           0x804B
#define GL_LUMINANCE12          0x8041
#define GL_LUMINANCE12_ALPHA4   0x8046
#define GL_LUMINANCE12_ALPHA12  0x8047
#define GL_LUMINANCE16          0x8042
#define GL_LUMINANCE16_ALPHA16  0x8048
#define GL_LUMINANCE4           0x803F
#define GL_LUMINANCE4_ALPHA4    0x8043
#define GL_LUMINANCE6_ALPHA2    0x8044
#define GL_LUMINANCE8           0x8040
#define GL_LUMINANCE8_ALPHA8    0x8045
#define GL_RGBA8                0x8058
#define GL_RGBA16               0x805B
#define GL_PACK_ROW_LENGTH      0x0D02
#endif
}

void osg::QMLImage::allocateImage( int w,int h,int d,QString pixformat,QString typ )
{
    GLenum pixelFormat=GL_RGBA;
    GLenum type=GL_UNSIGNED_INT;
#define CASE(XXX)  if(pixformat==#XXX)pixelFormat=XXX;
    CASE(GL_RGBA)
    CASE(GL_RGB)
    CASE(GL_RED)
#define CASET(XXX)  if(typ==#XXX)type=XXX;
    CASET(GL_UNSIGNED_INT)
    CASET(GL_UNSIGNED_BYTE)
    CASET(GL_UNSIGNED_SHORT)
  //  _model->setImage( w,h,d,_model->getInternalTextureFormat(),pixelFormat,type,NULL,osg::Image::AllocationMode::NO_DELETE);
_model->allocateImage(w,h,d,pixelFormat,type);
}
QQuickItem* osg::QMLImage::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Image::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLImage::updateModel()
{
    QReflect_Image::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Image_pmoc.cpp"
#endif


