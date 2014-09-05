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
Rectangle{


        
         
// Anchored to 20px off the top left corner of the parent 
/*anchor make this staticallly linked to parent(so no anchors on main
anchors.left: parent.left; 

	anchors.top : parent.top; 
	anchors.margins : parent.width/100; */
//width:100;
height:parent.height/10
 width:parent.width/10;//
color:"green";
id:pate
  MouseArea {

            anchors.fill: parent
            hoverEnabled: true

            acceptedButtons: Qt.RightButton

            drag.target: pate
            drag.axis: Drag.XandYAxis
}
}

///model : group_selectable;
Menu {
id:menu1 
    title: "Node"

    MenuItem {
        text: "Add_osg_Geode"
        shortcut: "Ctrl+X"
        onTriggered: console.log("kaka");
    }
 MenuItem {
        text: "Paste"
        shortcut: "Ctrl+X"
        onTriggered: console.log("kaka");
    }
}

Menu {
id:menu2
    title: "Edit"

    MenuItem {
        text: "Cut"
        shortcut: "Ctrl+X"
        onTriggered: console.log("kaka");
    }
 MenuItem {
        text: "Paste"
        shortcut: "Ctrl+X"
        onTriggered: console.log("kaka");
    }
}

 ToolBar {
     id: toolbar
     anchors.top: parent.top
       Row { 
 anchors.centerIn: parent
         spacing: parent.width/6
        Button {
    //         iconSource: "toolbar-back"
//activeFocusOnPress:true
text:"fok"
menu:menu1

         }
         // add the standard menu button to the toolbar
        Button {
          //   iconSource: "toolbar-menu"
            // onClicked: mainMenu.open()
text:"fok2"
menu:menu2
         }
Button {
          //   iconSource: "toolbar-menu"
            // onClicked: mainMenu.open()
text:"fok2"
menu:menu1
         }
Button {
          //   iconSource: "toolbar-menu"
            // onClicked: mainMenu.open()
text:"fok2"
menu:menu1
         }
     }
 }
   
    OSGViewport {
        focus: true
        id: fullview
        anchors.fill: parent
        //sceneData: simulation

        //   color: "blue"
        //   opacity: 0.999
        mode: OSGViewport.Native //Buffer //
        /*onWindowChanged:{
                        screen.width=fullview.width
                                                screen.height=fullview.height
                                                                                }*/
    }

}
