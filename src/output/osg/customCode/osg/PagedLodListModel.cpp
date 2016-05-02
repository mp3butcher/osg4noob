#include "PagedLodListModel.hpp"
#include <iostream>
using namespace pmoc;
//qRegisterMetaType<LODRangeObject>();
LODRangeObject::LODRangeObject(QString name,float  mi,float ma,float s ,float f ,
 float d,
                       QObject*p)//:QObject(p)
    {
   // std::cerr<<"cretaname <"<<name.toStdString()<<"> type<"<<type.toStdString()<<std::endl;
        this->filename=name;

        this->minRange=mi;

        this->maxRange=ma;/* */

        this->scale=s;/* */
        this->factor=f;/* */

        this->depth=d;/* */

    }


//qRegisterMetaType<PagedLodListModel>();
///recursive purge the tree
void PagedLodListModel::resetListViewModel()
{
    while( _states.count()>0)
    {
       /* if(_states[0]->_subnodes)
            _states[0]->_subnodes->resetTreeViewModel();*/
        removeRange(_states[0]);
    }
}
PagedLodListModel::PagedLodListModel(QObject *parent )
    : QAbstractListModel(parent)
{
   // nameRole = Qt::UserRole + 1;
    _roles[filenameRole]="filename";
 //   typeRole = Qt::UserRole + 2;
    _roles[minRangeRole]="minRange";
  //  parentRole = Qt::UserRole + 3;
    _roles[maxRangeRole]="maxRange";
  //  depthRole = Qt::UserRole + 4;
    _roles[scaleRole]="scale";
 //   subNodeRole = Qt::UserRole + 5;
    _roles[factorRole]="factorRole";
   // selectedRole = Qt::UserRole + 6;
    _roles[depthRole]="depthRole";

     _roles[  SizeRole]="size";

    //_roles = {TypeName: "name", SizeRole: "subNode",parentRole: "parentModel",typeRole: "type", depthRole: "level", selectedRole: "selected"}
}
void PagedLodListModel::addRange(const LODRangeObject &animal)
{
    beginInsertRows(QModelIndex(),_states.size(),_states.size());
    _states.push_back(animal);
    endInsertRows();
}

void PagedLodListModel::insertRange( const LODRangeObject &animal,int index)
{
    beginInsertRows(QModelIndex(), index,index);

//    _treeNodes.insert(index,animal);
    endInsertRows();
}


int  PagedLodListModel::Rangeindex(const LODRangeObject &animal)
{
    int cpt=0;
    QList<LODRangeObject>::iterator i=_states.begin();
    while(i!=_states.end())
    {
        if(&(*i)==&animal)
         return cpt;
        i++;
        cpt++;
    }
    return -1;
}

void PagedLodListModel::removeRange( const LODRangeObject &animal)
{

    beginRemoveRows(QModelIndex(),Rangeindex(animal),Rangeindex(animal));
    _states.removeAt(Rangeindex(animal));

    endRemoveRows();
}


#include <iostream>
QVariant PagedLodListModel::data(const QModelIndex &index, int role) const
{
 if (index.row() < 0 || index.row() >= _states.count())
return QVariant();
    if (role == SizeRole)
        return  _states.size();

    const LODRangeObject &animal=
     _states[index.row()];
       // std::cerr<<"name <"<<animal._name.toStdString()<<"> type<"<<animal._type.toStdString()<<std::endl;

    if (role == depthRole)
        return  animal.depth;
    if ( role == filenameRole)
        return animal.filename;
    if (role == minRangeRole)
        return animal.minRange;
    if (role == maxRangeRole)
        return animal.maxRange;
    if (role == scaleRole)
        return animal.scale;
    if (role == factorRole)
        return animal.factor;
   /* if ( role == parentRole)
        return QVariant::fromValue<PagedLodListModel*>( animal._parentModel);
    if ( role == depthRole)
        return animal._level;
    if (role == subNodeRole)
        return  QVariant::fromValue<PagedLodListModel*>((animal._subnodes));*/

    return QVariant();
}
bool 	PagedLodListModel::setData (const QModelIndex &index, const QVariant &value, int role){

 if (index.row() < 0 || index.row() >= _states.count())
return false;
   /* if (role == SizeRole)
        return  _treeNodes.size();*/

     LODRangeObject &animal=
     _states[index.row()];
    /*if (role == selectedRole){
    animal._selected=value.toBool();
    emit  dataChanged(index,index);//_roles);
    return true;}*/
    if (role == minRangeRole){
    animal.minRange=value.toFloat();
    emit  dataChanged(index,index);//_roles);
    return true;}
        if (role == maxRangeRole){
    animal.maxRange=value.toFloat();
    emit  dataChanged(index,index);//_roles);
    return true;}
        if (role == scaleRole){
    animal.scale=value.toFloat();
    emit  dataChanged(index,index);//_roles);
    return true;}


    if ( role == filenameRole)
        { animal.filename=value.toString();  emit  dataChanged(index,index);return true;}


    /* if ( role == depthRole)
        { animal._level=value.toInt();  emit  dataChanged(index,index);return true;}
   if (role == subNodeRole)
        {  (animal._subnodes=value));;return true;}
 if ( role == parentRole)
        { ( animal._parentModel=value);;return true;}
    */
    return false;


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
 #include "moc_PagedLodListModel.cpp"
#endif
