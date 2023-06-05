#include<iostream>
using namespace std;

int main(){
	int n;
	//n numbers will be given in which each number will be appearig twice except one number
	cin>>n;

	int first;
	cin>>first;

	//loop
	int ct = n-1;
	while(ct>0){
	//xorring all numbers together
		int next;
		cin>>next;
		first = first^next ;//if i do this step for every number it will contain ans at the end
		ct--;
	}

	cout<<first<<endl;

	return 0;
}
