#include<iostream>
using namespace std;

//void sum(int a, int b){
//	cout<<a+b<<endl;
//}

//void sum(int a, int b, int c){
//	cout<<a+b+c<<endl;
//}

void sum(int a, int b, int c=0, int d=0){ //c, d have fefault values of 0
	cout<<a+b+c+d<<endl;
}
//void sum(float a, int b){
//	cout<<a+b<<endl;
//}

//void getline(char str[], int maxSize, char delimitter = '\n'){}

//void f(int a=1, int b = 1){
//	cout<<a*b<<endl;
//}

void f(int a=1, float b = 1){
	cout<<a*b<<endl;
}
int main(){
	sum(2,3);
	sum(2,3,4);
	sum(2,3,4,5);
//	f();
//	f(2,3);
//	f(4);
	f(7.3); //--> will print 7 instead of 7.3

	//so instead of making multiple functions that serve the same purpose, i can pass default arguments in just 1 function
	return 0;
}
