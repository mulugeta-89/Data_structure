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

node *getNode2(){
	node *temp = new node;
	cout << "Enter the Number " << endl;
	cin >> temp->number;
	return temp;
}
void insert_afterNode(){
	int location;
	cout << "At which location you want to insert " << endl;
	cin >> location;
	node *temp = getNode2();
	if(head == NULL){
		temp->next = NULL;
		temp = head;
	} else if(location == 1){
		head->next = temp;
		temp->next = NULL;
	} else {
		node *curr = head;
		for(int i = 1; i <= location-1; i++){
			curr = curr->next;
		}
		//cout << "The current number is " << curr->number;
		temp->next = curr->next;
		curr->next = temp;
	}
}
int main(){
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert_afterNode();
	cout << "The linked list is " << endl;
	display();
	return 0;
}
