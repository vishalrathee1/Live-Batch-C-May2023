#include <iostream>
using namespace std;
#define pi (2.14 + 1)  //syntax for preprocessor directive
#define ll long long
#define P cout<<

int main(){
	// you have to write a prog where you have to calc circ, area of a circle
	// you will be given radius
	//area = pi * r * r
	long int a = 999;
	long long int summ = 0;
	ll int b = 9;

	cout<<sizeof(b)<<endl<<sizeof(a)<<endl;
	int radius;
	cin>>radius;
	//float pi = 3.14;
	P pi*radius*radius<<endl;
	return 0;
}
