#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	char str[100];
	cin.ignore(); // this will ignore/skip 1 input value stored in input buffer
	cin.getline(str, 100);
	cout<<n<<endl<<str<<endl;
	return 0;
}
