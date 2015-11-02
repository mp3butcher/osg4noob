import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import ColorComponentsNode 1.0

import QtQuick 2.1

FocusScope {

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


    ColumnLayout {
        Rectangle {
           //  anchors.fill:parent
            id: rectangle


            border.color: "black"
            border.width: 3
            radius: 10
          //  anchors.fill: parent

            color: "orange"
                width: 512
             height: 256

            opacity: 1.0

            ///CLASSIC PART TOO BEGIN
            MouseArea {
                objectName: 'pmocmousearea'

                anchors.fill: parent
                //    hoverEnabled: true
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

                    if (mouse.button == Qt.RightButton)
                        uaContextMenu.popup()
                    else {
                        console.log("selected")
                        main.focus = true
                        globalEditor.setOperand(obj.osg_Material)
                    }
                }
                // onPressAndHold: uaContextMenu.popup()
                Menu {
                    id: uaContextMenu

                    MenuItem {
                        text: 'Copy'
                        shortcut: "Ctrl+C"
                        onTriggered: {
                            globalEditor.setCopyOperand(obj.osg_Material)
                        }
                    }
                    MenuItem {
                        text: 'Cut'
                        shortcut: "Ctrl+X"
                        onTriggered: {
                            globalEditor.setCopyOperand(obj.osg_Material)
                            globalEditor.setCutSubject(main.parent.qmodel)

                            subjectrequired()
                        }
                    }
                    MenuItem {
                        text: 'Paste'
                        shortcut: "Ctrl+V"
                        onTriggered: {
                            globalEditor.realPaste(obj.osg_Material)
                            globalEditor.popQQModelUi(
                                        globalEditor.getCopyOperand(),
                                        obj.osg_Material.getQuickItem())
                            obj.osg_Material.modelChanged()
                        }
                    }
                    MenuItem {
                        text: 'Remove'
                        shortcut: "Suppr"
                        onTriggered: {

                            globalEditor.setCopyOperand(main.qmodel)
                            globalEditor.setCutSubject(main.parent.qmodel)
                            globalEditor.isCutAction = false
                            globalEditor.realRemoval()
                            //main.parent.qmodel.modelChanged()
                            main.parent = null
                        }
                    }
                }

/////////////////////////////////END CLASSIC//////////////////////////////////////////////
                Column{
                    y:25
                id: obj
                objectName: "osg_MaterialQQQ"
                property var osg_Material
	 ColorPicker {
            id: colorpicker0; visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:  obj.osg_Material.ambientF =  currentColor
            onPreviousColorChanged: colorpicker0.visible = !colorpicker0.visible
        }

       ColorPicker {
            id: colorpicker1;      visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:       obj.osg_Material.diffuseF =   currentColor
            onPreviousColorChanged: colorpicker1.visible = !colorpicker1.visible
        }
        ColorPicker {
            id: colorpicker2;      visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:       obj.osg_Material.specularF =   currentColor
            onPreviousColorChanged: colorpicker2.visible = !colorpicker2.visible
        }



         ColorPicker {
            id: colorpicker3; visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:  obj.osg_Material.ambientB =  currentColor
            onPreviousColorChanged: colorpicker3.visible = !colorpicker3.visible
        }

       ColorPicker {
            id: colorpicker4;      visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:       obj.osg_Material.diffuseB =   currentColor
            onPreviousColorChanged: colorpicker4.visible = !colorpicker4.visible
        }
        ColorPicker {
            id: colorpicker5;      visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:       obj.osg_Material.specularB =   currentColor
            onPreviousColorChanged: colorpicker5.visible = !colorpicker5.visible
        }


             ColorPicker {
            id: colorpicker6; visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:  obj.osg_Material.ambientFB =  currentColor
            onPreviousColorChanged: colorpicker6.visible = !colorpicker6.visible
        }

       ColorPicker {
            id: colorpicker7;      visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:       obj.osg_Material.diffuseFB =   currentColor
            onPreviousColorChanged: colorpicker7.visible = !colorpicker7.visible
        }
        ColorPicker {
            id: colorpicker8;      visible: false ;          z:1000;            x: 200
            onCurrentColorChanged:       obj.osg_Material.specularFB =   currentColor
            onPreviousColorChanged: colorpicker8.visible = !colorpicker8.visible
        }
   GroupBox {
title:"Material Properties"

anchors.fill: parent
	Grid {

anchors.fill: parent
	columns: 3
	spacing: 1
    id: grid
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AmbientFB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"DiffuseFB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"SpecularFB";}}
    //Button{width:160

    Rectangle{width:160;height:20; id:ambientFB; color:obj.osg_Material.ambientFB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker6.visible=!colorpicker6.visible;
        colorpicker6.previousColor=colorpicker6.currentColor=obj.osg_Material.ambientFB}    }
    }
        Rectangle{width:160;height:20; id: diffuseFB; color:obj.osg_Material.diffuseFB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker7.visible=!colorpicker7.visible;
        colorpicker7.previousColor=colorpicker7.currentColor=obj.osg_Material.diffuseFB}    }
    }
        Rectangle{width:160;height:20; id: specularFB; color:obj.osg_Material.specularFB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker8.visible=!colorpicker8.visible;
        colorpicker8.previousColor=colorpicker8.currentColor=obj.osg_Material.specularFB}    }
    }

   Label{text:"ShininessFB"}
   Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:obj.osg_Material.shininessFB
   onAccepted:{ obj.osg_Material.shininessFB= parseInt(text)           }}}

    }
    Grid {
y:60
//anchors.fill: parent
    columns: 3
    spacing: 1
        Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AmbientF";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"DiffuseF";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"SpecularF";}}
    //Button{width:160

    Rectangle{width:160;height:20; id:ambientF; color:obj.osg_Material.ambientF
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker0.visible=!colorpicker0.visible;
        colorpicker0.previousColor=colorpicker0.currentColor=obj.osg_Material.ambientF}    }
    }
        Rectangle{width:160;height:20; id: diffuseF; color:obj.osg_Material.diffuseF
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker1.visible=!colorpicker1.visible;
        colorpicker1.previousColor=colorpicker1.currentColor=obj.osg_Material.diffuseF}    }
    }
        Rectangle{width:160;height:20; id: specularF; color:obj.osg_Material.specularF
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker2.visible=!colorpicker2.visible;
        colorpicker2.previousColor=colorpicker2.currentColor=obj.osg_Material.specularF}    }
    }
     Label{text:"ShininessF"}
   Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:obj.osg_Material.shininessF
   onAccepted:{ obj.osg_Material.shininessFB= parseInt(text)           }}}

    }
    Grid {
y:120
//anchors.fill: parent
    columns: 3
    spacing: 1
        Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AmbienB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"DiffuseB";}}
    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"SpecularB";}}
    //Button{width:160

    Rectangle{width:160;height:20; id:ambientB; color:obj.osg_Material.ambientB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker3.visible=!colorpicker3.visible;
        colorpicker3.previousColor=colorpicker3.currentColor=obj.osg_Material.ambientB}    }
    }
        Rectangle{width:160;height:20; id: diffuseB; color:obj.osg_Material.diffuseB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker4.visible=!colorpicker4.visible;
        colorpicker4.previousColor=colorpicker4.currentColor=obj.osg_Material.diffuseB}    }
    }
        Rectangle{width:160;height:20; id: specularB; color:obj.osg_Material.specularB
    MouseArea{  anchors.fill: parent;       onClicked       :{colorpicker5.visible=!colorpicker5.visible;
        colorpicker5.previousColor=colorpicker5.currentColor=obj.osg_Material.specularB}    }
    }
     Label{text:"ShininessB"}
   Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:obj.osg_Material.shininessB
   onAccepted:{ obj.osg_Material.shininessB= parseInt(text)           }}}


}
}
}
/*	Image{y:20
	width:256
	height:256
    source:mainQModelTexture2D.obj.osg_Material.qtimage
	}
	Rectangle{  color: "transparent"; width: 160;height:20;Label {text:"useDisplayList"}}
    Rectangle{ color: "transparent";  width: 160;height:20;TextField {text:main.obj.osg_Material.useDisplayList}}


	Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
	Label {text:"BoundingBox"}
    RowLayout{TextField {text:main.obj.osg_Material.boundMin.x} TextField {text:main.obj.osg_Material.boundMin.y} TextField {text:main.obj.osg_Material.boundMin.z}   }
    RowLayout{TextField {text:main.obj.osg_Material.boundMax.y} TextField {text:main.obj.osg_Material.boundMax.y} TextField {text:main.obj.osg_Material.boundMax.z}   }
	}}*/
	}}}
}
