# osg4noob
#### osg graphical editor
This is a test case of using PMOC on OpenSceneGraph Libraries.

In order to edit qmls at runtime (using qtcreator) setup environment variable PMOC_NOCACHE (to disable qml caching)

| Dependencies |
-------------
| OSG>=3.4 |
| Qt5.5 |
| Qscintilla |
| MSVC2013 x64 or x86 |

#### BEWARE:
closed lib and dll (msvc2013 and linux gcc644.9.2) are in the lib directory:
copy the good one in bin in order to make it work

#### PMOC infos:
pmoc aims toward C++ runtime graphical manipulation through QML and javascript.
It generates stubs and  skeletons of Qt Components to describe the logic of your libraries in a common graphical environment. Further, once customized, components can easily be reused in your own QtQuick application.

#### PMOC workflow:
1. Use pmoc on your headers
2. Build a generic QtQuick development environment (editor) fitted for your targetted libraries
3. Customized (if needed) generated components/boxes (C++)
4. Skin components/boxes in the editor at runtime (QML+javascript method wrapping)
5. Reuse boxes in your own products

###PMOC How to use the stuff (need some refactoring)
- PMOCSAFEADDOBJECT(INOBJECTREF,OUTPMOCINSTANCE) : inject native in pmoc system
- QQUICKCOMPONENT(INPMOCINSTANCE,OUTQQUICKITEM) : embed instance in the associated manipulation box and output qtquick item node.


#### PMOC pro
- Keep your libraries Qt free
- Load Qt plugin only when required
- Interact easily with native objects at runtime
- Pipeline

#### PMOC cons
- QtQuick only
- Not multiview (only one QtQuick view per model)
- miss some wrapping when classes are forward declared

|pmoc features:|
-------------
|Native object boxing (put native objects in QT boxes)|
|Javascript/QML method wrapping|
|Hierarchical QML composition pattern|
|Nodal logic ( generates "Actions" :copy/paste+fx ambiguities leverage)||
|Pointer life cycle ( via config file,ex: handle ref_pointer/normalpointer)|
|Multiple inheritance via delegation(seams to handle virtual inheritance)|

|pmoc limitations:|
-------------
|No polymorphism in javascript|
|No macro parsing (work on copies if you're using in headers)|
|Templates, operators are not handled|
|Static and namespace functions not handled yet|

#### PMOC win32 trial version + metalibs for MSVC2013 & Linux64 gcc4.9.2
https://github.com/mp3butcher/osg4noob/blob/master/pmoc-beta-libbuiltQt5.5-msvc2013-trial.zip?raw=true

