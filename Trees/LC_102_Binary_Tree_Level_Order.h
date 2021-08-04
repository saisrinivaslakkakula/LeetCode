//
// Created by sai srinivas lakkakula on 7/20/21.
//

#ifndef LETTCODE_LC_102_BINARY_TREE_LEVEL_ORDER_H
#define LETTCODE_LC_102_BINARY_TREE_LEVEL_ORDER_H
#include <vector>
#include <queue>

using std::vector;
using std::queue;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

vector<vector<int>> levelOrder(TreeNode* root);
TreeNode* createNode(int val);
#endif //LETTCODE_LC_102_BINARY_TREE_LEVEL_ORDER_H
