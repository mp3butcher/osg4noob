#include "AttribListModel.hpp"
#include <iostream>
using namespace pmoc;
//qRegisterMetaType<StateAttribObject>();
StateAttribObject::StateAttribObject(QString name,QString type,

                       QObject*p)//:QObject(p)
    {
    std::cerr<<"cretaname <"<<name.toStdString()<<"> type<"<<type.toStdString()<<std::endl;
        this->_name=name;

        this->_type=type;

        this->_selected=false;/* */

    }


//qRegisterMetaType<StateAttribListModel>();
///recursive purge the tree
void StateAttribListModel::resetListViewModel()
{
    while( _states.count()>0)
    {
       /* if(_states[0]->_subnodes)
            _states[0]->_subnodes->resetTreeViewModel();*/
        removeStateAttrib(_states[0]);
    }
}
StateAttribListModel::StateAttribListModel(QObject *parent )
    : QAbstractListModel(parent)
{
   // nameRole = Qt::UserRole + 1;
    _roles[nameRole]="name";
 //   typeRole = Qt::UserRole + 2;
    _roles[typeRole]="type";
  //  parentRole = Qt::UserRole + 3;
    _roles[parentRole]="parent";
  //  depthRole = Qt::UserRole + 4;
    _roles[depthRole]="level";
 //   subNodeRole = Qt::UserRole + 5;
    _roles[subNodeRole]="subNode";
   // selectedRole = Qt::UserRole + 6;
    _roles[selectedRole]="selected";

     _roles[  SizeRole]="size";

    //_roles = {TypeName: "name", SizeRole: "subNode",parentRole: "parentModel",typeRole: "type", depthRole: "level", selectedRole: "selected"}
}
void StateAttribListModel::addStateAttrib(const StateAttribObject &animal)
{
    beginInsertRows(QModelIndex(),_states.size(),_states.size());
    _states.push_back(animal);
    endInsertRows();
}

void StateAttribListModel::insertStateAttrib( const StateAttribObject &animal,int index)
{
    beginInsertRows(QModelIndex(), index,index);

//    _treeNodes.insert(index,animal);
    endInsertRows();
}


int  StateAttribListModel::stateAttribindex(const StateAttribObject &animal)
{
    int cpt=0;
    QList<StateAttribObject>::iterator i=_states.begin();
    while(i!=_states.end())
    {
        if(&(*i)==&animal)
         return cpt;
        i++;
        cpt++;
    }
    return -1;
}

void StateAttribListModel::removeStateAttrib( const StateAttribObject &animal)
{

    beginRemoveRows(QModelIndex(),stateAttribindex(animal),stateAttribindex(animal));
    _states.removeAt(stateAttribindex(animal));

    endRemoveRows();
}


#include <iostream>
QVariant StateAttribListModel::data(const QModelIndex &index, int role) const
{
 if (index.row() < 0 || index.row() >= _states.count())
return QVariant();
    if (role == SizeRole)
        return  _states.size();

    const StateAttribObject &animal=
     _states[index.row()];
        std::cerr<<"name <"<<animal._name.toStdString()<<"> type<"<<animal._type.toStdString()<<std::endl;

    if (role == selectedRole)
        return  animal._selected;
    if ( role == nameRole)
        return animal._name;
    if (role == typeRole)
        return animal._type;
   /* if ( role == parentRole)
        return QVariant::fromValue<StateAttribListModel*>( animal._parentModel);
    if ( role == depthRole)
        return animal._level;
    if (role == subNodeRole)
        return  QVariant::fromValue<StateAttribListModel*>((animal._subnodes));*/

    return QVariant();
}
bool 	StateAttribListModel::setData (const QModelIndex &index, const QVariant &value, int role){

 if (index.row() < 0 || index.row() >= _states.count())
return false;
   /* if (role == SizeRole)
        return  _treeNodes.size();*/

     StateAttribObject &animal=
     _states[index.row()];
    if (role == selectedRole){
    animal._selected=value.toBool();
    emit  dataChanged(index,index);//_roles);
    return true;}
    if ( role == nameRole)
        { animal._name=value.toString();  emit  dataChanged(index,index);return true;}
    if (role == typeRole)
        { animal._type=value.toString();  emit  dataChanged(index,index);return true;}

    /* if ( role == depthRole)
        { animal._level=value.toInt();  emit  dataChanged(index,index);return true;}
   if (role == subNodeRole)
        {  (animal._subnodes=value));;return true;}
 if ( role == parentRole)
        { ( animal._parentModel=value);;return true;}
    */
    return false;


}

