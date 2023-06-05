#include<iostream>
using namespace std;

int main(){
	//sizeof operator --> this takes a single argument/parameter.  sizeof(datatype/ jagahkanaam)  --> syntax
	//returns an integer --> representing bytes
	cout<<sizeof(int)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(bool)<<endl;
	cout<<sizeof(double)<<endl;
	int abc = 10;
	char ch = 'A';
	cout<<sizeof(abc)<<endl;
	cout<<sizeof(ch)<<endl;
	return 0;
}
