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
                                      pmocjs.clearComponentCache()

                                      var component = Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
                                              naming = "osg/StateSet"

                                                      var qmlnaming = naming.replace("/", "_")+"QQQ"
                                                              naming =naming.replace("/","::")
                                                                      //var cl=pmocjs.getClassByName(naming)
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
            ///pmocjs.connect2view(qmod,obj)
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
              onOsg_CullSettingsChanged: computeNearFarMode.currentIndex= obj.osg_CullSettings.computeNearFarMode
                y: 220
                objectName: "osg_CullSettingsQQQ"
                id: obj
                property var osg_CullSettings


                // //QQModel

Grid{
    columns:2
                Label{
                    width: 96
                    height: 25
                    verticalAlignment: Text.AlignVCenter
                    //  font.pointSize: 14
                    //textFormat: Text.PlainText
                    text: "referenceFrame:"
                    //obj.osg_Object.type
                }
                ComboBox {

                    id: computeNearFarMode
                model: ["DO_NOT_COMPUTE_NEAR_FAR","COMPUTE_NEAR_FAR_USING_BOUNDING_VOLUMES","COMPUTE_NEAR_FAR_USING_PRIMITIVES","COMPUTE_NEAR_USING_PRIMITIVES"]
                currentIndex: obj.osg_CullSettings.computeNearFarMode
                width: 200
                //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                onCurrentIndexChanged: {
                    console.log(currentIndex)
                   obj.osg_CullSettings.computeNearFarMode = currentIndex

                }
                }
}

            }
        }
    }
}
