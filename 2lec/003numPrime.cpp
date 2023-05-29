#include<iostream>
using namespace std;

int main(){
	//input num
	int num;
	cin>>num;
	//divide from 2 to num-1 
	//if num == 2 , print prime
	//else 2 to num-1 tak divide krna hai
	if(num == 2){
		cout<<"Prime"<<endl;
	}
	else{
		//divide from 2 to num - 1
		int divider = 2,flag = 0;
		while(divider<num && flag == 0){
			if(num%divider == 0){
				cout<<"Not Prime"<<endl;
				flag = 1;
			}
			divider++;
		}
		if(flag == 0){
			cout<<"Prime"<<endl;
		}

	}
	return 0;
}
