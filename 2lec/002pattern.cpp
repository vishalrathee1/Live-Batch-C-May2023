#include<iostream>
using namespace std;

int main(){
	int rows;
	//inputting rows
	cin>>rows;
	rows/=2;
	rows++;
	//print spaces and print stars
	//spaces --> rows - cur row no.
	//stars --> 2*cur row no.   -   1
	int  i =1;
	//above part --> first 4 rows or first rows/2 + 1 rows 
	while (i<=rows) {
		//print spaces
		int spaces = rows-i;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		//print stars
		int star = 2*i -1;
		while(star > 0){
			cout<<"*";
			star--;
		}
		//print new line
		cout<<endl;
		//update i
		i++;
	}
	
	//below 3 rows or rows - (rows/2 + 1) rows 
	// i -= 2;
	// same loop chla deta hun upar waala , until i becomes 0
	
	i-=2;
	
	//pattern mirroring

	while (i>0) {
		//print spaces
		int spaces = rows-i;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		//print stars
		int star = 2*i -1;
		while(star > 0){
			cout<<"*";
			star--;
		}
		//print new line
		cout<<endl;
		//update i
		i--;
	}

	return 0;
}
