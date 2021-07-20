//
// Created by sai srinivas lakkakula on 7/19/21.
//

#ifndef LETTCODE_LC_94_INORDER_TRAVARSAL_H
#define LETTCODE_LC_94_INORDER_TRAVARSAL_H
#include <vector>
#include "constructTree.h"

using std::vector;
struct TreeNode {

    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
vector<int> inorderTraversal(treeNode* root);
void traverse(treeNode* root, vector<int> &res);
#endif //LETTCODE_LC_94_INORDER_TRAVARSAL_H
