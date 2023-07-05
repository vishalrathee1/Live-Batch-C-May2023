#include <iostream>
using namespace std;

int main(){
	// first syntax 
	//char arr[2][2]; // declqring
	//arr[0][0] = 'A';
	//arr[1][1] = 'D';
	//cout<<arr[1][1]<<'\t'<<arr[0][0]<<'\t'<<endl;

	// second syntax 
	//char arr[][2] = {'A','B','C','D'};

	//cout<<arr[1][1]<<'\t'<<arr[0][0]<<'\t'<<endl;

	// third syntax 

	//cout<<arr<<endl; // expected --> ABCD...'\0', got address of A
	//cout<<arr[0]<<endl; // expected --> ABCD , got ABCD  
	//cout<<arr[1]<<endl; // exp --> CD , got --> CD


	char arr[][3] = {"AB", "CD"}; // it will store AB\0 in 1 st row and Cd\0 in second row
	cout<<arr[0]<<endl<<arr[1]<<endl;

	return 0;
}
