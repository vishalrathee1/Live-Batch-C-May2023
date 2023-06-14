#include <iostream>
using namespace std;

int main(){
	int arr[] = {9,1,2,3,4,5,6,7,8,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i =1 ; i<n; i++){
		int key = arr[i];
		int j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;

	return 0;
}
