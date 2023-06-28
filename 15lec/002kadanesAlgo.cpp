#include<iostream>
#include <climits> // header file for INT_MIN, INT_MAX
using namespace std;

int main(){
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4, 0};
	int n = sizeof(arr)/sizeof(int);
	int ans = INT_MIN; // -ive infinity, INT_MAX --> positive infinity in CPP
	int ct = 0;
	// most brute force way --> 3 nested loops
	for(int i = 0; i<n; i++){
		for(int j = i; j<n; j++){
			//another loop to sum the elements of subarray
			int sum = 0;
			for(int k = i; k<=j; k++){
				ct++;
				sum+=arr[k];
			}
			ans = max(sum,ans);
		}
	}
	cout<<ans<<endl<<ct<<endl;

	ct = 0;
	ans = 0;


	for(int i = 0; i<n; i++){
		int sum = 0;
		for(int j = i; j<n; j++){
			//using j loop to find out sum each time and then updating ans;
			ct++;
			sum+=arr[j];
			ans = max(sum,ans);
		}
	}
	cout<<ans<<endl<<ct<<endl;

	ct = 0;
	ans = 0;

	int sum = 0;
	for(int i = 0; i<n; i++){
		// we can skip j loop also on condition that any negative sum subarray will never
		// contribute to the answer
		ct++;
		sum+=arr[i];
		ans = max(sum,ans);
		if(sum<0)
			sum = 0;
	}
	cout<<ans<<endl<<ct<<endl;
	return 0;
}
