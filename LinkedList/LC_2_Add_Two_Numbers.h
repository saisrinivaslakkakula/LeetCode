//
// Created by sai srinivas lakkakula on 7/7/21.
//

#ifndef LETTCODE_LC_2_ADD_TWO_NUMBERS_H
#define LETTCODE_LC_2_ADD_TWO_NUMBERS_H
#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
void printList(ListNode* head);
#endif //LETTCODE_LC_2_ADD_TWO_NUMBERS_H
