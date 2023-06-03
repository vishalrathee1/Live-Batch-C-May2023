#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	n = n/2 +1;
	//printing hourglass upper part only
	int cur_row = 1;
	while (cur_row<=n) {
	//spaces
	//spaces  =  cur_row-1
	int spaces = cur_row-1;
	while(spaces>0){
		cout<<" ";
		spaces--;
	}
	//stars 
	//stars = 2*(n-(cur_row-1)) - 1
	//stars = 2*(n-cur_row) + 1
	int stars = 2*(n-cur_row)+1;
	//star column will keep track of the columns for which to print and for which to not print
	int starcol = cur_row;
	while(stars>0){
		//if row is between (1,n)
		//spaces will be printed for columns [row+1, 2*lines - row)
		if(cur_row>1 && cur_row<n){
			if(starcol == cur_row || starcol == 2*n - cur_row){
				cout<<"*";
			}
			else {
				cout<<" ";
			}
		}
		else
			cout<<"*";
		stars--;
		starcol++;
	}
	//inserting a new line
	cout<<endl;
	cur_row++;
	}

	//now we have to mirror it
	
	cur_row -= 2;
	while (cur_row>0) {
	//spaces
	//spaces  =  cur_row-1
	int spaces = cur_row-1;
	while(spaces>0){
		cout<<" ";
		spaces--;
	}
	//stars 
	//stars = 2*(n-(cur_row-1)) - 1
	//stars = 2*(n-cur_row) + 1
	int stars = 2*(n-cur_row)+1;
	while(stars>0){
		cout<<"*";
		stars--;
	}
	//inserting a new line
	cout<<endl;
	cur_row--;
	}

	return 0;
}
