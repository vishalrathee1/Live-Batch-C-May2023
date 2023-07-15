#include<iostream>
using namespace std;

int length(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

void allPerm(char str[], int n, int index){
	//base case
	if(index == n) {
		cout<<str<<endl;
		return;
	}
	//rec case
	//a fixed
	// allPerm(str, n, i+1); // 1, abc ,

	// //b fix
	// swap(str[i], str[i+1]);
	// allPerm(str, n, i+1); //1 , bac 

	// //c fix
	// swap(str[i], str[i+2]); //1, cab
	// allPerm(str, n, i+1);

	for(int i = index; i<n; i++){
		swap(str[index], str[i]);
		allPerm(str, n, index+1);
		swap(str[index], str[i]); //backtracking
	}

}

int main()
{
	char str[] = "abcd";
	int n = length(str);
	allPerm(str, n, 0);
	return 0;
}