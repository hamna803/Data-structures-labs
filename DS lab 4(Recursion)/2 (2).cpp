#include<iostream>
using namespace std;
int reverse_array(int array[],int size,int i,int j,int swap)
{
     if(i<j)
	 {
         swap=array[i];
         array[i]=array[j];
         array[j]=swap; 
         reverse_array(array,size,i+1,j-1,swap); //recursive call
     } 
}

int main()
{
  int array[30],r,size,i,j,swap;
  cout<<"Enter size of array: ";
  cin>>size;
  cout<<"Enter array elements: "<<endl;
   for(i=0;i<size;i++)
  	{
  		cout<<"Element "<<i+1<<": ";
  		cin>>array[i];
  	}
   cout<<"Array before reversing: ";
    for(i=0;i<size;i++)
  	{
  		cout<<array[i]<<" , ";
  	}
    cout<<endl;
    reverse_array(array,size,0,size-1,swap); //fuction call
    cout<<"The reversed array is: ";
    for(i=0;i<size;i++)
  	{
  		cout<<array[i]<<" , ";
  	}

}
