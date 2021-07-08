//
// Created by sai srinivas lakkakula on 7/7/21.
//
#include "LC_160_Intersection_Of_Two_Linked_Lists.h"
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
    unordered_set<ListNode*> previous;
    while(headA != nullptr){
        previous.insert(headA);
        headA = headA->next;
    }
    while(headB!=nullptr){
        if(previous.find(headB)!=previous.end())
            return headB;
        else{
            headB = headB->next;
        }
    }
    return nullptr;
}

void printList(ListNode* head){
    while(head != nullptr){
        std::cout<<head->val;
        head = head->next;
    }
}