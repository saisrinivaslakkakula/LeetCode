//
// Created by sai srinivas lakkakula on 7/21/21.
//
#include "LC_543_Diameter_Of_The_Tree.h"

int diameterOfBinaryTree(TreeNode* root){

    vector<int> edges;
    int max =0;
    findDepth(root,max);

    //return (*std::max_element(edges.begin(),edges.end()));
    return max;
}

int findDepth(TreeNode* root,int &max){
    if(root== nullptr)
        return 0;
    if(root->left!= nullptr && root->right!= nullptr){
        int leftDepth = 1+findDepth(root->left,max);
        int rightDepth = 1+findDepth(root->right,max);
        int res = leftDepth+rightDepth;
        if(res>max)
            max = res;
        int depth = std::max(leftDepth,rightDepth);
        std::cout<<"root:"<<root->val<<"LeftDepth:"<<leftDepth<<" RightDepth:"<<rightDepth<<" edgeCount=>"<<res<<" Depth"<<depth<<"\n";
        return (depth);
    }
    else if(root->left== nullptr && root->right!= nullptr){
        int leftDepth = 0;
        int rightDepth = 1+findDepth(root->right,max);
        int res = leftDepth+rightDepth;
        if(res>max)
            max = res;
        int depth = std::max(leftDepth,rightDepth);
        std::cout<<"root:"<<root->val<<"LeftDepth:"<<leftDepth<<" RightDepth:"<<rightDepth<<" edgeCount=>"<<res<<" Depth"<<depth<<"\n";
        return (depth);
    }
    else if(root->left!= nullptr && root->right== nullptr){
        int leftDepth = 1+findDepth(root->left,max);
        int rightDepth = 0;
        int res = leftDepth+rightDepth;
        if(res>max)
            max = res;
        int depth = std::max(leftDepth,rightDepth);
        std::cout<<"root:"<<root->val<<"LeftDepth:"<<leftDepth<<" RightDepth:"<<rightDepth<<" edgeCount=>"<<res<<" Depth"<<depth<<"\n";
        return (depth);
    }
    else
        return 0;

}


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
