#include "TestTreeFixture.h"

void TestTreeFixture::SetUp()
{
    unsigned array[] = {10, 8, 19, 3, 7, 9, 21, 15, 0, 100, 1};

    for(int i = 0; i < sizeof(array)/sizeof(unsigned); i++)
    {
        testTree.insertNode(array[i], testTree.getRoot());
    }

    preOrder = "10 8 3 0 1 7 9 19 15 21 100 ";
    inOrder = "0 1 3 7 8 9 10 15 19 21 100 ";
    postOrder = "1 0 7 3 9 8 15 100 21 19 10 ";
}
