//
// Created by sai srinivas lakkakula on 7/6/21.
//
#include "LC_21_Merge_Two_Sorted_List.h"
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){


            ListNode *head = new ListNode();
            ListNode *headPointer = head;
            while (l1!= nullptr && l2!= nullptr){
                if(l1->val < l2->val){
                    ListNode *newNode = new ListNode();
                    newNode->val = l1->val;
                    newNode->next = nullptr;
                    l1 = l1->next;
                    head->next = newNode;
                    head = newNode;
                }
                else{
                    ListNode *newNode = new ListNode();
                    newNode->val = l2->val;
                    newNode->next = nullptr;
                    l2 = l2->next;
                    head->next = newNode;
                    head = newNode;
                }

            }
            while(l1 != nullptr){
                ListNode *newNode = new ListNode();
                newNode->val = l1->val;
                newNode->next = nullptr;
                l1 = l1->next;
                head->next = newNode;
                head = newNode;
            }
            while(l2 != nullptr){
                ListNode *newNode = new ListNode();
                newNode->val = l2->val;
                newNode->next = nullptr;
                l2 = l2->next;
                head->next = newNode;
                head = newNode;
            }
            return headPointer->next;



}

void printList(ListNode* head){
    while(head != nullptr){
        std::cout<<head->val;
        head = head->next;
    }
}

void deleteNode(ListNode* node){
   // node->next = next;

}