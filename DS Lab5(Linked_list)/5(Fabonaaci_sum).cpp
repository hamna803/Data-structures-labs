#include<iostream>
using namespace std;
class node{
	public:
	node* next;
	int data;
};
class LL
{
	public:
	node* head;
	node* tail;
	LL()
	{
		head=NULL;
		tail=NULL;
	}
	void fabonacci(double next_t)
	{
	node* tem=new node;	
   	tem->data=next_t;
   	tem->next=NULL;
   	if(head==NULL)
   	{
   		head=tem;
   		tail=tem;
	}
	else
	{
		tail->next=tem;
		tail=tem;
	}	 
	}
	void traverse()
	{
		node *temp=head;
	    if(head==NULL)
		{
			cout<<"LL is empty"<<endl;
			exit(1);
		}
		else
		{
	      while(temp!=NULL)
	    {
			cout<<temp->data<<" -> ";
			temp=temp->next;
		}
		cout<<endl<<"---------------------------------"<<endl;
		}
	}
	void mean()
	{
	double mean_;
	double sum=0.0,count=0;
	node* odd=new node;	
	node* tem=head;
	cout<<"Odd nodes: "<<endl;
	while(tem!=NULL)
	{
		if(tem->data%2!=0)
		{
		   odd=tem;
		   cout<<odd->data<<" -> ";
		   count++;
		   sum+=odd->data;
		}
		tem=tem->next;
	}
	cout<<endl<<"Sum of odd nodes: "<<sum<<endl;
	mean_=sum/count;
	cout<<"Mean of odd nodes: "<<mean_;
	}
};

int main()
{
	LL obj;
   double terms,ft=0,st=ft+1;
   double  next_t=0,i;
   cout<<"Enter the number of terms: ";
   cin>>terms;
   for(i=0;i<2;i++)
   {
   	obj.fabonacci(next_t);
   	next_t=st;
   }
   for(i=0;i<terms;i++)
   {
      if(i<=1)
       {
       	next_t=i;
	   }
      else
      {
         next_t=ft+st;
         ft=st;
         st=next_t;
         obj.fabonacci(next_t);
      }
   }
   obj.traverse();
   obj.mean();
}
