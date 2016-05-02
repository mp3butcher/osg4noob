import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


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


    /*  function getChildByObjectName(obj, name) {
         if (obj.objectName == name)
             return obj
         for (var idx in obj.children) {
             var f = getChildByObjectName(obj.children[idx], name)
             if (f)
                 return f
         }
         return 0
     }
     property var objtest
     Component.onCompleted: {
         if (objtest)
             objtest.parent = null
         var naming = "StateSet"
          gc ()
            pmocjs.clearComponentCache()

         var component = Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
         naming = "osg/StateSet"

         var qmlnaming = naming.replace("/", "_")+"QQQ"
         naming =naming.replace("/","::")
         //var cl=pmocjs.getClassByName(naming)
        // console.log(cl)
      if (component.status == Component.Ready) {
             objtest = component.createObject(main)
             component=null
             console.log("Qt.qsdqsdqsd(obj)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
             console.log(Component.url)
             console.log(getChildByObjectName(objtest, "osg_StateSetQQQ"))

        /*  var injection=getChildByObjectName(objtest,qmlnaming)
             naming= "Object"
             var injectparent=injection.parent
             component=Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
             naming = "osg/Object"

             qmlnaming = naming.replace("/", "_")+"QQQ"
             naming =naming.replace("/","::")
             if (component.status == Component.Ready) {
                 var objtest2 = component.createObject()
                 component=null
                 var injection2=getChildByObjectName(objtest2,qmlnaming)
                //injection2.parent.children.clear()
                 injection2.parent=injectparent
                 injection.parent=injection2
                  objtest2.parent=null
             }* /

             //obj.setProperty
             ///pmocjs.connect2view(qmod,obj)
         } else
             console.log(component.errorString())
         component=null
         //objtest.parent = main
     }*/

    Rectangle {
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



                    Column {
y:75
                        id: obj
                        objectName: "osg_NodeQQQ"
                        property var osg_Node
                        //QQModel
x: 9
                        Grid{
                            columns:2
                         //   rows:1
                            id: layout
                            //anchors.fill: parent
                        Label{
                            width: 96
                            height: 25
                            verticalAlignment: Text.AlignVCenter
                            //  font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "NodeMask:"
                            //obj.osg_Object.type
                        }
                        TextField {
verticalAlignment: Text.AlignVCenter
                            width: 178
                            height: 25

                                text:obj.osg_Node.nodeMask
                                onAccepted:obj.osg_Node.nodeMask=text
                            }
                        Label{
                            width: 96
                            height: 25
                            verticalAlignment: Text.AlignVCenter
                            //  font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "cullingActive:"
                            //obj.osg_Object.type
                        }
                  CheckBox {
                            checked:obj.osg_Node.CullingActive
  onCheckedChanged:obj.osg_Node.CullingActive = checked

                        }

                        }

                    }
                }
            }
        }


