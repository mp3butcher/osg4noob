#include <osg/Uniform>
#include <sstream>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/Uniform_pmoc.hpp>
#include <customCode/osg/StateSet_pmoc.hpp>
using namespace pmoc;
using namespace std;
using namespace osg;

void osg::QMLUniform::setValuetoParse(QString s)
{
    QString temp;
    vector<string> split;
    string word;
    stringstream stream(s.toStdString());
    while( getline(stream, word, ' ') )
        split.push_back( (word));
    switch(_model->getType())
    {

    case osg::Uniform::FLOAT:
    {
        float f;
        f=s.toFloat();

        _model->set(f);
        emit stringValueChanged(s);

    }
    break;

    case osg::Uniform::SAMPLER_1D:
    case osg::Uniform::SAMPLER_2D:
    case osg::Uniform::SAMPLER_3D:
    case osg::Uniform::INT:
    {
        stringstream ss;
        ss<<          (s.toInt());
        temp=QString(ss.str().c_str());
        if(temp==s)
        {
            _model->set(s.toInt());
            emit stringValueChanged(s);
        }
    }
    break;
    case osg::Uniform::UNSIGNED_INT:
    {
        stringstream ss;
        ss<<          (s.toUInt());
        temp=QString(ss.str().c_str());
        if(temp==s)
        {
            _model->set(s.toUInt());
            emit stringValueChanged(s);
        }
    }
    break;


    case osg::Uniform::FLOAT_VEC4 :
    {
        osg::Vec4f v;
        for(int i=0; i<split.size()&&i<4; i++)
        {
            stringstream ss;
            float f;
            ss<<          (split[i]);
            ss>>f;
            v[i]= f;

        }
        _model->set(v);
        emit stringValueChanged(s);
    }
    break;
    case osg::Uniform::FLOAT_VEC3 :
    {
        osg::Vec3f v;
        for(int i=0; i<split.size()&&i<3; i++)
        {
            stringstream ss;
            float f;
            ss<<          (split[i]);
            ss>>f;
            v[i]= f;

        }
        _model->set(v);
        emit stringValueChanged(s);
    }
    break;
    case osg::Uniform::FLOAT_VEC2:
    {
        osg::Vec2f v;
        for(int i=0; i<split.size()&&i<2; i++)
        {
            stringstream ss;
            float f;
            ss<<          (split[i]);
            ss>>f;
            v[i]= f;
        }
        _model->set(v);
        emit stringValueChanged(s);
    }
    break;





    default:
        cerr<<" type not parsed YET"<<endl;
    }

    _model->dirty();

}
QString osg::QMLUniform::stringValue()
{
    QString res;
    stringstream ss;
    switch(_model->getType())
    {
    case osg::Uniform::FLOAT:
    {
        float r;
        _model->get(r);
        ss<<r;
        break;
    }
    case osg::Uniform::FLOAT_VEC4:
    {
        osg::Vec4f r;
        _model->get(r);
        ss<<r[0]<<" "<<r[1]<<" "<<r[2]<<" "<<r[3];
        break;
    }
    case osg::Uniform::FLOAT_VEC3:
    {
        osg::Vec3f r;
        _model->get(r);
        ss<<r[0]<<" "<<r[1]<<" "<<r[2];
        break;
    }
    case osg::Uniform::FLOAT_VEC2:
    {
        osg::Vec3f r;
        _model->get(r);
        ss<<r[0]<<" "<<r[1];
        break;
    }
    case osg::Uniform::INT:
    case osg::Uniform::SAMPLER_1D:
    case osg::Uniform::SAMPLER_2D:
    case osg::Uniform::SAMPLER_3D:
    case osg::Uniform::SAMPLER_1D_SHADOW           :
  case osg::Uniform:: SAMPLER_2D_SHADOW            :
     case osg::Uniform:: SAMPLER_1D_ARRAY              :
      case osg::Uniform:: SAMPLER_2D_ARRAY              :
     case osg::Uniform::SAMPLER_CUBE_MAP_ARRAY        :
      case osg::Uniform::SAMPLER_1D_ARRAY_SHADOW       :
     case osg::Uniform::SAMPLER_2D_ARRAY_SHADOW      :
      case osg::Uniform::  SAMPLER_2D_MULTISAMPLE        :
     case osg::Uniform::  SAMPLER_2D_MULTISAMPLE_ARRAY  :
      case osg::Uniform::   SAMPLER_CUBE_SHADOW           :
   case osg::Uniform:: SAMPLER_CUBE_MAP_ARRAY_SHADOW :
      case osg::Uniform:: SAMPLER_BUFFER                :
     case osg::Uniform:: SAMPLER_2D_RECT        :
    {
        int r;
        _model->get(r);
        ss<<r;
        break;
    }
    {
        int r;
        _model->get(r);
        ss<<r;
        break;
    }

    }
    return QString(ss.str().c_str());
//    _model->getValue();

}
void  osg::QMLUniform::type(int i)
{
    if(i!=type())
    {
        osg::Uniform::ParentList plist=_model->getParents();
        for(osg::Uniform::ParentList::iterator it=plist.begin(); it!=plist.end(); it++)
            (*it)->removeUniform(_model);
        _model->setType(osg::Uniform::getTypeId(_uniformstringlist[i].toStdString().c_str()));
        for(osg::Uniform::ParentList::iterator it=plist.begin(); it!=plist.end(); it++)
            (*it)->addUniform(_model);
        _model->dirty();
        emit typeChanged(i);
    }
}
int osg::QMLUniform::type()
{
    QString type=QString(osg::Uniform::getTypename(_model->getType()));
    int curindex=0;
    while(type!=_uniformstringlist[curindex])curindex++;
    if(curindex==_uniformstringlist.size())
    return -1;
    return curindex;
}
osg::QMLUniform::QMLUniform(const pmoc::Instance *i,QObject* parent):QReflect_Uniform(i,parent)
{
//custom initializations

#define CASETYPE(XXX) _uniformstringlist.append(QString(osg::Uniform::getTypename(osg::Uniform::XXX)));
    CASETYPE(FLOAT      )            CASETYPE(FLOAT_VEC2 )
    CASETYPE(FLOAT_VEC3 )            CASETYPE(FLOAT_VEC4 )            CASETYPE(DOUBLE      )            CASETYPE(DOUBLE_VEC2 )
    CASETYPE(DOUBLE_VEC3 )            CASETYPE(DOUBLE_VEC4 )
    CASETYPE(INT      )            CASETYPE(INT_VEC2 )            CASETYPE(INT_VEC3 )CASETYPE(            INT_VEC4 )
    CASETYPE(UNSIGNED_INT      )            CASETYPE(UNSIGNED_INT_VEC2 )            CASETYPE(UNSIGNED_INT_VEC3 )
    CASETYPE(UNSIGNED_INT_VEC4 )            CASETYPE(BOOL      )            CASETYPE(BOOL_VEC2 )            CASETYPE(BOOL_VEC3 )
    CASETYPE(            BOOL_VEC4 )

    CASETYPE(FLOAT_MAT2   )
    CASETYPE(FLOAT_MAT3   )
    CASETYPE(FLOAT_MAT4   )
    CASETYPE(FLOAT_MAT2x3 )
    CASETYPE(   FLOAT_MAT2x4 )
    CASETYPE(            FLOAT_MAT3x2 )
    CASETYPE(            FLOAT_MAT3x4 )
    CASETYPE(            FLOAT_MAT4x2 )
    CASETYPE(            FLOAT_MAT4x3 )

    CASETYPE(DOUBLE_MAT2   )
    CASETYPE(DOUBLE_MAT3   )
    CASETYPE(DOUBLE_MAT4   )
    CASETYPE(DOUBLE_MAT2x3 )
    CASETYPE(DOUBLE_MAT2x4 )
    CASETYPE(DOUBLE_MAT3x2 )
    CASETYPE(DOUBLE_MAT3x4 )
    CASETYPE(DOUBLE_MAT4x2 )
    CASETYPE(    DOUBLE_MAT4x3 )

    CASETYPE(  SAMPLER_1D                    )
    CASETYPE(  SAMPLER_2D                    )
    CASETYPE(  SAMPLER_3D                    )
    CASETYPE(  SAMPLER_CUBE                  )
    CASETYPE( SAMPLER_1D_SHADOW             )
    CASETYPE(  SAMPLER_2D_SHADOW             )
    CASETYPE(  SAMPLER_1D_ARRAY              )
    CASETYPE(  SAMPLER_2D_ARRAY              )
    CASETYPE( SAMPLER_CUBE_MAP_ARRAY        )
    CASETYPE( SAMPLER_1D_ARRAY_SHADOW       )
    CASETYPE(SAMPLER_2D_ARRAY_SHADOW       )
    CASETYPE(  SAMPLER_2D_MULTISAMPLE        )
    CASETYPE(  SAMPLER_2D_MULTISAMPLE_ARRAY  )
    CASETYPE(   SAMPLER_CUBE_SHADOW           )
    CASETYPE(  SAMPLER_CUBE_MAP_ARRAY_SHADOW )
    CASETYPE( SAMPLER_BUFFER                )
    CASETYPE( SAMPLER_2D_RECT               )
    CASETYPE( SAMPLER_2D_RECT_SHADOW        )

    CASETYPE( INT_SAMPLER_1D                   )
    CASETYPE( INT_SAMPLER_2D                   )
    CASETYPE(  INT_SAMPLER_3D                   )
    CASETYPE(  INT_SAMPLER_CUBE                 )
    CASETYPE(INT_SAMPLER_1D_ARRAY             )
    CASETYPE(  INT_SAMPLER_2D_ARRAY             )
    CASETYPE( INT_SAMPLER_CUBE_MAP_ARRAY       )
    CASETYPE( INT_SAMPLER_2D_MULTISAMPLE       )
    CASETYPE( INT_SAMPLER_2D_MULTISAMPLE_ARRAY )
    CASETYPE( INT_SAMPLER_BUFFER               )
    CASETYPE(  INT_SAMPLER_2D_RECT              )

    CASETYPE(UNSIGNED_INT_SAMPLER_1D                   )
    CASETYPE(UNSIGNED_INT_SAMPLER_2D                   )
    CASETYPE(UNSIGNED_INT_SAMPLER_3D                   )
    CASETYPE(UNSIGNED_INT_SAMPLER_CUBE                 )
    CASETYPE(UNSIGNED_INT_SAMPLER_1D_ARRAY             )
    CASETYPE(UNSIGNED_INT_SAMPLER_2D_ARRAY             )
    CASETYPE(UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY       )
    CASETYPE(UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE       )
    CASETYPE(UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY )
    CASETYPE(   UNSIGNED_INT_SAMPLER_BUFFER               )
    CASETYPE(            UNSIGNED_INT_SAMPLER_2D_RECT              )

    CASETYPE(IMAGE_1D                   )
    CASETYPE(IMAGE_2D                   )
    CASETYPE(IMAGE_3D                   )
    CASETYPE(IMAGE_2D_RECT              )
    CASETYPE(IMAGE_CUBE                 )
    CASETYPE(IMAGE_BUFFER               )
    CASETYPE(IMAGE_1D_ARRAY             )
    CASETYPE(IMAGE_2D_ARRAY             )
    CASETYPE(IMAGE_CUBE_MAP_ARRAY       )
    CASETYPE(IMAGE_2D_MULTISAMPLE       )
    CASETYPE(            IMAGE_2D_MULTISAMPLE_ARRAY )

    CASETYPE(INT_IMAGE_1D                   )
    CASETYPE(INT_IMAGE_2D                   )
    CASETYPE(INT_IMAGE_3D                   )
    CASETYPE(INT_IMAGE_2D_RECT              )
    CASETYPE(INT_IMAGE_CUBE                 )
    CASETYPE(INT_IMAGE_BUFFER               )
    CASETYPE(INT_IMAGE_1D_ARRAY             )
    CASETYPE(INT_IMAGE_2D_ARRAY             )
    CASETYPE(INT_IMAGE_CUBE_MAP_ARRAY       )
    CASETYPE(INT_IMAGE_2D_MULTISAMPLE       )
    CASETYPE(            INT_IMAGE_2D_MULTISAMPLE_ARRAY )

    CASETYPE(UNSIGNED_INT_IMAGE_1D                   )
    CASETYPE(UNSIGNED_INT_IMAGE_2D                   )
    CASETYPE(UNSIGNED_INT_IMAGE_3D                   )
    CASETYPE(UNSIGNED_INT_IMAGE_2D_RECT              )
    CASETYPE(UNSIGNED_INT_IMAGE_CUBE                 )
    CASETYPE(UNSIGNED_INT_IMAGE_BUFFER               )
    CASETYPE(UNSIGNED_INT_IMAGE_1D_ARRAY             )
    CASETYPE(UNSIGNED_INT_IMAGE_2D_ARRAY             )
    CASETYPE(  UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY       )
    CASETYPE(  UNSIGNED_INT_IMAGE_2D_MULTISAMPLE       )
    CASETYPE(   UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY )

    CASETYPE(     UNDEFINED)
    emit uniformtypelistChanged(_uniformstringlist);

}
QQuickItem* osg::QMLUniform::connect2View(QQuickItem*i)
{
    this->_view=QReflect_Uniform::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
    ///CustomiZE here



    return this->_view;
}
void  osg::QMLUniform::updateModel()
{
    QReflect_Uniform::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
    ///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Uniform_pmoc.cpp"
#endif


