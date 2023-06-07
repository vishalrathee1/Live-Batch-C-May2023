#include <iostream>
using namespace std;

int main(){
	int ct = 0; //keeps track of the count of characters
	char ch;
	cin>>ch;
	
	//loop that will take input of rest of the characters and update the count
	while(ch!='$'){
		ct++;
		cin>>ch;
	}
	cout<<ct<<endl;
}
