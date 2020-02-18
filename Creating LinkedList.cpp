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


int main(){
	node *n = new node(8);
	cout<<"Value At Head Of The Node Is: "<<n->data<<" --> "<<n->next;
	return 0;
}
