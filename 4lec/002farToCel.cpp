#include<iostream>
using namespace std;

int main(){
	int ini_value,fin_value, step;
	cin>>ini_value>>fin_value>>step;
	int ctr=ini_value;
	while(ctr<=fin_value){

		int temp_in_cel = (5.0/9)*(ctr-32);  //explicit typecasting or conversion , 
		cout<<ctr<<"  "<<temp_in_cel<<endl;
		ctr = ctr + step;
	}
	cout<<endl;
	return 0;
}
