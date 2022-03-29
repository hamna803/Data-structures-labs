#include<iostream>
using namespace std;
class node
{
	public:
		int data;
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
	 	
		void insertAtEnd(int n)
		{
			node* temp=new node;
		    cout<<"Enter the data you want to enter: ";
		    cin>>n;
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
		void insertAtFront(int n)
		{
		node *temp=new node;
		cout<<"Enter the data you want to enter: ";
		cin>>n;
	    temp->data=n;
	    temp->prev=NULL;
	    temp->next=head;
	    head->prev=temp;
	    head=temp;
		}
		void insertAtPosition(int n, int position)
		{
			node* p=head;
			int count=0;
			while(p!=NULL)
	        {
				count++;
				p=p->next;
			}
			
			cout<<"Enter position ";
			cin>>position;
			if(position>count)
			{
				cout<<"Invalid position";
			}
			else
			{
			 node* temp=new node;
			 cout<<"Enter the data you want to enter: ";
		     cin>>n;
			 temp->data=n;
			 temp->next=NULL;
			 node* curr;
			 node* prev;
			 curr=head;
			 for(int i=0;i<position-1;i++)
			 {
			 	prev=curr;
			 	curr=curr->next;
				 }	
				 temp->prev=curr;
				 temp->next=curr->next;
				 curr->next=temp;
				 temp->next->prev=temp;
				 
			}
			
		}
		
		void deleteFirst()
		{
			node* temp=new node;
			if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{

			temp=head;
			head=head->next;
			head->prev=NULL;
			delete temp;
		}
		}
		void deletePosition(int position)
		{
			node* temp;
			node* p=head;
			int count=0;
			if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
			while(p!=NULL)
	        {
				count++;
				p=p->next;
			}
			cout<<"Enter position to delete a node";
			cin>>position;
			if(position>count)
			{
				cout<<"Invalid position";
			}
			else
			{
				node* curr;
				curr=head;
				for(int i=0;i<position-1;i++)
				{
				 curr=curr->next;	
				}
				curr->prev->next=curr->next;
				curr->next->prev=curr->prev;
				delete curr;
			}
		}
			
		}
	
				
		
		void deleteEnd()
		{
			node* temp;
			temp=tail;
			if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
				tail->prev->next=NULL;
				tail=tail->prev;
				delete temp;
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
				cout<<temp->data<<endl;
				temp=temp->next;
			   }
			   cout<<"---------------------------------"<<endl;
		}
			
		}
		
		void traverseforward()
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
				cout<<temp->data<<endl;
				temp=temp->next;
			   }
			   cout<<"---------------------------------"<<endl;
		}	
		}
		void traversebackward()
		{
			node *temp=tail;
		     if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
	           while(temp!=NULL)
	           {
				cout<<temp->data<<endl;
				temp=temp->prev;
			   }
			   cout<<"---------------------------------"<<endl;
		}
			
		}

	
};
int main()
{
	DLL obj;
	int n,last,front,position,choice;
	a:
	cout<<"1-  Traverse Forward"<<endl<<"2- Traverse Backward"<<endl<<"3-  Insert at Front"<<endl<<"4-  Insert at end"<<endl<<"5-  Insert at any position"<<endl<<"6-  Delete First"<<endl;
	cout<<"7-  Delete End"<<endl<<"8-  Delete from any position"<<endl;
	cout<<"0- Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice)
	{
	case 1:
		cout<<"After Traversing the LL in forward direction: "<<endl;
		obj.traverseforward();
		goto a;
		break;
	case 2:
	cout<<"After Traversing the LL in backward direction: "<<endl;
	obj.traversebackward();
	goto a;
	break;
	
	case 3:
	cout<<"Enter how many elements you want to add at front: ";
	cin>>front;
	for(int i=0;i<front ;i++)
	{
	obj.insertAtFront(n);
    }
	cout<<"Elements in a linked list at front"<<endl;
	obj.traverse();
	goto a;
	break;
	
	case 4:	
	cout<<"Enter how many elements you want to add at last: ";
	cin>>last;
	for(int i=0;i<last;i++)
	{
    obj.insertAtEnd(n);
    }
    cout<<"Elements in an empty linked list at last"<<endl;
	obj.traverse();
	goto a;
	break;
	
	case 5:
	obj.insertAtPosition(n,position);
	cout<<"Linked list after inserting at your desired location is"<<endl;
	obj.traverse();
	goto a;
	break;
   
    case 6:
    cout<<"Deleting the element from front"<<endl;
    obj.deleteFirst();
    obj.traverse();
    goto a;
    break;
    
    case 7:
    cout<<"Linked list after deleting a node from last";
    obj.deleteEnd();
    obj.traverse();
    goto a;
    break;
    
    case 8:
    obj.deletePosition(position);
    cout<<"Linked list after deleting a node  from your desired location is"<<endl;
    obj.traverse();
    goto a;
    break;
    default:
    	cout<<"Exit";
    	exit(1);
}
    	
}
