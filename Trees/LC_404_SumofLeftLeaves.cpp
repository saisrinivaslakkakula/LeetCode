//
// Created by sai srinivas lakkakula on 7/29/21.
//
#include "LC_404_SumofLeftLeaves.h"
int sumOfLeftLeaves(TreeNode* root){
    queue<TreeNode* > queue;
    int sum;
    queue.push(root);
    while(!queue.empty()){
        //TreeNode* current = queue.front();
        if(queue.front()->left!= nullptr && queue.front()->left->left== nullptr && queue.front()->left->right== nullptr)
            sum = sum + queue.front()->left->val;
        if(queue.front()->left!= nullptr)
            queue.push(queue.front()->left);
        if(queue.front()->right!= nullptr)
            queue.push(queue.front()->right);
        queue.pop();
    }
    return sum;




}
