/*Given a singly Linked List, the task is to swap the first odd valued node from the beginning and the first
even valued node from the end of the Linked List. If the list contains node values of a single parity, then
no modifications are required.
Examples:
Input: 4 -> 3 -> 5 -> 2 -> 3 -> NULL
Output: 4 -> 2 -> 5 -> 3 -> 3 -> NULL
Explanation:
4 -> 3 -> 5 -> 2 -> 3 -> NULL ===> 4 -> 2 -> 5 -> 3 -> 3 -> NULL
The first odd value in any node from the beginning is 3.
The first even value in any node from the end is 2.
After swapping the above two node values, the linked list modifies to 4 -> 2 -> 5 -> 3 -> 3 -> NULL.
Input: LL: 2 -> 6 -> 8 -> 2 -> NULL
Output: 2 -> 6 -> 8 -> 2 -> NULL*/
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

void swap()
{
	node* odd=new node;
	node*even=new node;
	node* curr=head;

	
	node* tem=head;
	while(tem!=NULL)
	{
		if(tem->data%2!=0)
		{
		   odd=tem;
			
			break;
		}
		tem=tem->next;
	}

	cout<<"Odd node "<<odd->data<<endl;
	int even_=0;
		while(curr!=NULL)
	{
		if(curr->data%2==0)
		{
		   even=curr;
	}
		curr=curr->next;
	}
   
	cout<<"Even node = "<<even->data;
	cout<<endl<<"-----------------"<<endl;
	int swap_;
	swap_=odd->data;
	odd->data=even->data;
	even->data=swap_;	

	
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
	int value ,n;
	cout<<"Enter how many elements you want to insert in a linked list ";
	cin>>n;
	cout<<"Enter values"<<endl;
	for(int i=0;i<n;i++)
	{
	cin>>value;
	obj.insert(value);
	}
	cout<<endl<<"Before swapping"<<endl;
	obj.display();
	obj.swap();
	cout<<endl<<"After swapping"<<endl;
	obj.display();

	
}
