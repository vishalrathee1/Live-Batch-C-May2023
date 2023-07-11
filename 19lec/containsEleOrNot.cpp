#include<iostream>
using namespace std;

bool containsEleORNot(int arr[], int size, int ele){
	//base case
	if(size == 0) return false;

	//rec case
	if(arr[size-1] == ele or containsEleORNot(arr, size-1, ele))
		return true;
	return false;
}

bool containsEleORNot2(int arr[], int size, int ele){
	//base case
	if(size == 0) return false;

	//rec case
	if(arr[0] == ele or containsEleORNot2(arr+1, size-1, ele))
		return true;
	return false;
}

bool containsEleORNot3(int arr[], int size, int ele, int index){
	//base case
	if(index == size) return false;

	//rec case
	if(arr[index] == ele or containsEleORNot3(arr+1, size-1, ele, index+1))
		return true;
	return false;
}

int main(){
	int arr[] = {1,2,3,5,7,9,13,7};
	int n = sizeof(arr)/sizeof(int);
	int ele=17;
	// cin>>ele;
	if(containsEleORNot2(arr, n,ele)){
		cout<<"Element is present"<<endl;
	}
	else{
		cout<<"Element is not present"<<endl;	
	}
	if(containsEleORNot3(arr, n,ele,0)){
		cout<<"Element is present"<<endl;
	}
	else{
		cout<<"Element is not present"<<endl;	
	}
	return 0;
}