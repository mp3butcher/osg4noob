import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import QtQuick.Dialogs 1.0

import QtQuick 2.1
import osgQtQuick 1.0
Rectangle {
id:main
signal selected ()
//signal geodeselected(string msg)
    width: 350
    height: 260
	opacity:1
    color: "blue"
x:200
	y:0
 property var qmodel//:modelosgAudio_SoundUpdateCB


  MouseArea {

            anchors.fill: parent
            hoverEnabled: true
            acceptedButtons:  Qt.RightButton
            drag.target: main
            drag.axis: Drag.XandYAxis


   GroupBox {
title:"AudioSample Properties"

objectName:"osgAudio_SoundStateQQQ"
id:obj
property var osgAudio_SoundState

	Grid {

//anchors.fill: parent
	columns: 2
	spacing: 1
    id: grid


	Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"AudioFile";}

	Button{
    iconSource :'../images/openbutton.png'
   onClicked :fileDialog.visible=true

   FileDialog {
     nameFilters: [ "Sound files (*.wav *.ogg)", "All files (*)" ]
    visible:false
    id: fileDialog
    title: "Please choose a file"
    onAccepted: {
        console.log("You chose: " + fileDialog.fileUrls)
      obj.osgAudio_SoundState.samplefile=fileDialog.fileUrls[0]
    }
    onRejected: {
        console.log("Canceled")
        Qt.quit()
    }
    Component.onCompleted: visible = false
}
    }}
	Rectangle{  color: "transparent"; height:20;width: 160;TextField {text:obj.osgAudio_SoundState.samplefile}



    }



    Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"isPlaying";}}
    CheckBox{
    checked:main.qmodel.isPlaying
    onClicked:main.qmodel.isPlaying=checked
    }

     Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"isLooping";}}
  CheckBox{
    checked:main.qmodel.isLooping
    onClicked:main.qmodel.isLooping=checked
    }
     Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Reference Distance";}}
    Rectangle{  color: "transparent"; height:20;width: 160;TextField {text: main.qmodel.refDistance
   onAccepted:  main.qmodel.refDistance=parseFloat(text)
    }}
      Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"Pitch";}}
    Rectangle{  color: "transparent"; height:20;width: 160;TextField {text: main.qmodel.pitch
   onAccepted:{  var p=parseFloat(text);console.log(p);if ( p!=0 )main.qmodel.pitch=p;}
    }}



	}
}
	}
}
