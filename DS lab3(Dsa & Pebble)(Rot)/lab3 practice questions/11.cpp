#include<iostream>
using namespace std;
const int limit=13;
class median{
	private:
		int *array1;
		int *array2;
		int no1;
		int no2;
		
	public:
		median(int total1, int total2)
		{
		 cout<<"Enter how many array elements you want to enter for array 1: ";
		 no1=total1;
		 cin>>no1;
		 array1=new int [no1];
		 cout<<"Enter how many array elements you want to enter for array 2: ";
		 no2=total2;
		 cin>>no2;
		 array2=new int [no2];	
		}
		

		void input1(const int &d, const int&o)
		{
			int i,count,j,tem, merged_arr[50], middle_value;
			float median;
			if(no1<0 || no1>limit)
			{
				cout<<"Out of bounds.The limit to enter array elements is 13"<<endl;
				exit(1)	;
			}
			else
			{
				for(i=0;i<no1;i++)
				{
				 array1[i]=d;
				 cin>>array1[i];
				  merged_arr[i]=array1[i];
				
				}
				count=i;
				cout<<"Array1: ";
			    for(i=0;i<no1;i++)
				{
				 cout<<array1[i]<<", ";	
				}

	
				cout<<endl;
				}
			
			int temp1;
			if(no2<0 || no2>limit)
			{
				cout<<"Out of bounds.The limit to enter array elements is 13"<<endl;
				exit(1)	;
			}
			else
			{
				for(i=0;i<no2;i++)
				{
				 array2[i]=o;
				 cin>>array2[i];
				 merged_arr[count]=array2[i];
				 count++;	
				}
				cout<<"Array2: ";
			    for(i=0;i<no2;i++)
				{
				 cout<<array2[i]<<", ";	
				}
				cout<<endl;
			}
		
	     cout<<endl<<"Array after merging both arrays:";	
		for(i=0;i<count;i++)
		{
			cout<<merged_arr[i]<<", ";
		}
	
		for(i=0;i<count-1;i++)
	  {
		for(j=0;j<(count-i-1);++j)
		if(merged_arr[j]>merged_arr[j+1])
		{
			tem=merged_arr[j];
			merged_arr[j]=merged_arr[j+1];
			merged_arr[j+1]=tem;
		}
	}
		cout<<endl<<"Array after merging and sorting in ascending order is: ";
		for(i=0;i<count;i++)
		{
			cout<<merged_arr[i]<<", ";
		}
		middle_value=count/2;
		if(count %2==0)
		{
		 median=((merged_arr[middle_value+0]+merged_arr[ middle_value+1])/2);
		 cout<<endl<<"Median: "<<median;	
		}
		else
		{
			median=merged_arr[middle_value];
			cout<<endl<<"Median: "<<median;
		}
		cout<<endl;
	}
			
		
		
		
	
};
int main()
{
	int total1,total2,elements1,elements2;
	median *obj1;
	obj1 =new median(total1,total2);
	obj1->input1(elements1,elements2);
	//obj1->input2(elements2);
}
