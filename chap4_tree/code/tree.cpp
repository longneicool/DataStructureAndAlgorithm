#include "tree.h"
#include <iostream>

Tree::Tree() : root(NULL)
{

}

void Tree::init()
{
	makeEmpty(root);
}

void Tree::makeEmpty(SearchTree node)
{
	if(node != NULL)
	{
		makeEmpty(node->left);
		makeEmpty(node->right);
		delete node;
	}
}

SearchTree Tree::insertNode(ElementType val, SearchTree node)
{
	if(node == NULL)
	{
		node = new TreeNode;
		node->elem = val;
		node->left = NULL;
		node->right = NULL;

		if(root == NULL)
			root = node;

		return node;
	}

	if(val < node->elem)
		insertNode(val, node->left);
	else
		insertNode(val, node->right);

	return node;
}

void Tree::printTree(SearchTree tree)
{
	if(tree != NULL)
	{
		std::cout << tree->elem << std::endl;
		printTree(tree->left);
		printTree(tree->right);
	}
}

SearchTree Tree::getRoot()
{
	return root;
}
