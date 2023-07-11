#include<iostream>
using namespace std;

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

void BubbleSortPureRec(int arr[], int n, int i, int j){
	//base case
	if(i==n-1) return ;

	//rec case
	if(j<n-i-1 and arr[j]>arr[j+1]){
			swap(arr[j], arr[j+1]);
	}
	if(j==n-i-1){
		BubbleSortPureRec(arr, n, i+1, 0);
	}
	else{
	BubbleSortPureRec(arr, n, i, j+1);
	}
}

int main(){
	int arr[] = {4,2,3,1};
	int n = sizeof(arr)/sizeof(int);
	// BubbleSortRec(arr, n , 0);
	BubbleSortPureRec(arr, n , 0, 0);
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
	return 0;
}