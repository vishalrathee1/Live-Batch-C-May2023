#include<iostream>
using namespace std;

int main(){
	// syntax for 2D arrays --> 
	// datatype arrayName [rows ka size] [columns ka size] ;
	// syntax number 1
//	int arr[2][2]; // this will make 2D array of 3 rows and 3 columns
	// if i have to define it now
	// i will access this array by row index number and column index number
//	arr[0][0] = 1; // this is my 1st row 1st column, 0th row index, 0th col index
//	arr[0][1] = 2;
//	arr[1][0] = 3;
//	arr[1][1] = 4;
	
	// in 2D arrays you can skip the size of rows but you can never skip the size of columns
	// syntax number2 initialization syntax
//	int arr[][2] = {{1,2},
	//				{3,4}};
	

//	cout<<arr[0][0]<<endl<<arr[1][1]<<endl;
//	cout<<arr<<endl<<arr[1]<<endl;

	// to prove that 2D (nDimensional arrays) are stored like 1D array in memory
	//cout<<arr[0][0]<<'\t'<<arr[0][1]<<'\t'<<arr[0][2]<<'\t'<<arr[0][3]<<endl; // because of pointer arithmeticbehind the scenes it is working fine
	
	// character 2D arrays
	//char arr[2][2]; //declare
//	arr[0][0] = 'A';
//	arr[1][1] = 'D';

//	cout<<arr[0][0]<<endl<<arr[1][1]<<endl;

	//char arr[][2] = {{'A','B'},{'C', 'D'}};
	char arr[][3] = {"ab", "bc"};

	cout<<arr<<endl<<arr[0]<<endl<<arr[1]<<endl;
	
	return 0;
}
