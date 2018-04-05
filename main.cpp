#include <iostream>
#include "binarySearchTree.h"

// Test BST functionalities
int main()
{
	BinarySearchTree BST;
	
    BST.insert(5);
	std::cout << "Element 5 inserted" << std::endl;
    BST.insert(7);
	std::cout << "Element 7 inserted" << std::endl;
    BST.insert(-10);
	std::cout << "Element -10 inserted" << std::endl;
    BST.insert(2);
	std::cout << "Element 2 inserted" << std::endl;
    BST.insert(1);
	std::cout << "Element 1 inserted" << std::endl;
    BST.insert(10);
	std::cout << "Element 10 inserted" << std::endl;
    BST.insert(100);
	std::cout << "Element 100 inserted" << std::endl;
    BST.insert(50);
	std::cout << "Element 50 inserted" << std::endl;
    
    std::cout << "Search for 3: " << ((BST.searchElement(3)) ? "This element exists" : "This element does not exist") << std::endl;
    std::cout << "Search for 10: " << ((BST.searchElement(10)) ? "This element exists" : "This element does not exist") << std::endl;
    std::cout << "Search for 50: " << ((BST.searchElement(50)) ? "This element exists" : "This element does not exist") << std::endl;
    std::cout << "Search for 11: " << ((BST.searchElement(11)) ? "This element exists" : "This element does not exist") << std::endl;
    
	std::cout << "Print all elements sorted: ";
    BST.inOrderTraversal();
}