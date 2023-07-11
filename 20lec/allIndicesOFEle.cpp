#include<iostream>
using namespace std;

bool found = false;
// int arr[1000];

//find all occurences of eelement 'etf' in array 'arr' from index 'index' to the size of array 
void printAllIndices(int arr[], int size, int etf, int index){
	//base case
	if(index >= size) return;

	//rec case
	//check if current index is equal to etf
	if(arr[index] == etf){
		found = true;
		cout<<"Element found at index: "<<index<<endl;
	}
	//also look for element in further indices
	printAllIndices(arr, size, etf, index+1);

}

int main()
{
	int arr[] = {1,2,3,5,7,9,13,7,17,7,19};
	//main function me arr me input leloge
	int n = sizeof(arr)/sizeof(int);
	int ele = 170;
	// cin>>ele;
	printAllIndices(arr, n, ele, 0);
	if(!found) cout<<"Element not found"<<endl;
	return 0;
}