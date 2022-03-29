#include<iostream>
using namespace std;
#define size 30
class stack{
public:
	int *value;
	int number;
	int top=-1;
	
public:
	stack()
	{
		number=0;
		top=-1;
	}
	void input()
	{
			cout<<"Enter a number: ";
			cin>>number;
			value=new int(number);
	}
	void push(int num)
	{
			if(top>=size-1)
			{
			cout<<"Stack Overflow"<<endl;	
			}
            else
            {
			top++;
			value[top]=num;
		}
	}
	int pop()
	{
			if (top<=-1)
			{
			 cout<<"Stack overflow";
			}
			else
			{
			int temp;
			temp=value[top];
			top--;
			return temp;
	}
	}
	void prime_divisor()
	{
	 for(int i=1;i<number;i++)
	 {
	 	cout<<number%i<<endl;
		if(number%i==0)
		{
		if(1<i<=3)
		{
		push(i);
		}
		else if((i%2)==0||(i%3)==0)
		{
		 return;
		}
		else
		{
		push(i);
		}
		}}
	}
	void display()
	{
	 cout<<"Prime Factors in descending order are: "<<endl;
	while(top!=-1)
	{
	 cout<<pop()<<" ";
	}
	}
};

int main(){
	stack s;
	s.input();
	s.prime_divisor();
	s.display();
	
}
