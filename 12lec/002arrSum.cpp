#include <iostream>
using namespace std;

int sumOfArr(int arr[], int size){
	int summ = 0;
	for(int i =0; i<size; i++){
		summ+=arr[i];
	}
	return summ;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	int sum; // we will store the result of our function call
	sum = sumOfArr(arr, n);
	cout<<sum<<endl;
	return 0;
}
