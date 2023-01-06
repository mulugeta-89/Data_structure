#include<iostream>
using namespace std;
int binarySearch(int arr[], int target, int n){
	int left = 0;
	int right = n-1;
	int mid;
	while(left <=right){
		mid = (left + right)/2;
		if(arr[mid] == target){
			return mid;
		} else if(arr[mid] > target){
			right = mid - 1;
		} else if(arr[mid] < target){
			left = mid + 1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	cout << binarySearch(arr, 9, n);
}
