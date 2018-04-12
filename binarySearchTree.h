#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "node.h"

class BinarySearchTree 
{
private:
	Node *root;
	
	void insert(int, Node *&);
	bool searchElement(int, Node *&);
	void inOrderTraversal(Node *&);
	
public: 
    BinarySearchTree();
    ~BinarySearchTree();
	
	void insert(int); 
	bool searchElement(int);
	void inOrderTraversal();
};

BinarySearchTree::BinarySearchTree()
{
    this->root = NULL;
}

BinarySearchTree::~BinarySearchTree()
{
    delete this->root;
}

void BinarySearchTree::insert(int value, Node *&node)
{
	if (node == NULL)
		node = new Node(value);
	else if (value <= node->getValue())
		insert(value, node->getLeftChild());
	else if (value > node->getValue())
		insert(value, node->getRightChild());
}

bool BinarySearchTree::searchElement(int value, Node *&node)
{
    if (node == NULL)
        return false;
	else if (value < node->getValue())
	    return searchElement(value, node->getLeftChild());
	else if (value > node->getValue())
	    return searchElement(value, node->getRightChild());
	else
	    return true;
}

void BinarySearchTree::inOrderTraversal(Node *&node)
{
	if (node == NULL)
	{
	    return;
	}
	inOrderTraversal(node->getLeftChild());
	std::cout << node->getValue() << " ";
	inOrderTraversal(node->getRightChild());
}

void BinarySearchTree::insert(int value)
{
    insert(value, this->root);
}

bool BinarySearchTree::searchElement(int value)
{
	return searchElement(value, this->root);
}

void BinarySearchTree::inOrderTraversal()
{
	inOrderTraversal(this->root);
}

#endif // BINARYSEARCHTREE_H