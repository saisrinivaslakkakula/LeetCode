//
// Created by sai srinivas lakkakula on 7/23/21.
//

#include "LC_653_Two_Sum_BST.h"
bool findTarget(TreeNode* root, int k){
       /*if(root== nullptr)
           return false;
       else{
           int diff = root->val;
           if(k>root->val)
               diff = k- root->val;
           else if(k<root->val)
               diff = root->val-k;
           std::cout<<"Root "<<root->val<<" Finding for: "<<diff<<"\n";
           if(findValue(root->right,diff) || findValue(root->left,diff))
               return true;
           else{
               findTarget(root->left,k);
               findTarget(root->right,k);
           }
       }
    return false;*/
    queue<TreeNode* > queue;
    vector<int> nodes;
    unordered_set<int> set;
    queue.push(root);
    while (!queue.empty()){
        if(queue.front()!= nullptr) {
            queue.push(queue.front()->left);
            queue.push(queue.front()->right);
            nodes.push_back(queue.front()->val);
            set.insert(queue.front()->val);
        }
        queue.pop();

    }
    int i=0;
    while(i<nodes.size() && nodes.size()>1){
        int curr = k-nodes[i];
        if(curr==0 ){
            i++;
            continue;
        }

        if(set.find(curr)!=set.end())
            return true;
        i++;
    }
    return false;
}

bool findValue(TreeNode* root, int k){
    if(root == nullptr)
        return false;
    if(root->val == k)
        return true;
    if(k<root->val)
        return findValue(root->left,k);
    else
        return findValue(root->right,k);
}