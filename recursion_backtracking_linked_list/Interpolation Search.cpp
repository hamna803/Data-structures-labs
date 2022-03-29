#include <iostream>
using namespace std;

bool InterpolationSearch(int arr[],int left, int right, int value){
	
	int mid;
	mid=left+((right-left)/(arr[right]-arr[left]))*(value-arr[left]);
	
	if(arr[mid]==value){
		
		cout<<"Found -> "<<value<<" At Index : "<<mid<<endl;
		return true;
	}
	else if(left>=right){
		return false;
	}
	else{
		if(value>arr[mid]){
			return InterpolationSearch(arr,mid+1,right,value);
		}
		else if(value<arr[mid]){
			return InterpolationSearch(arr,left,mid-1,value);
		}
	}
}

int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	int src=5;
	
	if(InterpolationSearch(arr,0,size-1,src)){
		
		cout<<"Found."<<endl;
	}
	else{
		
		cout<<"Not found."<<endl;
	}
	
}
