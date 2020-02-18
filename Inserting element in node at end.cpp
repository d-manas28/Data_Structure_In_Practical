#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node *next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void insertAtTail(node* &head,int data){
	
	node *n = new node(data);
	
	if(head == NULL){
		head = n;
		return;
	}
	node *tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	tail->next = n;
	return;
}

void printList(node *head){
	while(head != NULL){
		cout<<head->data<<" -> ";
		head = head->next;
	}
}

int main(){
	node *head = NULL;
	insertAtTail(head,8);
	insertAtTail(head,10);
	insertAtTail(head,12);
	printList(head);
	return 0;
}
