#include<iostream>
using namespace std;

int lastIndex(int arr[], int size, int ele, int index){
	//base case
	if(index<0) return -1;

	//rec case
	//element is at current index
	if(arr[index] == ele){
		return index;
	}
	//find at previous index
	return lastIndex(arr, size, ele, index-1);
}

int main()
{
	int arr[] = {1,2,3,5,7,9,13,7, 17, 7, 19};
	int n = sizeof(arr)/sizeof(int);
	int ele = 7;
	int index = n-1;
	int ans = lastIndex(arr,n,ele, index); 
	if(ans==-1){
		cout<<"Element is not present"<<endl;
	}
	else{
		cout<<"Last index of Element is "<<ans<<endl;
	}
	return 0;
}