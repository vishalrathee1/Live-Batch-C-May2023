#include<iostream>
using namespace std;
int ct = 0;
string keypad[] = {"","ABC", "DEF","GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void getAllCombinations(string numerical, string ans, int n, int ind){
	//base case
	if(ind == n){
		ct++;
		cout<<ans<<'\t';
		return ;
	}

	//rec case
	int len = keypad[(numerical[ind]-'0')-1].length();
	for(int i =0; i<len; i++){
		// ans += keypad[(numerical[ind]-'0')-1][i];
		// getAllCombinations(numerical, ans, n, ind+1);
		getAllCombinations(numerical, ans+keypad[(numerical[ind]-'0')-1][i], n, ind+1); //to avoid backtrackings
		// ans = ans.substr(0, ans.length()-1);
	}


}

int main(){
	string numerical = "7824";
	int n = numerical.length();
	string ans = "";
	getAllCombinations(numerical, ans, n, 0);
	cout<<endl;
	cout<<ct<<endl;
	return 0;
}