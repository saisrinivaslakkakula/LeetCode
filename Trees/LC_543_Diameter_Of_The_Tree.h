//
// Created by sai srinivas lakkakula on 7/21/21.
//

#ifndef LETTCODE_LC_543_DIAMETER_OF_THE_TREE_H
#define LETTCODE_LC_543_DIAMETER_OF_THE_TREE_H
#include <iostream>
#include <vector>
#include <queue>
using std::vector;
using std::queue;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
int diameterOfBinaryTree(TreeNode* root);
TreeNode* createNode(int val);
int findDepth(TreeNode* root , int &max);
//
#endif //LETTCODE_LC_543_DIAMETER_OF_THE_TREE_H
