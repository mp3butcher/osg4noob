import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


import QtQuick.Dialogs 1.0
import QtQuick 2.1
import osgQtQuick 1.0


 FocusScope {
Component.onCompleted:{pmocjs.osg_Geometry_added.connect(relayListChanged);}


 id:main //FocusScope For keyboard events
property var qmodel: osg_TexEnv //QQModel
	 


Rectangle {     
	id:rectangle
		//focus: true
	Keys.onPressed: {  console.log("Geode");
	//edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
        if ((event.key == Qt.Key_C) && (event.modifiers&Qt.ControlModifier)) {
            console.log("copy");pmocjs.setCopyOperand(main.qmodel)
            event.accepted = true;
        }
	if ((event.key == Qt.Key_X) && (event.modifiers&Qt.ControlModifier)) {
            console.log("cut");
            pmocjs.setCopyOperand(main.qmodel)
            subjectrequired();//send a signal (this should be connected with parent (a osg::group or subclass)
            event.accepted = true;
        }
	if ((event.key == Qt.Key_V) && (event.modifiers&Qt.ControlModifier)) {
            console.log("paste");
            pmocjs.realPaste()
            event.accepted = true;
        }
    }

 ///////////END CLASSIC PREAMBULE///////////////////////////////////////////////////
///testhack Component.onCompleted:{console.log(geode.qmodel);pmocjs.setOperand(geode.qmodel);}

	//style
	 width: 320
    height: 276
	opacity:1.0
    color: "orange"
x:100
y:30


///CLASSIC PART TOO BEGIN


MouseArea {
            preventStealing: true
		    anchors.fill: parent
		    hoverEnabled: true
		    acceptedButtons:  Qt.AllButtons
		    drag.target: main
		    drag.axis: Drag.XandYAxis
	 onClicked: { //console.log("selected");
main.focus = true;
pmocjs.setOperand(main.qmodel); }
onPressAndHold:uaContextMenu.popup()
 Menu
        {
            id: uaContextMenu
           
                MenuItem { text:'Copy';shortcut:  "Ctrl+C";onTriggered:{
		pmocjs.setCopyOperand(main.qmodel)
		} } 
		MenuItem { text:'Cut';shortcut:  "Ctrl+X";onTriggered:{
		pmocjs.setCopyOperand(main.qmodel)
 pmocjs.setCutSubject(main.parent.qmodel);
//   subjectrequired();
} }
            MenuItem { text:'Paste';shortcut:  "Ctrl+V";onTriggered:{
		pmocjs.realPaste(main.qmodel)
		} } 
            MenuItem { text:'Remove';shortcut:  "Suppr";onTriggered:{
pmocjs.setCopyOperand(main.qmodel); pmocjs.setCutSubject(main.parent.qmodel);pmocjs.realRemoval()
//   subjectrequired();

		} } 
        }
/////CLASSIC PART TO END
   

   GroupBox {    
title:"TexEnv Properties"        
 id: obj
                objectName: "osg_TexEnvQQQ"
                property var osg_TexEnv

	Grid {
	
//anchors.fill: parent
	columns: 2
	spacing: 1
    id: grid
	

    ComboBox {
objectName:"TexGenComboBox2Hack"
        id: typeshader
        model: ["DECAL","MODULATE","BLEND", "REPLACE", "ADD"]

        currentIndex: obj.osg_TexGen.mode
        width: 200
         onCurrentIndexChanged: {console.log(currentIndex)
            obj. osg_TexEnv.mode = currentIndex  
        }
    }
	
/*	Image{y:20 
	width:256
	height:256
	source:mainQModelTexture2D.m_parentModel.qtimage
	}
	Rectangle{  color: "transparent"; width: 160;height:20;Label {text:"useDisplayList"}}
	Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:main.m_parentModel.useDisplayList}}
	
	
	Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
	Label {text:"BoundingBox"}
	RowLayout{TextField {text:main.m_parentModel.boundMin.x} TextField {text:main.m_parentModel.boundMin.y} TextField {text:main.m_parentModel.boundMin.z}   }
	RowLayout{TextField {text:main.m_parentModel.boundMax.y} TextField {text:main.m_parentModel.boundMax.y} TextField {text:main.m_parentModel.boundMax.z}   }
	}}*/
	}
	
	}
}}}
