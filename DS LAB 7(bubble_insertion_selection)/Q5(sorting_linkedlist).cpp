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
   void bubble_sort(int n)
	{
		int i,j;
		int var;
	    for(i=0;i<n-1;i++)
		{
			node* tem=head;
			for(j=0;j<n-i-1;j++)
			{
				if(tem->data>tem->next->data)
				{
					var=tem->data;
					tem->data=tem->next->data;
					tem->next->data=var;
					
				}
				tem=tem->next;
			}
		}
	}

void insertion_sort(int n)
{
	int i,j,key;
	node* tem=head;
	for(i=1;i<n;i++)
	{
		key=tem->data;
		j=i-1;
		while(j>0 && tem->data>key)
		{
			tem->next->data=tem->data;
			j--;
		}
		tem->next->data=key;
	}
}

void selection_sort(int n)
{
	int out,j,min,var2;
	node* tem=head;
	for (out=0;out<n-1;out++) 
    { 
        min=tem->data; 
     for(j=out+1;j<n;j++) 
    {
      if (tem->next->data<min) 
      {
        min=tem->next->data; 
     }
  
    }
    var2=tem->data;
    tem->data=tem->next->data;
    tem->next->data=var2;
}
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
    obj.bubble_sort( n);
	cout<<endl<<"Displaying the values: "<<endl;
	cout<<endl<<"After Bubble sorting "<<endl;
	obj.display();
	cout<<"---------------------"<<endl;
	obj.insertion_sort( n);
	cout<<endl<<"Displaying the values: "<<endl;
	cout<<endl<<"After Insertion sort "<<endl;
	obj.display();
	cout<<"---------------------"<<endl;
	obj.selection_sort( n);
	cout<<endl<<"Displaying the values: "<<endl;
	cout<<endl<<"After Selection sort "<<endl;
	obj.display();
	
}
