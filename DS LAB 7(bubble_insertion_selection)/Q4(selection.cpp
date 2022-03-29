#include<iostream>
#include<time.h>
#include <cstdlib>
using namespace std;
void swapping(int *ar1 ,int *ar2)
{
	int t;
	t=*ar1;
	*ar1=*ar2;
	*ar2=t;
}
void selection_sort(int _num[],int n)
{
    int out,j,min;
    for (out=0;out<n-1;out++) 
    { 
        min=out; 
        for (j=out+1;j<n;j++) 
        {
        if ( _num[j]>_num[min] ) 
            min=j; 
        }

        swapping(&_num[min], &_num[out]); 
    }
 
  	cout<<endl<<"After selection sort in descending order"<<endl;
	for( out=0;out<n;out++)
	{
		cout<<_num[out]<<endl;
	}
 
	
}

int main()
{
	int _num[100];
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
	
		cin>>_num[i];

	}
	selection_sort(_num,n);
}

