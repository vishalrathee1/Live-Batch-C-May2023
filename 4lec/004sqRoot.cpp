#include <cstdio>
#include <iostream>
using  namespace std;

int main(){
	int num;
	cin>>num;
	int decimalPlaces;
	cin>>decimalPlaces;

	//calc square root of a number
	float ans = 1;
	while(ans*ans<=num){
		ans++;
	}
	ans--;
	//till here we have got the integral part of our answer
	//now we will find what will come on first decimal place
	while(ans*ans<=num){
		ans = ans+0.1;
	}
	ans = ans-0.1;
	while(ans*ans<=num){
		ans = ans+ 0.01;
	}
	ans = ans - 0.01;
	while(ans*ans<=num){
		ans = ans + 0.001;
	}
	ans = ans - 0.001;
	cout<<ans<<endl;

	//what if we are told to find the answer upto n decimal places
	int i = 0;
	float inc = 1;
	ans = 1;
	while(i<=decimalPlaces){
		while(ans*ans<=num){
			ans = ans + inc;
		}
		ans = ans - inc;
		inc = inc/10;
		i++;
	}
	//printf("%0.5f", ans);
	cout<<endl;
	cout<<ans<<endl;

	return 0;
}
