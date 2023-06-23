#include<iostream>
using namespace std;

int main(){
	int a = 10;
	float b = 12.20;
	bool c = true;
	double d = 12.32;

	int *aptr = &a;
	float *bptr = &b;
	bool *cptr = &c;
	double *dptr = &d;

	//address --> &
	cout<<&aptr<<endl;  // will give address of where the pointer of a is stored i.e. aptr
	//cout<<&bptr<<endl;
	//cout<<&cptr<<endl;
	//cout<<&dptr<<endl;
	
	int* *aptrptr = &aptr;  //double pointer --> pointer to a pointer variable
	//similarly try for bptrptr, cptrptr, dptrptr
	

	cout<<aptrptr<<endl;
	cout<<&aptrptr<<endl;

	int** * a3ptr = &aptrptr; //triple pointer  //a3ptr --> pointer to a variable that is itself pointer to a pointer variable
	cout<<a3ptr<<endl;
	//similarly i can go upto any number of times(dependent on the space available to us
	//int **....(n times)* anptr ;
	
	int a2=10,b1=20,b2=30;
	int *a2ptr=&a2, *b1ptr=&b1, *b2ptr=&b2;

	//int* a2ptr,b1ptr,b2ptr; //b1ptr, b2ptr will not be pointer in this syntax, rather they will be integers
	//a2ptr = &a2;
	//b1ptr = &b1;
	//b2ptr = &b2;

	
	return 0;
}
