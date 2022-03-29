#include<iostream>
#include<string.h>

using namespace std;

int sum(int );

int main(){
	
	int result;
	int s=5;
	result = sum(s);
	cout<<"SUM = "<<result<<endl;	

}
int sum(int n){
	
	if(n==0){
		return 0;
	}
	else{
	
		return (n + sum(n-1));
	}

}
