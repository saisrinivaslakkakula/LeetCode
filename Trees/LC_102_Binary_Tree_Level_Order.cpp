//
// Created by sai srinivas lakkakula on 7/20/21.
//
#include "LC_102_Binary_Tree_Level_Order.h"
vector<vector<int>> levelOrder(TreeNode* root){
    queue<TreeNode*> tobeProcessed, beingProcessed;
    vector<vector<int>>res;
    vector<int> temp;
    if(root== nullptr)
        return res;
    tobeProcessed.push(root);
   // temp.push_back(root->val);
   // res.push_back(temp);
    while (!tobeProcessed.empty()){
        beingProcessed = tobeProcessed;
        while(!tobeProcessed.empty()){
            temp.push_back(tobeProcessed.front()->val);
            tobeProcessed.pop();
        }
        res.push_back(temp);
        temp.clear();
        while (!beingProcessed.empty()){
                if(beingProcessed.front()->left!= nullptr) tobeProcessed.push(beingProcessed.front()->left);
                if(beingProcessed.front()->right!= nullptr) tobeProcessed.push(beingProcessed.front()->right);
                beingProcessed.pop();
        }
    }
    return res;
}

TreeNode* createNode(int i){

  TreeNode* newNode = new TreeNode();
  newNode->left = newNode->right = nullptr;
  newNode->val = i;
    return newNode;

}