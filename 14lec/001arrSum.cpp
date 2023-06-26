#include <iostream>
using namespace std;

void sumOfArr(int arr[], int n){
	int summ = 0;
	for(int i =0; i<n; i++){
		summ+=arr[i];
	}
	cout<<summ<<endl;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	//sumOfArr(arr, n);
	

	sumOfArr(arr+5, n-5);

	//int a = 10;
	//int * aptr = &a;
	//cout<<aptr[10]<<endl; // this syntax is also valid, but not of any use to us
	//int barr[] = {}; // this is valid statment , because this is just a pointer now
	//cout<<barr[10]<<endl;
	return 0;
}
