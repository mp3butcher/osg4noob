import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0
//import QtQuick.Layouts.ToolBarLayout 2.0
import QtQuick.Controls.Styles 1.0
import osgQtQuick 1.0

import QtQml 2.0

import QtQuick.Dialogs 1.0
import QtQuick.Window 2.1

/*
FileDialog {
    id: fileDialog
    title: "Please choose a file"
    onAccepted: {
        console.log("You chose: " + fileDialog.fileUrls)
        Qt.quit()
    }
    onRejected: {
        console.log("Canceled")
        Qt.quit()
    }
    Component.onCompleted: visible = true
}*/

//import "dockbar"

Rectangle {
/*
Fireball{
x:250
y:250
id:particlesystem
}*/
//signal drawableselected (int index)
signal nodeselected(string msg)

/*
Window{
x:0
y:0
  width: 800
    height: 100
title : "ComponentEdit"
visible:true


TextArea{
width:parent.width-20
height:parent.height
}
}*/

    id: screen
    width: 800
    height: 600
    color: "transparent"

    //FocusScope needs to bind to visual properties of the children
/*    property alias color: fullview.color
    x: fullview.x; y: fullview.y
    width: fullview.width; height: fullview.height*/


    OSGViewport {
focus:true
/*Rectangle {

color:"green";
    id: overl
y:50
    width: 400
    height: 600*/
Treetest{
id:nodetreeview

}
//}
Rectangle{
// Anchored to 20px off the top left corner of the parent
/*anchor make this staticallly linked to parent(so no anchors on main
anchors.left: parent.left;

	anchors.top : parent.top;
	anchors.margins : parent.width/100; */
//width:100;

anchors.left : parent.right;//tu sors
 width:100;//sizing perc of parent
color:"green";
id:pate
 Column{
Rectangle{
id:b1
/*ListView {
width: 100; height: 250
model: myModel
delegate: Text { text: "Animal:  " + name }
}*/
color:"blue"
// Anchored to 20px off the top left corner of the parent

/*anchor make this staticallly linked to parent(so no anchors on main
anchors.left: parent.left;

	anchors.top : parent.top;
	anchors.margins : parent.width/100;
height:parent.height/2; //standard inharitage: divide heighth by number of subclasses
width:parent.width/2; //multiple inheritage:divide width by numparents*/
width:100; //multiple inheritage:divide width by numparents
height:100;
}
Rectangle{
id:b2
color:"red"
// Anchored to 20px off the top left corner of the parent
/*anchor make this staticallly linked to parent(so no anchors on main
anchors.left: parent.left;

	anchors.top : parent.top;
	anchors.margins : parent.width/100;
height:parent.height/2; //standard inharitage: divide heighth by number of subclasses*/
width:100; //multiple inheritage:divide width by numparents
height:100;
}
}
implicitHeight:b1.height+b2.height //sizing perc parent

  MouseArea {

            anchors.fill: parent
            hoverEnabled: true

            acceptedButtons: Qt.RightButton

            drag.target: pate
            drag.axis: Drag.XandYAxis
}
}
///model : group_selectable;
 //  focus: true
/*
Keys.onPressed: {  console.log("keyfrom fullview");
         if (event.key == Qt.Key_V && event.modifier==Qt.ControlModifier) {
             console.log("keyfrom fullview");

         }
 event.accepted = false;
     }*/
        anchors.centerIn: parent

        anchors.fill: parent
        //sceneData: simulation

        //   color: "blue"
        //   opacity: 0.999
        mode: OSGViewport.Native //Buffer //
// FocusScope {
// id:scope
     id: fullview

//MouseArea{  anchors.fill: parent;onClicked: { console.log("fok");fullview.focus = true;}}
    }//}

}
