#include<iostream>
using namespace std;
const int limit=13;
class reverse{
	private:
		int *array;
		int no;
		
	public:
		reverse(int total)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 array=new int [no];	
		}
		
		reverse(const reverse& obj)
		{
			this->no=obj.no;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		~reverse()
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
				cout<<"Reversed array: "; 
				for(i=no-1 ;i>=0; i--)
				{
					cout<<array[i]<<" , ";
				
				}
			}
			
		}
		
	
	
};
int main()
{
	int total,elements;
	reverse  *obj1;
	obj1 =new reverse(total);
	obj1->input(elements);
}
