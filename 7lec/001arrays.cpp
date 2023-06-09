#include <iostream>
using namespace std;

int main(){
	//int a1,a2,a3,a4,a5;
	//for storing 5 values
	//cin>>a1>>a2>>a3>>a4>>a5;
	//cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl;
	
	//arrays are made only from primitive data types, arrays are collection of primitive datat types
	// syntax for arrays
	// if i want to store 1000 values of int types
	//int ---> datatype   arrayKaNaam[arrayKaSize(optional)] = {};
	//int arr[1000]; // a thousand size array is declared
	//lets take a smaller size array
	//int arr[5]; // --> 5 buckets reserved for arr
	//arrayname[index_number] --> accessing values of array
	//cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4]<<endl; --> without providing values , garbage val will be stored
	//first syntax for providing values to array , by using the indices/index of array elements or array memory
	//arr[0] = 1;
//	arr[1] = 2;
	//arr[2] = 3;
	//arr[3] = 4;
	//arr[4] = 5;
	//cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4]<<endl;

	//second syntax for providing values
	//int arr2[5] = {10,20,30,40,50};
	//cout<<arr2[0]<<endl<<arr2[1]<<endl<<arr2[2]<<endl<<arr2[3]<<endl<<arr2[4]<<endl;

	//third syntax 
	//int arr3[] = {12, 13, 4, 15, 16, 17, 9};
	
	//cout<<arr3[0]<<endl<<arr3[1]<<endl<<arr3[2]<<endl<<arr3[3]<<endl<<arr3[4]<<endl<<arr3[5]<<endl<<arr3[6]<<endl;

	//another syntax for accessing values of array, very rarely used
	// index_number[arrayname] --> also a syntax for accessing values of array
	//cout<<0[arr3]<<endl<<1[arr3]<<endl;
	

	//now using loops for taking input of array and also printing them on screen
	//int arr[6];

	//i have to take input in this array
	// 0 to 5
	// taking input
	//int index = 0; //initialization
	//for(; index<5; index++){
	//	cin>>arr[index];
	//}

	//for printing / output
	//for( int index = 0; index<5; index++){
	//	cout<<arr[index]<<endl;
	//}

	int arr2[] = {11,12,13,14,15,19,18,21,17,23,4};
	// for finding out the size of array we will use sizeof operator
	//int size_of_arr2 = sizeof(arr2); //sizeof returns a number, and that number is no. of bytes that entity is taking --> 44
	int actual_size = sizeof(arr2)/sizeof(int); // sizeof(arr2)/sizeof(arr2[0]) , we are doing this for calculating index
	cout<<actual_size<<endl;
	for(int index = 0; index < actual_size; index++){
		cout<<arr2[index]<<'\t';
	}
	cout<<endl;

	//int arr[10];
	//for(int i =0; i<10; i++){
	//	cin>>arr[i];
	//}
	//for(int i = 9; i>=0; i--){
	//	cout<<arr[i]<<'\t';
	//}
	cout<<endl;

	//int arr3[5] = {10};

	int arr3[] = {1,2,3,4,5};  //when you are initialising array by values , either you must know array size, else you shouldnt provide aeeay size
	for(int i =0; i<3 ; ++i){
		cout<<arr3[i]<<'\t';
	}
	cout<<endl;

	int arr4[5] = {}; //all 5 values will be 0

	int arr5[]={}; // this is also valid
	cout<<arr5[2]<<endl;

	return 0;
}
