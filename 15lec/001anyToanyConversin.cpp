#include<iostream>
using namespace std;

int convertToDecimal(int snum, int sourceBase){
	int power = 1;
	int ans = 0;
//	33 base  8 --> power*(snum%10) + (power*8)*((snum/10)%10) --> o/p --> 27
	while(snum){
		ans += (snum%10)*power;
		power*=sourceBase;
		snum/=10;
	}
	return ans;
}

void convertToDest(int num, int base){
	//27 --> 11011 in binary
	long long ans = 0;

	while(num){
		ans += num%base;
		ans *= 10;
		num /= base;
	}
	cout<<ans/10<<endl;
}

int main(){
	int sourceBase,destBase;
	cin>>sourceBase>>destBase;
	int snum;
	cin>>snum;


	//first step is to convert it into decimal
	int decNum = convertToDecimal(snum, sourceBase);

	//now the number we got here is in decimal
	// convert this decimal into destBase via long division method
	convertToDest(decNum, destBase);

	return 0;

}
