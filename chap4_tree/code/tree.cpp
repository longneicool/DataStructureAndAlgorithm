#include "tree.h"
#include <iostream>
#include <iomanip>
#include <stack>

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

SearchTree& Tree::getRoot()
{
	return root;
}

void Tree::preOrderWalk(SearchTree node)
{
	if(node == NULL)  return;

	std::cout << node->elem << " ";
	preOrderWalk(node->left);
	preOrderWalk(node->right);
}

void Tree::inOrderWalk(SearchTree node)
{
	if(node == NULL) return;
	inOrderWalk(node->left);
	std::cout << node->elem << " ";
	inOrderWalk(node->right);
}

void Tree::postOrderWalk(SearchTree node)
{
	if(node == NULL) return;
	postOrderWalk(node->left);
	postOrderWalk(node->right);
	std::cout << node->elem << " ";
}

void Tree::preOrderWalkWithoutRecur(SearchTree node)
{
	if(node == NULL) return;

	std::stack<SearchTree> treeStack;

	while(node != NULL || !treeStack.empty())
	{
		while(node != NULL)
		{
			std::cout << node->elem << " ";
			treeStack.push(node);
			node = node->left;
		}

		if(!treeStack.empty())
		{
			SearchTree cur = treeStack.top();
			treeStack.pop();
			node = cur->right;
		}
	}
}

