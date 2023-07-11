#include<iostream>
using namespace std;

//calculates num^pow
int powerFunc(int num, int power){
	//base cases
	if(power == 0) return 1;

	//rec case
	return num*powerFunc(num, power-1);
}

int main(){
	int num = 5;
	// cin>>num;
	int power = 3;
	// cin power;
	cout<<powerFunc(num, power)<<endl;
	return 0;
}