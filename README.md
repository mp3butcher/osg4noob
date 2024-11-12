# osg4noob
#### osg graphical editor
This is a test case of using PMOC on OpenSceneGraph Libraries.
In order to edit qmls at runtime (using qtcreator) you will have to disable cache (plugins managment menu)

![Video sample](https://www.youtube.com/watch?v=A5LWZqLQYQ)
![Video sample](https://www.youtube.com/watch?v=X_AGSXsGeuM)
![Video sample](https://www.youtube.com/watch?v=fea8QLxoKX0)

| Dependencies |
-------------
| OSG>=3.4 |
| Qt5.5 |
| Qscintilla |
| MSVC2013 x64 or x86 |


#### Windows built (x64 GL4 required):
https://drive.google.com/file/d/0BxIH-jcsgYDdTkxlR1ppUFBXVmM/view?usp=sharing

#### BEWARE:
closed lib and dll (msvc2013 and linux gcc644.9.2) are in the lib directory:
copy the good one in bin in order to make it work
(may i free the sources? mmh, perhaps..)
#### PMOC infos:
pmoc aims toward C++ runtime graphical manipulation through QML and javascript.
It generates stubs and  skeletons of Qt Components to describe the logic of your libraries in a common graphical environment. Further, once customized, components can easily be reused in your own QtQuick application.

#### PMOC workflow:
1. Use pmoc on your headers
2. Build a generic QtQuick development environment (editor) fitted for your targetted libraries
3. Customized (if needed) generated components/boxes (C++)
4. Skin components/boxes in the editor at runtime (QML+javascript method wrapping)
5. Reuse boxes in your own products

### PMOC MetaLibrary: How to use the stuff 
(need some design improvement...:/)
- PMOCSAFEADDOBJECT(INOBJECTREF,OUTPMOCINSTANCE) : inject native in pmoc system
- PMOCINSTANCE.model->createQQModel(&PMOCINSTANCE) : embed instance in the associated manipulation box (no graphics)
- PMOCINSTANCE.model->getGuiComponent(QQuickView*,PMOCINSTANCE,PARENTITEM=0,RELATIONNAME="") : embed instance in the associated manipulation box and return qtquick item node (and set relation with its parent for us in editor mainly).
- see PMOCINSTANCE.model (MetaQQuickClass) for further methods


#### PMOC pros
- Keep your libraries Qt free
- Load Qt plugin only when required
- Interact easily with native objects at runtime
- Pipelined

#### PMOC cons
- QtQuick only
- Not multiview (only one QtQuick view per model)
- miss some wrapping when classes are forward declared (should move back to global even if it'd break the pipeline)

|pmoc features:|
-------------
|Native object boxing (put native objects in QT boxes)|
|Javascript/QML method wrapping|
|Hierarchical QML composition pattern|
|Nodal logic ( generates "Actions": copy/paste+fx ambiguities leverage)|
|Pointer life cycle ( via config file,ex: handle ref_pointer/normalpointer)|
|Multiple inheritance via delegation|

|pmoc limitations:|
-------------
|polymorphism is simulated|
|No macro parsing (work on copies if you're using in headers)|
|Templates, operators are not handled|


#### PMOC win32 trial version + metalibs for MSVC2013 & Linux64 gcc4.9.2
https://github.com/mp3butcher/osg4noob/blob/master/pmoc-beta-libbuiltQt5.5-msvc2013-trial.zip?raw=true

