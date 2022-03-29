#include<iostream>
using namespace std;
class sorting
{
	public:
void bubble_sort(char _n[],int n)
{
	int i,j;
	char 
	tem;
	cout<<endl<<"After every pass:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Pass "<<i <<": ";
		cout<<_n[i]<<endl;
		for(j=0;j<n-i-1;j++)
		{
			if(_n[j]>_n[j+1])
			{
			 tem=_n[j];
			 _n[j]=_n[j+1];
			 _n[j+1]=tem;	
			}
		}
	}
	cout<<endl<<"After bubble sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<_n[i]<<endl;
	}
}
};
int main()
{ 
    sorting obj;
	char _n[100];
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter array elements (Characters):"<<endl;
	for(int i=0;i<n;i++)
	{
	
		cin>>_n[i];

	}
	obj.bubble_sort(_n,n);
}

