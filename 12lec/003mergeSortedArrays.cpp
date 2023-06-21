#include <iostream>
using namespace std;

void mergeSortedArrays(int arr1[], int arr2[], int m, int n){
	int i = m-1, j = n-1, k = m+n-1;

	while(i>=0 && j>=0 && k>=0){
	if(arr1[i]>arr2[j]){ //element of arr1 is larger
		arr1[k] = arr1[i];
		k--;i--;
	}
	else{ //element of arr2 is larger
		arr1[k] = arr2[j]; 
		k--;j--;
	}
	}
}

int main(){
	int m = 4,n= 3;
	int arr1[m+n] = {1,5,7,9};
	int arr2[n] = {3,4,8};
	mergeSortedArrays(arr1, arr2, m, n);
	for(int i =0; i<m+n; i++){
		cout<<arr1[i]<<'\t';
	}
	cout<<endl;
	return 0;
}
