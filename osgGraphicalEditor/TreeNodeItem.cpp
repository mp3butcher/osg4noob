#include "TreeNodeItem.h"
#include <iostream>

//qRegisterMetaType<TreeNodeDataObject>();
TreeNodeDataObject::TreeNodeDataObject(QString name, int level,QString type,
                       TreeNodeModel*subNode,
                       TreeNodeModel* parentmodel,
                       QObject*p)//:QObject(p)
    {
    std::cerr<<"cretaname <"<<name.toStdString()<<"> type<"<<type.toStdString()<<std::endl;
        this->_name=name;
        this->_level=level;
        this->_type=type;
       this->_subnodes=subNode;
        this->_parentModel=parentmodel;
        this->_selected=false;/* */

    }
