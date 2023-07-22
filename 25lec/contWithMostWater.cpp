#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,8,6,2,5,4,8,3,7};
	int n = sizeof(arr)/sizeof(int);
	int maxArea = 0;
	for(int i =0; i<n-1; i++){
		for(int j =i+1; j<n; j++){
			int area = min(arr[i],arr[j])*(j-i);
			maxArea = max(area, maxArea);
		}
	}
	cout<<maxArea<<endl;
	maxArea = 0;
	int l =0, r = n-1;
	while(l<r){
		int area = min(arr[l],arr[r])*(r-l);
		maxArea = max(area, maxArea);
		if(arr[l]<arr[r]){
			//left height is limitting
			l++;
		}
		else{
			// arr[r]<arr[l]  and arr[r]== arr[l] // i am choosing to move right pointer in both the cases
			r--;
		}
	}
	cout<<maxArea<<endl;
	return 0;
}