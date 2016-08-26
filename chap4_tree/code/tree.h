#ifndef HD8E819B1_5467_4EA0_96F7_7CA4DB9B59B2
#define HD8E819B1_5467_4EA0_96F7_7CA4DB9B59B2

#define NULL 0

struct TreeNode;
typedef TreeNode* SearchTree;
typedef TreeNode* Position;

struct TreeNode
{
	unsigned int elem;
	SearchTree left;
	SearchTree right;
};

struct Tree
{
	Tree();
	typedef unsigned int ElementType;
	void init();
	void addNode(ElementType node);
	void delNode(ElementType eleVal);
	SearchTree find(ElementType eleVal);

private:
	void makeEmpty(SearchTree node);
private:
	SearchTree root;
};

#endif /* HD8E819B1_5467_4EA0_96F7_7CA4DB9B59B2 */
