#include<iostream>
using namespace std;
int count=1;
class node
{
	public:
		int data;
		node* next;
};
class series
{
	public:
		node* router;
		node* tail;
		series()
		{
			router==NULL;
			tail==NULL;
		}
		void add_node(int n)
		{

			node* end_devices=new node;
		    cout<<"End Device "<<count++<<": ";
		    cin>>n;
			end_devices->data=n;
			end_devices->next=NULL;
			if(router==NULL)
			{
				router=end_devices;
				tail=end_devices;
				tail->next=router;
			}
			else
			{
	
		    tail->next=end_devices;
		    tail=end_devices;
		    tail->next=router;
		}
		}
		void traverse()
		{
			node *end_devices=router;
		     if(router==NULL)
			{
				cout<<"Circular Series is empty"<<endl;
				exit(1);
			}
			else
			{
				cout<<endl<<"--------------------------"<<endl;
				count=1;
	           while(end_devices->next!=router)
	           {
	           	cout<<"End device "<<count++<<": ";
				cout<<end_devices->data<<endl;
				end_devices=end_devices->next;
			   }
			   cout<<"End device "<<count++<<": ";
			   cout<<end_devices->data<<endl;
		}
			
		}
};
int main()
{
	series obj;
	int n;
	cout<<"Enter data in end devices "<<endl;
	cout<<"Enter the data in end devices:"<<endl;
	for(int i=0;i<6;i++)
	{
		obj.add_node(n); 

	}
	obj.traverse();
}

	 	
