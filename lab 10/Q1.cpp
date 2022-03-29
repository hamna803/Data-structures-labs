#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
class MaxHeap
{
public:
	MaxHeap()
	{
	}
void max_Heapify(int max_arr[],int heap_size,int i)
{
    int max,left,right;
	max=i;
    left=2*i+1;
    right=2*i+2;
    if(left<heap_size && max_arr[left]<max_arr[max])
	{
        max=left;
    }
    if(right<heap_size && max_arr[right]<max_arr[max])
	{
        max=right;
    }
    
	if(max!=i)
	{
        swap(max_arr[i],max_arr[max]);
        max_Heapify(max_arr,heap_size,max);
    }
}

void Heap_Sort(int max_arr[],int heap_size)
{
    for(int i=heap_size-1;i>=0;i--)
	{
        max_Heapify(max_arr,heap_size,i);
    }
    for(int i=heap_size-1;i>=0;i--)
	{
        swap(max_arr[0],max_arr[i]);
        max_Heapify(max_arr,i,0);
    }
}
		
void root_deletion(int max_arr[], int& heap_size)
{
    int temp[100],i=0;
    i++;
    int last=max_arr[heap_size-1];
    max_arr[0] = last;
	Heap_Sort(max_arr,heap_size);
	temp[i]= last;	
}
};
class MinHeap
{
	public:
	MinHeap()
	{
	}
void min_Heapify(int min_arr[],int heap_size,int i)
{
    int min,left,right;
	min=i;
    left=2*i+1;
    right=2*i+2;
    if(left<heap_size && min_arr[left]>min_arr[min])
	{
        min=left;
    }
    if(right<heap_size && min_arr[right]>min_arr[min])
	{
        min=right;
    }
    
	if(min!=i)
	{
        swap(min_arr[i],min_arr[min]);
        min_Heapify(min_arr,heap_size,min);
    }
}

void Heap_Sort(int min_arr[],int heap_size)
{
    for(int i=heap_size-1;i>=0;i--)
	{
        min_Heapify(min_arr,heap_size,i);
    }
    for(int i=heap_size-1;i>=0;i--)
	{
        swap(min_arr[0],min_arr[i]);
        min_Heapify(min_arr,i,0);
    }
}
		
void root_deletion(int min_arr[], int& heap_size)
{
    int temp[100],i=0;
    i++;
    int last=min_arr[heap_size-1];
    min_arr[0]=last;
	Heap_Sort(min_arr,heap_size);
	temp[i]= last;	
}
	
};

int main()
{   
    MaxHeap obj;
	cout<<"Max Heap: "<<endl;
	int max_arr[100],heap_size;
	cout<<"Enter the size of heap: ";
	cin>>heap_size;
	cout<<"Enter heap elements: "<<endl;
    for(int i=0;i<heap_size;i++)
	{
        cin>>max_arr[i];
    }
   
    cout<<endl<<"Heap Before sorting"<<endl;
    for(int i=0;i<heap_size;i++)
	{
        cout<<max_arr[i]<<"\t";
    }
   
   cout<<endl<<"Max heap after sorting"<<endl;
    obj.Heap_Sort(max_arr,heap_size);
    for(int i=0;i<heap_size;i++)
	{
        cout<<max_arr[i]<<"\t";
    }
    cout<<endl<<"Deleting Root"<<endl;
	obj.root_deletion(max_arr,heap_size);
	for(int i=0;i<heap_size-1;i++)
	{
        cout<<max_arr[i]<<"\t";
    }
    cout<<endl<<"--------------------------------"<<endl<<endl;
    
    MinHeap obj1;
	cout<<"Min Heap: "<<endl;
	int min_arr[100],heap_size1;
	cout<<"Enter the size of heap: ";
	cin>>heap_size1;
	cout<<"Enter heap elements: "<<endl;
    for(int i=0;i<heap_size1;i++)
	{
        cin>>min_arr[i];
    }
   
    cout<<endl<<"Heap Before sorting"<<endl;
    for(int i=0;i<heap_size1;i++)
	{
        cout<<min_arr[i]<<"\t";
    }
   
   cout<<endl<<"Min heap after sorting"<<endl;
    obj1.Heap_Sort(min_arr,heap_size1);
    for(int i=0;i<heap_size1;i++)
	{
        cout<<min_arr[i]<<"\t";
    }
    cout<<endl<<"Deleting Root"<<endl;
	obj1.root_deletion(min_arr,heap_size1);
	for(int i=0;i<heap_size1-1;i++)
	{
        cout<<min_arr[i]<<"\t";
    }
    
}
