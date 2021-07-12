//
// Created by sai srinivas lakkakula on 7/10/21.
//

#ifndef LETTCODE_LC_19_REMOVE_NTH_NODE_H
#define LETTCODE_LC_19_REMOVE_NTH_NODE_H
#include<iostream>
#include <unordered_map>
using std::unordered_map;
struct ListNode {
    int val;
    ListNode *next;
};
ListNode* removeNthFromEnd(ListNode* head, int n);
void printList(ListNode* head);
#endif //LETTCODE_LC_19_REMOVE_NTH_NODE_H
