//
// Created by sai srinivas lakkakula on 7/21/21.
//
#include "LC_101_Symmetric_Tree.h"
bool isSymmetric(TreeNode* root){

    queue<TreeNode*> tobeProcessed, beingProcessed;
    vector<vector<TreeNode*>>res;
    vector<TreeNode*> temp;
    if(root== nullptr)
        return false;
    tobeProcessed.push(root);
    while (!tobeProcessed.empty()){
        beingProcessed = tobeProcessed;
        while(!tobeProcessed.empty()){
            temp.push_back(tobeProcessed.front());
            tobeProcessed.pop();
        }
        res.push_back(temp);
        temp.clear();
        while (!beingProcessed.empty()){
            if(beingProcessed.front() == nullptr)
            {
                beingProcessed.pop();
                continue;
            }
            if(beingProcessed.front()->left!= nullptr) tobeProcessed.push(beingProcessed.front()->left);
            else tobeProcessed.push(nullptr);
            if(beingProcessed.front()->right!= nullptr) tobeProcessed.push(beingProcessed.front()->right);
            else tobeProcessed.push(nullptr);
            beingProcessed.pop();
        }
    }
    int i=1;
    while(i<res.size()){
        vector<TreeNode*> row = res[i];
        int j=0;
        int k = row.size()-1;
        while(j<=(row.size()/2)-1){
            if(row[j]== nullptr && row[k] == nullptr)
            {
                j++;
                k--;
                continue;
            }
            else if(row[j]== nullptr || row[k] == nullptr){
                return false;
            }
            else if(row[j]->val == row[k]->val){
                j++;
                k--;
                continue;
            }
            else{
                return false;
            }

        }
        i++;
    }

    return true;

}

void inorderTraversal(TreeNode* root, stack<TreeNode*> &leftbranch){
     if(root== nullptr){
         leftbranch.push(nullptr);
         return;
     }
    inorderTraversal(root->left,leftbranch);
    leftbranch.push(root);
    inorderTraversal(root->right,leftbranch);
}

void mirrorTraversal(TreeNode* root,stack<TreeNode*> &rightbranch){
    if(root== nullptr){
        rightbranch.push(nullptr);
        return;
    }
    inorderTraversal(root->right,rightbranch);
    rightbranch.push(root);
    inorderTraversal(root->left,rightbranch);


}

TreeNode* createNode(int i){

    TreeNode* newNode = new TreeNode();
    newNode->left = newNode->right = nullptr;
    newNode->val = i;
    return newNode;

}