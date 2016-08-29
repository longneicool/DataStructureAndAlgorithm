#include <iostream>
#include "tree.h"

int main()
{
	Tree tree;
	unsigned array[] = {10, 1, 4, 5, 7, 10, 0, 19};
	for (int i = 0; i < sizeof(array)/sizeof(unsigned); i++)
	{
		tree.insertNode(array[i], tree.getRoot());
	}

	tree.printTree(tree.getRoot());

	return 0;
}
