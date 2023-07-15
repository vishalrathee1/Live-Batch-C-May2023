#include<iostream>
using namespace std;

// void merge(int arr1[], int arr2[], int arr[], int n, int m){ //n-->size of arr1, m--> size of arr2
// 	int i=0,j=0,k=0;
// 	//loop
// 	while(i<n && j<m){
// 	if(arr1[i]<arr2[j]){
// 		arr[k] = arr1[i];
// 		i++;
// 	}
// 	else{
// 		arr[k] = arr2[j];
// 		j++;
// 	}
// 	k++;
// }
// 	//now one of the array is left unfinished
	
// 	//if my 1st array is unfinished
// 	while(i<n){
// 		arr[k++] = arr1[i++];
// 	}

// 	//if my 2nd array is unfinished
// 	while(j<m){
// 		arr[k++] = arr2[j++];
// 	}

// }

void merge(int arr[], int n, int left, int mid, int right){
	//[left,mid] --> arr1
	//[mid+1,right] --> arr2
	int ct1 = mid-left + 1; //count of array1 elements
	int arr1[ct1];
	int ct2 = right - mid;
	int arr2[ct2];
	//now copying the elements from arr into arr1 and arr2
	//left --> mid arr tk ke elements ko arr1 me daaldo
	int j = 0; // j--> [0,ct1)
	for(int i = left; i<=mid; i++){
		arr1[j] = arr[i];
		j++;
	}
	// int i = left;
	// for(int j = 0; j<ct1; j++){
	// 	arr1[j] = arr[i];
	// 	i++;
	// }

	//mid se right tk ke arr ke elements ko copy into arr2
	j=0;
	for(int i = mid+1; i<=right; i++){
		arr2[j] = arr[i];
		j++;
	}

	//merge algo
	j=0;
	int i=0,k=left;
	//loop
	while(i<ct1 && j<ct2){
	if(arr1[i]<arr2[j]){
		arr[k] = arr1[i];
		i++;
	}
	else{
		arr[k] = arr2[j];
		j++;
	}
	k++;
}
	//now one of the array is left unfinished
	
	//if my 1st array is unfinished
	while(i<ct1){
		arr[k++] = arr1[i++];
	}

	//if my 2nd array is unfinished
	while(j<ct2){
		arr[k++] = arr2[j++];
	}
	

}

void mergeSort(int arr[], int n, int left, int right){
	//base case
	if(left == right) return ; //single element is sorted

	//rec case
	//first divide the array into half
	int mid = (left+right)/2;
	//divide left half
	mergeSort(arr, n, left, mid);
	//divide right half
	mergeSort(arr, n, mid+1, right);

	//merge those two sorted half arrays
	// 'merge' will merge the array [left , mid] and array [mid+1, right]
	merge(arr, n, left, mid, right);
}

int main()
{
	// int arr1[4] = {1,4,7,9}; // n
	// int arr2[3] = {2,3,8};  // m
	// int arr[4+3]; //merge these two sorted arrays into this final array in sorted form //n+m
	// merge(arr1, arr2, arr, 4, 3); 
	// for(int i =0; i<7; i++){
	// 	cout<<arr[i]<<'\t';
	// }
	// cout<<endl;
	int arr[] = {7,6,9,4,2,1,3};
	int n = sizeof(arr)/sizeof(int);
	mergeSort(arr, n, 0, n-1);
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
	return 0;
}