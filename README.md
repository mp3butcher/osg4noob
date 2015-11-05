# osg4noob
#### osg graphical editor
This is a test case of using PMOC on OpenSceneGraph Libraries 

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
It generates stubs and  skeletons of  Qt Components to describe the logic of your libraries in a common graphical environment.

|pmoc features:|
-------------
|Native object boxing (put native object in QT boxes)|
|javascript/QML method wrapping|
|Nodal logic ( via config file:copy/paste+fx ambiguities leverage)||
|Pointer life cycle ( via config file,ex: handle ref_pointer/normalpointer)|
|Multiple inheritance via delegation|
|seams to handle virtual inheritance|

|pmoc limitations:|
-------------
|no polymorphism in javascript|
|no macro parsing|
|template are not handled|

#### PMOC win32 trial version + metalibs for MSVC2013 & Linux64 gcc4.9.2
https://github.com/mp3butcher/osg4noob/blob/master/pmoc-beta-libbuiltQt5.5-msvc2013-trial.zip?raw=true

