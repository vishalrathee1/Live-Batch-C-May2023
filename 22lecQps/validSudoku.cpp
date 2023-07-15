#include<iostream>
using namespace std;

bool validRow(char sudoku[9][9], char toCheck, int i, int j){
	//row = i  --> passedfrom valid sudoku
	for(int it = 0; it<9; it++){
		if(it != j and sudoku[i][it] == toCheck) //
		{
			return false;
		}
	}
	return true;
}

bool validCol(char sudoku[9][9], char toCheck, int i, int j){
	//col --> j 
	for(int it = 0; it<9; it++){
		if(it != i and sudoku[it][j] == toCheck) //
		{
			return false;
		}
	}
	return true;
}

bool validGrid(char sudoku[9][9], char toCheck, int r, int c){
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

bool validSudoku (char sudoku[9][9]){
	//we will iterate over each element of sudoku and check
	// whether that element is unique in that row, that column and that subgrid of 3*3
	for(int i =0; i<9; i++){
		for(int j =0; j<9; j++){
			// unique in row
			// unique in col
			// unique in grid 
			if(sudoku[i][j] == '.'){ //space not filled
				continue;
			}
			if(validRow(sudoku, sudoku[i][j], i, j) and validCol(sudoku, sudoku[i][j], i, j) and validGrid(sudoku, sudoku[i][j], i, j) ){
				continue;
			}
			else{
				return false;
			}
		}
	}
	return true;
}


int main(){
	char sudoku[9][9] = {{'5','3','.','.','7','.','.','.','.'}
						,{'6','.','.','1','9','5','.','.','.'}
						,{'.','9','8','.','.','.','.','6','.'}
						,{'8','.','.','.','6','.','.','.','3'}
						,{'4','.','.','8','.','3','.','.','1'}
						,{'7','.','.','.','2','.','.','.','6'}
						,{'.','6','.','.','.','.','2','8','.'}
						,{'.','.','.','4','1','9','.','.','5'}
						,{'.','.','.','.','8','.','.','7','9'}};
	if(validSudoku(sudoku)){
		cout<<"Valid"<<endl;
	}
	else{
		cout<<"Not Valid"<<endl;
	}
	return 0;
}