#include <iostream>
using namespace std;

int main(){
	//continue example
	//print values from 1 to 10 but don't print value 5
	for(int i =1; i<=10; i++){
		if(i==5)
			continue;
		cout<<i<<endl;
	}
	
	//break example
	//print numbers from 1 to 10 , but after 7 don't print anything
	for(int i =1; i<=10; i++){
		if(i==8)
			break;
		cout<<i<<endl;
	}

	return 0;
}
