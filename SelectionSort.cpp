#include<iostream>
using namespace std;
int selectionSort(int arr[], int n){
	int min_idx, temp;
	for(int i = 0; i < n-1; i++){
		min_idx = i;
		for(int j = i + 1; j < n; j++){
			if(arr[min_idx] > arr[j]){
				min_idx = j;
			}
		}
		if(min_idx != i){
			temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
		}
	}
	
	for(int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int arr [] = {5,6,2,3,4};
	int n = sizeof(arr)/sizeof(int);
	selectionSort(arr, n);
	return 0;
}
