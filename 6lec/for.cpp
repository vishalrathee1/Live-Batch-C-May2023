#include <iostream>
using namespace std;

int main(){
	for(int i =0;/*initialization */ i<5 /*condition*/ ; i++ /*updation*/ ){
		cout<<"Hii"<<endl;  //printing hii 5 times
	}
	int lines;
	cin>>lines;
	//int r = 1;
	for(int r = 1; r<=lines; r++ ){
		for(int c = 1; c<=r; c++){
			if((c+r)%2==0)
				cout<<1;
			else 
				cout<<0;
		}
		cout<<endl;
		//r++;
	}
}
