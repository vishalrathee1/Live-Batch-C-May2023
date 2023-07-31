#include<iostream>
#include<climits>
using namespace std;

string stringify(int val){
	// convert this val into stringify
	string ans = "";
	while(val){
		int num = val%10;
		val/=10;
		char temp = num+48;
		ans = temp + ans;
	}
	return ans;
}

string MulStr(string str1, int num){
	int n1 = str1.length();
	if(n1 == 0){
		str1 += num+48;
		return str1;
	}
	string ans = "";
	int i = n1-1;
	int car = 0;
	while(i>=0){
		int val = ((str1[i]-'0') * num) + car;
		// cout<<val<<endl;
		if(val>9){
			car = val/10;
			val%=10;
		}
		//conver int to char
		char temp = val + 48;
		// 
		// cout<<temp<<endl;
		ans = temp + ans;
		i--;
	}
	while(car>0){
		char temp = car%10 + 48;
		// cout<<temp<<endl;
		ans = temp + ans;
		car/=10;
	}
	return ans ;
}

int main(){
	// string str1 = "10";
	// string str2 = "507";
	// // str1+str2 --> 609
	int n = 10;
	string ans = "";
	for(int i =1; i<=n; i++){
		ans = MulStr(ans, i);	
	}
	cout<<ans<<endl;
	cout<<stringify(100000)<<endl;
	cout<<MulStr("9", 10)<<endl;
}