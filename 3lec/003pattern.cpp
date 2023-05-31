#include<iostream>
using namespace std;

int main(){
	int lines;
	cin>>lines;
	int original_count = lines;
	lines= lines/2 +1;
	//printing the pattern using stars
	
	//for first half of the pattern
	
	int cur_row = 1;
	while(cur_row<=lines){
		//print stars
		int stars = 1;
		while(stars<=cur_row){
			cout<<"*";
			stars++;
		}
		//print spaces
		int spaces = original_count - (2*cur_row);
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		
		//print stars
		stars = 1;
		if(cur_row == lines){
			stars++;
		}
		while(stars<=cur_row){
			
			cout<<"*";
			stars++;
		}
		cout<<endl;
		cur_row++;

	}
	
	//pattern mirroring and printing lower half
	cur_row=cur_row-2;
	
	while(cur_row>0){
		//print stars
		int stars = 1;
		while(stars<=cur_row){
			cout<<"*";
			stars++;
		}
		//print spaces
		int spaces = original_count - (2*cur_row);
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		
		//print stars
		stars = 1;
		if(cur_row == lines){
			stars++;
		}
		while(stars<=cur_row){
			
			cout<<"*";
			stars++;
		}
		cout<<endl;
		cur_row--;
	}
	
	//transition of pattern code into number code
	//
	//
	cout<<endl<<endl;

	cur_row = 1;
	while(cur_row<=lines){
		//print numbers from 1 to current row no.
		int num = 1;
		while(num<=cur_row){
			cout<<num;
			num++;
		}
		//print spaces
		int spaces = original_count - (2*cur_row);
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		
		//print num from cur row no to 1
		num = cur_row;
		if(cur_row == lines){
			num--;
		}
		while(num>0){	
			cout<<num;
			num--;
		}
		cout<<endl;
		cur_row++;

	}
	
	//pattern mirroring and printing lower half
	cur_row=cur_row-2;
	
	while(cur_row>0){
		//print num
		int num = 1;
		while(num<=cur_row){
			cout<<num;
			num++;
		}
		//print spaces
		int spaces = original_count - (2*cur_row);
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		
		//print num
		num = cur_row;
		if(cur_row == lines){
			num--;
		}
		while(num>0){
			
			cout<<num;
			num--;
		}
		cout<<endl;
		cur_row--;
	}

	return 0;
}
	
