#include <iostream>
using namespace std;

int main(){
	int arr[] = {2,3,6,7,4,9,11,13};
	//we have to find a number in this array
	int numToFind;
	cin>>numToFind;
	int i;
	for(i =0; i<sizeof(arr)/sizeof(arr[0]); i++){
		if(arr[i] == numToFind){
			cout<<"Element found at index: "<<i<<endl;
			break;
		}
	}
	if(i == sizeof(arr)/sizeof(arr[0])){
		cout<<"Element Not found! "<<endl;
	}
	
	//2nd question
	int largest = arr[0];
	i =0;
	for(; i< sizeof(arr)/sizeof(arr[0]); i++){
		if(largest<arr[i]){
			largest = arr[i];
		}
	}
	cout<<largest<<endl;

	return 0;
}
