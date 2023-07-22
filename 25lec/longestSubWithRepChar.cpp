#include<iostream>
using namespace std;

int length(string s){
	int i =0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}

int main(){
	string s = "abca bcbb";
	int n = length(s);
	int l=0,r=0,maxLen = 0;
	int freq[128] = {};
	while(r<n){
		//check whether you can include this char or not
		if(freq[s[r]-'\0']==0){
			//can include
			freq[s[r]-'\0']++;
			r++;
			maxLen = max(r-l, maxLen);
		}
		else{
			freq[s[l]-'\0']--; // shrink window from left
			l++;
		}
	}
	cout<<maxLen<<endl;
	return 0;
}