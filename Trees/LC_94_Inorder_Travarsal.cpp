//
// Created by sai srinivas lakkakula on 7/19/21.
//

#include "LC_94_Inorder_Travarsal.h"

vector<int> inorderTraversal(treeNode* root){
    vector<int> val;
    traverse(root,val);
    return val;

}

void traverse(treeNode* root, vector<int> &res){
    if(root == nullptr){
        return;
    }
    else{
        traverse(root->left,res);
        res.push_back(root->val);
        traverse(root->right,res);

    }
}

