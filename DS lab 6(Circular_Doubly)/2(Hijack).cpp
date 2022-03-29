#include<iostream>
using namespace std;
class node
{
	public:
		char data;
		node* next;
		node* prev;
};
class DLL
{
	public:
		node* head;
		node* tail;
		DLL()
		{
			head==NULL;
			tail==NULL;
		}
	 	
		void addnodes(char n)
		{
			node* temp=new node;
			temp->data=n;
			temp->next=NULL;
			temp->prev=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
			tail->next=temp;
			temp->prev=tail;
			tail=temp;
		   }
	}
		void traverseforward_backward()
		{
			node *temp=head;
			int count=1;
		     if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
	           while(temp!=NULL)
	           {
	           	if(temp->data=='X')       //traversing forward
	           	{
				cout<<"The hijacked cabin X is "<<count<<endl;
				cout<<"Going back to the engine and finding the cabin with value O"<<endl;
				
				node*temp1=temp;
				while(temp1!=NULL)
				{
				temp1=temp1->prev;   //traversing backward
				}
				temp1=head;
				count=1;
				while(temp1!=NULL)
				{
				 if(temp1->data=='O')
				 {
				 	cout<<"The cabin with data O is "<<count<<endl;
				 	break;
				 }
				 else
				 {
				  count++;
				  temp1=temp1->next; //traversing forward
				 }
				}
				break;
			   }
			   
			    else
			   {
			   	count++;
			   	temp=temp->next;
			   }
		    }
		}
			
		}
};

int main()
{
	DLL obj;
	obj.addnodes('A');
	obj.addnodes('B');
	obj.addnodes('C');
	obj.addnodes('D');
	obj.addnodes('E');
	obj.addnodes('F');
	obj.addnodes('H');
	obj.addnodes('X');
	obj.addnodes('I');
	obj.addnodes('J');
	obj.addnodes('K');
	obj.addnodes('L');
	obj.addnodes('N');
	obj.addnodes('O');
	obj.traverseforward_backward();
	
}
