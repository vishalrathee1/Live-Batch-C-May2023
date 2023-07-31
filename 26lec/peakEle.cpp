#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,1,3,5,6,4};
	int n = sizeof(arr)/sizeof(int);
	if(n==1){
		cout<<0<<endl;
		return 0;
	}
	int lo = 0, hi =n-1;
	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(mid-1>=0 and arr[mid]>arr[mid-1] and mid+1<n and arr[mid]>arr[mid+1]){
			cout<<mid<<endl;
			break;
		}
		else if(mid-1<0 and mid+1<n and arr[mid]>arr[mid+1]){
			cout<<mid<<endl;
			break;
		}
		else if(mid+1>=n and mid-1>=0 and arr[mid]>arr[mid-1]){
			cout<<mid<<endl;
			break;
		}else if (mid-1>=0 and arr[mid]<arr[mid-1] ){
			hi = mid-1;
		}else if(mid+1<n and arr[mid]<arr[mid+1]){
			lo = mid+1;
		}
	}

	//shorter version
// 	if(n == 1){
//             return 0;
//         }

//         int low = 0;
//         int high = n-1;

//         while(low <= high){

//             int mid = (low + high)/2;

//             if(((mid +1) < n) && nums[mid] <  nums[mid+1] ){
//                 low = mid +1;
//             }
//             else{
//                 high = mid -1 ;
//             }
//         }
// return low;

	return 0;
}