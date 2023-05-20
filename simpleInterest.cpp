#include<iostream>
using namespace std;

int main(){
	//making buckets --> comment  part which will not be execued by the computer
	//the part computer or compiler will ignore
	//  it helps us to know what our code is doing
	//  code helps computer to understand our comments
	//  2 types of comments in c++ 
	//  1. // single line comment 
	//  2. /*  */  multi line comments
	/*
	 
	
	int p,t,r;
	return 0;  */ 

	//declaring buckets
	int p,t,r;

	//cout --> console out
	// to take input from user, we use cin function , cin means console input
	cin>>p>>t>>r;

	int si = p*t*r/100;

	cout<<si<<'\n'<<endl;

	return 0;
}
