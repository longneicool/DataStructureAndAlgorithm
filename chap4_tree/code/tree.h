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
	typedef unsigned int ElementType;

	Tree();
	void init();

	void preOrderWalk(SearchTree node);
	void inOrderWalk(SearchTree node);
	void postOrderWalk(SearchTree node);

	void preOrderWalkWithoutRecur(SearchTree node);

	SearchTree insertNode(ElementType val, SearchTree& node);
	SearchTree& getRoot();

private:
	void makeEmpty(SearchTree node);
private:
	SearchTree root;

	unsigned _level;
};

#endif /* HD8E819B1_5467_4EA0_96F7_7CA4DB9B59B2 */
