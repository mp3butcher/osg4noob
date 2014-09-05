#ifndef ATTLISTODEQMODEL_H
#define ATTLISTODEQMODEL_H 1



#include <MetaQQuickClass.h>
#include <osg/Node>
#include <QAbstractListModel>


#include <QMetaType>

#include <QAbstractListModel>

namespace pmoc
{
class  StateAttribObject//: public QObject
{
public:
    // Q_OBJECT
//friend class NodeListModel;
public:

    QString _type,_name;

    bool _selected;
    StateAttribObject(QString name="",  QString type="",
                      QObject*p=0)    ;
    StateAttribObject(const StateAttribObject &o)
    {
        _type=o._type;
        _name=o._name;

        _selected=o._selected;
        qDebug() << "abc" << qPrintable(_name) << "def"<<qPrintable(_type) ;
    }
    void operator =(const StateAttribObject o)
    {
        _type=o._type;
        _name=o._name;

        _selected=o._selected;

        qDebug() << "affectabc" << qPrintable(_name) << "def"<<qPrintable(_type) ;
    }
    bool operator ==(const StateAttribObject o)const
    {
        return (_name==o._name && _type==o._type);
    }
    ~StateAttribObject() {}


};


class  StateAttribListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum stateattRoles
    {
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
    QList<StateAttribObject>  _states;

    explicit StateAttribListModel(QObject *parent = 0);
    ~StateAttribListModel()
    {
        resetListViewModel();
    }

    StateAttribListModel(const StateAttribListModel&o)
    {
        //_states=o._states;
        for(QList<StateAttribObject>::const_iterator i=o._states.begin(); i!=o._states.end(); i++)
        {
            _states.append(*i);
            //  qDebug() << "constr copy listmodel" << qPrintable(_states.back()._name) << "def"<<qPrintable(_states.back()._type) ;
        }
        _roles=o._roles;

    }
    void operator =(const StateAttribListModel&o)
    {
        //_states=o._states;
        for(QList<StateAttribObject>::const_iterator i=o._states.begin(); i!=o._states.end(); i++)
        {
            _states.append(*i);
            //   qDebug() << "copy listmodel" << qPrintable(_states.back()._name) << "def"<<qPrintable(_states.back()._type) ;
        }
        _roles=o._roles;

    }



    int rowCount(const QModelIndex &parent = QModelIndex()) const
    {
        return _states.size();
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
    void resetListViewModel();
    void addStateAttrib( const StateAttribObject &animal);
    void removeStateAttrib( const StateAttribObject& animal);
    void insertStateAttrib( const  StateAttribObject &animal,int pos);
    int stateAttribindex(  const StateAttribObject &animal);
    /*bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());
    */

protected:
    QHash<int, QByteArray> roleNames() const
    {
        return _roles;
    }
};
}
Q_DECLARE_METATYPE(pmoc::StateAttribListModel)

//Q_DECLARE_METATYPE(pmoc::StateAttribObject)

#endif


