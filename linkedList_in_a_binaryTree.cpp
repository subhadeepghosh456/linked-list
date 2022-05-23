
#include<bits/stdc++.h>
using namespace std;
/**
 * 
 * Definition for singly-linked list.*/
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
/**
 * Definition for a binary tree node.*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    bool listOnTree(ListNode* head, TreeNode* root) {
        
        if(head==NULL){
            return true;
        }
        
        if(root==NULL){
            return false;
        }
        
        if(root->val==head->val){
            return listOnTree(head->next,root->left) || listOnTree(head->next,root->right);
        }
        
        return false;
        
    }
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        
        if(head==NULL){
            return true;
        }
        
        if(root==NULL){
            return false;
        }
        
        if(listOnTree(head,root)==true){
            return true;
        }
        
        return isSubPath(head,root->left) || isSubPath(head,root->right);
        
    }
};