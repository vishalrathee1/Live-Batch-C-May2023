#include<iostream>
using namespace std;

int main(){
	//int a=10,b=10;
	//int x = ++a;
	//int y = x++;
	//int c = b--;
	//int d = --c;
	//cout<<a<<endl<<x<<endl<<y<<endl<<b<<endl<<c<<endl<<d<<endl;
	
	int a = 1,b=0,c=-1,d=2;

	if(++a && c++ && b++ && d--){
		cout<<"Hello"<<endl;
	}
	else if( a-- && --b && c-- && d--){
		cout<<"World"<<endl;
	}
	else if(--a && ++b && c++ && d++){
		cout<<"Hey"<<endl;
	}
	else{
		cout<<"Coding Blocks"<<endl;
	}

	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;


	return 0;
}
