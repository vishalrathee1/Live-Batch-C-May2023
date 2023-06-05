#include<iostream>
using namespace std;

int main(){
	int a= 9, b = 13;
	unsigned int num = 13;
	cout<<(9&13)<<endl<<(9|13)<<endl<<(17&13&7)<<endl<<(17|13|7)<<endl<<(~13)<<endl<<(7^13)<<endl<<(17^13^7)<<endl;;
	cout<<(7>>2)<<endl<<(7<<2)<<endl<<(~1)<<endl<<(~num)<<endl;

	int n = 10;
	n<<=2;
	cout<<n<<endl;
	
	return 0;
}
