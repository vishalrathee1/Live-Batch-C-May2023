#include<iostream>
using namespace std;

int main(){
	int arr[] = {4,5,6,7,0,1,2};
	int target = 0;
	int n = sizeof(arr)/sizeof(int);
	int lo = 0, hi =n-1;
	while(lo<=hi){
		int mid = (lo+hi)/2;
		//we will check
		if(arr[mid] == target){
			cout<<mid<<endl;
			break;
		}
		// mid>target , and if left half is sorted and lo>target --> element is not in left half
		//mid > target , and left half is unsorted --> right half is sorted
		//mid <target , left half is sorted
		//mid < target , right half is sorted
		//if left half is sorted or not
		else if(arr[lo]<=arr[mid]){
			//left half is sorted
			if(arr[lo]<=target and target<=arr[mid]){
				hi = mid-1;
			}
			else{
				lo = mid+1;
			}
		}
		else{
			//right half is sorted
			if(target>=arr[mid] and arr[hi]>=target){
				//lying in the right half
				lo = mid+1;
			}
			else{
				hi = mid-1;
			}
		}	
	}

	return 0;
}