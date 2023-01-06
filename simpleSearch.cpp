#include<iostream>
using namespace std;
int linearSearch(int arr[], int target,int n){
	int location = -1;
	int i = 0;
	while(i < n && arr[i] != target){
		i++;
	}
	if(i < n){
		location = i;
	}
	return location;
}

int main(){
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	cout << linearSearch(arr, 99, n);
	
	return 0;
}
