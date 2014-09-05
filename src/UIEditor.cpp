#include "UIEditor.hpp" 

#include <MetaQQuickLibraryRegistry.h>
#include <MetaLibraryRegistry.h>
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
using namespace pmoc;
 UIEditor::UIEditor(QQuickView*win,QQuickItem*parent):QObject(),_win(win){
{ 
pmoc::MetaClass* op1=PMOCGETMETACLASS("osg::Geometry");
if(op1){//subjectfound
          pmoc::MetaClass* op2=PMOCGETMETACLASS("osg::StateSet");
if(op2)     _operators.push_back(Action("Add StateSet",op1,op2));
else cerr<<"Action ignored: osg::StateSet not found as operand of Action Add StateSet"<<endl;
}else cerr<<"Action ignored: osg::Geometry not found as operand subject of Action Add StateSet"<<endl;
}
{ 
pmoc::MetaClass* op1=PMOCGETMETACLASS("osg::Group");
if(op1){//subjectfound
          pmoc::MetaClass* op2=PMOCGETMETACLASS("osg::Node");
if(op2)     _operators.push_back(Action("Add a Child",op1,op2));
else cerr<<"Action ignored: osg::Node not found as operand of Action Add a Child"<<endl;
}else cerr<<"Action ignored: osg::Group not found as operand subject of Action Add a Child"<<endl;
}
{ 
pmoc::MetaClass* op1=PMOCGETMETACLASS("osg::Geode");
if(op1){//subjectfound
          pmoc::MetaClass* op2=PMOCGETMETACLASS("osg::Geometry");
if(op2)     _operators.push_back(Action("Add a Geometry",op1,op2));
else cerr<<"Action ignored: osg::Geometry not found as operand of Action Add a Geometry"<<endl;
}else cerr<<"Action ignored: osg::Geode not found as operand subject of Action Add a Geometry"<<endl;
}
{ 
pmoc::MetaClass* op1=PMOCGETMETACLASS("osg::StateSet");
if(op1){//subjectfound
          pmoc::MetaClass* op2=PMOCGETMETACLASS("osg::StateAttribute");
if(op2)     _operators.push_back(Action("Add a StateAttrib",op1,op2));
else cerr<<"Action ignored: osg::StateAttribute not found as operand of Action Add a StateAttrib"<<endl;
}else cerr<<"Action ignored: osg::StateSet not found as operand subject of Action Add a StateAttrib"<<endl;
}
{ 
pmoc::MetaClass* op1=PMOCGETMETACLASS("osg::Node");
if(op1){//subjectfound
          pmoc::MetaClass* op2=PMOCGETMETACLASS("osg::NodeVisitor");
if(op2)     _operators.push_back(Action("Create NodeVisitor",op1,op2));
else cerr<<"Action ignored: osg::NodeVisitor not found as operand of Action Create NodeVisitor"<<endl;
}else cerr<<"Action ignored: osg::Node not found as operand subject of Action Create NodeVisitor"<<endl;
}
{ 
pmoc::MetaClass* op1=PMOCGETMETACLASS("osg::Group");
if(op1){//subjectfound
          pmoc::MetaClass* op2=PMOCGETMETACLASS("osg::Node");
if(op2)     _operators.push_back(Action("otherAdd a Child",op1,op2));
else cerr<<"Action ignored: osg::Node not found as operand of Action otherAdd a Child"<<endl;
}else cerr<<"Action ignored: osg::Group not found as operand subject of Action otherAdd a Child"<<endl;
}
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
            "enabled:globalEditor."+replace((*act).operatorsubject->id(),"::","_")+"_selected\n" 
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
setosg_Node_cur_selected(0);
setosg_StateSet_cur_selected(0);
setosg_Geode_cur_selected(0);
setosg_Group_cur_selected(0);
setosg_Geometry_cur_selected(0);

}
void UIEditor::generatemenus(MetaClass* c,const Action&a,std::string &out){
   out+="MenuItem{\n"
                        "text: 'new "+c->id()+"'\n"
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
void UIEditor::resolvOperator(Instance*subject,Instance*operand){
	if(!subject->isValid()){cerr<<"subject is invalid"<<endl;return;}
	if(!operand->isValid()){cerr<<"operand is invalid"<<endl;return;}
	set<string> possibleActions;
	string operandstring ="operator_with_operand_"+replace(operand->model->id(),"::","_");
	for(Actions::iterator act=_operators.begin();act!=_operators.end();act++)
	if (subject->model->isSubClass(act->operatorsubject)
	&& operand->model->isSubClass(act->operand))
	possibleActions.insert( act->name);
if (!possibleActions.empty())
   generateAmbiguitiesMenu(operandstring,possibleActions);
}
///cohersistion de l'operand
///dispatch on the good HxCinvoquable (where subject coercition is done)
void UIEditor::resolvReverseOperator(Instance*subject,Instance*operand){
	if(!subject->isValid()){cerr<<"subject is invalid"<<endl;return;}
	if(!operand->isValid()){cerr<<"operand is invalid"<<endl;return;}
	set<string> possibleActions;
	string operandstring ="operator_remove_"+replace(operand->model->id(),"::","_");
	for(Actions::iterator act=_operators.begin();act!=_operators.end();act++)
	if (subject->model->isSubClass(act->operatorsubject)
	&& operand->model->isSubClass(act->operand))
	possibleActions.insert( act->name);
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
void UIEditor::operator_remove_osg_Node(QString operatorName){
osg::Node * newobj=reinterpret_cast<osg::Node*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Node(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Node");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Node metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Node creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Node")
 inst=cur_operand;
 }
osg::Node * newobj=reinterpret_cast<osg::Node*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
if(!cl){  std::cerr<<"osg::Node QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Node  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Transform(QString operatorName){
osg::Transform * newobj=reinterpret_cast<osg::Transform*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Transform(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Transform");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Transform metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Transform creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Transform")
 inst=cur_operand;
 }
osg::Transform * newobj=reinterpret_cast<osg::Transform*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Transform");
if(!cl){  std::cerr<<"osg::Transform QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Transform  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TexGenNode(QString operatorName){
osg::TexGenNode * newobj=reinterpret_cast<osg::TexGenNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_TexGenNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexGenNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TexGenNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TexGenNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TexGenNode")
 inst=cur_operand;
 }
osg::TexGenNode * newobj=reinterpret_cast<osg::TexGenNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TexGenNode");
if(!cl){  std::cerr<<"osg::TexGenNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TexGenNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Switch(QString operatorName){
osg::Switch * newobj=reinterpret_cast<osg::Switch*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Switch(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Switch");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Switch metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Switch creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Switch")
 inst=cur_operand;
 }
osg::Switch * newobj=reinterpret_cast<osg::Switch*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Switch");
if(!cl){  std::cerr<<"osg::Switch QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Switch  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Sequence(QString operatorName){
osg::Sequence * newobj=reinterpret_cast<osg::Sequence*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Sequence(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Sequence");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Sequence metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Sequence creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Sequence")
 inst=cur_operand;
 }
osg::Sequence * newobj=reinterpret_cast<osg::Sequence*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Sequence");
if(!cl){  std::cerr<<"osg::Sequence QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Sequence  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ProxyNode(QString operatorName){
osg::ProxyNode * newobj=reinterpret_cast<osg::ProxyNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_ProxyNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ProxyNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ProxyNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ProxyNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ProxyNode")
 inst=cur_operand;
 }
osg::ProxyNode * newobj=reinterpret_cast<osg::ProxyNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ProxyNode");
if(!cl){  std::cerr<<"osg::ProxyNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ProxyNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Projection(QString operatorName){
osg::Projection * newobj=reinterpret_cast<osg::Projection*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Projection(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Projection");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Projection metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Projection creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Projection")
 inst=cur_operand;
 }
osg::Projection * newobj=reinterpret_cast<osg::Projection*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Projection");
if(!cl){  std::cerr<<"osg::Projection QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Projection  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PagedLOD(QString operatorName){
osg::PagedLOD * newobj=reinterpret_cast<osg::PagedLOD*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_PagedLOD(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PagedLOD");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PagedLOD metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PagedLOD creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PagedLOD")
 inst=cur_operand;
 }
osg::PagedLOD * newobj=reinterpret_cast<osg::PagedLOD*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PagedLOD");
if(!cl){  std::cerr<<"osg::PagedLOD QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PagedLOD  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PositionAttitudeTransform(QString operatorName){
osg::PositionAttitudeTransform * newobj=reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_PositionAttitudeTransform(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PositionAttitudeTransform");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PositionAttitudeTransform metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PositionAttitudeTransform creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PositionAttitudeTransform")
 inst=cur_operand;
 }
osg::PositionAttitudeTransform * newobj=reinterpret_cast<osg::PositionAttitudeTransform*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PositionAttitudeTransform");
if(!cl){  std::cerr<<"osg::PositionAttitudeTransform QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PositionAttitudeTransform  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_OcclusionQueryNode(QString operatorName){
osg::OcclusionQueryNode * newobj=reinterpret_cast<osg::OcclusionQueryNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_OcclusionQueryNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::OcclusionQueryNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::OcclusionQueryNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::OcclusionQueryNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::OcclusionQueryNode")
 inst=cur_operand;
 }
osg::OcclusionQueryNode * newobj=reinterpret_cast<osg::OcclusionQueryNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::OcclusionQueryNode");
if(!cl){  std::cerr<<"osg::OcclusionQueryNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::OcclusionQueryNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_OccluderNode(QString operatorName){
osg::OccluderNode * newobj=reinterpret_cast<osg::OccluderNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_OccluderNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::OccluderNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::OccluderNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::OccluderNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::OccluderNode")
 inst=cur_operand;
 }
osg::OccluderNode * newobj=reinterpret_cast<osg::OccluderNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::OccluderNode");
if(!cl){  std::cerr<<"osg::OccluderNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::OccluderNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_MatrixTransform(QString operatorName){
osg::MatrixTransform * newobj=reinterpret_cast<osg::MatrixTransform*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_MatrixTransform(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::MatrixTransform");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::MatrixTransform metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::MatrixTransform creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::MatrixTransform")
 inst=cur_operand;
 }
osg::MatrixTransform * newobj=reinterpret_cast<osg::MatrixTransform*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::MatrixTransform");
if(!cl){  std::cerr<<"osg::MatrixTransform QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::MatrixTransform  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_LightSource(QString operatorName){
osg::LightSource * newobj=reinterpret_cast<osg::LightSource*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_LightSource(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::LightSource");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::LightSource metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::LightSource creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::LightSource")
 inst=cur_operand;
 }
osg::LightSource * newobj=reinterpret_cast<osg::LightSource*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::LightSource");
if(!cl){  std::cerr<<"osg::LightSource QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::LightSource  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_LOD(QString operatorName){
osg::LOD * newobj=reinterpret_cast<osg::LOD*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_LOD(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::LOD");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::LOD metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::LOD creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::LOD")
 inst=cur_operand;
 }
osg::LOD * newobj=reinterpret_cast<osg::LOD*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::LOD");
if(!cl){  std::cerr<<"osg::LOD QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::LOD  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Geode(QString operatorName){
osg::Geode * newobj=reinterpret_cast<osg::Geode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Geode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Geode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Geode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Geode")
 inst=cur_operand;
 }
osg::Geode * newobj=reinterpret_cast<osg::Geode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geode");
if(!cl){  std::cerr<<"osg::Geode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Geode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Group(QString operatorName){
osg::Group * newobj=reinterpret_cast<osg::Group*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Group(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Group");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Group metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Group creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Group")
 inst=cur_operand;
 }
osg::Group * newobj=reinterpret_cast<osg::Group*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Group");
if(!cl){  std::cerr<<"osg::Group QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Group  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_CoordinateSystemNode(QString operatorName){
osg::CoordinateSystemNode * newobj=reinterpret_cast<osg::CoordinateSystemNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_CoordinateSystemNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::CoordinateSystemNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::CoordinateSystemNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::CoordinateSystemNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::CoordinateSystemNode")
 inst=cur_operand;
 }
osg::CoordinateSystemNode * newobj=reinterpret_cast<osg::CoordinateSystemNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::CoordinateSystemNode");
if(!cl){  std::cerr<<"osg::CoordinateSystemNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::CoordinateSystemNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ClipNode(QString operatorName){
osg::ClipNode * newobj=reinterpret_cast<osg::ClipNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_ClipNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClipNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ClipNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ClipNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ClipNode")
 inst=cur_operand;
 }
osg::ClipNode * newobj=reinterpret_cast<osg::ClipNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ClipNode");
if(!cl){  std::cerr<<"osg::ClipNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ClipNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ClearNode(QString operatorName){
osg::ClearNode * newobj=reinterpret_cast<osg::ClearNode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_ClearNode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClearNode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ClearNode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ClearNode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ClearNode")
 inst=cur_operand;
 }
osg::ClearNode * newobj=reinterpret_cast<osg::ClearNode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ClearNode");
if(!cl){  std::cerr<<"osg::ClearNode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ClearNode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_AutoTransform(QString operatorName){
osg::AutoTransform * newobj=reinterpret_cast<osg::AutoTransform*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_AutoTransform(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::AutoTransform");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::AutoTransform metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::AutoTransform creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::AutoTransform")
 inst=cur_operand;
 }
osg::AutoTransform * newobj=reinterpret_cast<osg::AutoTransform*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::AutoTransform");
if(!cl){  std::cerr<<"osg::AutoTransform QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::AutoTransform  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Camera(QString operatorName){
osg::Camera * newobj=reinterpret_cast<osg::Camera*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Camera(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Camera");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Camera metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Camera creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Camera")
 inst=cur_operand;
 }
osg::Camera * newobj=reinterpret_cast<osg::Camera*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Camera");
if(!cl){  std::cerr<<"osg::Camera QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Camera  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_CameraView(QString operatorName){
osg::CameraView * newobj=reinterpret_cast<osg::CameraView*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_CameraView(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::CameraView");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::CameraView metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::CameraView creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::CameraView")
 inst=cur_operand;
 }
osg::CameraView * newobj=reinterpret_cast<osg::CameraView*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
osg_Group_cur_selected=newobj;
setosg_Group_selected(true);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::CameraView");
if(!cl){  std::cerr<<"osg::CameraView QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::CameraView  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Billboard(QString operatorName){
osg::Billboard * newobj=reinterpret_cast<osg::Billboard*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
removeChild(newobj);
}
}
}
emit osg_Node_removed();
}
void UIEditor::operator_with_operand_osg_Billboard(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Billboard");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Billboard metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Billboard creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Billboard")
 inst=cur_operand;
 }
osg::Billboard * newobj=reinterpret_cast<osg::Billboard*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Group"))){
 if (operatorName==QString("otherAdd a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
 if (operatorName==QString("Add a Child")){
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
addChild(newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
osg_Geode_cur_selected=newobj;
setosg_Geode_selected(true);
setosg_StateSet_selected(false);
osg_Node_cur_selected=newobj;
setosg_Node_selected(true);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Billboard");
if(!cl){  std::cerr<<"osg::Billboard QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Billboard  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Node");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Node*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Node_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_StateSet(QString operatorName){
osg::StateSet * newobj=reinterpret_cast<osg::StateSet*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geometry"))){
 if (operatorName==QString("Add StateSet")){
     if(cur_operatorsubject.model->id()=="deprecated_osg::Geometry"){
}
     if(cur_operatorsubject.model->id()=="osgUtil::DelaunayConstraint"){
}
     if(cur_operatorsubject.model->id()=="osg::QueryGeometry"){
}
     if(cur_operatorsubject.model->id()=="osg::Geometry"){
}
}
}
emit osg_StateSet_removed();
}
void UIEditor::operator_with_operand_osg_StateSet(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateSet");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::StateSet metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::StateSet creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::StateSet")
 inst=cur_operand;
 }
osg::StateSet * newobj=reinterpret_cast<osg::StateSet*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geometry"))){
 if (operatorName==QString("Add StateSet")){
     if(cur_operatorsubject.model->id()=="deprecated_osg::Geometry"){
reinterpret_cast<deprecated_osg::Geometry*>(cur_operatorsubject.ptr)->
setStateSet(newobj);
}
     if(cur_operatorsubject.model->id()=="osgUtil::DelaunayConstraint"){
reinterpret_cast<osgUtil::DelaunayConstraint*>(cur_operatorsubject.ptr)->
setStateSet(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::QueryGeometry"){
reinterpret_cast<osg::QueryGeometry*>(cur_operatorsubject.ptr)->
setStateSet(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geometry"){
reinterpret_cast<osg::Geometry*>(cur_operatorsubject.ptr)->
setStateSet(newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateSet");
if(!cl){  std::cerr<<"osg::StateSet QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::StateSet  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateSet");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateSet*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateSet_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TextureRectangle(QString operatorName){
osg::TextureRectangle * newobj=reinterpret_cast<osg::TextureRectangle*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TextureRectangle(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureRectangle");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TextureRectangle metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TextureRectangle creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TextureRectangle")
 inst=cur_operand;
 }
osg::TextureRectangle * newobj=reinterpret_cast<osg::TextureRectangle*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TextureRectangle");
if(!cl){  std::cerr<<"osg::TextureRectangle QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TextureRectangle  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Viewport(QString operatorName){
osg::Viewport * newobj=reinterpret_cast<osg::Viewport*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Viewport(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Viewport");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Viewport metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Viewport creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Viewport")
 inst=cur_operand;
 }
osg::Viewport * newobj=reinterpret_cast<osg::Viewport*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Viewport");
if(!cl){  std::cerr<<"osg::Viewport QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Viewport  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_VertexProgram(QString operatorName){
osg::VertexProgram * newobj=reinterpret_cast<osg::VertexProgram*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_VertexProgram(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::VertexProgram");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::VertexProgram metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::VertexProgram creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::VertexProgram")
 inst=cur_operand;
 }
osg::VertexProgram * newobj=reinterpret_cast<osg::VertexProgram*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::VertexProgram");
if(!cl){  std::cerr<<"osg::VertexProgram QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::VertexProgram  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_UniformBufferBinding(QString operatorName){
osg::UniformBufferBinding * newobj=reinterpret_cast<osg::UniformBufferBinding*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_UniformBufferBinding(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::UniformBufferBinding");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::UniformBufferBinding metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::UniformBufferBinding creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::UniformBufferBinding")
 inst=cur_operand;
 }
osg::UniformBufferBinding * newobj=reinterpret_cast<osg::UniformBufferBinding*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::UniformBufferBinding");
if(!cl){  std::cerr<<"osg::UniformBufferBinding QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::UniformBufferBinding  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TransformFeedbackBufferBinding(QString operatorName){
osg::TransformFeedbackBufferBinding * newobj=reinterpret_cast<osg::TransformFeedbackBufferBinding*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TransformFeedbackBufferBinding(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TransformFeedbackBufferBinding");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TransformFeedbackBufferBinding metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TransformFeedbackBufferBinding creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TransformFeedbackBufferBinding")
 inst=cur_operand;
 }
osg::TransformFeedbackBufferBinding * newobj=reinterpret_cast<osg::TransformFeedbackBufferBinding*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TransformFeedbackBufferBinding");
if(!cl){  std::cerr<<"osg::TransformFeedbackBufferBinding QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TransformFeedbackBufferBinding  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Texture1D(QString operatorName){
osg::Texture1D * newobj=reinterpret_cast<osg::Texture1D*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Texture1D(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture1D");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Texture1D metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Texture1D creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Texture1D")
 inst=cur_operand;
 }
osg::Texture1D * newobj=reinterpret_cast<osg::Texture1D*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Texture1D");
if(!cl){  std::cerr<<"osg::Texture1D QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Texture1D  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Texture3D(QString operatorName){
osg::Texture3D * newobj=reinterpret_cast<osg::Texture3D*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Texture3D(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture3D");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Texture3D metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Texture3D creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Texture3D")
 inst=cur_operand;
 }
osg::Texture3D * newobj=reinterpret_cast<osg::Texture3D*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Texture3D");
if(!cl){  std::cerr<<"osg::Texture3D QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Texture3D  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TextureCubeMap(QString operatorName){
osg::TextureCubeMap * newobj=reinterpret_cast<osg::TextureCubeMap*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TextureCubeMap(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureCubeMap");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TextureCubeMap metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TextureCubeMap creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TextureCubeMap")
 inst=cur_operand;
 }
osg::TextureCubeMap * newobj=reinterpret_cast<osg::TextureCubeMap*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TextureCubeMap");
if(!cl){  std::cerr<<"osg::TextureCubeMap QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TextureCubeMap  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TextureBuffer(QString operatorName){
osg::TextureBuffer * newobj=reinterpret_cast<osg::TextureBuffer*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TextureBuffer(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TextureBuffer");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TextureBuffer metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TextureBuffer creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TextureBuffer")
 inst=cur_operand;
 }
osg::TextureBuffer * newobj=reinterpret_cast<osg::TextureBuffer*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TextureBuffer");
if(!cl){  std::cerr<<"osg::TextureBuffer QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TextureBuffer  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Texture2DArray(QString operatorName){
osg::Texture2DArray * newobj=reinterpret_cast<osg::Texture2DArray*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Texture2DArray(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2DArray");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Texture2DArray metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Texture2DArray creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Texture2DArray")
 inst=cur_operand;
 }
osg::Texture2DArray * newobj=reinterpret_cast<osg::Texture2DArray*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Texture2DArray");
if(!cl){  std::cerr<<"osg::Texture2DArray QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Texture2DArray  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Texture2DMultisample(QString operatorName){
osg::Texture2DMultisample * newobj=reinterpret_cast<osg::Texture2DMultisample*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Texture2DMultisample(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2DMultisample");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Texture2DMultisample metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Texture2DMultisample creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Texture2DMultisample")
 inst=cur_operand;
 }
osg::Texture2DMultisample * newobj=reinterpret_cast<osg::Texture2DMultisample*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Texture2DMultisample");
if(!cl){  std::cerr<<"osg::Texture2DMultisample QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Texture2DMultisample  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Texture2D(QString operatorName){
osg::Texture2D * newobj=reinterpret_cast<osg::Texture2D*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Texture2D(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture2D");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Texture2D metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Texture2D creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Texture2D")
 inst=cur_operand;
 }
osg::Texture2D * newobj=reinterpret_cast<osg::Texture2D*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Texture2D");
if(!cl){  std::cerr<<"osg::Texture2D QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Texture2D  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TexGen(QString operatorName){
osg::TexGen * newobj=reinterpret_cast<osg::TexGen*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TexGen(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexGen");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TexGen metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TexGen creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TexGen")
 inst=cur_operand;
 }
osg::TexGen * newobj=reinterpret_cast<osg::TexGen*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TexGen");
if(!cl){  std::cerr<<"osg::TexGen QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TexGen  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TexMat(QString operatorName){
osg::TexMat * newobj=reinterpret_cast<osg::TexMat*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TexMat(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexMat");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TexMat metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TexMat creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TexMat")
 inst=cur_operand;
 }
osg::TexMat * newobj=reinterpret_cast<osg::TexMat*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TexMat");
if(!cl){  std::cerr<<"osg::TexMat QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TexMat  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Texture(QString operatorName){
osg::Texture * newobj=reinterpret_cast<osg::Texture*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Texture(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Texture");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Texture metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Texture creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Texture")
 inst=cur_operand;
 }
osg::Texture * newobj=reinterpret_cast<osg::Texture*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Texture");
if(!cl){  std::cerr<<"osg::Texture QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Texture  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TexEnvCombine(QString operatorName){
osg::TexEnvCombine * newobj=reinterpret_cast<osg::TexEnvCombine*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TexEnvCombine(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnvCombine");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TexEnvCombine metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TexEnvCombine creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TexEnvCombine")
 inst=cur_operand;
 }
osg::TexEnvCombine * newobj=reinterpret_cast<osg::TexEnvCombine*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TexEnvCombine");
if(!cl){  std::cerr<<"osg::TexEnvCombine QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TexEnvCombine  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TexEnvFilter(QString operatorName){
osg::TexEnvFilter * newobj=reinterpret_cast<osg::TexEnvFilter*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TexEnvFilter(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnvFilter");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TexEnvFilter metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TexEnvFilter creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TexEnvFilter")
 inst=cur_operand;
 }
osg::TexEnvFilter * newobj=reinterpret_cast<osg::TexEnvFilter*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TexEnvFilter");
if(!cl){  std::cerr<<"osg::TexEnvFilter QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TexEnvFilter  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_TexEnv(QString operatorName){
osg::TexEnv * newobj=reinterpret_cast<osg::TexEnv*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_TexEnv(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::TexEnv");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::TexEnv metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::TexEnv creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::TexEnv")
 inst=cur_operand;
 }
osg::TexEnv * newobj=reinterpret_cast<osg::TexEnv*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::TexEnv");
if(!cl){  std::cerr<<"osg::TexEnv QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::TexEnv  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_StencilTwoSided(QString operatorName){
osg::StencilTwoSided * newobj=reinterpret_cast<osg::StencilTwoSided*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_StencilTwoSided(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::StencilTwoSided");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::StencilTwoSided metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::StencilTwoSided creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::StencilTwoSided")
 inst=cur_operand;
 }
osg::StencilTwoSided * newobj=reinterpret_cast<osg::StencilTwoSided*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StencilTwoSided");
if(!cl){  std::cerr<<"osg::StencilTwoSided QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::StencilTwoSided  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Stencil(QString operatorName){
osg::Stencil * newobj=reinterpret_cast<osg::Stencil*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Stencil(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Stencil");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Stencil metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Stencil creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Stencil")
 inst=cur_operand;
 }
osg::Stencil * newobj=reinterpret_cast<osg::Stencil*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Stencil");
if(!cl){  std::cerr<<"osg::Stencil QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Stencil  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_StateAttribute(QString operatorName){
osg::StateAttribute * newobj=reinterpret_cast<osg::StateAttribute*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_StateAttribute(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::StateAttribute");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::StateAttribute metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::StateAttribute creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::StateAttribute")
 inst=cur_operand;
 }
osg::StateAttribute * newobj=reinterpret_cast<osg::StateAttribute*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
if(!cl){  std::cerr<<"osg::StateAttribute QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::StateAttribute  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_SampleMaski(QString operatorName){
osg::SampleMaski * newobj=reinterpret_cast<osg::SampleMaski*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_SampleMaski(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::SampleMaski");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::SampleMaski metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::SampleMaski creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::SampleMaski")
 inst=cur_operand;
 }
osg::SampleMaski * newobj=reinterpret_cast<osg::SampleMaski*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::SampleMaski");
if(!cl){  std::cerr<<"osg::SampleMaski QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::SampleMaski  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ShaderAttribute(QString operatorName){
osg::ShaderAttribute * newobj=reinterpret_cast<osg::ShaderAttribute*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_ShaderAttribute(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShaderAttribute");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ShaderAttribute metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ShaderAttribute creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ShaderAttribute")
 inst=cur_operand;
 }
osg::ShaderAttribute * newobj=reinterpret_cast<osg::ShaderAttribute*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ShaderAttribute");
if(!cl){  std::cerr<<"osg::ShaderAttribute QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ShaderAttribute  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ShadeModel(QString operatorName){
osg::ShadeModel * newobj=reinterpret_cast<osg::ShadeModel*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_ShadeModel(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ShadeModel");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ShadeModel metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ShadeModel creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ShadeModel")
 inst=cur_operand;
 }
osg::ShadeModel * newobj=reinterpret_cast<osg::ShadeModel*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ShadeModel");
if(!cl){  std::cerr<<"osg::ShadeModel QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ShadeModel  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Scissor(QString operatorName){
osg::Scissor * newobj=reinterpret_cast<osg::Scissor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Scissor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Scissor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Scissor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Scissor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Scissor")
 inst=cur_operand;
 }
osg::Scissor * newobj=reinterpret_cast<osg::Scissor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Scissor");
if(!cl){  std::cerr<<"osg::Scissor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Scissor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Program(QString operatorName){
osg::Program * newobj=reinterpret_cast<osg::Program*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Program(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Program");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Program metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Program creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Program")
 inst=cur_operand;
 }
osg::Program * newobj=reinterpret_cast<osg::Program*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Program");
if(!cl){  std::cerr<<"osg::Program QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Program  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PolygonMode(QString operatorName){
osg::PolygonMode * newobj=reinterpret_cast<osg::PolygonMode*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_PolygonMode(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonMode");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PolygonMode metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PolygonMode creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PolygonMode")
 inst=cur_operand;
 }
osg::PolygonMode * newobj=reinterpret_cast<osg::PolygonMode*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PolygonMode");
if(!cl){  std::cerr<<"osg::PolygonMode QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PolygonMode  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PrimitiveRestartIndex(QString operatorName){
osg::PrimitiveRestartIndex * newobj=reinterpret_cast<osg::PrimitiveRestartIndex*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_PrimitiveRestartIndex(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PrimitiveRestartIndex");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PrimitiveRestartIndex metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PrimitiveRestartIndex creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PrimitiveRestartIndex")
 inst=cur_operand;
 }
osg::PrimitiveRestartIndex * newobj=reinterpret_cast<osg::PrimitiveRestartIndex*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PrimitiveRestartIndex");
if(!cl){  std::cerr<<"osg::PrimitiveRestartIndex QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PrimitiveRestartIndex  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PolygonStipple(QString operatorName){
osg::PolygonStipple * newobj=reinterpret_cast<osg::PolygonStipple*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_PolygonStipple(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonStipple");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PolygonStipple metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PolygonStipple creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PolygonStipple")
 inst=cur_operand;
 }
osg::PolygonStipple * newobj=reinterpret_cast<osg::PolygonStipple*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PolygonStipple");
if(!cl){  std::cerr<<"osg::PolygonStipple QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PolygonStipple  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PolygonOffset(QString operatorName){
osg::PolygonOffset * newobj=reinterpret_cast<osg::PolygonOffset*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_PolygonOffset(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PolygonOffset");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PolygonOffset metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PolygonOffset creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PolygonOffset")
 inst=cur_operand;
 }
osg::PolygonOffset * newobj=reinterpret_cast<osg::PolygonOffset*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PolygonOffset");
if(!cl){  std::cerr<<"osg::PolygonOffset QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PolygonOffset  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Point(QString operatorName){
osg::Point * newobj=reinterpret_cast<osg::Point*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Point(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Point");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Point metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Point creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Point")
 inst=cur_operand;
 }
osg::Point * newobj=reinterpret_cast<osg::Point*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Point");
if(!cl){  std::cerr<<"osg::Point QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Point  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PointSprite(QString operatorName){
osg::PointSprite * newobj=reinterpret_cast<osg::PointSprite*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_PointSprite(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PointSprite");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PointSprite metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PointSprite creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PointSprite")
 inst=cur_operand;
 }
osg::PointSprite * newobj=reinterpret_cast<osg::PointSprite*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PointSprite");
if(!cl){  std::cerr<<"osg::PointSprite QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PointSprite  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_PatchParameter(QString operatorName){
osg::PatchParameter * newobj=reinterpret_cast<osg::PatchParameter*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_PatchParameter(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::PatchParameter");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::PatchParameter metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::PatchParameter creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::PatchParameter")
 inst=cur_operand;
 }
osg::PatchParameter * newobj=reinterpret_cast<osg::PatchParameter*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::PatchParameter");
if(!cl){  std::cerr<<"osg::PatchParameter QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::PatchParameter  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_LogicOp(QString operatorName){
osg::LogicOp * newobj=reinterpret_cast<osg::LogicOp*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_LogicOp(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::LogicOp");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::LogicOp metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::LogicOp creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::LogicOp")
 inst=cur_operand;
 }
osg::LogicOp * newobj=reinterpret_cast<osg::LogicOp*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::LogicOp");
if(!cl){  std::cerr<<"osg::LogicOp QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::LogicOp  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Multisample(QString operatorName){
osg::Multisample * newobj=reinterpret_cast<osg::Multisample*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Multisample(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Multisample");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Multisample metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Multisample creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Multisample")
 inst=cur_operand;
 }
osg::Multisample * newobj=reinterpret_cast<osg::Multisample*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Multisample");
if(!cl){  std::cerr<<"osg::Multisample QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Multisample  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Material(QString operatorName){
osg::Material * newobj=reinterpret_cast<osg::Material*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Material(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Material");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Material metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Material creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Material")
 inst=cur_operand;
 }
osg::Material * newobj=reinterpret_cast<osg::Material*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Material");
if(!cl){  std::cerr<<"osg::Material QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Material  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_LineStipple(QString operatorName){
osg::LineStipple * newobj=reinterpret_cast<osg::LineStipple*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_LineStipple(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineStipple");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::LineStipple metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::LineStipple creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::LineStipple")
 inst=cur_operand;
 }
osg::LineStipple * newobj=reinterpret_cast<osg::LineStipple*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::LineStipple");
if(!cl){  std::cerr<<"osg::LineStipple QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::LineStipple  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_LineWidth(QString operatorName){
osg::LineWidth * newobj=reinterpret_cast<osg::LineWidth*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_LineWidth(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::LineWidth");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::LineWidth metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::LineWidth creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::LineWidth")
 inst=cur_operand;
 }
osg::LineWidth * newobj=reinterpret_cast<osg::LineWidth*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::LineWidth");
if(!cl){  std::cerr<<"osg::LineWidth QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::LineWidth  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Light(QString operatorName){
osg::Light * newobj=reinterpret_cast<osg::Light*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Light(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Light");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Light metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Light creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Light")
 inst=cur_operand;
 }
osg::Light * newobj=reinterpret_cast<osg::Light*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Light");
if(!cl){  std::cerr<<"osg::Light QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Light  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_LightModel(QString operatorName){
osg::LightModel * newobj=reinterpret_cast<osg::LightModel*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_LightModel(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::LightModel");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::LightModel metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::LightModel creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::LightModel")
 inst=cur_operand;
 }
osg::LightModel * newobj=reinterpret_cast<osg::LightModel*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::LightModel");
if(!cl){  std::cerr<<"osg::LightModel QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::LightModel  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Hint(QString operatorName){
osg::Hint * newobj=reinterpret_cast<osg::Hint*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Hint(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Hint");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Hint metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Hint creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Hint")
 inst=cur_operand;
 }
osg::Hint * newobj=reinterpret_cast<osg::Hint*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Hint");
if(!cl){  std::cerr<<"osg::Hint QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Hint  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_FrontFace(QString operatorName){
osg::FrontFace * newobj=reinterpret_cast<osg::FrontFace*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_FrontFace(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrontFace");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::FrontFace metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::FrontFace creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::FrontFace")
 inst=cur_operand;
 }
osg::FrontFace * newobj=reinterpret_cast<osg::FrontFace*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::FrontFace");
if(!cl){  std::cerr<<"osg::FrontFace QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::FrontFace  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Fog(QString operatorName){
osg::Fog * newobj=reinterpret_cast<osg::Fog*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Fog(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Fog");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Fog metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Fog creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Fog")
 inst=cur_operand;
 }
osg::Fog * newobj=reinterpret_cast<osg::Fog*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Fog");
if(!cl){  std::cerr<<"osg::Fog QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Fog  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_FrameBufferObject(QString operatorName){
osg::FrameBufferObject * newobj=reinterpret_cast<osg::FrameBufferObject*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_FrameBufferObject(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::FrameBufferObject");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::FrameBufferObject metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::FrameBufferObject creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::FrameBufferObject")
 inst=cur_operand;
 }
osg::FrameBufferObject * newobj=reinterpret_cast<osg::FrameBufferObject*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::FrameBufferObject");
if(!cl){  std::cerr<<"osg::FrameBufferObject QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::FrameBufferObject  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_FragmentProgram(QString operatorName){
osg::FragmentProgram * newobj=reinterpret_cast<osg::FragmentProgram*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_FragmentProgram(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::FragmentProgram");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::FragmentProgram metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::FragmentProgram creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::FragmentProgram")
 inst=cur_operand;
 }
osg::FragmentProgram * newobj=reinterpret_cast<osg::FragmentProgram*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::FragmentProgram");
if(!cl){  std::cerr<<"osg::FragmentProgram QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::FragmentProgram  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Depth(QString operatorName){
osg::Depth * newobj=reinterpret_cast<osg::Depth*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_Depth(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Depth");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Depth metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Depth creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Depth")
 inst=cur_operand;
 }
osg::Depth * newobj=reinterpret_cast<osg::Depth*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Depth");
if(!cl){  std::cerr<<"osg::Depth QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Depth  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_CullFace(QString operatorName){
osg::CullFace * newobj=reinterpret_cast<osg::CullFace*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_CullFace(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::CullFace");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::CullFace metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::CullFace creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::CullFace")
 inst=cur_operand;
 }
osg::CullFace * newobj=reinterpret_cast<osg::CullFace*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::CullFace");
if(!cl){  std::cerr<<"osg::CullFace QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::CullFace  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ColorMask(QString operatorName){
osg::ColorMask * newobj=reinterpret_cast<osg::ColorMask*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_ColorMask(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ColorMask");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ColorMask metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ColorMask creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ColorMask")
 inst=cur_operand;
 }
osg::ColorMask * newobj=reinterpret_cast<osg::ColorMask*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ColorMask");
if(!cl){  std::cerr<<"osg::ColorMask QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ColorMask  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ColorMatrix(QString operatorName){
osg::ColorMatrix * newobj=reinterpret_cast<osg::ColorMatrix*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_ColorMatrix(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ColorMatrix");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ColorMatrix metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ColorMatrix creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ColorMatrix")
 inst=cur_operand;
 }
osg::ColorMatrix * newobj=reinterpret_cast<osg::ColorMatrix*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ColorMatrix");
if(!cl){  std::cerr<<"osg::ColorMatrix QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ColorMatrix  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ClipPlane(QString operatorName){
osg::ClipPlane * newobj=reinterpret_cast<osg::ClipPlane*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_ClipPlane(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClipPlane");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ClipPlane metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ClipPlane creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ClipPlane")
 inst=cur_operand;
 }
osg::ClipPlane * newobj=reinterpret_cast<osg::ClipPlane*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ClipPlane");
if(!cl){  std::cerr<<"osg::ClipPlane QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ClipPlane  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ClampColor(QString operatorName){
osg::ClampColor * newobj=reinterpret_cast<osg::ClampColor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_ClampColor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ClampColor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ClampColor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ClampColor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ClampColor")
 inst=cur_operand;
 }
osg::ClampColor * newobj=reinterpret_cast<osg::ClampColor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ClampColor");
if(!cl){  std::cerr<<"osg::ClampColor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ClampColor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_BufferIndexBinding(QString operatorName){
osg::BufferIndexBinding * newobj=reinterpret_cast<osg::BufferIndexBinding*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_BufferIndexBinding(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::BufferIndexBinding");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::BufferIndexBinding metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::BufferIndexBinding creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::BufferIndexBinding")
 inst=cur_operand;
 }
osg::BufferIndexBinding * newobj=reinterpret_cast<osg::BufferIndexBinding*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::BufferIndexBinding");
if(!cl){  std::cerr<<"osg::BufferIndexBinding QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::BufferIndexBinding  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_BlendEquation(QString operatorName){
osg::BlendEquation * newobj=reinterpret_cast<osg::BlendEquation*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_BlendEquation(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendEquation");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::BlendEquation metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::BlendEquation creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::BlendEquation")
 inst=cur_operand;
 }
osg::BlendEquation * newobj=reinterpret_cast<osg::BlendEquation*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::BlendEquation");
if(!cl){  std::cerr<<"osg::BlendEquation QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::BlendEquation  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_BlendFunc(QString operatorName){
osg::BlendFunc * newobj=reinterpret_cast<osg::BlendFunc*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_BlendFunc(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendFunc");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::BlendFunc metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::BlendFunc creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::BlendFunc")
 inst=cur_operand;
 }
osg::BlendFunc * newobj=reinterpret_cast<osg::BlendFunc*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::BlendFunc");
if(!cl){  std::cerr<<"osg::BlendFunc QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::BlendFunc  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_BlendColor(QString operatorName){
osg::BlendColor * newobj=reinterpret_cast<osg::BlendColor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_BlendColor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::BlendColor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::BlendColor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::BlendColor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::BlendColor")
 inst=cur_operand;
 }
osg::BlendColor * newobj=reinterpret_cast<osg::BlendColor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::BlendColor");
if(!cl){  std::cerr<<"osg::BlendColor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::BlendColor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_AtomicCounterBufferBinding(QString operatorName){
osg::AtomicCounterBufferBinding * newobj=reinterpret_cast<osg::AtomicCounterBufferBinding*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_AtomicCounterBufferBinding(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::AtomicCounterBufferBinding");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::AtomicCounterBufferBinding metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::AtomicCounterBufferBinding creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::AtomicCounterBufferBinding")
 inst=cur_operand;
 }
osg::AtomicCounterBufferBinding * newobj=reinterpret_cast<osg::AtomicCounterBufferBinding*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::AtomicCounterBufferBinding");
if(!cl){  std::cerr<<"osg::AtomicCounterBufferBinding QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::AtomicCounterBufferBinding  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_AlphaFunc(QString operatorName){
osg::AlphaFunc * newobj=reinterpret_cast<osg::AlphaFunc*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
removeAttribute(newobj);
}
}
}
emit osg_StateAttribute_removed();
}
void UIEditor::operator_with_operand_osg_AlphaFunc(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::AlphaFunc");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::AlphaFunc metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::AlphaFunc creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::AlphaFunc")
 inst=cur_operand;
 }
osg::AlphaFunc * newobj=reinterpret_cast<osg::AlphaFunc*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::StateSet"))){
 if (operatorName==QString("Add a StateAttrib")){
     if(cur_operatorsubject.model->id()=="osg::StateSet"){
reinterpret_cast<osg::StateSet*>(cur_operatorsubject.ptr)->
setAttributeAndModes(newobj,osg::StateAttribute::OVERRIDE);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::AlphaFunc");
if(!cl){  std::cerr<<"osg::AlphaFunc QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::AlphaFunc  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::StateAttribute");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::StateAttribute*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_StateAttribute_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_PickVisitor(QString operatorName){
osgUtil::PickVisitor * newobj=reinterpret_cast<osgUtil::PickVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_PickVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PickVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::PickVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::PickVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::PickVisitor")
 inst=cur_operand;
 }
osgUtil::PickVisitor * newobj=reinterpret_cast<osgUtil::PickVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PickVisitor");
if(!cl){  std::cerr<<"osgUtil::PickVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::PickVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_BaseOptimizerVisitor(QString operatorName){
osgUtil::BaseOptimizerVisitor * newobj=reinterpret_cast<osgUtil::BaseOptimizerVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_BaseOptimizerVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::BaseOptimizerVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::BaseOptimizerVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::BaseOptimizerVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::BaseOptimizerVisitor")
 inst=cur_operand;
 }
osgUtil::BaseOptimizerVisitor * newobj=reinterpret_cast<osgUtil::BaseOptimizerVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::BaseOptimizerVisitor");
if(!cl){  std::cerr<<"osgUtil::BaseOptimizerVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::BaseOptimizerVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_VertexCacheMissVisitor(QString operatorName){
osgUtil::VertexCacheMissVisitor * newobj=reinterpret_cast<osgUtil::VertexCacheMissVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_VertexCacheMissVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexCacheMissVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::VertexCacheMissVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::VertexCacheMissVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::VertexCacheMissVisitor")
 inst=cur_operand;
 }
osgUtil::VertexCacheMissVisitor * newobj=reinterpret_cast<osgUtil::VertexCacheMissVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexCacheMissVisitor");
if(!cl){  std::cerr<<"osgUtil::VertexCacheMissVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::VertexCacheMissVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_UpdateVisitor(QString operatorName){
osgUtil::UpdateVisitor * newobj=reinterpret_cast<osgUtil::UpdateVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_UpdateVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::UpdateVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::UpdateVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::UpdateVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::UpdateVisitor")
 inst=cur_operand;
 }
osgUtil::UpdateVisitor * newobj=reinterpret_cast<osgUtil::UpdateVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::UpdateVisitor");
if(!cl){  std::cerr<<"osgUtil::UpdateVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::UpdateVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_StateToCompile(QString operatorName){
osgUtil::StateToCompile * newobj=reinterpret_cast<osgUtil::StateToCompile*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_StateToCompile(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StateToCompile");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::StateToCompile metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::StateToCompile creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::StateToCompile")
 inst=cur_operand;
 }
osgUtil::StateToCompile * newobj=reinterpret_cast<osgUtil::StateToCompile*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::StateToCompile");
if(!cl){  std::cerr<<"osgUtil::StateToCompile QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::StateToCompile  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_VertexCacheVisitor(QString operatorName){
osgUtil::VertexCacheVisitor * newobj=reinterpret_cast<osgUtil::VertexCacheVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_VertexCacheVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexCacheVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::VertexCacheVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::VertexCacheVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::VertexCacheVisitor")
 inst=cur_operand;
 }
osgUtil::VertexCacheVisitor * newobj=reinterpret_cast<osgUtil::VertexCacheVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexCacheVisitor");
if(!cl){  std::cerr<<"osgUtil::VertexCacheVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::VertexCacheVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_VertexAccessOrderVisitor(QString operatorName){
osgUtil::VertexAccessOrderVisitor * newobj=reinterpret_cast<osgUtil::VertexAccessOrderVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_VertexAccessOrderVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::VertexAccessOrderVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::VertexAccessOrderVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::VertexAccessOrderVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::VertexAccessOrderVisitor")
 inst=cur_operand;
 }
osgUtil::VertexAccessOrderVisitor * newobj=reinterpret_cast<osgUtil::VertexAccessOrderVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::VertexAccessOrderVisitor");
if(!cl){  std::cerr<<"osgUtil::VertexAccessOrderVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::VertexAccessOrderVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_CullVisitor(QString operatorName){
osgUtil::CullVisitor * newobj=reinterpret_cast<osgUtil::CullVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_CullVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::CullVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::CullVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::CullVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::CullVisitor")
 inst=cur_operand;
 }
osgUtil::CullVisitor * newobj=reinterpret_cast<osgUtil::CullVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::CullVisitor");
if(!cl){  std::cerr<<"osgUtil::CullVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::CullVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_TriStripVisitor(QString operatorName){
osgUtil::TriStripVisitor * newobj=reinterpret_cast<osgUtil::TriStripVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_TriStripVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::TriStripVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::TriStripVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::TriStripVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::TriStripVisitor")
 inst=cur_operand;
 }
osgUtil::TriStripVisitor * newobj=reinterpret_cast<osgUtil::TriStripVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::TriStripVisitor");
if(!cl){  std::cerr<<"osgUtil::TriStripVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::TriStripVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_StatsVisitor(QString operatorName){
osgUtil::StatsVisitor * newobj=reinterpret_cast<osgUtil::StatsVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_StatsVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::StatsVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::StatsVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::StatsVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::StatsVisitor")
 inst=cur_operand;
 }
osgUtil::StatsVisitor * newobj=reinterpret_cast<osgUtil::StatsVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::StatsVisitor");
if(!cl){  std::cerr<<"osgUtil::StatsVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::StatsVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_DrawElementTypeSimplifierVisitor(QString operatorName){
osgUtil::DrawElementTypeSimplifierVisitor * newobj=reinterpret_cast<osgUtil::DrawElementTypeSimplifierVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_DrawElementTypeSimplifierVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DrawElementTypeSimplifierVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::DrawElementTypeSimplifierVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::DrawElementTypeSimplifierVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::DrawElementTypeSimplifierVisitor")
 inst=cur_operand;
 }
osgUtil::DrawElementTypeSimplifierVisitor * newobj=reinterpret_cast<osgUtil::DrawElementTypeSimplifierVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DrawElementTypeSimplifierVisitor");
if(!cl){  std::cerr<<"osgUtil::DrawElementTypeSimplifierVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::DrawElementTypeSimplifierVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_DisplayRequirementsVisitor(QString operatorName){
osgUtil::DisplayRequirementsVisitor * newobj=reinterpret_cast<osgUtil::DisplayRequirementsVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_DisplayRequirementsVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DisplayRequirementsVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::DisplayRequirementsVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::DisplayRequirementsVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::DisplayRequirementsVisitor")
 inst=cur_operand;
 }
osgUtil::DisplayRequirementsVisitor * newobj=reinterpret_cast<osgUtil::DisplayRequirementsVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DisplayRequirementsVisitor");
if(!cl){  std::cerr<<"osgUtil::DisplayRequirementsVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::DisplayRequirementsVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_ShaderGenVisitor(QString operatorName){
osgUtil::ShaderGenVisitor * newobj=reinterpret_cast<osgUtil::ShaderGenVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_ShaderGenVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::ShaderGenVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::ShaderGenVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::ShaderGenVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::ShaderGenVisitor")
 inst=cur_operand;
 }
osgUtil::ShaderGenVisitor * newobj=reinterpret_cast<osgUtil::ShaderGenVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::ShaderGenVisitor");
if(!cl){  std::cerr<<"osgUtil::ShaderGenVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::ShaderGenVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_SmoothingVisitor(QString operatorName){
osgUtil::SmoothingVisitor * newobj=reinterpret_cast<osgUtil::SmoothingVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_SmoothingVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::SmoothingVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::SmoothingVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::SmoothingVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::SmoothingVisitor")
 inst=cur_operand;
 }
osgUtil::SmoothingVisitor * newobj=reinterpret_cast<osgUtil::SmoothingVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::SmoothingVisitor");
if(!cl){  std::cerr<<"osgUtil::SmoothingVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::SmoothingVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_Simplifier(QString operatorName){
osgUtil::Simplifier * newobj=reinterpret_cast<osgUtil::Simplifier*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_Simplifier(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::Simplifier");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::Simplifier metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::Simplifier creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::Simplifier")
 inst=cur_operand;
 }
osgUtil::Simplifier * newobj=reinterpret_cast<osgUtil::Simplifier*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::Simplifier");
if(!cl){  std::cerr<<"osgUtil::Simplifier QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::Simplifier  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_GeometryCollector(QString operatorName){
osgUtil::GeometryCollector * newobj=reinterpret_cast<osgUtil::GeometryCollector*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_GeometryCollector(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GeometryCollector");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::GeometryCollector metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::GeometryCollector creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::GeometryCollector")
 inst=cur_operand;
 }
osgUtil::GeometryCollector * newobj=reinterpret_cast<osgUtil::GeometryCollector*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GeometryCollector");
if(!cl){  std::cerr<<"osgUtil::GeometryCollector QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::GeometryCollector  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_GLObjectsVisitor(QString operatorName){
osgUtil::GLObjectsVisitor * newobj=reinterpret_cast<osgUtil::GLObjectsVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_GLObjectsVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::GLObjectsVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::GLObjectsVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::GLObjectsVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::GLObjectsVisitor")
 inst=cur_operand;
 }
osgUtil::GLObjectsVisitor * newobj=reinterpret_cast<osgUtil::GLObjectsVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::GLObjectsVisitor");
if(!cl){  std::cerr<<"osgUtil::GLObjectsVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::GLObjectsVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_IndexMeshVisitor(QString operatorName){
osgUtil::IndexMeshVisitor * newobj=reinterpret_cast<osgUtil::IndexMeshVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_IndexMeshVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IndexMeshVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::IndexMeshVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::IndexMeshVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::IndexMeshVisitor")
 inst=cur_operand;
 }
osgUtil::IndexMeshVisitor * newobj=reinterpret_cast<osgUtil::IndexMeshVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IndexMeshVisitor");
if(!cl){  std::cerr<<"osgUtil::IndexMeshVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::IndexMeshVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_IntersectionVisitor(QString operatorName){
osgUtil::IntersectionVisitor * newobj=reinterpret_cast<osgUtil::IntersectionVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_IntersectionVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectionVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::IntersectionVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::IntersectionVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::IntersectionVisitor")
 inst=cur_operand;
 }
osgUtil::IntersectionVisitor * newobj=reinterpret_cast<osgUtil::IntersectionVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectionVisitor");
if(!cl){  std::cerr<<"osgUtil::IntersectionVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::IntersectionVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_IntersectVisitor(QString operatorName){
osgUtil::IntersectVisitor * newobj=reinterpret_cast<osgUtil::IntersectVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_IntersectVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::IntersectVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::IntersectVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::IntersectVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::IntersectVisitor")
 inst=cur_operand;
 }
osgUtil::IntersectVisitor * newobj=reinterpret_cast<osgUtil::IntersectVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::IntersectVisitor");
if(!cl){  std::cerr<<"osgUtil::IntersectVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::IntersectVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_PrintVisitor(QString operatorName){
osgUtil::PrintVisitor * newobj=reinterpret_cast<osgUtil::PrintVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osgUtil_PrintVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::PrintVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::PrintVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::PrintVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::PrintVisitor")
 inst=cur_operand;
 }
osgUtil::PrintVisitor * newobj=reinterpret_cast<osgUtil::PrintVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::PrintVisitor");
if(!cl){  std::cerr<<"osgUtil::PrintVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::PrintVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_NodeVisitor(QString operatorName){
osg::NodeVisitor * newobj=reinterpret_cast<osg::NodeVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osg_NodeVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::NodeVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::NodeVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::NodeVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::NodeVisitor")
 inst=cur_operand;
 }
osg::NodeVisitor * newobj=reinterpret_cast<osg::NodeVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
if(!cl){  std::cerr<<"osg::NodeVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::NodeVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_KdTreeBuilder(QString operatorName){
osg::KdTreeBuilder * newobj=reinterpret_cast<osg::KdTreeBuilder*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osg_KdTreeBuilder(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::KdTreeBuilder");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::KdTreeBuilder metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::KdTreeBuilder creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::KdTreeBuilder")
 inst=cur_operand;
 }
osg::KdTreeBuilder * newobj=reinterpret_cast<osg::KdTreeBuilder*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::KdTreeBuilder");
if(!cl){  std::cerr<<"osg::KdTreeBuilder QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::KdTreeBuilder  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_ComputeBoundsVisitor(QString operatorName){
osg::ComputeBoundsVisitor * newobj=reinterpret_cast<osg::ComputeBoundsVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osg_ComputeBoundsVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::ComputeBoundsVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::ComputeBoundsVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::ComputeBoundsVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::ComputeBoundsVisitor")
 inst=cur_operand;
 }
osg::ComputeBoundsVisitor * newobj=reinterpret_cast<osg::ComputeBoundsVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::ComputeBoundsVisitor");
if(!cl){  std::cerr<<"osg::ComputeBoundsVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::ComputeBoundsVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_CollectOccludersVisitor(QString operatorName){
osg::CollectOccludersVisitor * newobj=reinterpret_cast<osg::CollectOccludersVisitor*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
}
}
}
emit osg_NodeVisitor_removed();
}
void UIEditor::operator_with_operand_osg_CollectOccludersVisitor(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::CollectOccludersVisitor");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::CollectOccludersVisitor metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::CollectOccludersVisitor creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::CollectOccludersVisitor")
 inst=cur_operand;
 }
osg::CollectOccludersVisitor * newobj=reinterpret_cast<osg::CollectOccludersVisitor*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Node"))){
 if (operatorName==QString("Create NodeVisitor")){
     if(cur_operatorsubject.model->id()=="osg::Node"){
reinterpret_cast<osg::Node*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Transform"){
reinterpret_cast<osg::Transform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::TexGenNode"){
reinterpret_cast<osg::TexGenNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Switch"){
reinterpret_cast<osg::Switch*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Sequence"){
reinterpret_cast<osg::Sequence*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ProxyNode"){
reinterpret_cast<osg::ProxyNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Projection"){
reinterpret_cast<osg::Projection*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PagedLOD"){
reinterpret_cast<osg::PagedLOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::PositionAttitudeTransform"){
reinterpret_cast<osg::PositionAttitudeTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OcclusionQueryNode"){
reinterpret_cast<osg::OcclusionQueryNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::OccluderNode"){
reinterpret_cast<osg::OccluderNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::MatrixTransform"){
reinterpret_cast<osg::MatrixTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LightSource"){
reinterpret_cast<osg::LightSource*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::LOD"){
reinterpret_cast<osg::LOD*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Group"){
reinterpret_cast<osg::Group*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CoordinateSystemNode"){
reinterpret_cast<osg::CoordinateSystemNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClipNode"){
reinterpret_cast<osg::ClipNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::ClearNode"){
reinterpret_cast<osg::ClearNode*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::AutoTransform"){
reinterpret_cast<osg::AutoTransform*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Camera"){
reinterpret_cast<osg::Camera*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::CameraView"){
reinterpret_cast<osg::CameraView*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
accept(*newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::CollectOccludersVisitor");
if(!cl){  std::cerr<<"osg::CollectOccludersVisitor QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::CollectOccludersVisitor  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::NodeVisitor");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::NodeVisitor*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_NodeVisitor_added(qmod);
}
}
};
void UIEditor::operator_remove_deprecated_osg_Geometry(QString operatorName){
deprecated_osg::Geometry * newobj=reinterpret_cast<deprecated_osg::Geometry*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
}
}
emit osg_Geometry_removed();
}
void UIEditor::operator_with_operand_deprecated_osg_Geometry(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("deprecated_osg::Geometry");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"deprecated_osg::Geometry metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"deprecated_osg::Geometry creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="deprecated_osg::Geometry")
 inst=cur_operand;
 }
deprecated_osg::Geometry * newobj=reinterpret_cast<deprecated_osg::Geometry*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
}
}
osg_Geometry_cur_selected=newobj;
setosg_Geometry_selected(true);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("deprecated_osg::Geometry");
if(!cl){  std::cerr<<"deprecated_osg::Geometry QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"deprecated_osg::Geometry  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Geometry*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Geometry_added(qmod);
}
}
};
void UIEditor::operator_remove_osgUtil_DelaunayConstraint(QString operatorName){
osgUtil::DelaunayConstraint * newobj=reinterpret_cast<osgUtil::DelaunayConstraint*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
}
}
emit osg_Geometry_removed();
}
void UIEditor::operator_with_operand_osgUtil_DelaunayConstraint(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osgUtil::DelaunayConstraint");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osgUtil::DelaunayConstraint metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osgUtil::DelaunayConstraint creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osgUtil::DelaunayConstraint")
 inst=cur_operand;
 }
osgUtil::DelaunayConstraint * newobj=reinterpret_cast<osgUtil::DelaunayConstraint*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
}
}
osg_Geometry_cur_selected=newobj;
setosg_Geometry_selected(true);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osgUtil::DelaunayConstraint");
if(!cl){  std::cerr<<"osgUtil::DelaunayConstraint QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osgUtil::DelaunayConstraint  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Geometry*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Geometry_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_QueryGeometry(QString operatorName){
osg::QueryGeometry * newobj=reinterpret_cast<osg::QueryGeometry*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
}
}
emit osg_Geometry_removed();
}
void UIEditor::operator_with_operand_osg_QueryGeometry(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::QueryGeometry");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::QueryGeometry metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::QueryGeometry creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::QueryGeometry")
 inst=cur_operand;
 }
osg::QueryGeometry * newobj=reinterpret_cast<osg::QueryGeometry*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
}
}
osg_Geometry_cur_selected=newobj;
setosg_Geometry_selected(true);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::QueryGeometry");
if(!cl){  std::cerr<<"osg::QueryGeometry QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::QueryGeometry  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Geometry*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Geometry_added(qmod);
}
}
};
void UIEditor::operator_remove_osg_Geometry(QString operatorName){
osg::Geometry * newobj=reinterpret_cast<osg::Geometry*>(cur_operand.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
removeDrawable(newobj);
}
}
}
emit osg_Geometry_removed();
}
void UIEditor::operator_with_operand_osg_Geometry(QString operatorName ,bool create){
if (true){pmoc::Instance inst;
pmoc::MetaClass * cl=pmoc::MetaLibraryRegistry::instance()->getMetaClassByID("osg::Geometry");
if(create){
	cur_operatorsubject=cur_operand;
 if (!cl) {  std::cerr<<"osg::Geometry metaclass not found : Is the plugin loaded?"<<endl; return;}
     inst=cl->createInstance();
     if(!inst.isValid()){
         std::cerr<<"osg::Geometry creation problem"<<std::endl;
         return;
         }
}
else{
if (cur_operand.model->id()=="osg::Geometry")
 inst=cur_operand;
 }
osg::Geometry * newobj=reinterpret_cast<osg::Geometry*>(inst.ptr);
if ( cur_operatorsubject.model->isSubClass( PMOCGETMETACLASS("osg::Geode"))){
 if (operatorName==QString("Add a Geometry")){
     if(cur_operatorsubject.model->id()=="osg::Geode"){
reinterpret_cast<osg::Geode*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
     if(cur_operatorsubject.model->id()=="osg::Billboard"){
reinterpret_cast<osg::Billboard*>(cur_operatorsubject.ptr)->
addDrawable(newobj);
}
}
}
setosg_Geometry_selected(false);
setosg_Group_selected(false);
setosg_Geode_selected(false);
setosg_StateSet_selected(false);
setosg_Node_selected(false);
setosg_Group_selected(false);
pmoc::MetaQQuickClass * Qcl=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry");
if(!cl){  std::cerr<<"osg::Geometry QQuick component not found : Is the plugin loaded?"<<std::endl; return;}
   	QQuickItem* qitem=Qcl->getGuiComponent(_win,inst);
if(!qitem){ std::cerr<<"osg::Geometry  QQuick component not loaded:see qml compiler traces"<<std::endl;}
 {
pmoc::MetaQQuickClass * Qcloperand=	pmoc::MetaQQuickLibraryRegistry::instance()->getMetaQQuickClassByID("osg::Geometry");
pmoc::Instance instoperand =PMOCADDOBJECT(*dynamic_cast<osg::Geometry*>(newobj));
QQModel*qmod=Qcloperand->createQQModel(&instoperand);
setOperand(qmod); //cur_operand = instoperand;//Qcloperand->createQQModel(&instoperand);
emit osg_Geometry_added(qmod);
}
}
};
