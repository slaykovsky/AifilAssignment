#include <gtest/gtest.h>
#include <List.h>

TEST(ListTest, InitializationTest)
{
    int test_number = 10;
    ListNode* node = new ListNode;
    init_node(node, test_number);
    EXPECT_EQ(test_number, node->data);
}

TEST(ListTest, PushBackTest)
{
    int init_number = 10;
    int push_number = 20;
    ListNode* node = new ListNode;
    init_node(node, init_number);
    push_back(node, push_number);
    EXPECT_EQ(push_number, node->next->data);
}

TEST(ListTest, ListToStringTest)
{
    int init_number = 1;
    ListNode* node = new ListNode;
    init_node(node, init_number);

    for (int i = 2; i < 9; ++i)
    {
        push_back(node, i);
    }

    std::string expected = "1-2-3-4-5-6-7-8";
    std::string actual = list_to_string(node);

    EXPECT_EQ(expected, actual);
}

TEST(ListTest, ChangeOrderTest)
{
    int init_number = 1;
    ListNode* node = new ListNode;
    init_node(node, init_number);

    for (int i = 2; i < 9; ++i)
    {
        push_back(node, i);
    }

    std::string expected = "1-8-2-7-3-6-4-5";
    change_order(node);
    std::string actual = list_to_string(node);

    EXPECT_EQ(expected, actual);
}