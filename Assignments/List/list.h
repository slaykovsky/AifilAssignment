//
// Created by Alexey Slaykovsky on 26/12/15.
//

#ifndef AIFILASSIGNMENT_LIST_H
#define AIFILASSIGNMENT_LIST_H

#include <iostream>
#include <string>

struct ListNode {
    int data;
    ListNode* next;
};

void init_node(ListNode* head, int data);

void push_back(ListNode *head, int data);

std::string list_to_string(ListNode* head);

void change_order(ListNode *head);

// You could test it in cling
std::ostream& operator<<(std::ostream& os, ListNode node);

#endif //AIFILASSIGNMENT_LIST_H
