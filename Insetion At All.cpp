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

void insertAtTail(node *&head,int d){
	node *temp = head;	
	while(temp->next != NULL){
		temp = temp->next;
	}
	node *n = new node(d);
	temp->next = n;
	temp = n;
}

void insertAtHead(node *&head,int d)
{
	node *n = new node(d);
	n->next = head;
	head = n;
}

void insertAtMiddle(node *&head,int d, int pos){
	node *temp = head;
	pos = pos-1;
	while(pos!=0){
		temp = temp->next;
		pos--;
	}
	node *n = new node(d);
	n->next = temp->next;
	temp->next = n;
}
void printList(node *head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<endl;
}
int main(){
	node *head = NULL;
	insertAtHead(head, 7);
	insertAtHead(head, 9);
	insertAtTail(head, 10);
	insertAtTail(head, 15);
	insertAtMiddle(head, 13, 3);
	printList(head);
}
