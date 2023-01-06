#include<iostream>
using namespace std;

struct node{
	int num;
	node *prev;
	node *next;
} *head = NULL;

void insert(int data){
	node *newnode = new node;
	
	newnode->num = data;
	newnode->prev = NULL;
	newnode->next = head;
	
	if(head != NULL)
	{
		head->prev = newnode;
	}
	head = newnode;
	

}

void display(){
	node *nodePtr;
	nodePtr = head;
	while(nodePtr!= NULL){
		cout << nodePtr->num << " ";
		nodePtr = nodePtr->next;
	}
}

//void insert(int newdata) {
//   struct node* newnode = new node;
//   newnode->num = newdata;
//   newnode->prev = NULL;
//   newnode->next = head;
//   if(head != NULL)
//   head->prev = newnode ;
//   head = newnode;
//}
//void display() {
//   struct node* ptr;
//   ptr = head;
//   while(ptr != NULL) {
//      cout<< ptr->num <<" ";
//      ptr = ptr->next;
//   }
//}
int main(){
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	cout << "The doubly linked list is " << endl;
	display();
	return 0;
	
}
