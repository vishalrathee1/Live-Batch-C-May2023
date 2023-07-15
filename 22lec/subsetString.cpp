#include<iostream>
using namespace std;

void subseq(string str, int n, int index, string op){
	//base case
	if(index == n){
		cout<<op<<endl;
		return;
	}
	//rec case
	//not part, not include
	subseq(str, n, index+1, op);
	
	//include
	op += str[index];
	subseq(str, n, index+1, op);
	//removing while backtracking
	op = op.substr(0,op.length()-1);
}

int main(){
	string str = "abc";
	string op = "";
	subseq(str, str.length(), 0, op);
	// subseq(str, str.length(), 0, ""); //this will also work
	cout<<op<<endl;
	return 0;
}