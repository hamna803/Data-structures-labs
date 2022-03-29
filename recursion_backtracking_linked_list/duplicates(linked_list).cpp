#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;	
	
};
class LL
{
	public:
	node* head;
	node* tail;
	LL()
	{
		head==NULL;
		tail==NULL;
	}
	
	void add_nodes(int n)
	{
		node* temp=new node;
		cout<<"Enter data: ";
		cin>>n;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
	void remove_duplicates()
	{
		node* tem1;
		node* tem2;
		node* dup;
		tem1=head;
		while(tem1!=NULL && tem1->next!=NULL)
		{
			tem2=tem1;
		}
		while(tem2->next != NULL)
        {
            if (tem1->data==tem2->next->data)
            {
                dup=tem2->next;
                tem2->next=tem2->next->next;
                delete(dup);
            }
            else 
                tem2=tem2->next;
          }
        tem2=tem2->next;
    }
	
	void traverse()
	{
		node* temp;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
			
		}
	}
};
int main()
{
	LL obj;
	int size,n;
	cout<<"Enter the size of linked list: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		obj.add_nodes(n);
	}
	obj.remove_duplicates();
	cout<<endl;
	obj.traverse();
}
