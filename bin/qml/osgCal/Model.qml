import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import QtQuick.Dialogs 1.0

 import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."

FocusScope {
  onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
}

  width: 320
            height: 300
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    //  x: 400
    //    y: 50
    id: main //FocusScope For keyboard events
    property var qmodel

    signal drawableselected(int index)

        Rectangle {
            border.color: "black"
            border.width: 3
            radius: 10

            color: "yellow"
             anchors.fill:parent
            id: rectangle
            //focus: true
            Keys.onPressed: {
                console.log("Geode")
                //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
                if ((event.key == Qt.Key_C)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("copy")
                    globalEditor.setCopyOperand(main.qmodel)
                    event.accepted = true
                }
                if ((event.key == Qt.Key_X)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("cut")
                    globalEditor.setCopyOperand(main.qmodel)
                    subjectrequired(
                                ) //send a signal (this should be connected with parent (a osg::group or subclass)
                    event.accepted = true
                }
                if ((event.key == Qt.Key_V)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("paste")
                    globalEditor.realPaste()
                    event.accepted = true
                }
            }

            /////////// main class hierarchy apparence///////////////////////

            ///CLASSIC PART TOO BEGIN
            MouseArea {
                objectName: 'pmocmousearea'
                anchors.fill: parent
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

                    if (mouse.button == Qt.RightButton)
                        uaContextMenu.popup()
                    else {
                        console.log("selected")
                        main.focus = true
                        globalEditor.setOperand(main.qmodel)
                    }
                }

            /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
     
/////////////////////////////////END CLASSIC//////////////////////////////////////////////
            
   GroupBox {
title:"Cal3d Model Properties"


id:classmain
objectName: "osgCal_ModelQQQ"
property var osgCal_Model //QQModel 

ColumnLayout{

           

	//style
	 
//	opacity:1.0
   // color: "orange"

Row{
Label {text:"CoreModel FileName"}
TextField {text:classmain.osgCal_Model.cal3dfilename;} 

 }
   



	Grid {

//anchors.fill: parent
	columns: 2
	spacing: 1
    id: grid
   
    
	 
	Button{
    iconSource :'../../content/openbutton.png'
text:"Select a CoreModel"
   onClicked :fileDialog.visible=true;//qmodel.filename
   
   FileDialog {
     nameFilters: [ "Cal3D files (*.cfg )", "All files (*)" ]
    visible:false
    id: fileDialog
    title: "Please choose a file"
    onAccepted: {
        console.log("You chose: " + fileDialog.fileUrls)
        classmain.osgCal_Model.setCal3DFile(fileDialog.fileUrls[0])
        //setCal3DFile
    }
    onRejected: {
        console.log("Canceled")
        Qt.quit()
    }
    Component.onCompleted: visible = false
}
    }
}

}
	}
}}

}
