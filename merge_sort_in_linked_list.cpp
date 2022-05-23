#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};


node* getMid(node *head){
    //Complete this function to return data middle node
    
    node* slow = head;
    node* fast = head->next;
    
    while(fast && fast->next){
        
        slow=slow->next;
        fast=fast->next->next;
        
    }
    
    return slow;
    
}

node* merge(node* a,node* b){
    if(a==NULL){
        return b;
    }

    if(b==NULL){
        return a;
    }

    node* c = NULL;

    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);

    }else{
        c=b;
        c->next = merge(a,b->next);
    }

    return c;
}

node* merge_sort(node* head){

    if(head==NULL or head->next==NULL){
        return head;
    }

    node* mid = getMid(head);

    node* a = head;
    node* b = mid->next;
    mid->next = NULL;

    a = merge_sort(a);
    b = merge_sort(b);

    return merge(a,b);


}