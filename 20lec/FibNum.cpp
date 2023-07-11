#include<iostream>
using namespace std;

int FibNum(int n){ //n>=0
	//base case
	if(n<2) return n; // n--> 1 = 1, n-->0 = 0
	// if(n==1) return 1;
	// if(n==0) return 0;

	//rec case
	return FibNum(n-1) + FibNum(n-2);
}

int main(){
	int n=10;
	// cin>>n;
	cout<<FibNum(n)<<endl;
	return 0;
}