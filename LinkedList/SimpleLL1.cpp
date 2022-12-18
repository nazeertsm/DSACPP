#include<iostream>
using namespace std;

struct Node{   /* Linked list Node*/
    int data;
    Node* next;
    Node(int x){  // Constructor to create a new node 
        data=x;
        next=NULL;
    }
};

int main() 
{ 
	Node *head=new Node(10); //create head node
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->next=temp2;
	cout<<head->data<<"-->"<<temp1->data<<"-->"<<temp2->data;
	return 0;
} 
