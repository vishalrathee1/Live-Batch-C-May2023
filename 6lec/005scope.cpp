#include <iostream>
using namespace std;
int d = 200;
int main(){
	//scope of a variable
	int a = 20,b = 100;
	if(true){
		{
			int b = 10;
			cout<<d<<endl;
		}
		cout<<b<<endl;
		//int a = 10;
		cout<<a<<endl;
	}
	cout<<d<<endl;
	cout<<a<<endl;
	return 0;
}
