#include <iostream>
using namespace std;

int fact(int num){
	// fact will be num*(num-1) * (num-2) *.....*2*1
	int ans = 1;
	while(num>0){
		ans*=num;
		num--;
	}
	return ans;
}

int main(){
	//make a function that returns factorial of a number
	int num;
	cin>>num;
	cout<<fact(num)<<endl;

	int n,r; //n --> 0 and above , r --> [0 to n]
	cin>>n>>r;

	//we have to calculate nCr --> n!/(r! * (n-r)! )
	// n! --> fact(n)
	// r! --> fact(r), (n-r)! --> fact(n-r);
	
	int ans = fact(n)/(fact(r) * fact(n-r));
	cout<<ans<<endl;
	
	return 0;
}
