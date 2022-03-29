#include<iostream>
using namespace std;
const int limit=13;
class largest_smallest{
	public:
		int *array;
		int no;
		
	public:
		largest_smallest(int total)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 array=new int [no];	
		}
		
		largest_smallest(const largest_smallest& obj)
		{
			this->no=obj.no;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		largest_smallest()
		{
			delete []array;
		}
		void input(const int &d)
		{
			int i,temp;
			if(no<0 || no>limit)
			{
				cout<<"Out of bounds.The limit to enter array elements is 13"<<endl;
				exit(1)	;
			}
			else
			{
				for(i=0;i<no;i++)
				{
				 array[i]=d;
				 cin>>array[i];	
				}
				cout<<"Array: ";
			    for(i=0;i<no;i++)
				{
				 cout<<array[i]<<", ";	
				}
				cout<<endl;
			}
			
		}
		
		void lar_small()
		{
			int largest,smallest;
		    largest=array[0];
			for(int i=0;i<no;i++)
			{
				if(largest<array[i])
				{
					largest=array[i];
				}
				
			}
		    smallest=array[0];
			for(int i=0;i<no;i++)
			{
				if(smallest>array[i])
				{
					smallest=array[i];
				}
				
			}
			cout<<"Largest number: "<<largest<<endl;
			cout<<"Smallest number: "<<smallest;
		}
		
	
	
};
int main()
{
	int total,elements;
	largest_smallest  *obj1;
	obj1 =new largest_smallest (total);
	obj1->input(elements);
	obj1->lar_small();
}
