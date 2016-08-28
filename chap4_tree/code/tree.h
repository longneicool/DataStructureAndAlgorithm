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

	Position find(ElementType eleVal, SearchTree node);
	Position findMin(SearchTree node);
	Position findMax(SearchTree node);
	SearchTree insertNode(ElementType val, SearchTree node);
	SearchTree deleteNode(ElementType val, SearchTree node);
	ElementType retrieve(Position pos);
	SearchTree getRoot();
	void printTree(SearchTree node);

private:
	void makeEmpty(SearchTree node);
private:
	SearchTree root;
};

#endif /* HD8E819B1_5467_4EA0_96F7_7CA4DB9B59B2 */
