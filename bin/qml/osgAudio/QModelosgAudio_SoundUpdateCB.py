from PyQt5 import QtGui,QtQuick,QtCore,QtWidgets,QtQml
from PyQt5.QtCore import pyqtProperty, QRectF, QUrl,QObject,QAbstractListModel, QModelIndex, Qt, QUrl, QVariant
from PyQt5.QtGui import QColor, QGuiApplication, QPainter, QPen
from PyQt5.QtCore import QObject,pyqtSlot, pyqtSignal,QTimer
#from PyQt5.QtQml import qmlRegisterType, QQmlListProperty
from PyQt5.QtQuick import QQuickItem, QQuickPaintedItem, QQuickView
import osg,osgAudio,osgDB,DownCast
import sys,math
import QMLModels
class QModel(QObject):



	isPlayingChanged = pyqtSignal()

	@pyqtProperty(bool, notify=isPlayingChanged)
	def isPlaying(self):
		return self.soundstatecallback.getSoundState().getPlay()
		#return self._isPlaying
	@isPlaying.setter
	def isPlaying(self, isPlaying):
		if self.soundstatecallback.getSoundState().getPlay()!=isPlaying:
			self.soundstatecallback.getSoundState().setPlay(isPlaying)
			self.isPlayingChanged.emit()


	isLoopingChanged = pyqtSignal()

	@pyqtProperty(bool, notify=isLoopingChanged)
	def isLooping(self):
		return self.soundstatecallback.getSoundState().getLooping()
		#return self._isLooping
	@isLooping.setter
	def isLooping(self, isLooping):
		if self.soundstatecallback.getSoundState().getLooping()!=isLooping:
			self.soundstatecallback.getSoundState().setLooping(isLooping)
			self.isLoopingChanged.emit()

	pitchChanged = pyqtSignal()

	@pyqtProperty(float, notify=pitchChanged)
	def pitch(self):
		return self.soundstatecallback.getSoundState().getPitch()
	@pitch.setter
	def pitch(self, samplefile):
		if  self.soundstatecallback.getSoundState().getPitch()!=samplefile and not math.isnan(samplefile):
			self.soundstatecallback.getSoundState().setPitch(samplefile)
			self.pitchChanged.emit()

	refDistanceChanged = pyqtSignal()
	@pyqtProperty(float, notify=refDistanceChanged)
	def refDistance(self):
		return self.soundstatecallback.getSoundState().getReferenceDistance()
	@refDistance.setter
	def refDistance(self, samplefile):
		if  self.soundstatecallback.getSoundState().getReferenceDistance()!=samplefile:
			self.soundstatecallback.getSoundState().setReferenceDistance(samplefile)
			self.refDistanceChanged.emit()


	samplefileChanged = pyqtSignal()

	@pyqtProperty(str, notify=samplefileChanged)
	def samplefile(self):
		return self._samplefile
	@samplefile.setter
	def samplefile(self, filesamplefile):

		samplefile=filesamplefile.split('file:///')[1]

		if self._samplefile != osgDB.findDataFile(samplefile):

			ext=osgDB.getFileExtension(osgDB.findDataFile(samplefile))

			ss=self.soundstatecallback.getSoundState()
			
			ss.setPlay(False)
			#ss.setLooping(False)
			ss.setSample(None)
			ss.setStream(None)
			ss.allocateSource()
			if ext=='wav':
				ss.setSample(osgAudio.SoundManager.instance().getSample(osgDB.findDataFile(samplefile),True))
			else:
				stream=osgAudio.SoundManager.instance().getStream(osgDB.findDataFile(samplefile))
				ss.setStream(stream)

			self._samplefile=osgDB.findDataFile(samplefile)
			self.samplefileChanged.emit()
			self.isLoopingChanged.emit()
			self.isPlayingChanged.emit()
			self.pitchChanged.emit()

	def getModel(self):return 	self.soundstatecallback
		
	def __init__(self,magic,parent=None):
		super().__init__(parent)
		self.createNode4=magic

		self.soundstatecallback=osgAudio.SoundUpdateCB()
		self.soundstatecallback.setSoundState(osgAudio.SoundState())#avoid warnings
		self._ext=None #extension: wav:sample/ogg:Stream
		self._samplefile=None
		self.sslist=None

	def __del__(self):
		print("del QMOdelsoundstatecallback")
		#self.soundstatecallback=None
		if self.sslist:
			self.sslist.setParentItem(None)
		#del(self.sslist)
	def setModel(self,soundstatecallback):
		sys.stderr.write("\nsetModelsoundstatecallback\n")
		self.soundstatecallback=soundstatecallback
		#setGeneralsoundstatecallbackProperties



		#TODOtry to cast in tubtypes


		sounds=self.soundstatecallback.getSoundState()
		sample=sounds.getSample()
		stream=sounds.getStream()
		if sample:
			self._samplefile=sample.getFilename()

		if stream:
			conv = DownCast.osgAudio_Stream()
			fs=conv.as_osgAudio_FileStream(stream);
			if fs:
				self._samplefile=fs.getFilename()


		self._ext=osgDB.getFileExtension(self._samplefile)
		self.samplefileChanged.emit()
		#add a stateset if possible
		'''ss=self.soundstatecallback.getStateSet()
		self.sslist=None
		if ss:
			self.sslist=self.createNode4.getQuickItem4OSGItem(ss)'''

		print("setModelend")
	def connectself2view(self,view):
		self.view=view
		#self.view.selected.connect(self.onaselected)
		#self.onaselected()
		if self.sslist:

			self.sslist.setParent(self.view)

		return view
		print("connectself2view")
	@pyqtSlot(int)
	def onaselected(self):
		print("onsoundstatecallbackselected")
		if self.sslist:
			self.sslist.setParentItem(None)
		sel=self.soundstatecallback
		if not sel : print("KEUHA")

		sample=self.soundstatecallback.getSample()
		if sample:
			self.sslist=self.createNode4.createQQuickItemForOSGObject2(ss)
		if self.sslist:
			self.sslist.setParentItem(self.view)



