#include<iostream>
using namespace std;

int main(){
	//no. of lines
	int lines;
	cin>>lines;
	//writing star wala code
	
	//first approach
	int row_no = 1;
	while(row_no<=lines){
		int col_no = 1;
		while(col_no<=row_no){
			if((col_no + row_no)%2 == 0)
				cout<<"1";
			else 
				cout<<"0";
			col_no++;
		}
		cout<<endl;
		row_no++;
	}
	
	cout<<endl;
	//second approach
	//if row is odd, then first character is 1, then after that deduce the following pattern
	row_no = 1;
	while(row_no<=lines){
		//if row is odd, first char is 1
		int first_char = 1;
		if(row_no%2==0)
			//print 0 as first char
			first_char = 0;

		int col_no = 1;
		while(col_no<=row_no){
			cout<<first_char;
			//if right now my first character is 0, change it to 1 or vice versa
			if(first_char == 0)
				first_char=1;
			else
				first_char = 0;
			col_no++;
		}
		cout<<endl;
		row_no++;
	}

	return 0;
}
