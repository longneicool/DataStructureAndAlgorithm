#ifndef INCL_CPM_HC08A723F_00B9_4EB9_9249_3C3E3257A897
#define INCL_CPM_HC08A723F_00B9_4EB9_9249_3C3E3257A897

#include "gtest/gtest.h"
#include "tree.h"

struct TestTreeFixture : testing::Test
{
    virtual void SetUp();
protected:
    Tree testTree;
    std::string preOrder;
    std::string inOrder;
    std::string postOrder;
};

#endif
