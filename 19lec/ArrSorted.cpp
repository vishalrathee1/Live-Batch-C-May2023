#include<iostream>
using namespace std;

// returns array is sorted or not from starting to size 'size'
bool ArrSortedorNot(int arr[], int size){

	//base case
	//single element is always sorted
	if(size == 1) return true;

	//recursive case
	if(ArrSortedorNot(arr, size-1) and arr[size-1]>=arr[size-2]){
		return true;
	}
	return false; // array is not sorted
}

//returns array is sorted or not from address 'arr' to end of the aray
bool ArrSortedorNot2(int arr[], int size){

	//base case
	//single element is always sorted
	if(size == 1) return true;

	//recursive case
	if(ArrSortedorNot2(arr+1, size-1) and arr[0]<=arr[1]){
		return true;
	}
	return false; // array is not sorted
}

//this function is telling/returning whether array is sorted or not from index 'index' to size/end of the array
bool ArrSortedorNot3(int arr[], int size, int index){

	//base case
	//index == n
	if(index == size-1) return true;
	
	//recursive case
	if(arr[index]<=arr[index+1] and ArrSortedorNot3(arr, size, index+1)){
		return true;
	}
	return false;
}

int main(){
	int arr[] = {1,3,5,7,9};
	int n = sizeof(arr)/sizeof(int);
	// if(ArrSortedorNot2(arr, n)){
	// 	cout<<"Array is sorted"<<endl;
	// }
	// else {
	// 	cout<<"Array is not sorted"<<endl;
	// }
	if(ArrSortedorNot3(arr, n, 0)){
		cout<<"Array is sorted"<<endl;
	}
	else {
		cout<<"Array is not sorted"<<endl;
	}
	return 0;
}