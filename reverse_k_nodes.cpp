#include<bits/stdc++.h>
using namespace std;


/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head==NULL){
        return NULL;
    }
    
    Node* curr = head;
    Node* forward = NULL;
    Node* prev = NULL;
    
    int count =0;
    
    while(curr!=NULL && count<k){
        
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
        
    }
    
    if(forward!=NULL)
         head->next = kReverse(forward, k);
    
    return prev;
    
    
}