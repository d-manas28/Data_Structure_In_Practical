#include<iostream>
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

void insertNodeAtBeg(node* &head,int data){
	
	node *n = new node(data);
	n->next = head;
	head = n;
}

void printList(node *head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head = head->next;
	}
}

int main()
{
	node *head = NULL;
	insertNodeAtBeg(head,7);	
	insertNodeAtBeg(head,8);
	insertNodeAtBeg(head,10);
	printList(head);
	return 0;
}
