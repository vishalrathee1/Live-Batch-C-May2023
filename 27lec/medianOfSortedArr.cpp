#include<iostream>
using namespace std;

int main(){
	int arr1[] = {1,2,3,5};
	int arr2[] = {4,6,7,9,11,13};
	int n1 = sizeof(arr1)/sizeof(int), n2 = sizeof(arr2)/sizeof(int);
	int medianIndex = (n1+n2)/2;
	int n1l = 0,n1r = n1-1, n2l = 0, n2r = n2-1;
	//figure out which element will come on medianINdex
	//if n1 > n2 then in sorted array median will lie in range of (0,n1] index and vice versa

	int mid1 = (n1l+n1r)/2, mid2 = (n2l + n2r)/2;

	if(n1<n2){
	if(arr1[n1r]<arr2[n2l]){
		// median will lie in second array completely
	}
	else{
		if(arr1[n1l]>arr2[n2l]){
			// first element of arr2 is starting point of sorted array
			
		}
	}

	return 0;
}