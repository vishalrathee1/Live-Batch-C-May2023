#include<iostream>
using namespace std;

int main(){
	int prefarr[1000000] = {};
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	
	//int prefarr[n] = {0};
	prefarr[0] = arr[0];

	for(int i =1; i<n; i++){
		prefarr[i] = arr[i] + prefarr[i-1];
	}

	cout<< prefarr[5] - prefarr[0] << " query from 1 to 5 index"<<endl;

	return 0;
}
