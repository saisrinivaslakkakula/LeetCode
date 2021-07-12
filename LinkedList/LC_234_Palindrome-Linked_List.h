//
// Created by sai srinivas lakkakula on 7/8/21.
//

#ifndef LETTCODE_LC_234_PALINDROME_LINKED_LIST_H
#define LETTCODE_LC_234_PALINDROME_LINKED_LIST_H
#include <stack>
using std::stack;
struct ListNode {
    int val;
    ListNode *next;
};
bool isPalindrome(ListNode* head);
#endif //LETTCODE_LC_234_PALINDROME_LINKED_LIST_H
