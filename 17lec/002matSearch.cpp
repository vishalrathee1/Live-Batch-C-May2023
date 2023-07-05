#include <iostream>
using namespace std;

int main(){
	int mat[3][3] = {1,2,3,4,5,6,7,8,9};
	int etf;
	cin>>etf; //7
	bool found = false;
	
	//linear search in matrix
	for(int i =0; i<3; i++){
		for(int j = 0; j<3; j++){
			if(etf == mat[i][j]){
				cout<<etf<<" is found at "<<i+1<<" row and "<<j+1<< " column "<<endl;
				found = true;
				break;
			}
		}
		if(found) break; // it will help outer loop to not look for further occurences of the etf
	}

	if(!found) cout<<"Element is not present in the matrix"<<endl; // if element is not found

	return 0;
}
