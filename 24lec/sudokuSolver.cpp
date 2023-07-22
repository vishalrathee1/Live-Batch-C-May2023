#include<iostream>
using namespace std;

// isValid--> checks , if val can be put on ith row and jth col and in the subgrid
bool isValid(int sudoku[9][9], int toCheck, int r, int c){
	// if row is valid, and col is valid and grid is valid --> means val is valid
	//row = i  --> passedfrom valid sudoku
	for(int it = 0; it<9; it++){
		if(sudoku[r][it] == toCheck) //
		{
			return false;
		}
	}
	
	//col check
	for(int it = 0; it<9; it++){
		if(sudoku[it][c] == toCheck) //
		{
			return false;
		}
	}
	
	//subgrid check
	int rowRange = (r/3)*3;
	int colRange = (c/3)*3;
	for(int i = rowRange; i<rowRange+3; i++){
		for(int j = colRange; j<colRange+3; j++){
			if(i!=r and j!=c and sudoku[i][j] == toCheck){
				return false;
			}
		}
	}
	return true;
}

bool solveSudoku(int mat[9][9]){
	//base case

	//rec case
	//first find out the empty cell and go over them
	for(int i =0; i<9; i++){
		for(int j =0; j<9; j++){
			if(mat[i][j]==0) {
				//empty cell
				//try out all the values from 1 to 9 and
				//check which values from 1 to  9 are valid with the given sudoku
				for(int val = 1; val<=9; val++){
					bool check = isValid(mat, val, i, j); // isValid--> checks , if val can be put on ith row and jth col
					if(check){
						mat[i][j] = val;
						bool canSolve = solveSudoku(mat);
						if(canSolve) return true;
						mat[i][j] = 0; //backtracking
					}
				}
				return false; // tried out all valid values and none of them could solve the sudoku , it means i/we have made a mistake somewhere before
			}
		}
	}
	return true; //base case
}

void printSudoku(int mat[9][9]){
	for(int i =0; i<9; i++){
		for(int j =0; j<9; j++){
			cout<<mat[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int mat[9][9] =
					{{5,3,0,0,7,0,0,0,0},
					 {6,0,0,1,9,5,0,0,0},
					 {0,9,8,0,0,0,0,6,0},
					 {8,0,0,0,6,0,0,0,3},
 					 {4,0,0,8,0,3,0,0,1},
					 {7,0,0,0,2,0,0,0,6},
					 {0,6,0,0,0,0,2,8,0},
					 {0,0,0,4,1,9,0,0,5},
					 {0,0,0,0,8,0,0,7,9}};
	solveSudoku(mat);
	printSudoku(mat);
	return 0;
}