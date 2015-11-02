import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0
import ".."

FocusScope {
    width: 320
    height: 300
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


    /*     function getChildByObjectName(obj, name)
{
    if (obj.objectName == name)
        return obj
               for (var idx in obj.children)
        {
            var f = getChildByObjectName(obj.children[idx], name)
                    if (f)
                        return f
            }
    return 0
}
property var objtest
Component.onCompleted:
{
    if (objtest)
        objtest.parent = null
                         var naming = "StateSet"
                                      gc ()
                                      globalEditor.clearComponentCache()

                                      var component = Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
                                              naming = "osg/StateSet"

                                                      var qmlnaming = naming.replace("/", "_")+"QQQ"
                                                              naming =naming.replace("/","::")
                                                                      //var cl=globalEditor.getClassByName(naming)
                                                                      // console.log(cl)
                                                                      if (component.status == Component.Ready)
        {
            objtest = component.createObject(main)
                      component=null
                                console.log("Qt.qsdqsdqsd(obj)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
                                console.log(Component.url)
                                console.log(getChildByObjectName(objtest, "osg_StateSetQQQ"))

                                var injection=getChildByObjectName(objtest,qmlnaming)
                                              naming= "Object"
                                                      var injectparent=injection.parent
                                                              component=Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
                                                                      naming = "osg/Object"

                                                                              qmlnaming = naming.replace("/", "_")+"QQQ"
                                                                                      naming =naming.replace("/","::")
                                                                                              if (component.status == Component.Ready)
            {
                var objtest2 = component.createObject()
                               component=null
                                         var injection2=getChildByObjectName(objtest2,qmlnaming)
                                                        //injection2.parent.children.clear()
                                                        injection2.parent=injectparent
                                                                injection.parent=injection2
                                                                        objtest2.parent=null
            }* /

            //obj.setProperty
            ///globalEditor.connect2view(qmod,obj)
        }
        else


*/ Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10

        color: "yellow"

        anchors.fill: parent
        id: rectangle
        //focus: true
        Keys.onPressed: {
            console.log("Geode")
            //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing Usefull)
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
            onClicked: if (mouse.button != Qt.RightButton)
                           globalEditor.setOperand(main.qmodel)

            /////CLASSIC PART TO END
            Column {
                Component.onDestruction: {
                    addgrp.iconSource = '' ///memory leak in qml engine: force unload icon
                }
                y: 75
                objectName: "osg_GroupQQQ"
                id: obj
                property var osg_Group


                // //QQModel
                Button {
text:'addQuad'
                    id: addgrp
                    height: 25
                    onClicked:obj.osg_Group.addTexturedQuad();
                }
                Button {


                    height: 25
                    // width: layout.width
                    text: "add Node From File"
                    iconSource: 'qrc:/content/openbutton.png'
                    onClicked: {
                        /*   console.log(JSON.stringify(  (obj.osg_Group.undoActions))) var l = String()
                        (obj.osg_Group.undoActions[0])))
              console.log(obj.osg_Group.undoActions[0])
        console.log(obj.osg_Group.undoActions)
              console.log(main.children[0])*/
                        fileDialog.visible = true
                    }
                }
                FileDialog {
                    modality: Qt.ApplicationModal
                    nameFilters: ["osg File(*.osgt *.osgb)", "All files (*)"]
                    visible: false
                    id: fileDialog
                    title: "Please choose a file"
                    onAccepted: obj.osg_Group.addChildFromFile(
                                    fileDialog.fileUrls[0])
                    onRejected: {
                        console.log("Canceled")
                        //Qt.quit()
                    }
                }

                Column {
                    y: 30

                    ScrollView {
                        height: 75
                        //anchors.fill: parent
                        ListView {
                            //	z:-100
                            model: obj.osg_Group.children
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
                                        obj.osg_Group.childSelected(
                                                    parent.m_iIndex)
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
                }
            }
        }
    }
}
