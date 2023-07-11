#include<iostream>
using namespace std;
string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

//printing n into its string counterpart in reverse order
void printString(int n){ //2048
	//base case
	if(n==0) return;

	//rec case
	int lastNo = n%10; //8, 4, 0, 2
	cout<<nums[lastNo]<<'\t'; //eight , four, zero, two 
	printString(n/10);

}

//printing n into its string counterpart
void printString2(int n){ //2048
	//base case
	if(n==0) return;

	//rec case
	int lastNo = n%10; //8, 4, 0, 2
	printString2(n/10);
	cout<<nums[lastNo]<<'\t'; //eight , four, zero, two
}

int main(){
	int n=2048;
	// cin>>n;
	printString2(n);
	cout<<endl;
	return 0;
}