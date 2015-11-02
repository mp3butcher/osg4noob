#ifndef OSGQTQUICK_QUICKWINDOWVIEWER_HPP
#define OSGQTQUICK_QUICKWINDOWVIEWER_HPP

#include <osgQtQuick/Export.hpp>

#include <QObject>

QT_BEGIN_NAMESPACE
class QQuickWindow;
QT_END_NAMESPACE

namespace osg {
class GraphicsContext;
} // namespace osg

namespace osgViewer {
class CompositeViewer;
}

namespace osgQtQuick {

class OSGQTQUICK_EXPORT QuickWindowViewer : public QObject
{
    Q_OBJECT

public:
    QuickWindowViewer(QQuickWindow *window);
    ~QuickWindowViewer();

    osg::GraphicsContext* graphicsContext();
    osgViewer::CompositeViewer* compositeViewer();

	static QuickWindowViewer *instance(QQuickWindow *window);

	//Bad Method used int python binding (avoiding multiple instance)
	//TODO Find a better way..(QQuickWindow in swig != QQuickWindow in PyQt) ..a more primitive key could fit the use
	static QuickWindowViewer *instanceBAD(int);

private:
    struct Hidden;
    friend struct Hidden;
    Hidden *h;
};

} // namespace osgQtQuick

#endif // OSGQTQUICK_QUICKWINDOWVIEWER_HPP
