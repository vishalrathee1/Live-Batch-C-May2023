#include<iostream>
using namespace std;

int main(){
	char ch = 'A';
	char *chptr = &ch;
	cout<<ch<<endl; // A
	cout<<&ch<<endl; // address of ch  --> expected, but got value of ch instead
	cout<<chptr<<endl; // address of ch --> expected, but got value of ch instead
	

	cout<<(void*)&ch<<endl; // fooling the compiler
	return 0;
}
