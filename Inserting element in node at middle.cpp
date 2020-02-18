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

void insertAtTail(node *&head,int data){
	
	if(head == NULL){
		head = new node(data);
		return;
	}
	node *tail = head;
	while(tail->next != NULL){
		tail = tail->next;
	}
	tail->next = new node(data);
	return;
	
}
int length(node *head){
	int temp_len = 0;
	while(head!=NULL){
		head = head->next;
		temp_len =+ 1;
	}
	return temp_len;
	cout<<"Length is: "<<temp_len;
}
void insertAtMiddle(node* &head,int data,int pos){
	
	if(head == NULL||pos == 0){
		head = new node(data);
	}
	else if(pos > length(head)){
		insertAtTail(head,data);
	}
	else{
	node *temp = head;
	pos = pos - 1;
	int jump = 1;
	while(jump<=pos){
		temp = temp->next;
		jump = jump+1;
	}
	node *n = new node(data);
	n->next = temp->next;
	temp->next = n;
	}
}

void printList(node *head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head = head->next;
	}
}

int main(){
	node *head = NULL;
	insertAtTail(head,6);
	insertAtTail(head,7);
	insertAtTail(head,10);
	insertAtTail(head,12);
	insertAtMiddle(head,2,3);
	printList(head);
	return 0;
}
