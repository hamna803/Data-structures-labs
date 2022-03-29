#include <iostream>
using namespace std;
bool findpath(int maze[][20], int n, int x, int y, int path[][20]){
	//checking for the boundaries
	if(x < 0 || x >= n || y < 0 || y >=n){
		return false;
	}
	//checking for the destination
	if(x==n-1 && y==n-1){
		path[x][y]=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout <<path[i][j] << "";
			}
			cout << endl;
		}
		return true;
	}
	//checking if the path is valid
	if(maze[x][y]==0 || path[x][y]==1){
		return false;
	}
	//starting point
	path[x][y]=1;
	//moving right 
	if(findpath(maze, n, x,y+1,path)){
		path[x][y]=0;
		return true;
	}
	//moving left
	if(findpath(maze, n,x,y-1,path)){
		path[x][y]=0;
	return true;
}

//moving top
if(findpath(maze, n, x-1,y,path)){
	path[x][y]=0;
	return true;
}
//moving bottom
if(findpath(maze, n, x+1, y, path)){
	path[x][y]=0;
	return true;
}
path[x][y]=0;
return false;
}
bool ispath(int maze[][20], int n) {
	int path[20][20]={0};
	return findpath(maze, n, 0,0, path);
	
}

int main(){
	int n=3;
	int maze[20][20]= {{1,1,0},{1,1,0},{0,1,1}}	;
	cout  << ispath(maze,n); 
}
