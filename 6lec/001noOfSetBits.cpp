#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ct = 0;
	while(n!=0){
		if(n&1 != 0)
			ct++;
		n>>=1; //n = n>>1;
	}
	cout<<ct<<endl;
	return 0;
}
