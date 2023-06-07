#include <iostream>
using namespace std;

int main(){
	int ct = 0;
	char ch;
	ch = cin.get();
	while(ch!='$'){
		ct++;
		ch = cin.get();
	}
	cout<<ct<<endl;
}
