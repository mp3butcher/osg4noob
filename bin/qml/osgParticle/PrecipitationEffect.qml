import ".."
import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

FocusScope {
    id: main //FocusScope For keyboard events
    property var qmodel
    width: 450
    height: 300
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
    LinkToParent {
        id: link2par
        target: main
    }

    Rectangle {
        border.color: "black"
        border.width: 3
        radius: 10

        color: "orange"
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


            /////////////////////////////////END CLASSIC//////////////////////////////////////////////
            GroupBox {

                //title:"PrecipitationEffect Properties"
                y: 60
                id: obj
                objectName: "osgParticle_PrecipitationEffectQQQ"

                property var osgParticle_PrecipitationEffect
Column{

                //QQModel

                   CheckBox{

text: 'UseFarLineSegment'
checked:obj.osgParticle_PrecipitationEffect.UseFarLineSegment
onClicked:obj.osgParticle_PrecipitationEffect.UseFarLineSegment=checked
}

                   Row{


                   Label{
                       text:'FarTransition'
                   }

TextField{
text:obj.osgParticle_PrecipitationEffect.FarTransition
onAccepted: obj.osgParticle_PrecipitationEffect.FarTransition =parseFloat(text)
}
                   }

                   Row{


                   Label{
                       text:'MaximumParticleDensity'
                   }

TextField{
text:obj.osgParticle_PrecipitationEffect.MaximumParticleDensity
onAccepted: obj.osgParticle_PrecipitationEffect.MaximumParticleDensity =parseFloat(text)
}
                   }

                   Row{


                   Label{
                       text:'NearTransition'
                   }

TextField{
text:obj.osgParticle_PrecipitationEffect.NearTransition
onAccepted: obj.osgParticle_PrecipitationEffect.NearTransition =parseFloat(text)
}
                   }

                   Row{


                   Label{
                       text:'ParticleSize'
                   }

TextField{
text:obj.osgParticle_PrecipitationEffect.ParticleSize
onAccepted: obj.osgParticle_PrecipitationEffect.ParticleSize =parseFloat(text)
}
                   }

                   Row{


                   Label{
                       text:'ParticleSpeed'
                   }

TextField{
text:obj.osgParticle_PrecipitationEffect.ParticleSpeed
onAccepted: obj.osgParticle_PrecipitationEffect.ParticleSpeed =parseFloat(text)
}
                   }


                   Row{


                   Label{
                       text:'amount'
                   }

TextField{
text:obj.osgParticle_PrecipitationEffect.precipitationAmount
onAccepted: obj.osgParticle_PrecipitationEffect.precipitationAmount =parseFloat(text)
}
                   }

                   Row{


                   Label{
                       text:'type'
                   }

ComboBox{
    model:["RAIN","SNOW"]
    currentIndex: obj.osgParticle_PrecipitationEffect.precipitationType

onCurrentIndexChanged: obj.osgParticle_PrecipitationEffect.precipitationType =currentIndex
}
                   }




                    }
                }
            }
        }
    }
