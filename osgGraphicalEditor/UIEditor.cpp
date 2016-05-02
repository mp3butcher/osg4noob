#include "UIEditor.hpp"

#include <MetaQQuickLibraryRegistry.h>
//#include <pmocjs.blackboard.hpp>
#include <list>
#include <map>
#include <memory>
#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

#include <Qsci/qsciscintilla.h>
#include <Qsci/qscilexercpp.h>
#include <Qsci/qscilexerpython.h>
#include <Qsci/qscilexerjavascript.h>
#include <Qsci/qscilexerhtml.h>
#include <Qsci/qsciapis.h>
auto IsSpace= [](unsigned char const c)
{
    return isspace(c);
};

using namespace std;
std::string  replace(std::string f, std::string pattern, std::string replace)
{
    std::vector< string > tstrings;
    string fp = f;
    int posend = fp.find(pattern);
    while (posend >= 0)
    {
        string s = fp.substr(0, posend);
        tstrings.push_back(s);
        fp = fp.substr(posend + pattern.size(), fp.size());
        posend = fp.find(pattern);
    }
    if (!fp.empty())tstrings.push_back(fp);
    std::string out;
    for (std::vector< string >::iterator i = tstrings.begin(); i != --tstrings.end(); i++)
        out += (*i) + replace;
    return out + tstrings.back();
}
///Bug on QQuickItem destructor sometimes...:
///set parent 0 and emit parentChanged in order to deconnect
/*void fakedelete(  QQuickItem *item)
{
    QList<QQuickItem*> children=item->childItems();
    for(int i=0; i<children.count(); i++)
    {
        fakedelete(children[i]);
    }
item->setParentItem(0);
    emit item->parentChanged(0);
}  */
using namespace pmoc;
void UIEditor::clearComponentCache()
{
    //_win->clearComponentCache();
    _win->engine()->clearComponentCache();

}
pmoc::MetaQQuickClass* UIEditor:: getClassByName(QString casttype)
{
    return  PMOCGETMETACLASS(string(casttype.toStdString()));
}
void UIEditor::realPaste()
{
    //save current state
    savoperand=cur_operand;
    savsubject=cur_operatorsubject;
    //setup subject assuming cur_operand is the selected QQModel
    cur_operatorsubject=cur_operand;
    //setup operand
    cur_operand=_copyOperand;
    resolvOperator(cur_operatorsubject,cur_operand);
}
void UIEditor::realRemoval()
{
    cur_operatorsubject=_cutSubject;
    //setup operand
    cur_operand=_copyOperand;
    resolvReverseOperator(cur_operatorsubject,cur_operand);
}

std::vector<	string > split(string f, string delimiter)
{
    std::vector< string > tstrings;
    string fp = f;
    int posend = fp.find(delimiter);

    while (posend >= 0)
    {
        // std::cout << s << std::endl;
        string s = fp.substr(0, posend);
        if (!s.empty())
            tstrings.push_back(s);
        fp = fp.substr(posend + delimiter.size(), fp.size());
        posend = fp.find(delimiter);
    }
    if (!fp.empty())tstrings.push_back(fp);
    return tstrings;
}

#define STDREMOVESPACE(XXXX) XXXX.erase(std::remove_if(XXXX.begin(), XXXX.end(), IsSpace), XXXX.end())

UIEditor::UIEditor(const string &conffile,QQuickView*win,QQuickItem*parent):QObject(),_win(win)
{
    cur_operand=0;
    cur_operatorsubject=0;

    lexer   = new QsciLexerPython (); ///the only lexer with working api completion....GRR no color syntaxing!!!!
    api=new QsciAPIs(lexer);
//api->load("config/qt-4.4.0.api");
//api->s
    api->add("console");
    api->add("console.log");
    api->prepare();
    lexer->setAPIs(api);




    connect(this, SIGNAL(selectedChanged(pmoc::QQModel*)),
            this, SLOT(check4newLex(pmoc::QQModel*)));

///read globals (static) instanciable configuration file
    ifstream infile;
    string configfile="editorClasses.conf";
    if(!conffile.empty())configfile=conffile;
    infile.open(configfile.c_str());
    if (!infile.is_open())std::cerr << configfile << " not found" << endl;
    else
    {




        string inc;
        list<string> pluginsStringList;
        int part=-1;
        try
        {
            while (!infile.eof())
            {
                getline(infile,inc);
                STDREMOVESPACE(inc);


                if(inc=="[pmoc-plugins]")part=0;
                else if(inc=="[pmoc-globalinstanciables]")part=1;

                else
                {
                    if(part==0)
                    {
                        pluginsStringList.push_back(inc);
                        pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickLibraryForNamespace(inc);
                    }

                    else if(part==1)
                    {
                        MetaQQuickClass * cl=PMOCGETMETACLASS(inc);
                        //      cout<<inc<<endl;
                        if(cl)
                            _global_instanciables.insert(cl);
                        else cerr<<"problem finding Global Instanciable "<<inc<<endl;
                    }
                }
            }
            if(!pluginsStringList.empty())pmoc::MetaQQuickLibraryRegistry::instance()->setupInterLibraryRelations();
        }
        catch(...)
        {
            std::cerr<<"Problem reading "<<configfile<<"||Unix user? Make sure you config file doesn't terminate with newline"<<std::endl;
            exit(-66);
        }
    }

    qmlRegisterInterface<pmoc::QQModel>("QQModel");
    std::string menu="import QtQuick 2.1\n"
                     "import QtQuick.Controls 1.0\n"
                     "import QtQuick.Layouts 1.0\n"
                     "import QtQuick.Controls.Styles 1.0\n"
                     "import osgQtQuick 1.0\n"
                     "import QtQml 2.0\n"
                     "import QtQuick.Dialogs 1.0\n"
                     //  "import   QQModel 1.0\n"
                     "Rectangle{id:menu;anchors.fill: parent\n"
                     "width:800;height:600; color: 'transparent'\n";
    for(set<MetaQQuickClass*>::iterator able=_global_instanciables.begin(); able!=_global_instanciables.end(); able++)
    {
        menu+="Menu{\n"
              "id:m_"+replace((*able)->id(),"::","_")+"\n";
        generatemenus(*able,menu);
        menu+="}\n";

    }
    menu+=   "ToolBar {\n"
             " id: maintoolbar\n"
             "height:0\ny:10\n"
             "//  anchors.top: parent.top\n"
             "     Row { \n"
             "anchors.centerIn: parent\n";
    for(set<MetaQQuickClass*>::iterator able=_global_instanciables.begin(); able!=_global_instanciables.end(); able++)
    {
        menu+= " Button {\n"
               //"visible:pmocjs."+replace((*able)->id(),"::","_")+"_selected\n"
               "menu: m_"+replace((*able)->id(),"::","_")+"\n"
               "width:l_"+replace((*able)->id(),"::","_")+".width+20\n"
               "Label{ id:l_"+replace((*able)->id(),"::","_")+"\n"
               "        anchors.verticalCenter: parent.verticalCenter;\n"
               "        anchors.horizontalCenter: parent.horizontalCenter;\n"
               "text:'"+replace((*able)->id(),"::","_")+"' } \n"
               " }\n";
    }
    menu+="}}\n";
    menu+="}\n";
    /*    for(Actions::iterator act=_operators.begin(); act!=_operators.end(); act++)
        {
            menu+="Menu{\n"
                  "id:m_"+replace((*act).name," ","_")+"\n";
            generatemenus((*act).operand,(*act),menu);
            menu+="}\n";
        }
        menu+=   "ToolBar {\n"
                 " id: maintoolbar\n"
                 "//  anchors.top: parent.top\n"
                 "     Row { \n"
                 "anchors.centerIn: parent\n";
        for(Actions::iterator act=_operators.begin(); act!=_operators.end(); act++)
        {
            menu+= " Button {\n"
                   "visible:pmocjs."+replace((*act).operatorsubject->id(),"::","_")+"_selected\n"
                   "menu: m_"+replace((*act).name," ","_")+"\n"
                   "width:l_"+replace((*act).name," ","_")+".width+20\n"
                   "Label{ id:l_"+replace((*act).name," ","_")+"\n"
                   "        anchors.verticalCenter: parent.verticalCenter;\n"
                   "        anchors.horizontalCenter: parent.horizontalCenter;\n"
                   "text:'"+(*act).name+"' } \n"
                   " }\n";
        }
        menu+="}}\n";
        menu+="}\n";*/
    _rootobject=parent?parent:win->rootObject();
    win->rootContext()->setContextProperty("pmocjs",this );
    QQmlComponent *component = new QQmlComponent( win->engine());
    component->setData(menu.c_str(), QUrl("globalToolBar"));
    _thisqitem = qobject_cast<QQuickItem *>(component->create());
    std::cerr << component->errorString().toStdString() << std::endl;
    if (_thisqitem)
    {
        _thisqitem->setParentItem(_rootobject);

    }
    else
        std::cerr<<menu;
}
/* void UIEditor::generatemenus(MetaQQuickClass* c,const Action&a,std::string &out)
 {
     out+="MenuItem{\n"
          "text: 'new "+c->id()+"'\n"
          "enabled:"+(c->isInstanciable()?"true":"false")+" \n"
          "onTriggered: pmocjs. operator_with_operand_"+replace(c->id(),"::","_")+"('"+a.name+"' ,true);\n"
          "}\n";
     std::string childstring;
     for(set<MetaQQuickClass*>::const_iterator down=c->children().begin(); down!=c->children().end(); down++)
         if(*down)
             generatemenus(*down,a,childstring);
     if(!childstring.empty())
     {
         out+=  "Menu{\n"
                "title:  'new "+c->id()+" '\n";
         out+=childstring;
         out+=  "}\n";
     }
 }*/

void UIEditor::generatemenus(MetaQQuickClass* c,std::string &out)
{
    out+="MenuItem{\n"
         "text: 'new "+c->id()+"'\n"
         "enabled:"+(c->isInstanciable()?"true":"false")+" \n"
         "onTriggered: {\n var newone=pmocjs.createInstance(\'"+c->id()+"\',\'"+c->id()+"\');\n"
         "pmocjs.  popQQModelUi(newone)\n"
         "}\n"
         "}\n";
    std::string childstring;
    for(set<MetaQQuickClass*>::const_iterator down=c->children().begin(); down!=c->children().end(); down++)
        if(*down)
            generatemenus(*down,childstring);
    if(!childstring.empty())
    {
        out+=  "Menu{\n"
               "title:  'new "+c->id()+" '\n";
        out+=childstring;
        out+=  "}\n";
    }
}
///cohersistion de l'operand
///dispatch on the good HxCinvoquable (where subject coercition is done)
void UIEditor::resolvOperator( QQModel*subject, QQModel*operand)
{
    if(!subject||!subject->getInstance().isValid())
    {
        cerr<<"subject is invalid"<<endl;
        return;
    }
    if(!operand||!operand->getInstance().isValid())
    {
        cerr<<"operand is invalid"<<endl;
        return;
    }
    //     set<string> possibleActions;
    SetPossibilities possibleActions;
    subject->generateDisambiguationPossibilities(operand->getInstance().model,possibleActions);
    string menu=   subject->getInstance().model->generateAmbiguityMenu(operand->getInstance().model,possibleActions);
    /*
    string operandstring ="operator_with_operand_"+replace(operand->_instance.model->id(),"::","_");
    for(Actions::iterator act=_operators.begin(); act!=_operators.end(); act++)
        if (subject->_instance.model->isSubClass(act->operatorsubject)
                && operand->_instance.model->isSubClass(act->operand))
            possibleActions.insert( act->name);
    if (!possibleActions.empty())
        generateAmbiguitiesMenu(operandstring,possibleActions);*/

    ///inject in the QMeta via QML
    QQmlComponent *component = new QQmlComponent( _win->engine());
    std::cout<<menu<<endl;
    component->setData(menu.c_str(), QUrl());
    QQuickItem *qitem = qobject_cast<QQuickItem *>(component->create());
    std::cerr << component->errorString().toStdString() << std::endl;
    if (qitem)
    {
        subject->link2ContextMenu(qitem);
        qitem->setParentItem(/*_thisqitem*/ subject->getQuickItem());
        qitem->update();//emit qitem->componentComplete();
        if(possibleActions.size()==1)//no ambiguity so kill the item
            delete qitem;
    }
    else std::cerr<<menu;
    delete component;
}
///cohersistion de l'operand
///dispatch on the good HxCinvoquable (where subject coercition is done)
void UIEditor::resolvReverseOperator( QQModel*subject, QQModel*operand)
{
    if(!subject||!subject->getInstance().isValid())
    {
        cerr<<"subject is invalid"<<endl;
        return;
    }
    if(!operand||!operand->getInstance().isValid())
    {
        cerr<<"operand is invalid"<<endl;
        return;
    }
    //set<string> possibleActions;
    //string menu= subject->generateDisambiguationMenu(operand->_instance.model,true);
    SetPossibilities possibleActions;
    subject->generateDisambiguationPossibilities(operand->getInstance().model,possibleActions,true);
    string menu=   subject->getInstance().model->generateAmbiguityMenu(operand->getInstance().model,possibleActions);
    /*
    string operandstring ="operator_with_operand_"+replace(operand->_instance.model->id(),"::","_");
    for(Actions::iterator act=_operators.begin(); act!=_operators.end(); act++)
        if (subject->_instance.model->isSubClass(act->operatorsubject)
                && operand->_instance.model->isSubClass(act->operand))
            possibleActions.insert( act->name);
    if (!possibleActions.empty())
        generateAmbiguitiesMenu(operandstring,possibleActions);*/

    ///inject in the QMeta via QML
    QQmlComponent *component = new QQmlComponent( _win->engine());
    std::cout<<menu<<endl;
    component->setData(menu.c_str(), QUrl());
    QQuickItem *qitem = qobject_cast<QQuickItem *>(component->create());
    std::cerr << component->errorString().toStdString() << std::endl;
    if (qitem)
    {
        subject->link2ContextMenu(qitem);
        qitem->setParentItem(/*_thisqitem*/ subject->getQuickItem());
        qitem->update();//emit qitem->componentComplete();
        if(possibleActions.size()==1)//no ambiguity so kill the item
            delete qitem;
    }
    else std::cerr<<menu;
    delete component;

}
/*
void UIEditor::generateAmbiguitiesMenu(string operandstring,set<string> &possibleactions)
{
    string menu="import QtQuick.Controls 1.0\n"
                "import QtQuick.Layouts 1.0\n"
                "import QtQuick.Controls.Styles 1.0\n"
                "import osgQtQuick 1.0\n"
                "import QtQml 2.0\n"
                "import QtQuick.Dialogs 1.0\n"
                "import QtQuick 2.0\n"
                "import QtQuick.Window 2.0\n"
                "import QtQuick.Layouts 1.0\n"
                "import QtQuick.Controls 1.0\n"
                "Rectangle{id:menuambiguity;\n";
    if(possibleactions.size()==1)
    {
        menu+="Component.onCompleted: {\n"
              " pmocjs."+operandstring+"('"+(*possibleactions.begin())+"',false);\n";
        if(_isCutAction)menu+="pmocjs.realRemoval();\n";
        else menu+="pmocjs.restoreState();\n";
        menu+="}\n";
/// HAck QML to InvoKe the action
    }
    else
    {
        menu+="Menu{id:menuamb\n"
              "title:'Resolve operator ambiguity'\n";
        for(set<string>::iterator actstring=possibleactions.begin(); actstring!=possibleactions.end(); actstring++)
        {
            menu+="MenuItem{\n"
                  "text: \""+(*actstring)+"\"\n"
                  "onTriggered: {\n"
                  "pmocjs."+operandstring+"('"+(*actstring)+"');\n";
            if(_isCutAction)menu+="pmocjs.realRemoval();\n";
            else menu+="pmocjs.restoreState();\n";
            menu+=
                "}\n"
                "}\n";
        }
        menu+="}\n";
        menu+="  Component.onCompleted:{menuamb.visible=true;menuamb.enabled=true;menuamb.popup();}\n";
    }
    menu+="}\n";
    _isCutAction=false;//restore bool in order not to loop
///inject in the QMeta via QML
    QQmlComponent *component = new QQmlComponent( _win->engine());
    std::cout<<menu<<endl;
    component->setData(menu.c_str(), QUrl());
    QQuickItem *qitem = qobject_cast<QQuickItem *>(component->create());
    std::cerr << component->errorString().toStdString() << std::endl;
    if (qitem)
        qitem->setParentItem(_thisqitem);
    else std::cerr<<menu;
}
*/
///check if parameter is a metatype name and add methods to the api if it does
void UIEditor::checkMetaType(QString lex)
{
    int QtType=QMetaType::type(lex.toStdString().c_str());

    if(QtType!=0 )
    {
        cout<<lex.toStdString()<<" is a known type "<<QMetaType::type(lex.toStdString().c_str())<<endl;
        const QMetaObject * metaobject=QMetaType::metaObjectForType(QMetaType::type(lex.toStdString().c_str()));
        //  std::cout<<metaobject->className()<<std::endl;
        int count = metaobject->propertyCount();

        QString classtype=metaobject->className();
        ///convert C++ namin to QML (the last of C++ naming as import statement is assumed)
        classtype=classtype.split("::").last();

        api->add(lex);
        //api->add( QString(name)+"");

        for(int i=0; i<metaobject->enumeratorCount(); i++)
        {
            QMetaEnum metaenum=metaobject->enumerator(i);
            api->add(classtype+"."+QString(metaenum.name())+"");
            for(int j=0; j<metaenum.keyCount(); j++)
            {
//metaenum.key(j);
                api->add(classtype+"."+QString(metaenum.key(j))+"");
            }
        }
        for (int i=0; i<count; ++i)
        {
            QMetaProperty metaproperty = metaobject->property(i);
            //    std::cout<<name<<"."<<metaproperty.name()<<std::endl;
            api->add(lex+"."+QString(metaproperty.name())+"");
//  api->add(QString(name)+"."+QString(metaproperty.name())+"");

        }



        for(int i=0; i<metaobject->methodCount(); i++)
        {

            //      std::cout<<name<<"."<<metaobject->method(i).name().constData()<<endl;
            QString pcall;
            //QList<QByteArray> l= metaobject->method(i).parameterTypes();
            for(int j=0; j<metaobject->method(i).parameterCount(); j++)
            {
                pcall+=QMetaType::typeName(metaobject->method(i).parameterType(j));
                pcall+=" "+metaobject->method(i).parameterNames()[j];
                if(j<metaobject->method(i).parameterCount()-1)pcall+=",";
            }

            // cerr<<pcall.toStdString()<<endl;
            api->add(lex+"."+QString(metaobject->method(i).name())+"("+pcall+")");
            //api->add(""+QString(name)+"."+QString(metaobject->method(i).name())+"("+pcall+")");
        }


        api->prepare();
    }


}

void UIEditor::check4newLex(QQModel*qmod)
{




    if(qmod)
    {
        //   api->clear();
        //  api->add("fok(??)");
        QQuickItem *mousearea=qmod->getQuickItem()->findChild<QQuickItem*>("pmocmousearea");
        if(mousearea)
        {
            QQuickItem *menu=mousearea->childItems().last();
            const QMetaObject * metaobj =menu->metaObject();

            for (int i=0; i<metaobj->propertyCount(); ++i)
            {
                QMetaProperty metaproperty = metaobj->property(i);
                const char *name = metaproperty.name();

                if(!strcmp(metaproperty.typeName(),"QVariant"))
                {

                    //std::cout<<name<<std::endl;

                    QObject * qmodel=menu->property(name).value<QObject *>();
                    if(qmodel)
                    {
                        const QMetaObject * metaobject=(qmodel)->metaObject();//QMetaType::metaObjectForType(id);
                        //  std::cout<<metaobject->className()<<std::endl;
                        int count = metaobject->propertyCount();

                        QString classtype=metaobject->className();
                        ///convert C++ namin to QML (the last of C++ naming as import statement is assumed)
                        classtype=classtype.split("::").last();

                        api->add("self."+QString(name)+"");
                        api->add( QString(name)+"");

                        for(int i=0; i<metaobject->enumeratorCount(); i++)
                        {
                            QMetaEnum metaenum=metaobject->enumerator(i);
                            api->add(classtype+"."+QString(metaenum.name())+"");
                            for(int j=0; j<metaenum.keyCount(); j++)
                            {
//metaenum.key(j);
                                api->add(classtype+"."+QString(metaenum.key(j))+"");
                            }
                        }
                        for (int i=0; i<count; ++i)
                        {
                            QMetaProperty metaproperty = metaobject->property(i);
                            //    std::cout<<name<<"."<<metaproperty.name()<<std::endl;
                            api->add("self."+QString(name)+"."+QString(metaproperty.name())+"");
                            api->add(QString(name)+"."+QString(metaproperty.name())+"");

                        }



                        for(int i=0; i<metaobject->methodCount(); i++)
                        {

                            //      std::cout<<name<<"."<<metaobject->method(i).name().constData()<<endl;
                            QString pcall;
                            //QList<QByteArray> l= metaobject->method(i).parameterTypes();
                            for(int j=0; j<metaobject->method(i).parameterCount(); j++)
                            {
                                pcall+=QMetaType::typeName(metaobject->method(i).parameterType(j));
                                pcall+=" "+metaobject->method(i).parameterNames()[j];
                                if(j<metaobject->method(i).parameterCount()-1)pcall+=",";
                            }

                            // cerr<<pcall.toStdString()<<endl;
                            api->add("self."+QString(name)+"."+QString(metaobject->method(i).name())+"("+pcall+")");
                            api->add(""+QString(name)+"."+QString(metaobject->method(i).name())+"("+pcall+")");
                        }

                    }
                }

            }
            api->prepare();
        }
        else
        {
            std::cerr<<"can't find mousearea named pmocmousearea in quickitem : injection impossible"<<endl;
        }
    }
}
void UIEditor::injectJavaScriptInSelected(const QString &text)
{
    if(getOperand() &&getOperand()->getQuickItem())
    {
        QString s=text;

        QQuickItem *mousearea=getOperand()->getQuickItem()->findChild<QQuickItem*>("pmocmousearea");
        if(mousearea)
        {
            QQmlComponent *component = new QQmlComponent( _win->engine());

            s=text.split("</imports>").at(1);
            QString imports=text.split("</imports>").first();
            imports=imports.replace("<imports>","");
            std::cout<<s.toStdString()<<endl;
            QString preItem="import QtQuick 2.1;"
                            "import QtQuick.Window 2.0;"
                            "import QtQuick.Layouts 1.0;"
                            "import QtQuick.Controls 1.0;"
                            +imports+
                            "\nItem{id:injector;"
                            "onParentChanged: { if(parent){"
                            "var self=parent.children[parent.children.length-2];parent=null;";
            QString postItem="\n //self destroy\n"
                             "}}}\n";
            s.replace("<script>",preItem);
            s.replace("</script>",postItem);
            component->setData(s.toStdString().c_str(), QUrl());
            QQuickItem *qitem = qobject_cast<QQuickItem *>(component->create());
            std::cerr << component->errorString().toStdString() << std::endl;
            if (qitem)
                qitem->setParentItem(mousearea);
            //no real meaning   else std::cerr<<s.toStdString();
            delete component;

        }
    }
    else
    {

        cerr<<"no qmodel selected"<<endl;
    }
}


pmoc::QQModel* UIEditor::createInstance(QString instancetype)
{
    MetaQQuickClass* cl= PMOCGETMETACLASS(string(instancetype.toStdString()));
    Instance inst=cl->createInstance();

    return (cl->createQQModel(&inst));//ret;
}

QQuickItem* UIEditor::connectQQModel2Ui( pmoc::QQModel* qmod,QQuickItem* view)
{
    return qmod->connect2View(view);
}

QQuickItem* UIEditor::genUI4QQModel( pmoc::QQModel* qmod,QQuickItem* parent,QString relationname)
{

//QQUICKCOMPONENT(qmod->_instance,parent );
    if(!qmod)
    {
        std::cerr<<" You're trying to display Ui for a null QQModel!!!"<<endl;
        return 0;
    }
    if(!qmod->getInstance().isValid())
    {
        std::cerr<<" You're trying to display Ui for an invalid Instance!!!"<<endl;
        return 0;
    }
    return qmod->getInstance().model->getGuiComponent(_win,qmod,parent,relationname.toStdString());
}
// return qmod->_instance.model->getGuiComponent(_win,qmod,parent);
QQuickItem* UIEditor::popQQModelUi( pmoc::QQModel* qmod,QQuickItem* parent,QString relationname)
{
    //QQUICKCOMPONENT(qmod->_instance,parent );
    QQuickItem* ret=0;
    if(!qmod)
    {
        std::cerr<<" You're trying to display Ui for a null QQModel!!!"<<endl;
        return 0;
    }
    if(!qmod->getInstance().isValid())
    {
        std::cerr<<" You're trying to display Ui for an invalid Instance!!!"<<endl;
        return 0;
    }
    ret=   qmod->getInstance().model->getGuiComponent(_win,qmod->getInstance(),parent,relationname.toStdString());
    return ret;
// return qmod->_instance.model->getGuiComponent(_win,qmod,parent);
}

///Helper function in order to avoid some work
const QStringList UIEditor::getEnumAsStringList(QObject*qmod,const QString& enumname) const
{
    QStringList ret;
    if(qmod){
    const QMetaObject * meta=qmod->metaObject();
    for(int i=0; i<meta->enumeratorCount() ; i++)
    {


        if(enumname==QString(meta->enumerator(i).name()))
        {
            for(int j=0; j<meta->enumerator(i).keyCount() ; j++)
            {

      //       ret.insert(meta->enumerator(i).value(j),);
               ret.append(QString(meta->enumerator(i).valueToKey(j)));

            }
            return ret;
        }
    }
    }
    return ret;///NOTFOUND
}

int  UIEditor::getEnumFromIndexInStringList(QObject*qmod,const QString& enumname, const int &j) const{
 QStringList ret;
 if(qmod){
    const QMetaObject * meta= qmod->metaObject();
    for(int i=0; i<meta->enumeratorCount() ; i++)
    {


        if(enumname==QString(meta->enumerator(i).name()))
        {
        return meta->enumerator(i).value(j);
        }
    }
    }
    return -1;///ENUMname NOT found

}

int  UIEditor::getIndexInStringListFromEnum(QObject*qmod,const QString& enumname, const int &index) const{
 QStringList ret;
    if(qmod){
    const QMetaObject * meta= qmod->metaObject();
    for(int i=0; i<meta->enumeratorCount() ; i++)
    {


        if(enumname==QString(meta->enumerator(i).name()))
        {
        for(int j=0; j<meta->enumerator(i).keyCount() ; j++)
            {
            if(meta->enumerator(i).value(j)==index )return j;
            }
            }
            }
}
    return -1;///ENUMname NOT found
}
