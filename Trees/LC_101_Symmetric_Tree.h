//
// Created by sai srinivas lakkakula on 7/21/21.
//

#ifndef LETTCODE_LC_101_SYMMETRIC_TREE_H
#define LETTCODE_LC_101_SYMMETRIC_TREE_H
#include <stack>
#include <queue>
#include <iostream>
#include <vector>
using std::stack;
using std::queue;
using std::vector;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
bool isSymmetric(TreeNode* root);
void inorderTraversal(TreeNode* root,stack<TreeNode*> &left);
void mirrorTraversal(TreeNode* root,stack<TreeNode*> &right);
TreeNode* createNode(int val);
#endif //LETTCODE_LC_101_SYMMETRIC_TREE_H
