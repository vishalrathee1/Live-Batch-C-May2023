#include <iostream>
using namespace std;

//second type of container
void sum (int x, int y){
	cout<<x+y<<endl;
}

//4th type of container
int mul(int x1, int y1){
	return x1*y1;
}

//3rd type of container
int main(){
	int a,b;
	cin>>a>>b;
	sum(a,b); // passing / giving values to function
	cin>>a>>b;
	sum(a, b);
	int multiplication = mul(a,b);
	cout<<mul(a,b)<<endl;

	return 0;
}
