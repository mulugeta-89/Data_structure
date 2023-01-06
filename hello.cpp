#include<iostream>
using namespace std;
struct node{
	int number;
	node *next;
}*head = NULL;
void insert(int newNumber){
	node *newNode = new node;
	newNode->number = newNumber;
	newNode->next = head;
	head = newNode;
}
void display(){
	node *nodePtr;
	nodePtr = head;
	while(nodePtr != NULL){
		cout << nodePtr->number <<endl;
		nodePtr = nodePtr->next;
	}
}
void insertAtBeginning(int data){
	node *temp = new node;
	temp->number = data;
	if(head == NULL){
		head->next = NULL;
		head = temp;
	} else {
		temp->next = head;
	}
	head = temp;
}
int main(){
	//node *head = NULL;
	insert(2);
	insertAtBeginning(3);
	cout << "The linked list is" << endl;
	display();
	return 0;
}

