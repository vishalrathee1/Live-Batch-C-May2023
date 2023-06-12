#include <iostream>
using namespace std;

int main(){
	int arr[] = {9,2,5,3,4,7,6,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	//buuble sort algo
	for(int i =0; i< n-1; i++){
		for( int j =0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				// swap arr[j] with arr[j+1]
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}
		}
	}
	for(int i =0; i<n ; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	return 0;
}
