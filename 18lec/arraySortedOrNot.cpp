#include<iostream>
using namespace std;

// it is representing/returning whether the given array 'arr' is sorted upto index 'index'
bool arraySortedOrNot(int arr[], int index){
	if(index == 0) return true; //single element is always sorted

	if(arr[index]>=arr[index-1] && arraySortedOrNot(arr, index-1)){ 
		return true;
	}
	return false;
}

int main(){
	int arr[] = {9,3,4,6,7};
	int n = sizeof(arr)/sizeof(int);
	cout<<arraySortedOrNot(arr, n-1)<<endl;
	return 0;
}