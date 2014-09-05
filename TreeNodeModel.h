#ifndef TREENODEQMODEL_H
#define TREENODEQMODEL_H 1


#include "TreeNodeItem.h"

#include <MetaQQuickClass.h>
#include <osg/Node>
#include <QAbstractListModel>


class  TreeNodeModel : public QAbstractListModel
{

    Q_OBJECT

public:
 enum AnimalRoles {
nameRole = Qt::UserRole + 1,
typeRole = Qt::UserRole + 2,
parentRole = Qt::UserRole + 3,
subNodeRole = Qt::UserRole + 4,
selectedRole = Qt::UserRole + 5,
depthRole = Qt::UserRole + 6,
SizeRole
};
   // int nameRole,typeRole,parentRole,subNodeRole,selectedRole,depthRole;
    QHash<int,QByteArray> _roles;
    QList<TreeNodeDataObject*>  _treeNodes;

    explicit TreeNodeModel(QObject *parent = 0);
    ~TreeNodeModel() {}
    TreeNodeModel(const TreeNodeModel&o)
    {_treeNodes=o._treeNodes;
        //for(QList<TreeNodeDataObject>::const_iterator i=o._treeNodes.begin(); i!=o._treeNodes.end(); i++)
            //_treeNodes.append(*i);
        _roles=o._roles;

    }



    int rowCount(const QModelIndex &parent = QModelIndex()) const
    {
        return _treeNodes.size();
    }

     QVariant data(const QModelIndex &index, int role=Qt::DisplayRole) const;
     bool 	setData (const QModelIndex &index, const QVariant &value, int role=Qt::DisplayRole);
    /*   QVariant headerData(int section, Qt::Orientation orientation,

                        int role = Qt::DisplayRole) const;



    Qt::ItemFlags flags(const QModelIndex &index) const;
    bool setData(const QModelIndex &index, const QVariant &value,int role = Qt::EditRole);

    void insertNode(NodeListModel*animal,int index)
        {
            be std::vectorginInsertRows(QModelIndex(), index,index);
    		_treeNodes.insert(index,*animal);
    		endInsertRows();
    		}*/
    void resetTreeViewModel();
    void addNode( TreeNodeDataObject *animal);
    void removeNode( TreeNodeDataObject *animal);
    void insertNode( TreeNodeDataObject *animal,int pos);
    int nodeindex( TreeNodeDataObject*);
    /*bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());
 */
    TreeNodeDataObject * getTreeNodeByName(QString hid)
    {

        for(QList<TreeNodeDataObject*>::iterator i=_treeNodes.begin(); i!=_treeNodes.end(); i++)
        {
//		for tree in self._treeNodes:
            if ((*i)->_name==hid)
                return (*i);
            else
            {
                if ((*i)->_subnodes)
                {
                    TreeNodeDataObject * ret=  (*i)->_subnodes->getTreeNodeByName( hid);
                    if (ret)return ret;
                }
            }
        }
        return 0;


    }
       protected:
QHash<int, QByteArray> roleNames() const{return _roles;}
};


Q_DECLARE_METATYPE(TreeNodeModel)
//Q_DECLARE_METATYPE(TreeNodeModel*)

#endif


