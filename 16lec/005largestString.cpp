#include <algorithm>
#include <iostream>
using namespace std;

int length (char str[]){
	int  i = 0; //will calculate length
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

void copy (char copyfrom[], char copyinto[]){ // --> copyfrom = str, copyinto = ans
	int i = 0;
	while(copyfrom[i] != '\0'){
		copyinto[i] = copyfrom[i];
		i++;
	}
	copyinto[i] = '\0';
	
}

int main(){
	int n; // number of strings you want to compare
	cin>>n;
	cin.ignore(); // to ignore '\n' 
	char str[100];
	char ans[100] = {'\0'}; // --> to store ana
	cin.getline(str, 100); // first string input --> apple
	int maxlen = length(str); // 5 --> it will keep track of max length that we have encountered so far
	int i = 1;
	while(i<n){
		cin.getline(str, 100); //input new string
		int lenOfNewString = length(str);
		if(lenOfNewString > maxlen){
			maxlen = lenOfNewString;
			// we will copy this new string into answer
			copy ( str, ans); // copying str into ans
		}
		i++;
	}
	cout<<ans<<endl<<maxlen<<endl;
	return 0;
}
