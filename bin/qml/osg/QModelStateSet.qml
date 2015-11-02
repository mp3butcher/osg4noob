import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0


import QtQuick 2.1
import osgQtQuick 1.0
GroupBox{
id:main
signal attributeselected(int index)
y:200
height:150
width:100
title:"Attributes List"
ScrollView{

//z:-100
 //

anchors.fill: parent
 ListView {
//	z:-100
    model: modelStateSet
    delegate: Rectangle {
		property int m_iIndex: model.index
        height: 25
        width: 100
        color: model.color
		//z:-100
		MouseArea {

		anchors.fill: parent
          
                
                onDoubleClicked: {
				
					console.log(parent.m_iIndex);
					main.attributeselected(parent.m_iIndex)
				}
        Text { 
		text: model.name
		}
    ///model.modelData.name(for unwatched list)
	}
	}
}
}
}