#include<iostream>
#include<conio.h>
using namespace std;

class stacktype
{
	
		string a;
		
		char *a1;
		
		signed int top=-1;
		
	
	public:	
		void readdata ()
		{
			cout<<"Enter Expression:"<<endl;
			cin>>a;

			a1=new char [a.length()];
			
		} 
		
		void pushdata ()
		{
			for(int i=0 ; i<a.length() ; i++)
			{
				push(a[i]);
			}
			

		}
		
		void push (char p)
		{
				top++;
				a[top]=p;
		}
		
		char pop ( )
		{
			char t;
			
				t=a[top];
				top--;
				
			return t;
		}
		
		
		bool operator == (stacktype s1)
		{
			int max=a.length();
			if(a.length()<s1.a.length())
			{
				max=s1.a.length();
			}
			
			for (int i=0; i< max; i++)
			{
				if((this->top == -1) && (s1.top==-1))
				{
					cout<<"STACK IS EQUIVALENT"<<endl;
					return true;
				}
				else
				{
					char x, y;
					x=pop ();
					y=s1.pop ();
					if(x!=y)
					{
						cout<<"STACK IS NOT EQUIVALENT"<<endl;
						return false;
					}
				}
			}
			cout<<"STACK IS EQUIVALENT"<<endl;
			return true;
		}
		
};


main ()
{
	stacktype st1, st2;
	st1.readdata();
	st1.pushdata();
	st2.readdata();
	st2.pushdata();
	st1==st2;
}
