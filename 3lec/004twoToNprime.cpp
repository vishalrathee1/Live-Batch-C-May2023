#include<iostream>
using namespace std;

int main(){
	//input num
	int num;
	cin>>num;
	//divide from 2 to num-1 
	//if num == 2 , print prime
	//else 2 to num-1 tak divide krna hai
	int i = 2;
	while(i<=num){
	if(i == 2){
		cout<<i<<endl;
	}
	else{
		//divide from 2 to num - 1
		int divider = 2,flag = 0;
		while(divider<i && flag == 0){
			if(i%divider == 0){
				flag = 1;
			}
			divider++;
		}
		if(flag == 0){
			cout<<i<<endl;
		}
	}
		i++;
	}
	return 0;
}
