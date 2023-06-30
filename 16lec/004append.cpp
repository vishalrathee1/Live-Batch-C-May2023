#include <iostream>
using namespace std;

int length (char str[]){
	int  i = 0; //will calculate length
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

void append( char to[], char from[]){ // a --> to, b--> from
	int i=0, j = length(to);
	while(from[i]!='\0'){
		to[j] = from[i];
		j++; i++;
	}
	to[j] = '\0';
}

int main(){
	char a[100];
	char b[100];
	cin.getline(a, 100);
	cin.getline(b, 100);
	append(a, b); // this function will append in a , the value of b
	cout<<a<<endl<<b<<endl;
	return 0;
}
