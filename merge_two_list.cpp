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