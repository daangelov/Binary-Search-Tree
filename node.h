#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int value;
    
    Node *leftChild;
    Node *rightChild;
	
public:

	Node(int);
	~Node();
	
	int getValue() const;
	Node*& getLeftChild();
	Node*& getRightChild();
};

Node::Node(int value)
{
	this->value = value;
	this->leftChild = NULL;
	this->rightChild = NULL;
}

Node::~Node()
{
	delete this->leftChild;
	delete this->rightChild;
}

int Node::getValue() const
{
	return this->value;
}

Node*& Node::getLeftChild()
{
	return this->leftChild;
}

Node*& Node::getRightChild()
{
	return this->rightChild;
}

#endif // NODE_H