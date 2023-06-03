#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	if(ch>='A' && ch<='Z'){   //implicit typecasting or conversion
		cout<<"UpperCase"<<endl;
	}
	else if(ch>='a' && ch<= 'z'){
		cout<<"LowerCase"<<endl;
	}
	else{
		cout<<"Some other character"<<endl;
	}
	return 0;
}
