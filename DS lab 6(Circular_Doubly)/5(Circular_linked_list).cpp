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
		
		void add_node(int n){
		
			node *temp = new node;
			temp->data = n;
			temp->next = NULL;
		
			if(head == NULL){
				head = temp;
				tail = temp;
				tail->next=temp;
			}
			tail->next = temp;
			tail = temp; 
			tail->next=head;
	 	
		 }
	 	
		void insertAtEnd(int n)
		{
			node* temp=new node;
		    cout<<"Enter the data you want to enter: ";
		    cin>>n;
			temp->data=n;
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				tail->next=head;
			}
			else
			{
	
		    tail->next=temp;
		    tail=temp;
		    tail->next=head;
		}
		}
		void insertAtFront(int n)
		{
	     node *temp=new node;
		cout<<"Enter the data you want to enter: ";
		cin>>n;
	    temp->data=n;
	    temp->next=NULL;
	    temp->next=head;
	    head=temp;
	    tail->next=head;
		}
		void insertAtPosition(int n, int position)
		{
			node* p=head;
			int count=0;
			while(p->next!=head)
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
			 curr=tail->next;
			 for(int i=0;i<position-1;i++)
			 {
			 	prev=curr;
			 	curr=curr->next;
				 }	
			
				 temp->next=curr->next;
				 curr->next=temp;
				 
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
			tail->next=head;
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
			while(p->next!=head)
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
				tail->next=head;
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
				while(tem->next!=head)
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
		while(t->next!=head)
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
		head=t;

	}while(sort_);
	tail->next=head;
			
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
			while(temp->next!=head)
			{
				prev=temp;
				temp=temp->next;
			}
			tail=prev;
			tail->next=head;
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
			while(curr->next!=head)
			{
				next=curr->next;
				curr->next=prev;
				prev=curr;
				curr=next;
			}
			tail->next=head;
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
			node *temp1=tail->next;
			while(temp1->next!=head)
			{
			 count++;
			 temp1=temp1->next;	
			}
			tail->next=head;
			node *temp2=head;
			while(temp2->next!=head)
			{
				sum+=temp2->data;
				temp2=temp2->next;
			}
			tail->next=head;
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
	           while(temp->next!=head)
	           {
				cout<<temp->data<<endl;
				temp=temp->next;
			   }
			   cout<<temp->data<<endl;
			   cout<<"---------------------------------"<<endl;
		}
			
		}

	
};
int main()
{
	LL obj;
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
    cout<<"Linked list after deleting a node from last"<<endl;
    obj.deleteEnd();
    obj.traverse();
    goto a;
    break;
    
    case 7:
    obj.deletePosition(position);
    cout<<"Linked list after deleting a node  from your desired location is"<<endl;
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
	cout<<endl;
	obj.traverse();
	goto a;
	break;   
	 
    default:
    	cout<<"Exit";
    	exit(1);
}
    	
}
