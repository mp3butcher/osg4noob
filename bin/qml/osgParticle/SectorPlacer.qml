import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 450
    height: 300
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }

    Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10

        color: "orange"
        anchors.fill: parent
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing Usefull)
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
            onClicked: if (mouse.button != Qt.RightButton)
                           pmocjs.setOperand(main.qmodel)

/////////////////////////////////END CLASSIC//////////////////////////////////////////////

   GroupBox {
title:"Sector Placer Properties"
y:30
id:classmain
objectName: "osgParticle_SectorPlacerQQQ"
property var osgParticle_SectorPlacer //QQModel

Grid {

//     width: childrenRect.width
//          height: childrenRect.height
    columns: 2
    rows:2
    id: layout
    anchors.fill: parent

    Label {
        width: 110
        height: 25
        verticalAlignment: Text.AlignVCenter
        //  font.pointSize: 14
        //textFormat: Text.PlainText
       text:"RadiusRange"
        //obj.osg_Object.type
    }
    Row {
        TextField {
            text:classmain.osgParticle_SectorPlacer.minRadius.toFixed(3)
               onAccepted:classmain.osgParticle_SectorPlacer.minRadius=parseFloat(text)
        }
        TextField {
            text:classmain.osgParticle_SectorPlacer.maxRadius.toFixed(3)
               onAccepted:classmain.osgParticle_SectorPlacer.maxRadius=parseFloat(text)
        }

    }



    Label {
        width: 110
        height: 25
        verticalAlignment: Text.AlignVCenter
        //  font.pointSize: 14
        //textFormat: Text.PlainText
       text:"PhiRange"
        //obj.osg_Object.type
    }
    Row {
        TextField {
            text:classmain.osgParticle_SectorPlacer.minPhi.toFixed(3)
               onAccepted:classmain.osgParticle_SectorPlacer.minPhi=parseFloat(text)
        }
        TextField {
            text:classmain.osgParticle_SectorPlacer.maxPhi.toFixed(3)
               onAccepted:classmain.osgParticle_SectorPlacer.maxPhi=parseFloat(text)
        }

    }

}

}
}
}


    }
