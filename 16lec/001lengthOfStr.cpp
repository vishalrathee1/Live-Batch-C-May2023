#include <iostream>
using namespace std;

int length (char str[]){
	int  i = 0; //will calculate length
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

int main(){
	char str[100];
	cin.getline(str, 100);
	cout<<length(str)<<endl;
	return 0;
}
