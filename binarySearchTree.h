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
	
	void insert(int data); 
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

void BinarySearchTree::insert(int data, Node *&node)
{
	if (node == NULL)
		node = new Node(data);
	else if (data <= node->data)
		insert(data, node->leftChild);
	else if (data > node->data)
		insert(data, node->rightChild);
}

bool BinarySearchTree::searchElement(int data, Node *&node)
{
    if (node == NULL)
        return false;
	else if (data < node->data)
	    return searchElement(data, node->leftChild);
	else if (data > node->data)
	    return searchElement(data, node->rightChild);
	else
	    return true;
}

void BinarySearchTree::inOrderTraversal(Node *&node)
{
	if (node == NULL)
	{
	    return;
	}
	inOrderTraversal(node->leftChild);
	std::cout << node->data << " ";
	inOrderTraversal(node->rightChild);
}

void BinarySearchTree::insert(int data)
{
    insert(data, this->root);
}

bool BinarySearchTree::searchElement(int data)
{
	return searchElement(data, this->root);
}

void BinarySearchTree::inOrderTraversal()
{
	inOrderTraversal(this->root);
}

#endif // BINARYSEARCHTREE_H