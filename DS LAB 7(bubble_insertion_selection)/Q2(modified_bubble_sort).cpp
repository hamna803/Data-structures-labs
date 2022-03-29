#include<iostream>
using namespace std;
class sorting
{
	public:
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
	obj.modifiedbubble_sort(_num,n);
}

