//
// Created by sai srinivas lakkakula on 7/7/21.
//

#ifndef LETTCODE_LC_160_INTERSECTION_OF_TWO_LINKED_LISTS_H
#define LETTCODE_LC_160_INTERSECTION_OF_TWO_LINKED_LISTS_H
#include <unordered_set>
#include <iostream>
using std::unordered_set;
struct ListNode {
    int val;
    ListNode *next;
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
void printList(ListNode* head);
#endif //LETTCODE_LC_160_INTERSECTION_OF_TWO_LINKED_LISTS_H
