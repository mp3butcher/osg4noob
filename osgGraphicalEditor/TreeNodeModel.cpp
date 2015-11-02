#include "TreeNodeModel.h"
#include <iostream>
using namespace std;
//qRegisterMetaType<TreeNodeModel>();

void TreeNodeModel:: move(int from,int to,int atpos){

std::cout<<this->_treeNodes.first()->_level<<endl;

}
///recursive purge the tree
void TreeNodeModel::resetTreeViewModel()
{
    while( _treeNodes.count()>0)
    {
        if(_treeNodes[0]->_subnodes)
            _treeNodes[0]->_subnodes->resetTreeViewModel();
        removeNode(_treeNodes[0]);
    }
}
TreeNodeModel::TreeNodeModel(TreeNodeDataObject * parenttreeNode, QObject *parent )
    : QAbstractListModel(parent)
{
_parentTreeNode=parenttreeNode;
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
void TreeNodeModel::addNode( TreeNodeDataObject *animal)
{
    beginInsertRows(QModelIndex(), rowCount(),rowCount());
    _treeNodes.push_back(animal);
    endInsertRows();
}

void TreeNodeModel::insertNode( TreeNodeDataObject * animal,int index)
{
    beginInsertRows(QModelIndex(), index,index);

//    _treeNodes.insert(index,animal);
    endInsertRows();
}


int  TreeNodeModel::nodeindex(TreeNodeDataObject *animal)
{
    int cpt=0;
    QList<TreeNodeDataObject*>::iterator i=_treeNodes.begin();
    while(i!=_treeNodes.end())
    {
        if((*i)==animal)
         return cpt;
        i++;
        cpt++;
    }
    return -1;
}

void TreeNodeModel::removeNode( TreeNodeDataObject * animal)
{

    beginRemoveRows(QModelIndex(),nodeindex(animal),nodeindex(animal));
    _treeNodes.removeAt(nodeindex(animal));

    endRemoveRows();
}


#include <iostream>
QVariant TreeNodeModel::data(const QModelIndex &index, int role) const
{
 if (index.row() < 0 || index.row() >= _treeNodes.count())
return QVariant();
    if (role == SizeRole)
        return  _treeNodes.size();

    const TreeNodeDataObject *animal=
     _treeNodes[index.row()];
      //  std::cerr<<"name <"<<animal->_name.toStdString()<<"> type<"<<animal->_type.toStdString()<<std::endl;

    if (role == selectedRole)
        return  animal->_selected;
    if ( role == nameRole)
        return animal->_name;
    if (role == typeRole)
        return animal->_type;
    if ( role == parentRole)
        return QVariant::fromValue<TreeNodeModel*>( animal->_parentModel);
    if ( role == depthRole)
        return animal->_level;
    if (role == subNodeRole)
        return  QVariant::fromValue<TreeNodeModel*>((animal->_subnodes));

    return QVariant();
}
bool 	TreeNodeModel::setData (const QModelIndex &index, const QVariant &value, int role){

 if (index.row() < 0 || index.row() >= _treeNodes.count())
return false;
   /* if (role == SizeRole)
        return  _treeNodes.size();*/

     TreeNodeDataObject *animal=
     _treeNodes[index.row()];
    if (role == selectedRole){
    animal->_selected=value.toBool();
    emit  dataChanged(index,index);//_roles);
    return true;}
    if ( role == nameRole)
        { animal->_name=value.toString();  emit  dataChanged(index,index);return true;}
    if (role == typeRole)
        { animal->_type=value.toString();  emit  dataChanged(index,index);return true;}

    if ( role == depthRole)
        { animal->_level=value.toInt();  emit  dataChanged(index,index);return true;}
   /* if (role == subNodeRole)
        {  (animal->_subnodes=value));;return true;}
 if ( role == parentRole)
        { ( animal->_parentModel=value);;return true;}
    */
    return false;


}
