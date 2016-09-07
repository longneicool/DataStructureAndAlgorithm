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

TEST_F(TestTreeFixture, test_search_with_recurse)
{
	SearchTree actual = testTree.search(testTree.getRoot(), 100);
	EXPECT_EQ(100, actual->elem);
}

TEST_F(TestTreeFixture, test_search_without_recurse)
{
	SearchTree actual = testTree.searchWithoutRecurse(testTree.getRoot(), 100);
	EXPECT_EQ(100, actual->elem);
}

TEST_F(TestTreeFixture, should_return_null_when_not_search_in_recurse_search)
{
	SearchTree actual = testTree.search(testTree.getRoot(), 1000);
	EXPECT_EQ(NULL, actual);
}

TEST_F(TestTreeFixture, should_return_null_when_not_search_in_without_recurse_search)
{
	SearchTree actual = testTree.searchWithoutRecurse(testTree.getRoot(), 1000);
	EXPECT_EQ(NULL, actual);
}

TEST_F(TestTreeFixture, should_return_100_when_find_max)
{
	EXPECT_EQ(100, testTree.max());
}

TEST_F(TestTreeFixture, should_return_0_when_find_min)
{
	EXPECT_EQ(0, testTree.min());
}
