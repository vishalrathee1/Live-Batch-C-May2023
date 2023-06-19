#include <iostream>
using namespace std;

//leetcode single number 3

int main(){
	int arr[] = {4,8,2,3,4,2,3,6};
	int xorr = 0; //xor of two diff no. will be stored in this

	int n = sizeof(arr)/sizeof(int); //size of array
	for(int i =0; i<n; i++){
		//take xor of each element
		xorr^=arr[i];
	}

	// now finding out the first different bit between the 2 distinct numbers
	// find out the first set bit of xorr
	int ct =0;
	while(xorr){
		if(xorr&1) //bit is set
			break;
		ct++;
		xorr>>=1;
	}

	// now we have to make a mask to divide all numbers into two clubs of 
	// set and unset
	int mask = 1<<ct; // will determine if (ct)th bit is set or not for a particular number
	int setclub = 0, unsetclub = 0;
	for(int i =0; i<n ; i++){
		if(mask & arr[i])  // (ct) th bit is set
		{
			setclub^=arr[i];
		}
		else
			unsetclub^=arr[i];
	}
	
	cout<<setclub<<'\t'<<unsetclub<<endl;

	return 0;
}
