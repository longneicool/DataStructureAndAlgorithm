#include "TestTreeFixture.h"
#include <string>

TEST_F(TestTreeFixture, test_pre_order_print_with_recurse)
{
    testTree.preOrderWalk(testTree.getRoot());
    std::string expect = "10 8 3 0 1 7 9 19 15 21 100";
    std::string actual = testTree.print();

    EXPECT_STREQ(expect.c_str(), actual.c_str());
}
