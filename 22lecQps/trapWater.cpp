#include<iostream>
#include<climits>
using namespace std;

int main(){
	int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n  = sizeof(arr)/sizeof(int);
	int ls[n];
	int rs[n];
	//calc left and right support
	int leftMax = INT_MIN;
	int rightMax = INT_MIN;
	//calc left and right support
	for(int i=0; i<n; i++){
		//left support
		leftMax = max(leftMax, arr[i]);
		ls[i] = leftMax;

		// rightMax = max(rightMax, arr[n-1-i]);
		// rs[n-i-1] = rightMax;
	}
	//right support
	for(int i =n-1; i>=0; i--){
		rightMax = max(rightMax, arr[i]);
		rs[i] = rightMax;
	}

	int water = 0;
	for(int i = 0; i<n ; i++){
		water+=min(ls[i],rs[i]) - arr[i];
	}
	cout<<water<<endl;

	return 0;
}