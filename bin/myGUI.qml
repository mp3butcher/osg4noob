import QtQuick 2.1
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.0
//import QtQuick.Layouts.ToolBarLayout 2.0
import QtQuick.Controls.Styles 1.0
import osgQtQuick 1.0

import QtQml 2.0
 
import QtQuick.Dialogs 1.0

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
//import *
Rectangle {

    id: screen
    width: 800
    height: 600
    color: "transparent"


    OSGViewport {
property var qmodel;
Rectangle {

color:"green";
    id: overl
    width: 400
    height: 600
Treetest{
id:nodetreeview
}
}
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
ListView {
width: 100; height: 250
model: myModel
delegate: Text { text: "Animal:  " + name }
}
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
    focus: true

        id: fullview
        anchors.fill: parent
        //sceneData: simulation

        //   color: "blue"
        //   opacity: 0.999
        mode: OSGViewport.Native //Buffer //
 
    }

}
