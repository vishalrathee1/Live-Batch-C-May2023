#include <iostream>
using namespace std;

int length (char str[]){
	int  i = 0; //will calculate length
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

void palindrome(char str[]){
	int  i = 0;
	int j = length(str)-1;
	while(i<=j){
		if(str[i] == str[j]){
			i++; j--;
		}
		else{
			cout<<str<<"is not Palindrome "<<endl;
			return ;
		}
	}
	cout<<str<<" is Palindrome"<<endl;
}

int main(){
	char str[100];
	cin.getline(str, 100);
	//check palindrome or not
	palindrome(str);
	return 0;
}
