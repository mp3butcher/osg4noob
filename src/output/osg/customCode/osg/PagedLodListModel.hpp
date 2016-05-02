#ifndef LODLISTODEQMODEL_H
#define LODLISTODEQMODEL_H 1




#include <MetaQQuickClass.h>
#include <osg/Node>
#include <QAbstractListModel>


#include <QMetaType>

#include <QAbstractListModel>

namespace pmoc
{
class  LODRangeObject//: public QObject
{
public:
    // Q_OBJECT
//friend class NodeListModel;
public:

    QString filename;

    float    minRange,maxRange,scale ,factor ,
        depth;

    LODRangeObject(QString name="",float  mi=0,float ma=0,float s=0 ,float f =0,
 float d=0,
                      QObject*p=0)    ;
    LODRangeObject(const LODRangeObject &o)
    {
        filename=o.filename;
        minRange=o.minRange;

        maxRange=o.maxRange;

        scale=o.scale;

        depth=o.depth;

        factor=o.factor;
       // qDebug() << "abc" << qPrintable(_name) << "def"<<qPrintable(_type) ;
    }
    void operator =(const LODRangeObject o)
    {
          filename=o.filename;
        minRange=o.minRange;

        maxRange=o.maxRange;

        scale=o.scale;

        depth=o.depth;

        factor=o.factor;
        //qDebug() << "affectabc" << qPrintable(_name) << "def"<<qPrintable(_type) ;
    }
    bool operator ==(const LODRangeObject o)const
    {
        return (filename==o.filename && minRange==o.minRange);
    }
    ~LODRangeObject() {}


};


class  PagedLodListModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum stateattRoles
    {
        filenameRole = Qt::UserRole + 1,
        minRangeRole = Qt::UserRole + 2,
        maxRangeRole = Qt::UserRole + 3,
        scaleRole = Qt::UserRole + 4,
        factorRole = Qt::UserRole + 5,
        depthRole = Qt::UserRole + 6,
        SizeRole
    };
    // int nameRole,typeRole,parentRole,subNodeRole,selectedRole,depthRole;
    QHash<int,QByteArray> _roles;
    QList<LODRangeObject>  _states;

    explicit PagedLodListModel(QObject *parent = 0);
    ~PagedLodListModel()
    {
        resetListViewModel();
    }

    PagedLodListModel(const PagedLodListModel&o)
    {
        //_states=o._states;
        for(QList<LODRangeObject>::const_iterator i=o._states.begin(); i!=o._states.end(); i++)
        {
            _states.append(*i);
            //  qDebug() << "constr copy listmodel" << qPrintable(_states.back()._name) << "def"<<qPrintable(_states.back()._type) ;
        }
        _roles=o._roles;

    }
    void operator =(const PagedLodListModel&o)
    {
        //_states=o._states;
        for(QList<LODRangeObject>::const_iterator i=o._states.begin(); i!=o._states.end(); i++)
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
    void addRange( const LODRangeObject &animal);
    void removeRange( const LODRangeObject& animal);
    void insertRange( const  LODRangeObject &animal,int pos);
    int Rangeindex(  const LODRangeObject &animal);
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
Q_DECLARE_METATYPE(pmoc::PagedLodListModel)

//Q_DECLARE_METATYPE(pmoc::LODRangeObject)

#endif


