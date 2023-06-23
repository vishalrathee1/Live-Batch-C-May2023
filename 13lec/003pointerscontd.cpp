#include<iostream>
using namespace std;

void increment(int *a){
	(*a)++; // incrementing value pointed by a 
}

//void updateArr(int *arptr , int n){
//	for(int i =0; i<n; i++){
//		arptr[i] += 10; // both ways are fine for accessing the array values, as they are same
//		*(arptr + i) -= 10;
//	}
//}

void updateArr(int arr[] , int n){
	for(int i =0; i<n; i++){
		arr[i] += 10; // both ways are fine for accessing the array values, as they are same
	//	*(arr + i) -= 10;
	}
}
int main(){
	int a = 10;
	int *aptr = &a;

	//cout<<aptr<<endl;
	//cout<<(*aptr)<<endl;

	*aptr = 25; //we can change the value of a using dereference
	//cout<<a<<endl;




	//int*aptr; // this is a bad practice, instead of this
	//we can do this (below)
	//int *aptr = NULL;
	//int * aptr = 0; //both are same
	
	int arr[] = {10,20,30,40};
	int n = sizeof(arr)/sizeof(int);

	int *arrptr = arr;
	//updateArr(arr, n); // i will use int * in function update arr
	updateArr(arrptr, n);

	for(int i =0; i<n; i++){
		cout<<arr[i]<<'\t';
	}
	cout<<endl;
	
	cout<<arr<<endl; // address to/of '10'
//	cout<<&arr[0]<<endl;
	//cout<<arr[1]<<endl;
	//cout<<*(arr+1)<<endl;
	//cout<<(aptr+3)<<endl;

	bool b = true;
	bool * bptr = &b;

	//cout<<bptr<<endl;
	//cout<<bptr+1<<endl;
	

	//how pointers and arrays are similar
	//int *arrptr = arr; //outside pointer to array
	//cout<<arrptr<<endl;
//	cout<<*(arrptr+1)<<endl;
//	cout<<arrptr[2]<<endl;
	//int *arrptr = arr+3;
	//cout<<*arrptr<<endl;

	//cout<<(arrptr - arr)<<endl;

	int x = 10;
	increment(&x);
	cout<<x<<endl;



	return 0;
}
