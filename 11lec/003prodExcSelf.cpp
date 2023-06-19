#include <iostream>
using namespace std;

int main(){
	int arr[] = {1,0,3,0};
	int n = sizeof(arr)/sizeof(int);

	int ans[n] = {};

	//left prod prefix
	int leftprodpref[n]={};
	int rightprodpref[n] = {};

	//calculating left product prefix
	// leftprodpref[0]  = 1;
	leftprodpref[0] = 1;
	for(int i =0; i<n-1; i++){
		leftprodpref[i+1] = leftprodpref[i] * arr[i];
	}

	//right prod prefix
	//rightprodpref[n-1] = 1;
	rightprodpref[n-1] = 1;
	for(int i = n-1; i>0; i--){
		rightprodpref[i-1] = rightprodpref[i]*arr[i];
	}

	for(int i = 0; i<n; i++){
		cout<<leftprodpref[i]*rightprodpref[i]<<'\t';
	}
	cout<<endl;
	

	return 0;
}
