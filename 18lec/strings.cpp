#include <iostream>
using namespace std;

int main(){
	string s = "hell";
	// substr syntax --> first argument is index, seconnd is length
	cout<<s.substr(3)<<endl;
	cout<<s.substr(1, 3)<<endl;
	s = s +'o'; // s+='o';
	cout<<s<<endl;
	s.push_back('o');
	cout<<s<<endl;
	//pop_back --> pop last element
	s.pop_back();
	cout<<s<<endl;
	// .length(), s.at(i) --> s[i]
	return 0;
}