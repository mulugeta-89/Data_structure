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

void insertAtEnd(int data){
	node *temp = new node;
	temp->number = data;
	temp->next = NULL;
	if(head == NULL){	
		head = temp;
	} else {
		node *curr = head;
		//temp->next = NULL;
		while(curr->next != NULL){
			curr = curr->next;
		}
		curr->next = temp;
	}
}
//here starts enter the number in the right position before a node
node *getNode(){
	node *temp = new node;
	cout << "Enter the Number " << endl;
	cin >> temp->number;
	return temp;
}
void insert_beforeNode(){
	int location;
	cout << "At which location you want to insert " << endl;
	cin >> location;
	node *temp = getNode();
	if(head == NULL){
		temp->next = NULL;
		temp = head;
		;
	} else if(location == 1){
		temp->next = head;
		head = temp;
	} else {
		node *curr = head;
		for(int i = 1; i<(location-1); i++){
			curr = curr->next;
		}
		cout << "The current is " << curr->number << endl;
		temp->next = curr->next;
		curr->next = temp;
	}
}
//here ends entering a node before a a node

//here starts entering a node after a given node

//here ends entering a node after a given node

int main(){
	//node *head = NULL;
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	//insertAtBeginning(3);
	//insertAtEnd(9);
	insert_beforeNode();
	//insert_afterNode();
	cout << "The linked list is" << endl;
	display();
	return 0;
}

