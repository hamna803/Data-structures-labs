#include<iostream>
using namespace std;

bool isSafe(int grid[4][4],int r,int c){
	int i,j;
	for(j=0;j<c;j++){
		if(grid[r][j]){
			return false;
		}
	}
	for(int i=r,j=c;i>=0 && j>=0;i--,j--){
		if(grid[i][j]){
			return false;
		}
	}
	for(int i=r,j=c;i<4 && j>=0;i++,j--){
		if(grid[i][j]){
			return false;
		}
	}
	return true;
}

bool NQueen(int grid[4][4],int c){
	if(c>=4){
		return true;
	}
	for(int i=0;i<4;i++){
		if(isSafe(grid,i,c)){
			grid[i][c]=1;
			if(NQueen(grid, c+1)){
				return true;
			}
			grid[i][c]=0;
		}
	}	
	return false;
}

int main(){
	
	cout<<"NQUEEN PROBLEM, where n=4"<<endl<<endl;
	
	int grid[4][4]={
	
		{0,0,0,0},	
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}	
	
	};
	if(NQueen(grid,0)){
	
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				cout<<grid[i][j]<<" ";
			}
	
			cout<<endl;
		}
	}
}
