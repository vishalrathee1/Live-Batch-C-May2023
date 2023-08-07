#include<iostream>
using namespace std;

int main(){
	int arr[] = {3,5,9,7,4,6, 100, 200, 12, ,17};
	int etf = 7;

	//algorithm starts here to find the element //linear search
	int n = sizeof(arr)/sizeof(int); //4 bytes + 1 operation
	int i = 0; //4 bytes  + 1 op
	for(; i<n; i++){
		if(arr[i] == etf){
			cout<<"Found"<<endl;
			break;
		}
	}
	if(i==n) cout<<"Not"<<endl;
	return 0;
}