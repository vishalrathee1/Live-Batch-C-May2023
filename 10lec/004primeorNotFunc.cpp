#include <iostream>
using namespace std;

void primeOrNot (int number ){
	int i =2;
	while(i<=number - 1){
		if(number%i == 0)
		{
			cout<<"Number is not Prime"<<endl;
			break;
		}
		i++;
	}
	if(i == number)
		cout<<"Prime Number"<<endl;
}

int main(){
	int a;
	cin>>a;
	primeOrNot(a);
	cin>>a;
	primeOrNot(a);
	return 0;
}
