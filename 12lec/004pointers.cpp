#include <iostream>
using namespace std;

int main(){
	int a = 10;
	float b = 12.1;
	bool c = false;
	double d = 12.20;

	//i want to find out at which memory location my values are stored
	cout<<&a<<endl; // address where a is stored in physical memory of my comp
	cout<<&b<<endl;
	cout<<&c<<endl;
	cout<<&d<<endl;
	
	//syntax --> datatype * nameofPointer = &variableName
	int * aptr = &a;
	float *bptr = &b;
	bool* cptr = &c;
	double*dptr = &d;

	//cout<<aptr<<endl;
	//cout<<bptr<<endl;
	//cout<<cptr<<endl;
	//cout<<dptr<<endl;

	//now i want to know the address values of these pointer variables

	//cout<<&aptr<<endl;
	//cout<<&bptr<<endl;
	//cout<<&cptr<<endl;
	//cout<<&dptr<<endl;
	
	cout<<sizeof(aptr)<<endl;
	cout<<sizeof(bptr)<<endl;
	cout<<sizeof(cptr)<<endl;
	cout<<sizeof(dptr)<<endl;

	return 0;
}
