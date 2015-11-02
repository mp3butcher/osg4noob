import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0

import ".."

FocusScope {
    width: 320
    height: 200
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
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
            color: "yellow"
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

                /////CLASSIC PART END/////////////////////////////////////////////////////
                Column {

                    id: obj
                    objectName: "osg_SphereQQQ" ///to link with Pmoc Class Box
                    property var osg_Sphere
                    y: 75 ///osg_Node Bottom


                                    Grid {

                                        columns: 2

                                        Label {
                                            text: "radius"
                                        }
                                        TextField {
                                            text: obj.osg_Sphere.Radius
                                            onAccepted:obj.osg_Sphere.Radius=parseFloat(text)
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

