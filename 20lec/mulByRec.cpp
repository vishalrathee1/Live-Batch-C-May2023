#include<iostream>
using namespace std;

//multiplies num by mul --> num*mul
int mulByRec(int num, int mul){
	//base case
	if(mul == 0) return 0;

	//rec case
	// add this num to the sum of rest of the numbers
	// 7*4 --> 7 + [(7+7+7)--> 7*3]
	return num + mulByRec(num, mul-1);
}

int main()
{
	int num = 7;
	int mul = 4;
	cout<<mulByRec(num, mul)<<endl;
	return 0;
}