#ifndef NODE_H
#define NODE_H

class Node
{
    public:
    int data;
    
    Node *leftChild;
    Node *rightChild;
		
	Node(int);
	~Node();
};

Node::Node(int data)
{
	this->data = data;
	this->leftChild = NULL;
	this->rightChild = NULL;
}

Node::~Node()
{
	delete this->leftChild;
	delete this->rightChild;
}

#endif // NODE_H