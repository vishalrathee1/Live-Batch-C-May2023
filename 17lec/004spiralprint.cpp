#include <iostream>
using namespace std;

int main(){
	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	int strow = 0,enrow = 3-1;
	int stcol = 0, encol= 5-1;

	// this below code is for only sq matrices, 
	// do suitable changes to make it work for rect matrices as well


	while(stcol<=encol && strow<=enrow){
	//first row, starting row --> left to right
	// print arr[strow][j]
	for(int j = stcol; j<=encol; j++){
		cout<<arr[strow][j]<<'\t';
	}
	strow++;

	// last column, ending column --> top to bottom
	// print arr[i][encol];
	for(int i = strow; i<=enrow; i++){
		cout<<arr[i][encol]<<'\t';
	}
	encol--;
	// last row , ending row --> right to left
	for(int j = encol; j>=stcol; j--){
		cout<<arr[enrow][j]<<'\t';
	}
	enrow--;

	//first col / start col --> bottom to top
	for(int i =enrow; i>=strow; i--){
		cout<<arr[i][stcol]<<'\t';
	}
	stcol++;
	}
	cout<<endl;


	return 0;
}
