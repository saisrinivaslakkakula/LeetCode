//
// Created by sai srinivas lakkakula on 7/6/21.
//

#ifndef LETTCODE_LC_21_MERGE_TWO_SORTED_LIST_H
#define LETTCODE_LC_21_MERGE_TWO_SORTED_LIST_H
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
};
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
void printList(ListNode* head);
void deleteNode(ListNode* node);
#endif //LETTCODE_LC_21_MERGE_TWO_SORTED_LIST_H
