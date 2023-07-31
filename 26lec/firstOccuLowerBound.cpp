#include<iostream>
using namespace std;

int main()
{	
	int arr[] = {1,2,40,40,60,90,90};
	int target = 3;
	// int ans = -1;
	int n = sizeof(arr)/sizeof(int);
	int lo = 0, hi = n-1;
	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(arr[mid]>=target){
			hi = mid-1;
			// if(arr[mid] == target){
			// 	ans = mid;
			// }
		}
		else{
			lo = mid+1;
		}
	}

	// if(ans!=-1) cout<<ans<<endl;
	// else cout<<"Element not present"<<endl;

	//for smallest value/index of element >= target --> this is nothing but called as lowerbound
	//return lo for lower bound
	cout<<lo<<endl;

	return 0;
}