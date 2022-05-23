#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

void addAtTail(ListNode* &head,ListNode* &tail,int digit){
        
        ListNode* temp = new ListNode(digit);
        
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        
        else{
            tail->next = temp;
            tail = temp;
            
        }
        
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ansHead = NULL;
        ListNode* tail = NULL;
        
        int carray = 0;
        
        while(l1!=NULL || l2!=NULL || carray!=0){
            
            int val1 = 0;
            
            if(l1!=NULL){
                val1 = l1->val;
            }
            
            int val2 = 0;
            
            if(l2!=NULL){
                val2 = l2->val;
            }
            
            int sum = val1 + val2 + carray;
            
            int digit = sum%10;
            
            addAtTail(ansHead,tail,digit);
            
            carray = sum/10;
            
            if(l1!=NULL){
                l1 = l1->next;
            }
            
            if(l2!=NULL){
                l2 = l2->next;
            }
        }
        
        return ansHead;
        
    }




