import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import "../.."

FocusScope {

    PropertyAnimation on x {
        to: 400
    }
    PropertyAnimation on y {
        to: 50
    }
    //  x: 400
    //    y: 50
    id: main //FocusScope For keyboard events
    property var qmodel
    signal //: osg_Geode //QQModel
    subjectrequired
    signal //signal for Cut action (this should be connected with parent QQModel (in parent's connect2view )
    drawableselected(int index)

    ColumnLayout {
        Rectangle {
            width: 256
            height: 100
            border.color: "black"
            border.width: 3
            radius: 10
            color: "grey"
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
                anchors.fill: parent
                objectName: 'pmocmousearea'

                //    hoverEnabled: true
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

                    if (mouse.button != Qt.RightButton)
                       {
                        console.log("selected")
                        main.focus = true
                        pmocjs.setOperand(main.qmodel)
                    }
                }


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
                Column  {

                    id: obj
                    objectName: "osgUtil_OptimizerQQQ"
                    property var osgUtil_Optimizer
                  //  anchors.fill: parent
                    Column  {
                        //anchors.fill: parent
                        Grid {
                            id: grid1

                        //     width: childrenRect.width
                         //          height: childrenRect.height
                        columns: 2

                                       Label {
                                           width: 100
                                           height: 25
                                           //  font.pointSize: 14
                                           //textFormat: Text.PlainText
                                           text: "classname"
                                          // anchors.left: parent.left
                                          // anchors.leftMargin: 0
                                           //obj.osg_Object.type
                                       }
                                       Label {

                                           width: 178
                                           height: 25


                                           text: "osgUtil::Optimizer"





                                       }
                    }
                    Grid {

                        //     width: childrenRect.width
                         //          height: childrenRect.height
                        columns: 2
                                       Label {
                                           width: 51
                                           height: 25
                                           //  font.pointSize: 14
                                           //textFormat: Text.PlainText
                                           text: "options"
                                           //obj.osg_Object.type
                                       }
                                       ComboBox {
                                           width: 178
                                           objectName: "shadertypeComboBox2Hack"
                                           id: typeshader

                                           model:[
                                               "FLATTEN_STATIC_TRANSFORMS", "REMOVE_REDUNDANT_NODES", "REMOVE_LOADED_PROXY_NODES ", "COMBINE_ADJACENT_LODS",
                                               "SHARE_DUPLICATE_STATE", "MERGE_GEOMETRY", "CHECK_GEOMETRY","MAKE_FAST_GEOMETRY",
                                               "SPATIALIZE_GROUPS", "COPY_SHARED_NODES", "TRISTRIP_GEOMETRY", "TESSELLATE_GEOMETRY",
                                               "OPTIMIZE_TEXTURE_SETTINGS", "MERGE_GEODES", "FLATTEN_BILLBOARDS", "TEXTURE_ATLAS_BUILDER",
                                               "STATIC_OBJECT_DETECTION", "FLATTEN_STATIC_TRANSFORMS_DUPLICATING_SHARED_SUBGRAPHS", "INDEX_MESH", "VERTEX_POSTTRANSFORM",
                                               "VERTEX_PRETRANSFORM", "DEFAULT_OPTIMIZATIONS", "ALL_OPTIMIZATIONS"]
                                           currentIndex: obj.osgUtil_Optimizer.modes

                                           //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                                           onCurrentIndexChanged: {
                                               console.log(currentIndex)
                                            obj.osgUtil_Optimizer.modes = currentIndex

                                           }
                                       }

                                   }

                    //QQModel

                    //  width: parent.width-10
                    //    height: 240
                    //     opacity: 1.0
                    //     color: "orange"
                    //	x:300
                    //  y: 50
                    //x:5

                }
            }
        }
        }
    }
}
