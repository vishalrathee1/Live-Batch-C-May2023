#include<iostream>
using namespace std;

void fun(){
	int y;
}

int main(){

	//variables creation for static memory
	int x;
	fun();
	// fun();

	// now to create variables dynamically
	// we want to make an int type memory in heap (DMA)
	// 'new' keyword creates memory of type defined in front of it(and also size) and returns the starting address of that 
	// memory
	// dynamic means memory created on runtime
	int *heapVariable = new int;
	*heapVariable = 10;
	cout<<*heapVariable<<endl;
	cout<<heapVariable<<endl;
	// to free or delete this dynamically created memory we use delete keyword in c++
	delete heapVariable;
	heapVariable = NULL;
	//address is still there but link got broken between the memory and the pointer
	cout<<heapVariable<<endl;
	//it may or maynot give seg fault
	//so best prac is to free that pointer or initialize that pointer by null as soon as you delete its link
	// cout<<*heapVariable<<endl;

	// int *aptr;

	//creating 1D array in heap

	// c --> malloc --> (* Datatype)malloc(size) -->sizeof(dataype) *n

	int *heapArr = new int[5];
	heapArr[0] = 1;
	heapArr[1] = 2;
	heapArr[2] = 3;
	heapArr[3] = 4;
	heapArr[4] = 5;

	for(int i =0; i<5; i++){
		cout<<heapArr[i]<<'\t';
	}

	//if want to delete / free this memory
	// [] specifies array
	delete []heapArr;
	heapArr = NULL;

	cout<<endl;
	// 2D array DMA

	int *twoDArr[3]; //array of pointers
	twoDArr[0] = new int[4];
	twoDArr[1] = new int[4];
	twoDArr[2] = new int[4];

	twoDArr[0][0] = 10; // similarly you can also take input for other values as well

	cout<<twoDArr[0][0]<<endl;

	int* *twoDarrPtr = new int*[3];
	twoDarrPtr[0] = new int[4];
	twoDarrPtr[1] = new int[4];
	twoDarrPtr[2] = new int[4];

	twoDarrPtr[0][0] = 10;

	cout<<twoDarrPtr[0][0]<<endl;

	// to free all the memory
	//first we free the arrays memory then pointer arrays memory

	delete []twoDarrPtr[0]; twoDarrPtr[0] = NULL;
	delete []twoDarrPtr[1]; twoDarrPtr[1] = NULL;
	delete []twoDarrPtr[2]; twoDarrPtr[2] = NULL;

	delete [] twoDarrPtr;
	twoDarrPtr = NULL;

	//memory leak
	int *aptr = new int[10000000];
	delete []aptr; 
	aptr = new int[100000];
	delete []aptr; 
	aptr = new int[10000000];
	delete []aptr; 
	aptr = NULL;

	// above two memories will get wasted in this process if you dont delete them

	return 0;
}