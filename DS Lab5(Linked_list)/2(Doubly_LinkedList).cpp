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
	    temp->next=head;
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
			 for(int i=0;i<position;i++)
			 {
			 	prev=curr;
			 	curr=curr->next;
				 }	
				 prev->next=temp;
				 temp->next=curr;
				 
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
				node* prev;
				curr=head;
				for(int i=0;i<position-1;i++)
				{
				 prev=curr;
				 curr=curr->next;	
				}
				prev->next=curr->next;
				delete curr;
			}
		}
			
		}
		void maximum()
		{
			int m;
			if(head==NULL)
			{
				cout<<"Your Linked list is empty. Enter elements to find maximum. "<<endl;
				exit(1);
			}
			else
			{
				node* tem;
				tem=head;
				while(tem->next!=NULL)
				{
					if(tem->data>m)
					{
						m=tem->data;
					}
					else{
						tem=tem->next;
					}
				
				}
				cout<<"Maximum: "<<m<<endl;
			}

		}
	void sort()
	{	
	int sort_;
	node *ptr=NULL; 
	node *t; 
	do
	{sort_=0;
		t=head;
		while(t->next!=ptr)
		{
			if(t->data>t->next->data) 
			{
				int tempo= t->data;
				t->data =t->next->data;
				t->next->data=tempo; 
                sort_=1;
			}
			t=t->next;
		}
		ptr=t;

	}while(sort_);
			
	}
				
		
		void deleteEnd()
		{
			node* temp;
			node* prev;
			temp=head;
			if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
			while(temp->next!=NULL)
			{
				prev=temp;
				temp=temp->next;
			}
			tail=prev;
			tail->next=NULL;
			delete temp;
		}
		}
		
		void reverse()
		{
			node* next=NULL;
			node* curr=head;
			node* prev=NULL;
			if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
			while(curr!=NULL)
			{
				next=curr->next;
				curr->next=prev;
				prev=curr;
				curr=next;
			}
			head=prev;
		}
	}
		
		void mean()
		{
			int count=0;
			double sum=0.0;
			double mean=0.0;
			if(head==NULL)
			{
				cout<<"LL is empty"<<endl;
				exit(1);
			}
			else
			{
			node *temp1=head;
			while(temp1!=NULL)
			{
			 count++;
			 temp1=temp1->next;	
			}
			node *temp2=head;
			while(temp2!=NULL)
			{
				sum+=temp2->data;
				temp2=temp2->next;
			}
			mean=sum/count;
			cout<<"The mean is "<<mean<<endl;
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

	
};
int main()
{
	DLL obj;
	int n,last,front,position,choice;
	a:
	cout<<"1-  Traverse"<<endl<<"2-  Insert at Front"<<endl<<"3-  Insert at end"<<endl<<"4-  Insert at any position"<<endl<<"5-  Delete First"<<endl;
	cout<<"6-  Delete End"<<endl<<"7-  Delete from any position"<<endl<<"8-  Maximum"<<endl<<"9-  Mean"<<endl<<"10- Sort"<<endl<<"11- Reverse"<<endl;
	cout<<"0- Exit"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice)
	{
	case 1:
		cout<<"After Traversing the LL: "<<endl;
		obj.traverse();
		goto a;
		break;
	
	case 2:
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
	
	case 3:	
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
	
	case 4:
	obj.insertAtPosition(n,position);
	cout<<"Linked list after inserting at your desired location is";
	obj.traverse();
	goto a;
	break;
   
    case 5:
    cout<<"Deleting the element from front"<<endl;
    obj.deleteFirst();
    obj.traverse();
    goto a;
    break;
    
    case 6:
    cout<<"Linked list after deleting a node from last";
    obj.deleteEnd();
    obj.traverse();
    goto a;
    break;
    
    case 7:
    obj.deletePosition(position);
    cout<<"Linked list after deleting a node  from your desired location is";
    obj.traverse();
    goto a;
    break;
    
    case 8:
    	obj.maximum();
    	goto a;
    	break;
    
    case 9:
    	obj.mean();
    	goto a;
    	break;
    
    case 10:
    	obj.sort();
    	obj.traverse();
		goto a;
		break;
	
	case 11:
	obj.reverse();
	obj.traverse();
	goto a;
	break;   
	 
    default:
    	cout<<"Exit";
    	exit(1);
}
    	
}
