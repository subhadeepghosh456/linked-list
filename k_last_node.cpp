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

int kthLastElement(node *head, int k){
    
    
    node* slow = head;
    node* fast = head;
    
    int count = 0;
    
    while(fast!=NULL and count<k){
        fast = fast->next;
        count++;
    }
    
    while(fast!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow->data;
    
    
    //Complete this function to return kth last element
    
    
    
    
    
}