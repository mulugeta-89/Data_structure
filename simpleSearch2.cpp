#include<iostream>
using namespace std;
int simpleSearch(int arr[], int target, int n){
	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	cout << simpleSearch(arr, 99, n);
}
