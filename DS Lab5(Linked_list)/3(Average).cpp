#include <iostream>
using namespace std;
class node
{
	public:
	double data;
	node* next;
};
class LL{
	public:
	node* head;
	node* tail;
	LL()
	{
		head=NULL;
		tail=NULL;
	}
		node* get_head_node() 
	{
		return head;
	}
	
   void insert(double value)
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
	
LL average(LL& numbers_list,LL& Average_list)
{
	double average, sum=0.0,total=4.0;
	node* tem1=numbers_list.get_head_node();
	node* head=tem1;
	node* ptr=head;
	while(ptr!=NULL) 
	{
		node* temp=ptr;
		for(int i=0;i<4;i++)
		{
			sum+=temp->data;
			temp=temp->next;
			
		}
         average=sum/total;
		  Average_list.insert(average);
		  if(temp!=NULL)
		   {
				temp=temp->next;
			}
		   else
			{
				return Average_list;
			}
			ptr=ptr->next;
	}
	}
	LL traverse(LL& Average_list)
	{
		cout<<"Average Linked list: "<<endl;
		node* temp3=Average_list.get_head_node();
		node* temp=temp3;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};


int main()
{
	LL obj1,obj2;
	double value;
    cout<<"Enter 12 values  number linked list"<<endl;
	for(int i=0;i<12;i++)
	{
	cin>>value;
	obj1.insert(value);
	}
	obj2.average(obj1,obj2);
    obj2.traverse(obj2);
}
