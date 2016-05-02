import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import ".."

FocusScope {
    id: main //FocusScope For keyboard events

    property var qmodel
    signal shaderSelect(int index)

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



          Rectangle {
              border.color: "black"
              border.width: 3
              radius: 10

              color: "orange"
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

                /////CLASSIC PART TO END
                ///////////////////////////////////////////////////////////////////////////////////////////////////
                Column {
                    y: 75
                    objectName: "osg_ProgramQQQ"
                    property var osg_Program
                    id: obj

                  //  anchors.fill: parent
                    ScrollView {
                        height: 75
                        ListView {


                            //   width: 100;
                            anchors.fill: parent
                            model: main.qmodel.shaderlist
                            delegate: Rectangle {
                                property int m_iIndex: model.index
                                id: caseDrawable
                                height: 25
                                anchors.right: parent.right
                                anchors.left: parent.left
                                //   width: 100
                                color: "yellow" // model.color
                                MouseArea {

                                    anchors.fill: parent

                                    onDoubleClicked: {

                                        console.log(parent.m_iIndex)
                                        obj.osg_Program.popShader(parent.m_iIndex)
                                    }
                                    RowLayout {
                                        id: layout
                                        anchors.fill: parent
                                        Text {

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
                    Label{

                        text:"VertexAttribLocations"
                    }
                    Row{
                        Label{text:"name"}
                        TextField{
                            id:vname
                        }
                         Label{text:"index"}
                        TextField{
                            id:vindex

                        } }
                    Row{
                        Button{
                            text:"add"
                        onClicked: obj.osg_Program.addVertexAttribLocation(parseInt(vindex.text),vname.text)
                        }
                        Button{
                            text:"remove"
                            onClicked: obj.osg_Program.removeVertexAttribLocation(vname.text)
                        }
                    }

                    ScrollView {
                        height: 75
                        ListView {


                            //   width: 100;
                            anchors.fill: parent
                            model: main.qmodel.vertexAttribLocations
                            delegate: Rectangle {
                                property int m_iIndex: model.index

                                height: 25
                                anchors.right: parent.right
                                anchors.left: parent.left
                                //   width: 100
                                color: "yellow" // model.color
                                MouseArea {

                                    anchors.fill: parent

                                    onDoubleClicked: {

                                        console.log(parent.m_iIndex)

                                    }
                                    RowLayout {

                                        anchors.fill: parent
                                        Text {

                                            text: model.type
                                        }
                                        TextEdit {

                                            text: model.name

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
