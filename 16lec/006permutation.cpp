#include<iostream>
using namespace std;

void contentOf(char str[], int frArr[]){
	int i =0;
	while(str[i] != '\0'){
		frArr[str[i] - 'a']++;
		i++;
	}
}

bool check(int frArr1[], int frArr2[]){
	for(int i =0; i<26; i++){
		if(frArr1[i] != frArr2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	char str1[100];
	char str2[100];
	cin.getline(str1, 100);
	cin.getline(str2, 100);
	
	// we will make two frequency arrays
	int freqArrstr1[26] = {}; // --> only 26 unique values can be there in a string
	int freqArrstr2[26] = {};

	//find out the content / frequency array of str1
	contentOf(str1, freqArrstr1); // it will fill freqArrstr1
	contentOf(str2, freqArrstr2); 

	// check if these two arrays are equal or not
	// i will make a boolean function tocheck that
	if(check(freqArrstr1, freqArrstr2)){
		cout<<"Yes!, "<<str1<<" "<<str2<<" Are permutatoins of each other"<<endl;
	}
	else {
		cout<<str1<<" "<<str2<<" are not permutatoins of each other"<<endl;
	}

	return 0;
}
