#include<iostream>
using namespace std;

bool ratInAMaze(int grid[4][5], int path[4][5], int rows, int cols, int curRow, int curCol){
	//base case
	if(curRow == rows-1 and curCol == cols-1){
		//print path
		path[curRow][curCol] = 1;
		for(int i =0; i<rows; i++){
			for(int j = 0; j<cols; j++){
				cout<<path[i][j]<<'\t';
			}
			cout<<endl;
		}
		cout<<endl;
		// return true; // return from here, dont look for any more paths
		return false; //still lookout for more paths
	}


	//rec case
	// this cell is currently part of my path
	path[curRow][curCol] = 1;
	// we can only move rightwards and downwards
	//move rightwards 
	//conditions --> cell should be unblocked and cell should be inside boundary of the grid
	if(curCol+1<=cols-1 and grid[curRow][curCol+1] == 0){
		bool canReach = ratInAMaze(grid, path, rows, cols, curRow, curCol+1);
		if(canReach)
			return true;
	}

	//move downwards if you cannot reach destination by moving rightwards
	if(curRow+1<=rows-1 and grid[curRow+1][curCol] == 0){
		bool canReach = ratInAMaze(grid, path, rows, cols, curRow+1, curCol);
		if(canReach)
			return true;
	}


	// this cell is not a part of my path now becuase this cell cannot reach destination in any way
	path[curRow][curCol] = 0; //backtracking
	return false;
}

int main(){
	int n=4,m=5; //n-->rows, m--> cols
	// 0--> unblocked, 1--> blocked cell
	int grid[4][5]={{0,0,0,0,1},
					{0,1,1,0,0},
					{0,0,1,1,1},
					{0,0,0,0,0}};
	int path[4][5] = {0}; //matrix will keep track of path
	ratInAMaze(grid, path, n, m, 0, 0);
	for(int i =0; i<n; i++){
			for(int j = 0; j<m; j++){
				cout<<path[i][j]<<'\t';
			}
			cout<<endl;
		}
	cout<<endl;
	return 0;
}