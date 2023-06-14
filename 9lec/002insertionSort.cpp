#include<iostream>
using namespace std;

int main(){
	int arr[] = {9,1,2,3,4,5,6,7,8,10};
	int n = sizeof(arr)/sizeof(int);
	int ct = 0;
	for(int i = 1; i<n; i++){
		int j = i-1;
		while(j>=0 && arr[j]>arr[j+1]){
			ct++;
			//swap arr[j], arr[j+1]
			arr[j+1] = arr[j] + arr[j+1] - (arr[j] = arr[j+1]);
			j--;
		}
	}
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl<<ct<<endl;
	return 0;
}
