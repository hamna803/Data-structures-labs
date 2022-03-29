#include<iostream>
using namespace std;
const int limit=13;
class target_value{
	private:
		int *array;
		int no;
		int target_valu;
		
	public:
		target_value(int total)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 array=new int [no];	
		}
		
		target_value(const target_value& obj)
		{
			this->no=obj.no;
			this->target_valu=obj.target_valu;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		~target_value()
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
			    cout<<"Enter the element you want to search ";
			    cin>>target_valu;
			    for(i=0;i<no;i++)
			    {
			    	if(array[i]==target_valu)
			    	{
			    		cout<< array[i] <<" found at index "<<i;
			    		break;
					}
				if(i+1==no)
				{
					cout<<"Search element not found "<<endl;
				}
					
				}
				
			}
			
		}
		
	
	
};
int main()
{
	int total,elements;
	target_value  *obj1;
	obj1 =new target_value(total);
	obj1->input(elements);
}
