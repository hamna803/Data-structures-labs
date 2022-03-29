#include<iostream>
#include<conio.h>
# define size 5
using namespace std;

class stacktype
{
	
		int a;
		int *a1;
		signed int top=-1;
	
	public:	
		void readdata ()
		{
			for(int i=0;i<size;i++)
			{
			cout<<"Enter :"<<endl;
			cin>>a[i];
			a1=new int[i];
		    }
		}		
	
		
		void push (int p)
		{
				top++;
				a[top]=p;
		}
		
		char pop( )
		{
			char t;
			
				t=a[top];
				top--;
				
			return t;
		}
		
		void reverseStack (stacktype &os)
		{
			char t;
			while(this->top != -1)
			{
				t=this->pop();
				os.push(t);
			}
			os.display();
		}
		
		void display ()
		{
			cout<<"STACK ELEMENTS"<<endl;
				while (top!=-1)
				{
					cout<<pop ()<<" ";
				}
		}

};

main ()
{
	stacktype st1, st2;
	st1.readdata();
	st1.pushdata();
	st2.reverseStack(st1);
	
}
