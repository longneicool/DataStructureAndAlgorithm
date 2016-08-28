#include <iostream>
#include "tree.h"

int main()
{
	Tree tree;
	for (int i = 0; i < 10; i++)
	{
		tree.insertNode(i, tree.getRoot());
	}

	tree.printTree(tree.getRoot());

	return 0;
}
