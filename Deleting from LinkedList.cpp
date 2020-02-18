//program to delete a node
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

void insertAtTail(node *&head,int d){
	node *temp = head;	
	if(head == NULL){
		node *n = new node(d);
		head = n;
	}
	else{
	while(temp->next != NULL){
		temp = temp->next;
	}
	node *n = new node(d);
	temp->next = n;
	temp = n;
	}
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

node* deleteHead(node* &head){
	node *firsttemp = head;
	node *secondtemp = head->next;
	head = secondtemp;
	delete(firsttemp);
	return head;
}

node* DeletingFromTail(node* &head){
	
	node *firstTemp = head;
	node *secondTemp = head->next;
	while(secondTemp->next != NULL){
		firstTemp = firstTemp->next;
		secondTemp = secondTemp->next;
	}
	firstTemp->next = NULL;
	delete(secondTemp);
	return head;
}

node *DeletefromMiddle(node* &head,int key){
	node *firstTemp = head;
	node *secondTemp = head->next;
	while(secondTemp->data != key){
		secondTemp = secondTemp->next;
		firstTemp = firstTemp->next;
	}
	firstTemp->next = secondTemp->next;
	delete(secondTemp);
	return head;
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
	insertAtTail(head, 8);	
	insertAtTail(head,10);
	insertAtTail(head,13);
	insertAtTail(head,15);
	printList(head);
	cout<<"After Deleting Head: "<<endl;
	head = deleteHead(head);
	printList(head);
	cout<<"Inserting One More Node: "<<endl;
	insertAtTail(head, 8);	
	printList(head);
	cout<<"Deleting From Tail and List Becomes: "<<endl;
	head = DeletingFromTail(head);
	printList(head);
	cout<<"Inserting Element In The Defined Position in The List"<<endl;
	insertAtMiddle(head,8,2);
	printList(head);
	head = DeletefromMiddle(head,8);	
	cout<<"After Deleting Node With Data 8"<<endl;
	printList(head);
	return 0;
}
