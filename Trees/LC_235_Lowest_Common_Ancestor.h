//
// Created by sai srinivas lakkakula on 7/22/21.
//

#ifndef LETTCODE_LC_235_LOWEST_COMMON_ANCESTOR_H
#define LETTCODE_LC_235_LOWEST_COMMON_ANCESTOR_H
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
#endif //LETTCODE_LC_235_LOWEST_COMMON_ANCESTOR_H
