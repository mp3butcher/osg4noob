import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0

import QtQuick.Dialogs 1.0

 

    Canvas {
        property var target

        property var relationname
        width: 0
        height: 0
      //  x: target.parent.width - target.x
    //    y: target.parent.height - target.y

        id: canvas


        Label{
            x:canvas.width/2
            y:canvas.height/2
            color: '#fa00ff'
            text:relationname
            font.pointSize: 12
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }

        function updateLinkCanvas(){

            //var zeroinparentframe=target.parent.mapToItem(target.parent,target.x,target.y);
 if(target.parent)
            if(target.parent.qmodel){///parent is a pmoc compoenent
            if (target.x > target.parent.width) {
                canvas.width = target.x - target.parent.width
                canvas.x = target.parent.width - target.x
            } else if (target.x + target.width < 0) {
                canvas.width = -target.x - target.width
                canvas.x = target.width
            } else {
                //canvas.x= (target.x<0)?target.width:0 ;
                canvas.x = target.width * (-target.x + target.parent.width) / (+target.parent.width + target.width)
                canvas.width = 26
            }

            if (target.y > target.parent.height) {
                canvas.height = target.y - target.parent.height
                canvas.y = target.parent.height - target.y
            } else if (target.y + target.height < 0) {
                canvas.height = -target.y - target.height
                canvas.y = target.height
            } else {
             //   canvas.y= (target.y<0)?target.parent.height:0 ;
                 canvas.y = target.height * (-target.y +target.parent.height) / (target.parent.height + target.height)
                canvas.height = 26
            }

            canvas.requestPaint()
            }

        }
function normalize(inX,inY, outX,  outY){
 var l=Math.sqrt(inX*inX+   inY*inY);
outX=inX/l;
outY=inY/l;

}
        onPaint: {
          {///parent is a pmoc compoenent  if(target.parent.qmodel)
            var context = canvas.getContext('2d')
            context.save()
            context.clearRect(0, 0, canvas.width, canvas.height)
            context.fill()
//0.866025404 -0.5
//0.5                   0.866025404

            //  var zeroinparentframe = target.parent.mapToItem(target.parent,   target.x, target.y);
            context.strokeStyle = '#fa00ff'
            context.lineWidth = 3
            context.beginPath()
            //   context.lineCap = "square" //'round';
            var oriX = 0, oriY = 0, destX = canvas.width, destY = canvas.height

            if (target.y + target.height < 0) {
                oriY = destY
                destY = 0
            } else if (target.y < target.parent.height){
                oriY=canvas.height/2
                destY= canvas.height/2

            }

            if (target.x + target.width < 0) {
                oriX = destX
                destX = 0
            }else  if (target.x < target.parent.width){
                oriX=canvas.width/2
                destX= canvas.width/2

            }
           var vecX=destX-oriX;
            var vecY=destY-oriY;
            var normArrowX,normArrowY,normArrow2X,normArrow2Y;

            //rotate 30
            var oriArrowX= vecX*0.866025404+vecY*-0.5
            var oriArrowY= vecX*0.5+vecY*0.866025404
            //normalize(oriArrowX,oriArrowY,normArrowX,normArrowY)
            var l=Math.sqrt(oriArrowX*oriArrowX+   oriArrowY*oriArrowY);
           normArrowX=oriArrowX/l;
           normArrowY=oriArrowY/l;


            normArrowX=destX-20*normArrowX
            normArrowY=destY-20*normArrowY

            //rotate -30
             oriArrowX= vecX*0.866025404+vecY*0.5
             oriArrowY= vecX*-0.5+vecY*0.866025404
            //normalize(oriArrowX,oriArrowY,normArrowX,normArrowY)
            var l=Math.sqrt(oriArrowX*oriArrowX+   oriArrowY*oriArrowY);
           normArrow2X=oriArrowX/l;
           normArrow2Y=oriArrowY/l;

            normArrow2X=destX-20*normArrow2X
            normArrow2Y=destY-20*normArrow2Y

            context.moveTo(oriX, oriY)
            //target.parent.x+target.parent.width, target.parent.y+target.parent.height);
            context.lineTo(destX, destY)
            context.stroke()
            context.moveTo(normArrowX-vecX/200, normArrowY-vecY/200)

            context.lineTo(destX-vecX/200, destY-vecY/200)
            context.stroke()
            context.moveTo(normArrow2X-vecX/200, normArrow2Y-vecY/200)

            context.lineTo(destX-vecX/200, destY-vecY/200)
            context.stroke()

            context.restore()
            }
        }
    } 
