#include "osgQtQuick/OSGNodeFile.hpp"

#include <osgDB/ReadFile>

#include <QUrl>

#include <QDebug>

namespace osgQtQuick {

struct OSGNodeFile::Hidden
{
public:
    QUrl url;
};

OSGNodeFile::OSGNodeFile(QObject *parent) :
    OSGNode(parent),
    h(new Hidden)
{
}

OSGNodeFile::~OSGNodeFile()
{
    delete h;
}

const QUrl OSGNodeFile::source() const
{
    return h->url;
}

void OSGNodeFile::setSource(const QUrl &url)
{
    if (h->url != url)
    {
        h->url = url;
		std::cout << "Setting OSGNODEFILE OSURCE " << std::endl;
        setNode(osgDB::readNodeFile(url.toString().toStdString()));
		std::cout << "OSGNODEFILE OSURCE Setted" << std::endl;
        emit sourceChanged(url);
    }
}

} // namespace osgQtQuick

//#include "moc_OSGNodeFile.cpp"
