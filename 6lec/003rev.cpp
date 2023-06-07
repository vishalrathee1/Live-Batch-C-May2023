#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int rev = 0;
	for(;num>0;num/=10){
		//adding last digit of a number
		rev+=num%10;	
		//num is reduced as the last digit is already added
		//num/=10; //updation
		//rev is multiplied by 10 so that new digit is added correctly
		rev*=10;
	}
	cout<<rev/10<<endl;

	return 0;
}
