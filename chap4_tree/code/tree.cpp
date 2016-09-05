#include "tree.h"
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <stack>
#include <strstream>

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

	vec.push_back(node->elem);
	preOrderWalk(node->left);
	preOrderWalk(node->right);
}

void Tree::inOrderWalk(SearchTree node)
{
	if(node == NULL) return;
	inOrderWalk(node->left);
	vec.push_back(node->elem);
	inOrderWalk(node->right);
}

void Tree::postOrderWalk(SearchTree node)
{
	if(node == NULL) return;
	postOrderWalk(node->left);
	postOrderWalk(node->right);
	vec.push_back(node->elem);
}

void Tree::preOrderWalkWithoutRecur(SearchTree node)
{
	if(node == NULL) return;
	vec.clear();

	std::stack<SearchTree> treeStack;

	while(node != NULL || !treeStack.empty())
	{
		while(node != NULL)
		{
		    vec.push_back(node->elem);
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

void Tree::inOrderWalkWithoutRecur(SearchTree node)
{
    if(node == NULL) return;
    vec.clear();

    std::stack<SearchTree> treeStack;

    SearchTree cur = node;
    while(cur != NULL || !treeStack.empty())
    {
        while(cur != NULL)
        {
            treeStack.push(cur);
            cur = cur->left;
        }

        if(!treeStack.empty())
        {
            cur = treeStack.top();
            treeStack.pop();
            vec.push_back(cur->elem);

            cur = cur->right;
        }
    }
}

void Tree::postOrderWalkWithoutRecur(SearchTree node)
{
	if(node == NULL) return;

	vec.clear();

	std::stack<SearchTree> treeStack;

	treeStack.push(node);
	while(!treeStack.empty())
	{
		SearchTree cur = treeStack.top();
		treeStack.pop();
		vec.insert(vec.begin(), cur->elem);
		if(cur->left) treeStack.push(cur->left);
		if(cur->right) treeStack.push(cur->right);
	}
}

SearchTree Tree::search(SearchTree node, ElementType val)
{
    if(node == NULL)
        return node;

    if(val == node->elem)
        return node;

    if(val > node->elem) return search(node->right, val);
    return search(node->left, val);
}

std::string Tree::print()
{
	char buf[200];
	std::string str;

	std::vector<ElementType>::iterator it = vec.begin();
	while(it != vec.end())
	{
		sprintf(buf, "%d ", *it);
		str += std::string(buf);
		it++;
	}

	return str;
}
