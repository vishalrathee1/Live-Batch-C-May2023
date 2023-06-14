#include <iostream>
using namespace std;

int main(){
	int ast[] = {1,2,8,9,7,6,5,4,3,2,-8,-10};
	int n = sizeof(ast)/sizeof(int);
	//insertion sort approach
	for(int i =1; i<n; i++){
		int key = ast[i];
		int j = i-1;
		while(j>= 0 && ast[j]>=0 && key<0 ){  // collision condition
			if(ast[j]> -1*key){//key will get destroyed
				//destroy key
				ast[i] = 0;
				break;
			}
			else if(ast[j] == -1*key){
				//both will get destroyed
				ast[j] = 0;
				ast[i] = 0;
				break;
			}
			else{
				ast[j] = 0;
				j--;
			}
		}
	}
	for(int i = 0; i< n; i++){
		if(ast[i]!=0)
			cout<<ast[i]<<'\t';
	}
	cout<<endl;
	return 0;
}
