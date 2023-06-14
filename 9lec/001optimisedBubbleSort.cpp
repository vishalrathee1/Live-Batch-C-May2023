#include<iostream>
using namespace std;

int main(){
	int arr[] = {9,1,2,3,4,5,6,7,8,10};
	int n = sizeof(arr)/sizeof(int);
	int ct = 0;

	//for optimising bubble sort we will take a boolean variable which will tell us whether swap happende or not
	bool swapHappend = false; //kya values swap hui, to shuru me ye value false hogi
	for(int i =0; i<n-1; i++){
		swapHappend = false;
		for(int j = 0; j<n-i-1; j++){
			ct++;
			if(arr[j] > arr[j+1]){
				arr[j+1] = arr[j] + arr[j+1] - (arr[j] = arr[j+1]); //one line swap
				swapHappend = true; // swap ho chuka hai
			}
		}
		if(!swapHappend)  // koi swap nahi hua to break krdo
			break;
	}
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl<<ct<<endl;
	return 0;
}
