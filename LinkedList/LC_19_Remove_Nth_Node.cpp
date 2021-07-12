//
// Created by sai srinivas lakkakula on 7/10/21.
//
#include "LC_19_Remove_Nth_Node.h"

ListNode* removeNthFromEnd(ListNode* head, int n){
    int total_count = 0;
    ListNode *headptr,*finalptr;
    headptr = finalptr = head;
    if(head== nullptr){
        return nullptr;
    }
    else if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    else{
        while(head!= nullptr){
            head = head->next;
            total_count++;
        }
        int to_be_removed = total_count - n;
        int i=1;
        while(i<to_be_removed){
            i++;
            headptr = headptr->next;
        }
        if(to_be_removed == 0){
            return headptr->next;
        }
        else{
            ListNode *nodeToBeRemoved = headptr->next;
            headptr->next = nodeToBeRemoved->next;
            delete nodeToBeRemoved;
            return finalptr;
        }

    }


}

void printList(ListNode* head){
    while(head != nullptr){
        std::cout<<head->val;
        head = head->next;
    }
}