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

	tree.preOrderWalk(tree.getRoot());
	std::cout << "Inorder Walk! " << std::endl;
	tree.inOrderWalk(tree.getRoot());
	std::cout << "Post Order !" << std::endl;
	tree.postOrderWalk(tree.getRoot());
	std::cout << std::endl <<"preOrderWalkWithoutRecur" << std::endl;
	tree.preOrderWalkWithoutRecur(tree.getRoot());

	return 0;
}
