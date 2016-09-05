#include "TestTreeFixture.h"

void TestTreeFixture::SetUp()
{
    unsigned array[] = {10, 8, 19, 3, 7, 9, 21, 15, 0, 100, 1};

    for(int i = 0; i < sizeof(array)/sizeof(unsigned); i++)
    {
        testTree.insertNode(array[i], testTree.getRoot());
    }
}
