//
// Created by sai srinivas lakkakula on 7/23/21.
//

#ifndef LETTCODE_LC_653_TWO_SUM_BST_H
#define LETTCODE_LC_653_TWO_SUM_BST_H
#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>
using std::unordered_set;
using std::vector;
using std::queue;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
bool findTarget(TreeNode* root, int k);
bool findValue(TreeNode* root, int k);
#endif //LETTCODE_LC_653_TWO_SUM_BST_H
