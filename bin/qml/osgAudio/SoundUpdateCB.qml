import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import QtQuick.Dialogs 1.0

import QtQuick 2.1
import osgQtQuick 1.0

 

 FocusScope {
 id:main //FocusScope For keyboard events
x:120
	  
property var qmodel//: osg_Material //QQModel
	signal subjectrequired();//signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )


Rectangle {     
	id:rect
		focus: true
	Keys.onPressed: {  console.log("Geom");
	//edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
        if ((event.key == Qt.Key_C) && (event.modifiers&Qt.ControlModifier)) {
            console.log("copy");globalEditor.setCopyOperand(main.qmodel)
            event.accepted = true;
        }
	if ((event.key == Qt.Key_X) && (event.modifiers&Qt.ControlModifier)) {
            console.log("cut");
            globalEditor.setCopyOperand(main.qmodel)
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
    color: "orange"

	
///CLASSIC PART TOO BEGIN
	 

MouseArea {
            preventStealing: true
		    anchors.fill: parent
		    hoverEnabled: true
		    acceptedButtons:  Qt.AllButtons
		    drag.target: main
		    drag.axis: Drag.XandYAxis
	 onClicked: { console.log("selected");
main.focus = true;
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
            MenuItem { text:'Remove';shortcut:  "Suppr";onTriggered:{
globalEditor.setCopyOperand(main.qmodel); globalEditor.setCutSubject(main.parent.qmodel);globalEditor.realRemoval()
//   subjectrequired();

		} } 
        }
/////////////////////////////////END CLASSIC//////////////////////////////////////////////
            
   GroupBox {
title:"SoundUpdateCB Properties"
objectName:"osgAudio_SoundUpdateCBQQQ"
id:classmain
property var osgAudio_SoundUpdateCB;//: osg_Geode //QQModel 

	Grid {

//anchors.fill: parent
	columns: 2
	spacing: 1
    id: grid
   
   
	 
/*	Button{
//    iconSource :'../../images/openbutton.png'

//   onClicked :qmodel.add
   
   FileDialog {
     nameFilters: [ "Sound files (*.wav *.ogg)", "All files (*)" ]
    visible:false
    id: fileDialog
    title: "Please choose a file"
    onAccepted: {
        console.log("You chose: " + fileDialog.fileUrls)
        main.qmodel.samplefile=fileDialog.fileUrls[0]
    }
    onRejected: {
        console.log("Canceled")
        Qt.quit()
    }
    Component.onCompleted: visible = false
}
    }}
	Rectangle{  color: "transparent"; height:20;width: 160;TextField {text:main.qmodel.samplefile} 
	
	
    
    }

    
    
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"isPlaying";}}
    CheckBox{
    checked:main.qmodel.isPlaying
    onClicked:main.qmodel.isPlaying=checked
    }
    
     Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"isLooping";}}
  CheckBox{
    checked:main.qmodel.isLooping
    onClicked:main.qmodel.isLooping=checked
    }
     Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Reference Distance";}}
    Rectangle{  color: "transparent"; height:20;width: 160;TextField {text: main.qmodel.refDistance
   onTextChanged:  main.qmodel.refDistance=parseFloat(text)
    }}
      Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Pitch";}}
    Rectangle{  color: "transparent"; height:20;width: 160;TextField {text: main.qmodel.pitch
   onTextChanged:{  var p=parseFloat(text);console.log(p);if ( p!=0 )main.qmodel.pitch=p;}
    }}
    
    */
}
	}
}
	}
}
