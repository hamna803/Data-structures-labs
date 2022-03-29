#include<iostream>
using namespace std;
const int limit=13;
class duplicate{
	private:
		int *array;
		int no;
		
	public:
		duplicate(int total)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 array=new int [no];	
		}
		
		duplicate(const duplicate& obj)
		{
			this->no=obj.no;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		~duplicate()
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
				for(i=0;i<no;i++)
				{
					for(int j=i+1;j<no;j++)
					{
						if(array[i]==array[j])
						{
						 	temp=array[i];
						 	array[i]=array[j];
						 	array[j]=temp;
						 	cout<<"Duplicate elements is -> "<<array[i]<<endl;
						}	
					}
				}
			}
			
		}
		
	
	
};
int main()
{
	int total,elements;
	duplicate  *obj1;
	obj1 =new duplicate(total);
	obj1->input(elements);
}
