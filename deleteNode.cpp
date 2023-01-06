#include<iostream>
using namespace std;
struct node{
	int number;
	node *next;
}*head=NULL;
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

void deleteTheFirstNode(){
	node *temp;
	temp = head;
	head = head->next;
	delete temp;
}
void deleteAtEnd(){
	node *temp, *temp2;
	temp = head;
	if(head == NULL){
		cout << "The list is empty " << endl;
	}
	if(head->next == NULL){
		head = NULL;
		delete temp;
	} else {
		while(temp->next != NULL){
			temp2 = temp;
			temp = temp2->next; 
		}
		delete temp;
		temp2->next = NULL;
	}
}
void deleteAtPosition(int position){
	node *curr = head;
	for(int i = 1; i < position-1; i++){
		curr = curr->next;
	}
	if(curr== NULL || curr->next == NULL){
			return;
		}
		node *next = curr->next->next;
		delete curr->next;
		curr->next = next;
	
	
}
int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	//deleteTheFirstNode();
	deleteAtPosition(3);
//	deleteAtEnd();
	//cout << "So.....I have deleted the value at the end of the list " << endl;
	cout << "The linked list is " << endl;
	display();
}
