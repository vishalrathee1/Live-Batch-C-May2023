#include<iostream>
using namespace std;

int main(){
	int rows;
	//inputting rows
	cin>>rows;
	//print spaces and print stars
	//spaces --> current row count -1
	//stars --> rows - current row count + 1
	int  i =1;
	while (i<=rows) {
		//print spaces
		int spaces = i-1;
		while(spaces>0){
			cout<<" ";
			spaces--;
		}
		//print stars
		int star = rows - i +1;
		while(star > 0){
			cout<<"*";
			star--;
		}
		//print new line
		cout<<endl;
		//update i
		i++;
	}
	return 0;
}
