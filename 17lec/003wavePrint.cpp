#include <iostream>
using namespace std;

void waveprint(int arr[][3], int rows, int cols){ // syntax 1
//void waveprint (int (*p)[3], int rows, int cols){ //syntax number 2 ,
	// 'p' is a pointer to an array of 4 elements which is currently pointing towards 1st array of 3 elements/1st element

	// outer loop will be for columns
	for(int j = 0; j<cols; j++){
		// now for decinding whether to print top to bottom or vice versa

		if(j%2==0){
			//bottom to top
			for(int i = rows-1; i>=0; i--){
				cout<<arr[i][j]<<'\t';
				//cout<<*(p+i)[j]<<'\t';
			}

		}
		else{
			//top to bottom
			for(int i =0; i<rows; i++){
				//cout<<*(p+i)[j]<<'\t';
				cout<<arr[i][j]<<'\t';			}
		}
	}
	cout<<endl;
}

int main(){
	int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	// wave print
	int rows =4, cols = 3;
	// outer loop will be for columns
	for(int j = 0; j<cols; j++){
		// now for decinding whether to print top to bottom or vice versa

		if(j%2==0){
			//bottom to top
			for(int i = rows-1; i>=0; i--){
				cout<<arr[i][j]<<'\t';
			}

		}
		else{
			//top to bottom
			for(int i =0; i<rows; i++){
				cout<<arr[i][j]<<'\t';
			}
		}
	}
	cout<<endl;

	//we will do this wave print by functions now.
	// waveprint(arr, rows, cols)
	waveprint(arr, 4, 3); // passing 2D array 'arr' 

	return 0;
}
