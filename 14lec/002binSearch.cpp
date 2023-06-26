#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,5,7,8,9};
	int etf;
	cin>>etf;
	int n = sizeof(arr)/sizeof(int);
	int s = 0; // 0th index
	int e = n-1; //last index
	int ct = 0; //will tell in how many comp we were able to find the element
	//loop
	while(s<=e){
		ct++;
	int mid = (s+e)/2;

	if(arr[mid] == etf){
		cout<<"Element found at index : "<<mid<<endl;
		break;
	}
	else if(arr[mid] > etf)
		e = mid-1;
	else 
		s = mid + 1;

	}
	if(s>e){
		cout<<"Element Not Found"<<endl;
	}
	cout<<ct<<endl;

	return 0;
}
