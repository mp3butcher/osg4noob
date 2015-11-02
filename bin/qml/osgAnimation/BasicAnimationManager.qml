import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick 2.1


//import osg_GeodeQQQ_QModel 1.0 //avoid the use of signal but do shit with polymorphic father
import ".."

FocusScope {
    width: 320
    height: 500
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }

    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    id: main
    property var qmodel

    //this
    ColumnLayout {
        anchors.fill: parent
        Rectangle {
            // main rectangle
            id: rectangle
            border.color: "black"
            border.width: 3
            radius: 10
            color: "cyan"
            anchors.fill: parent
            /////CLASSIC PART BEGIN/////////////////////////////////////////////////////
            MouseArea {
                objectName: 'pmocmousearea' ///PMOC MANDATORY MouseArea

                anchors.fill: parent
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: if (mouse.button == Qt.LeftButton)
                               globalEditor.setOperand(main.qmodel)

                ////////////////////////////////CLASSIC PART TO END/////////////////////////////////////////////////
                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////

                //QQModel
                Column {
                    y: 75
                    objectName: "osgAnimation_BasicAnimationManagerQQQ"
                    property var osgAnimation_BasicAnimationManager
                    id: obj
Label{
 text: "playinganimation"
}
                    TextField{
    id:playing
    text:"0"
    onAccepted:{  console.log(parseInt(playing.text))
        obj.osgAnimation_BasicAnimationManager.playAnimation(parseInt(playing.text))
    }
}


                }
            }
        }
    }
}
