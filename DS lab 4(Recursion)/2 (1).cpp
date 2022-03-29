#include<iostream>
#include<conio.h>
using namespace std; 
void combinations(int array[], int n ,int i,int j) 
{ 
    if(i==n) 
	{ 
        return;
    } 
    else
    {
    for(j=i+1;j<n;j++)
    {
    cout <<"("<<array[i]<<","<<array[j]<<")"<<" , ";
    }
	i++; 
    combinations(array,n,i,j); //recursive call;
    }
} 
int main() 
{ 
  int array[10],r,n;
  cout<<"Enter size of array: ";
  cin>>n;
  cout<<"Enter length of array: ";
  cin>>r;
  if(r==2)
  {
  	cout<<"Enter array elements: "<<endl;
  	for(int i=0;i<n;i++)
  	{
  		cout<<"Element "<<i+1<<": ";
  		cin>>array[i];
	  }
	  cout<<endl<<"Elements: { ";
	for(int i=0;i<n;i++)
  	{
  		cout<<array[i]<<" , ";
	  }
	  cout<<" }"<<endl;
	  cout<<endl<<"Possible combinations: "<<endl;
     combinations(array,n,0,0); 
}
else
{
	cout<<"Length must be equal to  2";
}
} 
