#include<iostream>
using namespace std;

//sumOfEle is representing/returning sum of values of elements of array 'arr' upto index 'index'
int sumOfEle(int arr[], int index){
	if(index == 0) return arr[0]; //base case
	return arr[index] + sumOfEle(arr, index-1);  //recursive case
}

//sumofEle2 is representing/returning sum of elements of array 'arr' from index 'index' upto 'n'
int sumOfEle2(int arr[], int n, int index){
	if(index == n) return 0;
	return arr[index] + sumOfEle2(arr, n, index+1);
}

int sumOfEle3(int arr[], int n){
	if(n==0) return 0;
	return arr[0] + sumOfEle3(arr+1, n-1);
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	cout<<sumOfEle(arr, n-1)<<endl; // arrayname , last index
	cout<<sumOfEle2(arr, n, 0)<<endl;
	cout<<sumOfEle3(arr,n)<<endl;
	return 0;
}