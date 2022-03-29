#include<iostream>
#include<time.h>
#include <cstdlib>
using namespace std;
class sorting
{
	public:
void bubble_sort(int _num[],int n)
{
	int i,j,tem;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(_num[j]>_num[j+1])
			{
			 tem=_num[j];
			 _num[j]=_num[j+1];
			 _num[j+1]=tem;	
			}
		}
	}
	cout<<endl<<"After bubble sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<_num[i]<<endl;
	}
}
void modifiedbubble_sort(int _num[],int n)
{
	int i,j,tem;
	for(i=0;i<n;i++)
	{
		int bool_=0;
		for(j=0;j<n-i-1;j++)
		{
			if(_num[j]>_num[j+1])
			{
			 tem=_num[j];
			 _num[j]=_num[j+1];
			 _num[j+1]=tem;	
			 bool_=1;
			}
		}
		if(bool_==0)
		{
			break;
		}
	}
	cout<<endl<<"After Modified bubble sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<_num[i]<<endl;
	}
}
void insertion_sort(int _num[],int n)
{
	int i,j;
	int key;
    for (i=1;i<n;i++)
    {
        key=_num[i];
        j=i-1;
        while(j>=0 && _num[j]>key)
        {
         _num[j+1]=_num[j];
            j--;
        }
        _num[j+1]=key;
    }
 
  	cout<<endl<<"After Insertion sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<_num[i]<<endl;
	}
 
	
}
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
        if ( _num[j]<_num[min] ) 
            min=j; 
        }

        swapping(&_num[min], &_num[out]); 
    }
 
  	cout<<endl<<"After selection sort"<<endl;
	for( out=0;out<n;out++)
	{
		cout<<_num[out]<<endl;
	}
 
	
}


};

int main()
{
	sorting obj;
	int _num[100];
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
	
		cin>>_num[i];

	}
   obj.	bubble_sort(_num,n);
	obj.modifiedbubble_sort(_num,n);
	obj.insertion_sort(_num,n);
	obj.selection_sort(_num,n);
}

