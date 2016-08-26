#include "tree.h"

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
