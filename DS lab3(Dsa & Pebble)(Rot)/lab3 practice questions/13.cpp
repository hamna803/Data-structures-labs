#include<iostream>
using namespace std;
const int limit=13;
class index{
	private:
		int *array;
		int no;
		int value;
		
	public:
		index(int total,int v)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 value=v;
		 array=new int [no];	
		}
		
		index(const index& obj)
		{
			this->no=obj.no;
			this->value=obj.value;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		~index()
		{
			delete []array;
		}
		void input(const int &d)
		{
			int i,temp,rem,num[3];
			if(no<0 || no>limit)
			{
				cout<<"Out of bounds.The limit to enter array elements is 13"<<endl;
				exit(1)	;
			}
			else
			{
				cout<<"Enter (different) array elements: "<<endl;
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
				cout<<"The array after sorting in ascending order is : ";
				for(i=0;i<no;i++)
				{
					for(int j=i+1;j<no;j++)
					{
						if(array[i]>array[j])
						{
						 	temp=array[i];
						 	array[i]=array[j];
						 	array[j]=temp;
						}	
					}
				}
				for(i=0;i<no;i++)
				{
					cout<<array[i]<<" ,";
				}

				cout<<endl<<"Enter a ( 3 digits ) value to search its starting index and ending index: ";
				cin>>value;
				for(int i=0;i<3;i++)
				{
					rem=value%10;
					num[i]=rem;
					value=value/10;	
				}
				cout<<endl<<"value to search is = ";
				for(i=3-1 ;i>=0; i--)
				{
					cout<<num[i];
				}
				temp=0;
				for(i=0;i<no;i++)
				{
					for(int j=2-1;j>0;j--)
					{
						if(array[i]==num[j])
						{
						 	temp=array[i];
						 	array[i]=num[j];
						 	num[j]=temp;
						 	cout<<endl<<"Starting index returned = "<<i-1<<endl;
						}	
					}
					
				}
				for(i=0;i<no;i++)
				{
					for(int j=0;j<1;j++)
					{
						if(array[i]==num[j])
						{
						 	temp=array[i];
						 	array[i]=num[j];
						 	num[j]=temp;
						 	cout<<"Ending index returned = "<<i<<endl;
						}	
					}
					
				}
				
				
			}
			
		}
		
	
	
};
int main()
{
	int total,elements,va;
	index  *obj1;
	obj1 =new index(total,va);
	obj1->input(elements);
}
