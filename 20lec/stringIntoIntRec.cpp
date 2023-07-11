#include<iostream>
#include<cstring>
using namespace std;

int stringToInt(string s, int n, int ind, int ans){
	//base case
	if(ind==n) return ans;

	//rec case
	//add present index value
	ans+=s[ind]-'0';
	if(ind!=n-1){
		ans*=10;
 	}
 	return stringToInt(s,n,ind+1, ans);
}

int main(){
	string s = "12345"; //s + "10"
	int n = s.length();
	// int ans = 0;
	// for(int i =0; i<n; i++){
	// 	ans += s[i]-'0';
	// 	if(i!=n-1){
	// 		ans*=10;
	// 	}
	// }
	// cout<<ans<<endl;
	cout<<stringToInt(s,n, 0, 0)<<endl;
	return 0;
}