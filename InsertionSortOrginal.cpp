#include<iostream>
using namespace std;
int insertionSort(int arr[], int n){
	int key, j;
	for(int i = 1; i < n; i++){
		key = arr[i];
		j = i-1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = key;
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int list[] = {66,3,5,2,5,7,5};
	int n = sizeof(list)/sizeof(int);
	insertionSort(list, n);
	
	return 0;
}
