/*
Write a Count () function that counts the number of times a given int occurs in a list. The code for this has
the classic list traversal structure as demonstrated in Length ().
*/
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
};
class LL{
	public:
		node* head;
		node *tail;
		
	LL()
	{
		head=NULL;
		tail=NULL;
		
	}
   void insert(int value)
   {
   	node* tem=new node;	
   	tem->data=value;
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

void count()
{
	int element;
	int count_=0;
	cout<<"Enter element you want to count: ";
	cin>>element;
	node* tem=head;
	while(tem!=NULL)
	{
	if(element==tem->data)
	{
		count_++;
		tem=tem->next;
	}
	else
	{
		tem=tem->next;
	}
}
   cout<<"Count= "<<count_<<endl;;
}
	   
   void display()
   {
   	node* tem=head;
   	while(tem!=NULL)
   	{
   		cout<<tem->data<<endl;
   		tem=tem->next;
	   }
   }

	
};
int main()
{
	LL obj;
	int value ,n,count_=0;
	cout<<"Enter how many elements you want to insert in a linked list ";
	cin>>n;
	cout<<"Enter values"<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>value;
	obj.insert(value);
	}
	cout<<"Elements in Linked list: ";
	obj.display();
	obj.count();
	
}
