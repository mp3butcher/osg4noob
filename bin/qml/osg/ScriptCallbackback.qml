import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import ColorComponentsNode 1.0

import QtQuick 2.1
import osgQtQuick 1.0
 

 FocusScope {
 id:main //FocusScope For keyboard events
x:120
	  
property var qmodel//: osg_Material //QQModel
	signal subjectrequired();//signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )


Rectangle {     
	id:geometryrect
		focus: true
	Keys.onPressed: {  console.log("Geom");
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


 width: 480
    height: 220
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
/////////////////////////////////END CLASSIC//////////////////////////////////////////////

   GroupBox {
title:"Material Properties"
/*
	Grid {

anchors.fill: parent
	columns: 3
	spacing: 1
    id: grid
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AmbientFB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"DiffuseFB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"SpecularFB";}}
    //Button{width:160

    Rectangle{width:160;height:20; id:ambientFB; color:main.qmodel.ambientFB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker6.visible=!colorpicker6.visible;
        colorpicker6.previousColor=colorpicker6.currentColor=main.qmodel.ambientFB}    }
    }
        Rectangle{width:160;height:20; id: diffuseFB; color:main.qmodel.diffuseFB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker7.visible=!colorpicker7.visible;
        colorpicker7.previousColor=colorpicker7.currentColor=main.qmodel.diffuseFB}    }
    }
        Rectangle{width:160;height:20; id: specularFB; color:main.qmodel.specularFB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker8.visible=!colorpicker8.visible;
        colorpicker8.previousColor=colorpicker8.currentColor=main.qmodel.specularFB}    }
    }

   Label{text:"ShininessFB"}
   Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:main.qmodel.shininessFB
   onTextChanged:{ main.qmodel.shininessFB= parseInt(text)           }}}

    }
    Grid {
y:60
//anchors.fill: parent
    columns: 3
    spacing: 1
        Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AmbientF";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"DiffuseF";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"SpecularF";}}
    //Button{width:160

    Rectangle{width:160;height:20; id:ambientF; color:main.qmodel.ambientF
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker0.visible=!colorpicker0.visible;
        colorpicker0.previousColor=colorpicker0.currentColor=main.qmodel.ambientF}    }
    }
        Rectangle{width:160;height:20; id: diffuseF; color:main.qmodel.diffuseF
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker1.visible=!colorpicker1.visible;
        colorpicker1.previousColor=colorpicker1.currentColor=main.qmodel.diffuseF}    }
    }
        Rectangle{width:160;height:20; id: specularF; color:main.qmodel.specularF
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker2.visible=!colorpicker2.visible;
        colorpicker2.previousColor=colorpicker2.currentColor=main.qmodel.specularF}    }
    }
     Label{text:"ShininessF"}
   Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:main.qmodel.shininessF
   onTextChanged:{ main.qmodel.shininessFB= parseInt(text)           }}}

    }
    Grid {
y:120
//anchors.fill: parent
    columns: 3
    spacing: 1
        Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AmbienB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"DiffuseB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"SpecularB";}}
    //Button{width:160

    Rectangle{width:160;height:20; id:ambientB; color:main.qmodel.ambientB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker3.visible=!colorpicker3.visible;
        colorpicker3.previousColor=colorpicker3.currentColor=main.qmodel.ambientB}    }
    }
        Rectangle{width:160;height:20; id: diffuseB; color:main.qmodel.diffuseB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker4.visible=!colorpicker4.visible;
        colorpicker4.previousColor=colorpicker4.currentColor=main.qmodel.diffuseB}    }
    }
        Rectangle{width:160;height:20; id: specularB; color:main.qmodel.specularB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker5.visible=!colorpicker5.visible;
        colorpicker5.previousColor=colorpicker5.currentColor=main.qmodel.specularB}    }
    }
     Label{text:"ShininessB"}
   Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:main.qmodel.shininessB
   onTextChanged:{ main.qmodel.shininessB= parseInt(text)           }}}


}
}
}
/*	Image{y:20
	width:256
	height:256
	source:mainQModelTexture2D.main.qmodel.qtimage
	}
	Rectangle{  color: "transparent"; width: 160;height:20;Label {text:"useDisplayList"}}
	Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:main.main.qmodel.useDisplayList}}


	Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
	Label {text:"BoundingBox"}
	RowLayout{TextField {text:main.main.qmodel.boundMin.x} TextField {text:main.main.qmodel.boundMin.y} TextField {text:main.main.qmodel.boundMin.z}   }
	RowLayout{TextField {text:main.main.qmodel.boundMax.y} TextField {text:main.main.qmodel.boundMax.y} TextField {text:main.main.qmodel.boundMax.z}   }
	}}*/
	}}}}
