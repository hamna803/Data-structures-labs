#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};
	node* newnode(int n)
		{
			node* temp=new node;
		    cout<<"Enter the data you want to enter: ";
		    cin>>n;
			temp->data=n;
			temp->next=NULL;
			return temp;
		}
	node* insert(node* head, int n)
	{
		node *tail;
		if(head==NULL)
		{
			 return newnode(n);
		}
		else
		{
	     head->next=insert(head->next,n);
	     return  head;
		}
		tail->next=head;
	}
			

		void traverse(node* head)
		{
			node *temp;
			node *tail=NULL;
			temp=head;
		     if(temp->next!=head)
			{
				cout<<head->data<<endl;
				traverse(head->next);
			}	
		}
		
	int getNth(node* head,int index)
	{
       node* temp=head;
		int index_=0;
		do
		{
	    if(head==NULL)
	    {
	    	return 0;
		}
		if(index_==index)
		{
		return(head->data);
		}
		head=head->next;
		index_++;

		}while(temp!=head);
	}

	

int main()
{
	int size,n;
	int index=0;
	node* head=NULL;
	

	cout<<"Enter how many elements you want to add : ";
	cin>>size;
	for(int i=0;i<size ;i++)
	{
	 head=insert(head,n);
    }
    //traverse(head);
    int key;
    cout<<"Enter the index of the element : ";
    cin>>index;
    cout<<"The element at the entered index is "<<getNth(head,index);
    

}
