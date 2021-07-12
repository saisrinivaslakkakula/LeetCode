#include <iostream>
#include "LinkedList/LC_19_Remove_Nth_Node.h"

int main() {
    ListNode *n0 =  new ListNode();
    ListNode *n1 =  new ListNode();
    ListNode *n2 =  new ListNode();
    ListNode *n3 =  new ListNode();
    ListNode *n4 =  new ListNode();
    ListNode *n5 =  new ListNode();
    ListNode *n6 =  new ListNode();
    ListNode *n7 =  new ListNode();

    n1->val = 1;
    n1->next = n2;
    n2->val = 2;
    n2->next = n3;
    n3->val = 3;
    n3->next = n4;
    n4->val = 4;
    n4->next = n5;
    n5->val = 5;
    n5->next = nullptr;
    printList(removeNthFromEnd(n1,1));





}
