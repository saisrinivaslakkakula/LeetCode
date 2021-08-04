//
// Created by sai srinivas lakkakula on 7/22/21.
//
#include "LC_235_Lowest_Common_Ancestor.h"

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    if (root== nullptr)
        return nullptr;
    if((p->val< root->val < q->val) ||(p->val>root->val > q->val)){
        return root;
    }
    else if(p->val && q->val<root->val){
        return lowestCommonAncestor(root->left,p,q);
    }
    else if(p->val && q->val >root->val){
        return lowestCommonAncestor(root->right,p,q);
    }
    else{
        return root;
    }


}