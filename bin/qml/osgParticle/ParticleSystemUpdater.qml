import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0

import "../.."
import ".."
FocusScope {
  onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
}
  width: 320
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

            /////CLASSIC PART TO END/////////////////////////////////////////////////////
            ColumnLayout {
                id: classmain
                objectName: "osgParticle_ParticleSystemUpdaterQQQ"
                property var osgParticle_ParticleSystemUpdater  //QQModel

                y: 75

                ListView {

                   // anchors.left: parent.left
               // anchors.right: parent.right
                
                   // y: 100
                   width: 400
                    height: 200
                    model: classmain.osgParticle_ParticleSystemUpdater.children
                    delegate: Rectangle {
                        property int m_iIndex: model.index
                        id: caseDrawable
                        height: 25
// anchors.fill: parent 
 anchors.leftMargin:5
                        width: parent.width-10
                        color: "red"
                        MouseArea {

                            anchors.fill: parent

                            onDoubleClicked: {
                                console.log(model)

                                console.log(parent.m_iIndex)
                                classmain.osgParticle_ParticleSystemUpdater.childSelected(
                                            parent.m_iIndex)

                                //soft way to maintain child preview
       pmocjs.osg_Node_removed.connect(
                                classmain.osgParticle_ParticleSystemUpdater.childrenChanged)
                                //pmocjs.osg_Node_removed.connect(classmain.osgParticle_ParticleSystemUpdater.childrenChanged);
                                //pmocjs.osg_Node_added.connect(classmain.osgParticle_ParticleSystemUpdater.childAdded);
                                //pmocjs.osg_Node_removed.connect(classmain.osgParticle_ParticleSystemUpdater.childrenChanged);
                                pmocjs.osg_Node_added.connect(
                                            classmain.osgParticle_ParticleSystemUpdater.childAdded)
                            }
                            Grid {
                                columns: 2
                                width: 200
                                id: layout
                                anchors.fill: parent

                                Label {
                                    text: model.type
                                }
                                TextEdit {

                                    text: model.name
                                    onTextChanged: {
                                        model.name = text
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

