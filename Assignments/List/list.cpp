//
// Created by Alexey Slaykovsky on 26/12/15.
//

#include "list.h"

void init_node(ListNode *head, int data)
{
    head->data = data;
    head->next = nullptr;
}

void push_back(ListNode *head, int data)
{
    ListNode* new_node = new ListNode;
    new_node->data = data;
    new_node->next = nullptr;

    ListNode* current = head;
    while (current != nullptr)
    {
        if (current->next == nullptr)
        {
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

std::string list_to_string(ListNode* head)
{
    ListNode* current = head;
    std::string result;
    while (current != nullptr)
    {
        if (current->next != nullptr)
        {
            result.append(std::to_string(current->data));
            result.append("-");
        }
        else
        {
            result.append(std::to_string(current->data));
        }
        current = current->next;
    }
    return result;
}

void change_order(ListNode *head)
{
    ListNode *previous = head;
    ListNode *current = head;
    ListNode *last = head;
    ListNode *temp = head;

    while (current != nullptr)
    {
        if (current->next == nullptr)
        {
            last = current;
        }
        current = current->next;
    }

    while (previous != last)
    {
        last->next = previous->next;
        previous->next = last;
        previous = last->next;

        while (previous->next != last)
        {
            previous = previous->next;
        }

        if (previous->next == last)
        {
            temp = last->next;
            last = previous;
            last->next = nullptr;
            previous = temp;
        }
    }
}

std::ostream& operator<<(std::ostream& os, ListNode* head)
{
    ListNode* current = head;
    while (current != nullptr)
    {
        if (current->next != nullptr)
        {
            os << current->data << "-";
        }
        else
        {
            os << current->data;
        }
        current = current->next;
    }

    os << std::endl;
    return os;
}
