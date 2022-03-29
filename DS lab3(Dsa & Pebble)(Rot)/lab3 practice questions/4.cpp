#include<iostream>
using namespace std;
const int limit=13;
class pairs{
	public:
		int *array;
		int no;
		int given_number=6;
		
	public:
		pairs(int total)
		{
		 cout<<"Enter how many array elements you want to enter: ";
		 no=total;
		 cin>>no;
		 array=new int [no];	
		}
		
		pairs(const pairs& obj)
		{
			this->no=obj.no;
			array=new int[obj.no];
			copy(obj.array ,obj.array + no,this->array);
		}
		 pairs()
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
		
 void pairs_()
 {
 	for(int i=0;i<no;i++)
 	{
 		for(int j=i+1;j<no ;j++)
 		{
 			if((array[i]+array[j])==given_number)
 			{
 			cout<<array[i]<<","<<array[j]<<endl;
 			cout<<endl;
 		   }
		 }
	 }
 }
		
	
	
};
int main()
{
	int total,elements;
	pairs *obj1;
	obj1 =new pairs(total);
	obj1->input(elements);
	obj1->pairs_();
}
