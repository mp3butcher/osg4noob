import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."

FocusScope {
    width: 320
    height: 400
    id: main //FocusScope For keyboard events
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
    //  x: 400
    //    y: 50
    property var qmodel
    signal //: osg_Geode //QQModel
    attributeselected(int index)
    signal uniformselected(int index)
    signal texattributeselected(int index)

        Rectangle {
            border.color: "black"
            border.width: 3
            radius: 10

            color: "#90d276"

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


                /////CLASSIC PART TO END
                Column {
                    y: 75
                    objectName: "osg_StateSetQQQ"
                    id: obj
                    property var osg_StateSet

                    // //QQModel
                    GroupBox {

                        //y:200
                        //height:150
                        // width: 120
                        title: "StateSet"
                        Grid {
                            columns: 2
                            width: 200

                            //height:50
                            anchors.fill: parent
                            /* Label { font.pointSize: 14
                                                            text: "rendering Hint"
                                                                                                    }*/
                            ComboBox {
                                objectName: "renderingHintBox2Hack"
                                model: ["DEFAULT", "OPAQUE", "TRANSPARENT"]
                                currentIndex: obj.osg_StateSet.renderingHint
                                width: 200

                                onCurrentIndexChanged: {
                                    console.log("Rendereing Hint" + currentIndex)
                                  if(  obj.osg_StateSet.renderingHint != currentIndex)  obj.osg_StateSet.renderingHint = currentIndex
                                    //currentIndex=obj.osg_StateSet.renderingHint;
                                }
                            }
                        }

                        Column {
                            y: 30
                            Label {
                                text: "stateattribs"
                            }
                            ScrollView {
                                height: 75
                                //anchors.fill: parent
                                ListView {
                                    //	z:-100
                                    model: obj.osg_StateSet.stateAttribs
                                    delegate: Rectangle {
                                        property int m_iIndex: model.index
                                        height: 25
                                        width: 120
                                        color: "yellow"
                                        //z:-100
                                        MouseArea {

                                            anchors.fill: parent

                                            onDoubleClicked: {

                                                //soft way to maintain child preview
                                                console.log(parent.m_iIndex)

                                                obj.osg_StateSet.  popStateAttribute(parent.m_iIndex)
                                               // main.attributeselected(parent.m_iIndex)
                                            }
                                            Grid {
                                                columns: 2
                                                // id: layout
                                                anchors.fill: parent
                                                Text {
                                                    text: model.name //;onTextChanged:{model.name=text}
                                                }
                                                ///model.modelData.name(for unwatched list)
                                                Text {
                                                    text: ":" + model.type
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            Label {
                                text: "texstateattribs"
                            }
                            ScrollView {
                                height: 75
                                //anchors.fill: parent
                                ListView {
                                    //	z:-100
                                    model: obj.osg_StateSet.texstateAttribs
                                    delegate: Rectangle {
                                        property int m_iIndex: model.index
                                        height: 25
                                        width: 120
                                        color: "yellow"
                                        //z:-100
                                        MouseArea {

                                            anchors.fill: parent

                                            onDoubleClicked: {

                                                //soft way to maintain child preview
                                                console.log(parent.m_iIndex)
                                                obj.osg_StateSet.  popTextureStateAttribute(parent.m_iIndex)
                                             //   main.texattributeselected(parent.m_iIndex)
                                            }
                                            Grid {
                                                columns: 2
                                                //width:200
                                                //  id: layout
                                                anchors.fill: parent
                                                Text {
                                                    text: model.name //;onTextChanged:{model.name=text}
                                                }
                                                ///model.modelData.name(for unwatched list)
                                                Text {
                                                    text: ":" + model.type
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            Label {
                                text: "uniforms"
                            }
                            ScrollView {
                                height: 75
                                //anchors.fill: parent
                                ListView {
                                    //	z:-100
                                    model: obj.osg_StateSet.uniformsList
                                    delegate: Rectangle {
                                        property int m_iIndex: model.index
                                        height: 25
                                        width: 120
                                        color: "yellow"
                                        //z:-100
                                        MouseArea {

                                            anchors.fill: parent

                                            onDoubleClicked: {

                                                //soft way to maintain child preview
                                                console.log(parent.m_iIndex)

                                                obj.osg_StateSet.  popUniform(parent.m_iIndex)
                                                //main.uniformselected( parent.m_iIndex)
                                            }
                                            Grid {
                                                columns: 2
                                                id: layout
                                                anchors.fill: parent
                                                Text {
                                                    text: model.name //;onTextChanged:{model.name=text}
                                                }
                                                ///model.modelData.name(for unwatched list)
                                                Text {
                                                    text: ":" + model.type
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            Label {
                                text: "modelist"
                            }
                            Row{
                                TextField{
                                    id:modename
                                    text:'glenum'

                                }

                                TextField{
                                    id:modestate
                                    text:'0'

                                }

                                TextField{
                                    id:modeoverride
                                    text:'0'

                                }
                                Button{
                                    text:'setMode'
                                    onClicked:{ obj.osg_StateSet.setMode(modename.text,parseInt(modestate.text)==1,parseInt(modeoverride.text)==1);obj.osg_StateSet.updateModel()}
                                }

                            }

                            ScrollView {
                                height: 75
                                //anchors.fill: parent
                                ListView {
                                    //	z:-100
                                    model: obj.osg_StateSet.modeList
                                    delegate: Rectangle {
                                        property int m_iIndex: model.index
                                        height: 25
                                        width: 120
                                        color: "yellow"
                                        //z:-100
                                        MouseArea {

                                            anchors.fill: parent

                                            onDoubleClicked: {

                                                //soft way to maintain child preview
                                                console.log(parent.m_iIndex)
                                                obj.osg_StateSet.  popUniform(parent.m_iIndex)
                                                main.uniformselected(
                                                            parent.m_iIndex)
                                            }
                                            Grid {
                                                columns: 2
                                                anchors.fill: parent
                                                Text {
                                                    text: model.name //;onTextChanged:{model.name=text}
                                                }
                                                ///model.modelData.name(for unwatched list)
                                                Text {
                                                    text: ":" + model.type
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
        }
    }

