#include<iostream>
using namespace std;

int main(){
	// datatype arrayname[size];
	//char arr[4];	 //declaration
//	arr[0] = 'A';		//Definition
//	arr[1] = 'B';
//	arr[2] = 'C';
//	arr[3] = 'D';
//	cout<<arr[0]<<'\t'<<arr[1]<<'\t'<<arr[2]<<'\t'<<arr[3]<<endl; //printing out values

	//second syntax for character arrays
//	char arr[4] = {'A','B','C','D'}; // second synatx
//	cout<<arr[0]<<'\t'<<arr[1]<<'\t'<<arr[2]<<'\t'<<arr[3]<<endl; //printing out values

	//char arr[] = {'A','B','C','D'}; // third synatx
	//char arr[] = {'A','B','C','\0'};
//	cout<<arr[0]<<'\t'<<arr[1]<<'\t'<<arr[2]<<'\t'<<arr[3]<<endl; //printing out values
	
//	char arr[4];
	//for(int i =0; i<4; i++){
	//	cin>>arr[i];
	//}
//	cout<<arr[0]<<'\t'<<arr[1]<<'\t'<<arr[2]<<'\t'<<arr[3]<<endl; //printing out values

	//int arr1[] = {1,2,3,4,5};
	//cout<<arr1<<endl; // it will print address of 1st bucket --> 1

	//cout<<arr<<endl; // this will print value of 1st bucket, 2nd bucket , 3rd bucket.... until it doesn't find 
	// a null '\0' character 
	// so to make sure that char array name always print the values stored inside it, we can make 1 extra size 
	// array and use that extra byte to store a null character at the end of char array
	
	//other syntaxes 
	//we can also initialize with strings
	// so double quotes means strings
	// strings by default have a null character at their end i.e. '\0'
	//char arr[5] = "hello"; // this will give error
	//char arr[6] = "hello";
	//char arr[] = "Hello World";
	char str[100];
	//int  n = 10;
	//for(int i = 0; i<n; i++){
	//	cin>>str[i];
	//}
	//str[n] = '\0'; 
	//cin>>str; // it will only take input upto the first white space character
	
	// to include white space in our input we will use cin.getline() function
	//syntax 
	//cin.getline( arrayname, max size available/of that array/ of the string, delimitter)
	//delimiiter tells after encountering which character we have to stop taking further input
	// by default its value is set as '\n'
//	cin.getline(str, 100); without delimiiter
	//behind cin.getline --> cin.get()
	cin.getline(str, 100, '$');
	//int  i =0;
	//str[i] = cin.get(); // first char input
	//while(str[i] != '\n'){ //'$'
	//	i++;
	//	str[i] = cin.get();
	//}
	//str[i] = '\0';

	cout<<str<<endl;




	return 0;
}
