#include<iostream>
using namespace std;

int main(){
	char arr[100] = "hello world";
	// in c++ we also have a string class and we directly have a variable of type string
	// so 'string' keyword is also a datatype in c++, although its behind the scenes implementation is of char arrays
	//string s = "hello world";
	

	// advantages of string
	string s1 = "hello ", s2 = "world";

	string s = s1+s2; // append s2 at the back of s1 and assign its value to s

	//int a, b;
	//a==b, a>=b, a<=b , a>b, a<b 
	//string s1, s2
	// s1 ==s2, s1>=s2... all relational comparison you can do with strings also
	

	cout<<s<<endl;
	cout<<(s1==s2)<<endl<<(s1>=s2)<<endl;
	return 0;
}
