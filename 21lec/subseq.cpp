#include<iostream>
using namespace std;

int length(char str[]){
	int i =0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

//what all subseq we can make from index 'index' to the size of string by taking and not taking 'index'th char
// as part of subsequence
void subseq(char str[], int n, int index, char op[], int index2){
	//base case
	if(index == n){
		cout<<op<<endl;
		return;
	}
	// rec case

	//this character is not a part of subseq
	subseq(str, n, index+1, op, index2); 

	//this char is a part of subsequnce
	// we will have to store this character into op array
	op[index2] = str[index];
	subseq(str, n, index+1, op, index2+1);
	op[index2] = {'\0'};

}

int main(){
	char str[] = "abc";
	int n = length(str);
	char op[n]={'\0'};
	subseq(str, n, 0, op, 0); //abc
	return 0;
}