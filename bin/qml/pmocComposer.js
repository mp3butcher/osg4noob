


          function getChildByObjectName(obj,name){
              if (obj.objectName==name)return obj
             for (var idx in obj.children) {
                 var f=getChildByObjectName(obj.children[idx],name);
                 if(f)return f;
             }
             return 0;
          }
function createPMOC(naming){  console.log("Qt.findChild(obj)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
var obj;
          var component=Qt.createComponent( Qt.resolvedUrl(naming+".qml"))
          if (component.status == Component.Ready){
               obj=component.createObject();
              console.log("Qt.findChild(obj)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
              console.log(Component.url)
                  console.log(getChildByObjectName(obj,"osg_StateSetQQQ"))
//obj.setProperty
              ///globaleditor.connect2view(qmod,obj)

          }else{

              console.log(component.errorString())
          }

          return obj
      }
