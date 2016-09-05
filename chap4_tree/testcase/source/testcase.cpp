#include "TestTreeFixture.h"
#include <string>

TEST_F(TestTreeFixture, test_pre_order_print_with_recurse)
{
    testTree.preOrderWalk(testTree.getRoot());
    std::string actual = testTree.print();

    EXPECT_STREQ(preOrder.c_str(), actual.c_str());
}

TEST_F(TestTreeFixture, test_in_order_print_with_recurse)
{
	testTree.inOrderWalk(testTree.getRoot());
	std::string actual = testTree.print();

	EXPECT_STREQ(inOrder.c_str(), actual.c_str());
}

TEST_F(TestTreeFixture, test_post_order_print_with_recurse)
{
	testTree.postOrderWalk(testTree.getRoot());
	std::string actual = testTree.print();

	EXPECT_STREQ(postOrder.c_str(), actual.c_str());
}

TEST_F(TestTreeFixture, test_pre_order_print_without_recurse)
{
    testTree.preOrderWalkWithoutRecur(testTree.getRoot());
    std::string actual = testTree.print();

    EXPECT_STREQ(preOrder.c_str(), actual.c_str());
}

TEST_F(TestTreeFixture, test_in_order_print_without_recurse)
{
	testTree.inOrderWalkWithoutRecur(testTree.getRoot());
	std::string actual = testTree.print();

	EXPECT_STREQ(inOrder.c_str(), actual.c_str());
}

TEST_F(TestTreeFixture, test_post_order_print_without_recurse)
{
	testTree.postOrderWalkWithoutRecur(testTree.getRoot());
	std::string actual = testTree.print();

	EXPECT_STREQ(postOrder.c_str(), actual.c_str());
}
