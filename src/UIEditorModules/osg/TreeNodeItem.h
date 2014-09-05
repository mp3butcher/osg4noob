#ifndef TREENODEMODELI_H
#define TREENODEMODELI_H 1


#include <QMetaType>

#include <QAbstractListModel>


class TreeNodeModel;
class  TreeNodeDataObject//: public QObject
{
public:
    //Q_OBJECT
//friend class NodeListModel;
public:
    int _level;
    QString _type,_name;
    TreeNodeModel *_subnodes;
    TreeNodeModel *_parentModel;
    bool _selected;
    explicit  TreeNodeDataObject(QString name="", int level=0,QString type="",
                                 TreeNodeModel*subNode=0,
                                 TreeNodeModel* parentmodel=0,
                                 QObject*p=0)    ;
    TreeNodeDataObject(const TreeNodeDataObject&o)
    {
        _level=o._level;
        _type=o._type;
        _name=o._name;
        _subnodes=o._subnodes;
        _parentModel=o._parentModel;
        _selected=o._selected;
    }
    ~TreeNodeDataObject() {}


};

//Q_DECLARE_METATYPE(TreeNodeDataObject)
//Q_DECLARE_METATYPE(TreeNodeDataObject*)
#endif
