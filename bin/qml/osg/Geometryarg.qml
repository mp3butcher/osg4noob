import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick 2.1
import osgQtQuick 1.0
import osg_GeometryQQQ_QModel 1.0 
//import osg_GeodeQQQ_QModel 1.0 //avoid the use of signal but do shit with polymorphic father


 FocusScope { 
 id:main //FocusScope For keyboard events

property var qmodel;// the instancied QQModel
///TO GENERATE
property var osg_Geometry;//Class Hierarchy
//property var osg_Node;......
///TO GENERATE

	signal subjectrequired();//signal for Cut/Delete action (this should be connected with parent QQModel (in parent's connect2view )
	//signal drawableselected (int index)

Rectangle {     
	id:rectangle
		//focus: true
	Keys.onPressed: {  console.log("Geom");
	//edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
        if ((event.key == Qt.Key_C) && (event.modifiers&Qt.ControlModifier)) {
            console.log("copy");globalEditor.setCopyOperand(main.qmodel)
            event.accepted = true;
        }
	if ((event.key == Qt.Key_X) && (event.modifiers&Qt.ControlModifier)) {
            console.log("cut");
            globalEditor.setCopyOperand(main.qmodel)
console.log(main.parent);
//direct way to set parent
 globalEditor.setCutSubject(main.parent.qmodel);
subjectrequired();//send a signal (this should be connected with parent (a osg::group or subclass)
            event.accepted = true;
        }
	if ((event.key == Qt.Key_V) && (event.modifiers&Qt.ControlModifier)) {
            console.log("paste");
            globalEditor.realPaste()
            event.accepted = true;
        }
    }


    width: 350
    height: 260
	opacity:1
    color: "blue"
x:300
	y:300
///CLASSIC PART TOO BEGIN
	MouseArea {
          //  preventStealing: true
		    anchors.fill: parent
		   // hoverEnabled: true
		    acceptedButtons:  Qt.AllButtons
		    drag.target: main
		    drag.axis: Drag.XandYAxis
	 onClicked: { console.log("selected");rectangle.focus = true;
globalEditor.setOperand(main.qmodel); }
onPressAndHold:uaContextMenu.popup()
 Menu
        {
            id: uaContextMenu
           
                MenuItem { text:'Copy';shortcut:  "Ctrl+C";onTriggered:{
		globalEditor.setCopyOperand(main.qmodel)
		} } 
		MenuItem { text:'Cut';shortcut:  "Ctrl+X";onTriggered:{
		globalEditor.setCopyOperand(main.qmodel)
 globalEditor.setCutSubject(main.parent.qmodel);
//   subjectrequired();
} }
            MenuItem { text:'Paste';shortcut:  "Ctrl+V";onTriggered:{
		globalEditor.realPaste(main.qmodel)
		} } 
            MenuItem { text:'Remove';shortcut:  "Del";onTriggered:{
globalEditor.setCopyOperand(main.qmodel); globalEditor.setCutSubject(main.parent.qmodel);globalEditor.realRemoval()
//   subjectrequired();

		} } 
        }
/////CLASSIC PART TO END
 GroupBox {    y:200
title:"GeometryProperties"        
id:classmain
objectName: "osg_GeometryQQQ"
property var osg_Geometry //QQModel 
  /*	Grid {
	
//anchors.fill: parent
	columns: 2
	spacing: 1
    id: grid
	
	Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"useVBO";}}
	 
	 CheckBox{
    checked:main.osg_Geometry.useVBO
    onClicked:{main.osg_Geometry.useVBO=checked}
    }
	
	Rectangle{  color: "transparent"; width: 160;height:20;Label {text:"useDisplayList"}}
	  CheckBox{
    checked:main.qmodel.useDisplayList

    onClicked:
{
main.qmodel.useDisplayList=checked
console.log(main.qmodel);
  globalEditor.selected(main.qmodel);
}
    }
	
	Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
	Label {text:"BoundingBox"}
	RowLayout{TextField {text:main.osg_Geometry.minBound.x.toFixed(1)} TextField {text:main.qmodel.minBound.y.toFixed(1)} TextField {text:main.qmodel.minBound.z.toFixed(1)}   }
	RowLayout{TextField {text:main.qmodel.maxBound.y.toFixed(1)} TextField {text:main.qmodel.maxBound.y.toFixed(1)} TextField {text:main.qmodel.maxBound.z.toFixed(1)}   }
	}}
	}
	*/
	}

//Component.onCompleted:main.selected();
}
}}
