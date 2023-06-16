#include <iostream>
using namespace std;

void FarToCel(){
	int iv,fv,sv;
	cin>>iv>>fv>>sv;
	
	int ctr = iv;
	while(ctr<=fv){
		int farTocel = (5.0/9)*(ctr-32);
		cout<<ctr<<" Temp in Cel: "<<farTocel<<endl;
		ctr+=sv;
	}
}

int main(){
	FarToCel();
	FarToCel();
	FarToCel();
	return 0;
}
