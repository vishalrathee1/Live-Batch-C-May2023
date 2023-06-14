#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	if(ch == 'A')
		cout<<"Apple"<<endl;
	else if (ch == 'B' )
		cout<<"Banana"<<endl;
	else if(ch == 'C')
		cout<<"Meow"<<endl;
	else if (ch == 'D')
		cout<<"Woof"<<endl;
	else
		cout<<"Hello World"<<endl;

	//syntax for switch case
	switch (ch) {
		case 'A' : cout<<"Apple"<<endl;
				   break;
		case 'B' : cout<<"Banana"<<endl;
				   break;
		case 'C' : cout<<"Meow"<<endl;
				   break;
		case 'D' : cout<<"Woof"<<endl;
				   break;
		default  : cout<<"Hello World"<<endl;
	}
	return 0;
}
