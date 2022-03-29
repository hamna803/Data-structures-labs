#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter size: ";
	cin >>  size;
	
	int arr[size];
	cout << "\nEnter size of blocks: ";
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		int max=0;
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout << "\nAfter Placing The Block according to thier Size:\n";
	for(int i=0;i<size;i++)
	{
		cout << arr[i] << "\t";
	}
	
	
}
