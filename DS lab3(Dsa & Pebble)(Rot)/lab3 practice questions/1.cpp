#include<iostream>
using namespace std;

class missing_no{
	private:
		int *ptr;
		int size;
	public:
		missing_no(int arr[],int n)
		{
			this->ptr=new int[n];
			this->size=n;
			
		for(int i=1;i<size;i++)
		{
		ptr [i]=arr[i];
		}
	   }
		void find_missing_elements()
		{
			for(int i=1;i<size;i++)
			{
				if(ptr[i]<0)
				{
				 cout<<i+1<<endl;	
				}
			
				}	
	
		}		
};

int main()
{
	cout<<" missing number: "<<endl;
	int ar1[10]={1,2,3,4,5,-1,7,-2,-3,10};
	missing_no o1(ar1,10);
	o1. find_missing_elements();

}
