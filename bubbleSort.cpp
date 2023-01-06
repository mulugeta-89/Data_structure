#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n){
	int temp;
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	cout << bubbleSort(arr, n);
	return 0;
}
