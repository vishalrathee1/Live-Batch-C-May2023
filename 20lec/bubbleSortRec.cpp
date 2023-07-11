#include<iostream>
using namespace std;

// void BubbleSort(int arr[], int n){
// 	for(int i=0; i<n-1; i++){
// 		for(int j = 0; j<n-i-1; j++){
// 			if(arr[j]>arr[j+1]){
// 				swap(arr[j], arr[j+1]);
// 			}
// 		}
// 	}
// }

void BubbleSortRec(int arr[], int n, int i){
	//base case
	if(i==n-1) return ;

	//rec case
	for(int j =0; j<n-i-1; j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
	}
	BubbleSortRec(arr, n, i+1);
}

int main(){
	int arr[] = {7,5,6,4,2,3,1};
	int n = sizeof(arr)/sizeof(int);
	// BubbleSort(arr,n);
	BubbleSortRec(arr, n , 0);
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
	return 0;
}