import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


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
 property var m_parentModel: modelDrawable
   GroupBox {    
title:"DrawableProperties"        

	Grid {
	
//anchors.fill: parent
	columns: 2
	spacing: 1
    id: grid
	
	Rectangle{ color: "transparent"; height:20;width: 160;Label {text:"useVBO";}}
	 
	 CheckBox{
    checked:main.m_parentModel.useVBO
    onClicked:main.m_parentModel.useVBO=checked
    }
	
	Rectangle{  color: "transparent"; width: 160;height:20;Label {text:"useDisplayList"}}
	  CheckBox{
    checked:main.m_parentModel.useDisplayList
    onClicked:main.m_parentModel.useDisplayList=checked
    }
	
	Rectangle{  color: "transparent"; width: 150;height:60;ColumnLayout{
	Label {text:"BoundingBox"}
	RowLayout{TextField {text:main.m_parentModel.boundMin.x} TextField {text:main.m_parentModel.boundMin.y} TextField {text:main.m_parentModel.boundMin.z}   }
	RowLayout{TextField {text:main.m_parentModel.boundMax.y} TextField {text:main.m_parentModel.boundMax.y} TextField {text:main.m_parentModel.boundMax.z}   }
	}}
	}
	
	}
MouseArea {

anchors.fill: parent
          
                
                onDoubleClicked: {
				
					console.log("oy");
					main.selected()
				}
				}

}