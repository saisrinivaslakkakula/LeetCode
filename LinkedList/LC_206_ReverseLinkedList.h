//
// Created by sai srinivas lakkakula on 6/30/21.
//

#ifndef LETTCODE_LC_206_REVERSELINKEDLIST_H
#define LETTCODE_LC_206_REVERSELINKEDLIST_H
#include <iostream>
struct ListNode {
        int val;
         ListNode *next;
};

ListNode * insertNode(int val);
ListNode* reverseList(ListNode* head);
void printRev(ListNode* head);
#endif //LETTCODE_LC_206_REVERSELINKEDLIST_H
