#include<iostream>
using namespace std;

int main(){
	int n = 4,m =4, k =5, s= 20;
	char park[4][5] = {"..*.", ".#..", "**..", ".#**"};
	int i =0, j=0;
	while(i<n){
		if(park[i][j] == '.'){
			s-=2;
			if(s<k) {
				//lost
				break;
			}
		}
		else if(park[i][j]== '*'){
			s+=5;
		}
		else{
			//s will be constant //blockade
			i++;
			j=0;
			continue;
		}
		j++;
		if(j==4) {
			//come to next row
			i++;
			j=0;
			continue;
		}
		s--;
	}
	if(i==4){
		cout<<"Yes "<<endl<<s;
	}
	else cout<<"No"<<endl;
	return 0;
}