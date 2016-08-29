#include "tree.h"
#include <iostream>
#include <iomanip>

Tree::Tree() : root(NULL), _level(0)
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

SearchTree Tree::insertNode(ElementType val, SearchTree& node)
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

void Tree::printTree(SearchTree tree, int indent)
{
	if(tree!=NULL)
	{
		std::cout << std::setw(indent) << ' ';
		printTree(tree->left, indent - 4);
		printTree(tree->right, indent + 4);
	}
}


SearchTree& Tree::getRoot()
{
	return root;
}
