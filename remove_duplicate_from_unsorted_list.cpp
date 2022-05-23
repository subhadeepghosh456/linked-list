#include<bits/stdc++.h>
using namespace std;

/****************************************************************
    Following is the class structure of the Node class:
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

Node *removeDuplicates(Node *head)
{
    // Write your code here
	unordered_map<int,int>mp;
    
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node * prev = NULL;
	Node * curr = head;
	
	mp[curr->data]=1;
	prev = curr;
	curr = curr->next;
	
	while(curr!=NULL){
		if(mp[curr->data]==1){
			prev->next = curr->next;
			curr = curr->next;
		}
		else{
			mp[curr->data] = 1;
			prev = curr;
			curr = curr->next;
		}
	}
	
	return head;
	
}