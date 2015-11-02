#include "osgQtQuick/OSGNode.hpp"

#include <osg/Node>
#include <iostream>
namespace osgQtQuick {

struct OSGNode::Hidden {
    osg::ref_ptr<osg::Node> node;
};

OSGNode::OSGNode(QObject *parent) :
    QObject(parent),
    h(new Hidden)
{
}

OSGNode::~OSGNode()
{
    delete h;
}

osg::Node *OSGNode::node()
{
    return h->node.get();
}

void OSGNode::setNode(osg::Node *node)
{
	std::cout << "Setting OSGNODE OSURCE " << std::endl;
    if (h->node.get() != node) {
        h->node = node;
        emit nodeChanged(node);
    }
}

} // namespace osgQtQuick

//#include "moc_OSGNode.cpp"
