#include<iostream>
using namespace std;
int ct = 0;

bool isSafeToPlace(int board[100][100], int n, int row, int col){
	//check column above
	for(int i = 0; i<row; i++){
		if(board[i][col] == 1) return false;
	}

	//check above right diagonal
	int rdr = row-1;
	int rdc = col+1;
	while(rdr>=0 and rdc<=n-1){
		if(board[rdr][rdc]==1) return false;
		rdr--; rdc++;
	}

	//check above left diagonal
	int ldr = row-1;
	int ldc = col-1;
	while(ldr>=0 and ldc>=0){
		if(board[ldr][ldc] == 1) return false;
		ldr--; ldc--;
	}


	//none of the places have a queen
	return true;

}

bool nQueens(int board[100][100], int n, int row){
	//base case
	if(row == n){
		ct++;
		//print board
		//1--> rep queen, 0--> rep empty cell
		for(int i =0; i<n; i++){
			for(int j = 0; j<n; j++){
				cout<<board[i][j]<<'\t';
			}
			cout<<endl;
		}
		cout<<endl;
		//return true
		// return true;
		return false;  // for all possible arrangements
	}

	//rec case
	for(int j = 0; j<n; j++){
		bool canPlace = false;
		// we will check whether it is safe to place a queen in this row and this column
		
		canPlace = isSafeToPlace(board, n,row, j );
		if(canPlace){
			board[row][j] = 1; // row,1 --> row,2
			bool canPlaceAllQueens = nQueens(board, n, row+1); //can i place rest of the queens?
			if(canPlaceAllQueens)
				return true;
			
		}
		board[row][j] = 0; //backtracking
	}
	return false;
}

int main(){
	int board[100][100] = {};
	int n=8;
	// cin>>n;
	nQueens(board, n, 0);
	cout<<ct<<endl;
}