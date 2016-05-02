import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


import QtQuick.Dialogs 1.0
import QtQuick 2.1



 import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import "../.."

import ".."

FocusScope {
  onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
}
  width: 350
            height: 200
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
                    pmocjs.setCopyOperand(main.qmodel)
                    event.accepted = true
                }
                if ((event.key == Qt.Key_X)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("cut")
                    pmocjs.setCopyOperand(main.qmodel)
                    subjectrequired(
                                ) //send a signal (this should be connected with parent (a osg::group or subclass)
                    event.accepted = true
                }
                if ((event.key == Qt.Key_V)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("paste")
                    pmocjs.realPaste()
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
                        pmocjs.setOperand(main.qmodel)
                    }
                }

/////////////////////////////////END CLASSIC//////////////////////////////////////////////

Column{
y:100 //fok parentsizing
	width: childrenRect.width  
        height: childrenRect.height 
     id: obj
     objectName: "osgParticle_RandomRateCounterQQQ"
     property var osgParticle_RandomRateCounter
     
	
ColumnLayout{

           

	//style
	 
//	opacity:1.0
   // color: "orange"

Row{
Label {text:"Emission rate range"}
TextField {text:obj.osgParticle_RandomRateCounter.minRate;onTextChanged:obj.osgParticle_RandomRateCounter.minRate=parseInt(text)} 

TextField {text:obj.osgParticle_RandomRateCounter.maxRate;onTextChanged:obj.osgParticle_RandomRateCounter.maxRate=parseInt(text)} 

 }
   
}
	}
}}}
