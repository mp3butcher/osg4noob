import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import pmoc.osg 1.0


import ".."

FocusScope {
    width: 320
    height: 450
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
            globalEditor.clearComponentCache()

         var component = Qt.createComponent(Qt.resolvedUrl(naming + ".qml"))
         naming = "osg/StateSet"

         var qmlnaming = naming.replace("/", "_")+"QQQ"
         naming =naming.replace("/","::")
         //var cl=globalEditor.getClassByName(naming)
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
             ///globalEditor.connect2view(qmod,obj)
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
            id: pmocmousearea
            anchors.fill: parent
            acceptedButtons: Qt.AllButtons
            drag.target: main
            drag.axis: Drag.XandYAxis
            onClicked: if (mouse.button != Qt.RightButton)
                           globalEditor.setOperand(main.qmodel)



                    Column {  onOsg_CameraChanged:   {///HACK (ComboBox index not updated automatiquelly)
                            renderTargetImplementation.currentIndex=obj.osg_Camera.renderTargetImplementation
                            renderBin.currentIndex=obj.osg_Camera.renderBin
                              referenceFrame.currentIndex=obj.osg_Camera.referenceFrame


                         }
y:75
                        id: obj
                        objectName: "osg_CameraQQQ"
                        property var osg_Camera
                        //QQModel
x: 9
                        Grid{
                            columns:2
                          //  rows:4
                            id: layout
                            //anchors.fill: parent
                            Label{
                                width: 96
                                height: 25
                                verticalAlignment: Text.AlignVCenter
                                //  font.pointSize: 14
                                //textFormat: Text.PlainText
                                text: "renderImpl:"
                                //obj.osg_Object.type
                            }
                            ComboBox {

                                id: renderTargetImplementation
                            model: ["FRAME_BUFFER_OBJECT", "PIXEL_BUFFER_RTT", "PIXEL_BUFFER","FRAME_BUFFER","SEPARATE_WINDOW"]
                            currentIndex: obj.osg_Camera.renderTargetImplementation
                            width: 200
                            //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                            onCurrentIndexChanged: {
                                console.log(currentIndex)
                               obj.osg_Camera.renderTargetImplementation = currentIndex

                            }

                            }
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

                                id: referenceFrame
                            model: ["RELEATIVE" ,"ABSOLUTE", "ABSOLUTE_RF_INHERIT_VIEWPOINT"]
                            currentIndex: obj.osg_Camera.referenceFrame
                            width: 200
                            //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                            onCurrentIndexChanged: {
                                console.log(currentIndex)
                               obj.osg_Camera.referenceFrame = currentIndex

                            }


                            }
                            Label{
                                width: 96
                                height: 25
                                verticalAlignment: Text.AlignVCenter
                                //  font.pointSize: 14
                                //textFormat: Text.PlainText
                                text: "allowfocus:"
                                //obj.osg_Object.type
                            }
                      CheckBox {
                                checked:obj.osg_Camera.AllowEventFocus
onCheckedChanged:obj.osg_Camera.AllowEventFocus = checked

                            }

                        Label{
                            width: 96
                            height: 25
                            verticalAlignment: Text.AlignVCenter
                            //  font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "renderBin:"
                            //obj.osg_Object.type
                        }
                        ComboBox {

                            id: renderBin
                        model: ["PRE_RENDER", "POST_RENDER", "NESTED_RENDER"]
                        currentIndex: obj.osg_Camera.renderBin
                        width: 200
                        //     enabled: (currentIndex==0)//(obj. osg_Shader.shaderType == 0)
                        onCurrentIndexChanged: {
                            console.log(currentIndex)
                           obj.osg_Camera.renderBin = currentIndex

                        }

                        }
                        Label{
                            width: 96
                            height: 25
                            verticalAlignment: Text.AlignVCenter
                            //  font.pointSize: 14
                            //textFormat: Text.PlainText
                            text: "renderOrder:"
                            //obj.osg_Object.type
                        }
                        TextField{
                            width: 200
                            height: 25
                            verticalAlignment: Text.AlignVCenter
                            //  font.pointSize: 14
                            //textFormat: Text.PlainText
                            text:  obj.osg_Camera.renderOrder
                            //obj.osg_Object.type
                        }

                    }
                        ScrollView {
                            height: 75
                            //anchors.fill: parent
                            ListView {
                                //	z:-100
                                model: obj.osg_Camera.bufferAttachments
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
                                            obj.osg_Camera.attachmentSelected(
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
                    Button{
                        text:'setOrthoProj'
                        onClicked:{
                            var osg_Group=obj.parent.osg_Group;
osg_Group=pmocmousearea.children[0].osg_Group;
                            var menu=pmocmousearea.children[pmocmousearea.children.length-1]

             //osg_Group.getNumChildren());
                       /* var v4=globalEditor.createInstance('osg::Vec4f')
                            var m4=globalEditor.createInstance('osg::Matrixf')
                           //
                             v4.x=1;v4.y=1;v4.z=0;v4.w=1;
                           obj.osg_Camera.setClearColor(v4);    obj.osg_Camera.setViewport(0,1024,0,1024);          //  obj.osg_Camera.getClearMask(1000);
                             console.log(v4)
                            obj.osg_Camera.setProjectionMatrixAsOrtho2D(0,1024,0,1024)
                            obj.osg_Camera.setViewMatrix(m4)*/

                        }
                    }
            }
        }
}

