#include <iostream>
using namespace std;

int factorial1(int n){
	//1*0! // but we know 0! was 1
	return 1*1;
}

int factorial2(int n){
	return 2*factorial1(1);
}

int factorial3(int n){ //3
	return 3*factorial2(2);
}

int factorial4(int n){ // 4
	return 4*factorial3(3);
}

// factorial(5)
int factorial5(int n){ //5
	// 5*4!
	return 5*factorial4(4);
}

int factorial(int n){

	if(n == 0) return 1; // base case


	return n*factorial(n-1); // recursive case
}

int main(){
	int n;
	cin>>n;
	cout<<factorial5(n)<<endl; // main problem //5
	cout<<factorial(n)<<endl;
	return 0;
}
