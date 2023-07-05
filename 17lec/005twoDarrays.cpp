#include<iostream>
using namespace std;

int main(){
int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
cout<< arr << endl; // exp - address of 1
cout << arr+1 << endl; // exp address of 4
cout << *(arr+1) << endl; // address of 4 --> 
cout<< *(arr[1]) <<endl; // 4
cout <<arr[0] << endl; // address of 1
cout  <<*(arr[0]) << endl; // 1
cout << &arr[0][0] << endl; // address of 1
cout << arr[0] + 1 << endl;// arr[0] --> address of 1, next bucket to 1 , address of 2
cout << (&arr[0][0]) + 1 << endl; // address of 2
cout << &arr[1][0] << endl; // address of 4

	return 0;
}
