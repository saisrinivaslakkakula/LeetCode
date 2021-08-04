//
// Created by sai srinivas lakkakula on 7/29/21.
//

#ifndef LETTCODE_LC_404_SUMOFLEFTLEAVES_H
#define LETTCODE_LC_404_SUMOFLEFTLEAVES_H
#include <queue>
using std::queue;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode() : val(0), left(nullptr), right(nullptr) {}
         TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };

int sumOfLeftLeaves(TreeNode* root);
#endif //LETTCODE_LC_404_SUMOFLEFTLEAVES_H
