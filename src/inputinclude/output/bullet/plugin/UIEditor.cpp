#include "UIEditor.hpp" 

#include <MetaQQuickLibraryRegistry.h>

//#include <pmoc.blackboard.hpp>
#include <list> 
#include <map>
#include <typeinfo>
#include <memory>
#include <iostream>
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
 UIEditor::UIEditor(QQuickView*win,QQuickItem*parent):QObject(),_win(win){
 std::string menu="import QtQuick 2.1\n"
            "import QtQuick.Controls 1.0\n"
           "import QtQuick.Layouts 1.0\n"
          "import QtQuick.Controls.Styles 1.0\n"
           "import osgQtQuick 1.0\n"
           "import QtQml 2.0\n"
           "import QtQuick.Dialogs 1.0\n"
           "Rectangle{id:menu;anchors.fill: parent\n"
           "width:800;height:600; color: 'transparent'\n";
for(Actions::iterator act=_operators.begin();act!=_operators.end();act++){
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
    for(Actions::iterator act=_operators.begin();act!=_operators.end();act++){
    menu+= " Button {\n"
            "visible:globalEditor."+replace((*act).operatorsubject->id(),"::","_")+"_selected\n" 
            "menu: m_"+replace((*act).name," ","_")+"\n"
            "width:l_"+replace((*act).name," ","_")+".width+20\n"
            "Label{ id:l_"+replace((*act).name," ","_")+"\n"
               "        anchors.verticalCenter: parent.verticalCenter;\n"
               "        anchors.horizontalCenter: parent.horizontalCenter;\n"
            "text:'"+(*act).name+"' } \n"
            " }\n";
  }
    menu+="}}\n";
     menu+="}\n";
_rootobject=parent?parent:win->rootObject();
    win->rootContext()->setContextProperty("globalEditor",this );
    QQmlComponent *component = new QQmlComponent( win->engine());
 component->setData(menu.c_str(), QUrl());
_thisqitem = qobject_cast<QQuickItem *>(component->create());
std::cerr << component->errorString().toStdString() << std::endl;
if (_thisqitem)
{
_thisqitem->setParentItem(_rootobject);

}
else std::cerr<<menu;

}
void UIEditor::generatemenus(MetaClass* c,const Action&a,std::string &out){
   out+="MenuItem{\n"
                        "text: 'new "+c->id()+"'\n"
                       "enabled:"+(c->isInstanciable()?"true":"false")+" \n"
                           "onTriggered: globalEditor. operator_with_operand_"+replace(c->id(),"::","_")+"('"+a.name+"' ,true);\n"
                       "}\n";
std::string childstring;
for(set<MetaClass*>::const_iterator down=c->children.begin();down!=c->children.end();down++)
   if(*down) 
	generatemenus(*down,a,childstring);
if(!childstring.empty()){
 out+=  "Menu{\n"
                              "title:  'new "+c->id()+" '\n";
            out+=childstring;
            out+=  "}\n";
}
}
///cohersistion de l'operand
///dispatch on the good HxCinvoquable (where subject coercition is done)
void UIEditor::resolvOperator( QQModel*subject, QQModel*operand){
	if(!subject||!subject->_instance.isValid()){cerr<<"subject is invalid"<<endl;return;}
	if(!operand||!operand->_instance.isValid()){cerr<<"operand is invalid"<<endl;return;}
	set<string> possibleActions;
	string operandstring ="operator_with_operand_"+replace(operand->_instance.model->id(),"::","_");
	for(Actions::iterator act=_operators.begin();act!=_operators.end();act++)
	if (subject->_instance.model->isSubClass(act->operatorsubject)
	&& operand->_instance.model->isSubClass(act->operand))
	possibleActions.insert( act->name);
if (!possibleActions.empty())
   generateAmbiguitiesMenu(operandstring,possibleActions);
}
///cohersistion de l'operand
///dispatch on the good HxCinvoquable (where subject coercition is done)
void UIEditor::resolvReverseOperator( QQModel*subject, QQModel*operand){
	if(!subject||!subject->_instance.isValid()){cerr<<"subject is invalid"<<endl;return;}
	if(!operand||!operand->_instance.isValid()){cerr<<"operand is invalid"<<endl;return;}
	set<string> possibleActions;
_isCutAction=false;//avoid loop
	string operandstring ="operator_remove_"+replace(operand->_instance.model->id(),"::","_");
	for(Actions::iterator act=_operators.begin();act!=_operators.end();act++)
	if (subject->_instance.model->isSubClass(act->operatorsubject)
	&& operand->_instance.model->isSubClass(act->operand))
	possibleActions.insert( "reverse "+act->name);
if (!possibleActions.empty())
   generateAmbiguitiesMenu(operandstring,possibleActions);
}
void UIEditor::generateAmbiguitiesMenu(string operandstring,set<string> &possibleactions){
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
if(possibleactions.size()==1){
menu+="Component.onCompleted: {\n" 
" globalEditor."+operandstring+"('"+(*possibleactions.begin())+"',false);\n";
if(_isCutAction)menu+="globalEditor.realRemoval();\n";
else menu+="globalEditor.restoreState();\n";
menu+="}\n";
/// HAck QML to InvoKe the action
}
else{
menu+="Menu{id:menuamb\n"
"title:'Resolve operator ambiguity'\n";
for(set<string>::iterator actstring=possibleactions.begin();actstring!=possibleactions.end();actstring++){
menu+="MenuItem{\n"
"text: \""+(*actstring)+"\"\n"
"onTriggered: {\n"
"globalEditor."+operandstring+"('"+(*actstring)+"');\n";
if(_isCutAction)menu+="globalEditor.realRemoval();\n";
else menu+="globalEditor.restoreState();\n";
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
