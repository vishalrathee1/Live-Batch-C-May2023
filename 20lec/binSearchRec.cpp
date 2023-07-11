#include<iostream>
using namespace std;

int BinSearch(int arr[], int n, int etf, int left, int right){
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid] == etf){
			return mid;
		}else if(arr[mid]>etf){
			right = mid-1;
		}
		else{
			left = mid+1;
		}
	}
	return -1; //element not found
}


int BinSearchRec(int arr[], int n, int etf, int left, int right){
	//base case
	if(left>right) return -1;

	//rec case
	int mid = (left+right)/2;
	if(arr[mid] == etf){
		return mid;
	}else if(arr[mid]>etf){ //element is present in left half
		return BinSearchRec(arr, n, etf, left, mid-1);
	}
	else{
		return BinSearchRec(arr, n, etf, mid+1, right);
	}
}

int main(){
	int arr[] = {2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(int);
	int etf = 70;
	int l=0,r=n-1;
	// int ans = BinSearch(arr, n, etf, l, r);
	int ans = BinSearchRec(arr, n, etf, l, r);
	if(ans!=-1)
		cout<<"Element Found at index: "<<ans<<endl;
	else
		cout<<"Element Not Found"<<endl;
	return 0;
}