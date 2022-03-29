#include<iostream>
using namespace std;
const int limit=13;
class contagious_subarray{
	private:
		int *array;
		int no;
		
	public:
		contagious_subarray(int total)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 array=new int [no];	
		}
		
		contagious_subarray(const contagious_subarray& obj)
		{
			this->no=obj.no;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		~contagious_subarray()
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
				int sum;
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
				int positive_cont=0;
				int max_Sum=0;
				
				for(i=0;i<no;i++)
				{
				positive_cont=positive_cont+array[i];
				if(positive_cont<0)
				{
					positive_cont=0;
				}
				else if(max_Sum<positive_cont)
				{
					max_Sum=positive_cont;
				}
			    else
			    {
			    max_Sum=sum;
				}
			}
			cout<<"Maximum Contagious sum = "<<sum;
			}
		}
	
	
	
};
 
 int main()
{
	int total,elements;
	contagious_subarray  *obj1;
	obj1 =new contagious_subarray(total);
	obj1->input(elements);
}
 
 

