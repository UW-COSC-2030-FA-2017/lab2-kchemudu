// Node.cpp
// Krishna Sai Chemudupati
// 9/21/2017
// Definitions of the Node class methods


#include "Node.h"


Node::Node(double entry)
	: entry_(entry), next_(NULL)
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) created at " << this << endl;
}

Node::Node(double entry, Node * next)
	: entry_(entry), next_(next)
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) created at " << this << endl;
}

Node::~Node()
{
	cout << "Node( " << entry_ << ", " << next_ <<
		" ) at " << this << " destroyed" << endl;
}

const Node & Node::operator=(const Node & node)
{
	entry_ = node.entry_;
	next_ = node.next_;
	return *this;
}
