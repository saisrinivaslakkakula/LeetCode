//
// Created by sai srinivas lakkakula on 7/6/21.
//
#include "LC_876_Middle_Of_Linked_List.h"
ListNode* middleNode(ListNode* head){
    int count = 0;
    ListNode *tmphead = head;
    while(tmphead!= nullptr){
        count++;
        tmphead = tmphead->next;
    }

    int middle = (count/2)+1;
    //std::cout<<"Count:"<<count<<"\n";
    //std::cout<<"middle:"<<middle<<"\n";
    int i=1;
    while (i!=middle){
       i++;
       head= head->next;
    }
    return head;

}

