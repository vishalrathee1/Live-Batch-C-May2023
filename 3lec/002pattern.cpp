#include<iostream>
#include <type_traits>
using namespace std;

int main(){
	int lines;
	cin>>lines;

	int cur_row =1;
	while(cur_row<=lines){

		//print spaces
		int spaces = lines - cur_row;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}

		int num = cur_row;
		int j = 1;
		//printing from cur row no. to the middle of the pattern
		while(j<=cur_row){
			cout<<num;
			num++;
			j++;
		}
		j=1;
		num=num-2;
		//printing right half of the pattern
		while(j<=(cur_row-1)){
			cout<<num;
			num--;
			j++;
		}
		cout<<endl;
		cur_row++;
	}

	return 0;
}
