#include<iostream>
using namespace std;

// it is representing/printing values from 'val' to 'n'
void print1ToN(int n, int val){
	if(val>n) return ;

	//print current value
	cout<<val<<'\t';
	//get printed rest of the values(val+1 to n) by recursion
	print1ToN(n, val+1);
}

//it is representing/printing values from 'n' to 1
void printNto1(int n){
	if ( n == 0 ) return;
	//print current value
	cout<<n<<'\t';
	//get printed rest of the values (from n-1 to 1) by recursion
	printNto1(n-1);
}

void print1toN2(int n){
	if ( n == 0 ) return;
	
	
	//get printed rest of the values (from n-1 to 1) by recursion
	print1toN2(n-1);
	//print current value
	cout<<n<<'\t';
}

int main(){
	int n=7;
	// cin>>n;
	print1ToN(n, 1); // 1 to 7
	cout<<endl;
	n = 5;
	printNto1(n); // 5 to 1
	cout<<endl;
	n=7;
	print1toN2(n); // 1 to 7
	return 0;
}