#include <iostream>
#include "tree.h"

int main()
{
	Tree tree;
	unsigned array[] = {6, 10, 8, 11, 3, 7,4, 2, 19};
	for (unsigned i = 0; i < sizeof(array)/sizeof(unsigned); i++)
	{
		tree.insertNode(array[i], tree.getRoot());
	}

	std::cout << "PreOrderWalk: ";
	tree.preOrderWalk(tree.getRoot());
	std::cout << std::endl << "Inorder Walk: " ;
	tree.inOrderWalk(tree.getRoot());
	std::cout << std::endl << "Post Order: ";
	tree.postOrderWalk(tree.getRoot());
	std::cout << std::endl <<"preOrderWalkWithoutRecur: ";
	tree.preOrderWalkWithoutRecur(tree.getRoot());

	std::cout << std::endl << "inOrderWalkWithoutRecur: ";
	tree.inOrderWalkWithoutRecur(tree.getRoot());

	return 0;
}
