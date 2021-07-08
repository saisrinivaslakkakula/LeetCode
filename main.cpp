#include <iostream>
#include "LinkedList/LC_160_Intersection_Of_Two_Linked_Lists.h"

int main() {
    ListNode *l1 =  new ListNode();
    ListNode *n1 =  new ListNode();
    ListNode *n2 =  new ListNode();
    ListNode *n3 =  new ListNode();
    ListNode *n4 =  new ListNode();
    ListNode *l2 =  new ListNode();
    ListNode *n6 =  new ListNode();
    ListNode *n7 =  new ListNode();

    l1->val = 2;
    l1->next = n1;
    n1->val = 4;
    n1->next = n2;
    n2->val = 3;
    n2->next = n4;
    l2->val = 5;
    l2->next = n3;
    n3->val = 6;
    n3->next = n2;
    n4->val = 4;
    n4->next = nullptr;
    printList(getIntersectionNode(l1,l2));




}
