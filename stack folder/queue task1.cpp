#include<iostream>
using namespace std;
int size=100;
int D[100],Q[100],front=-1,rear=-1;

void enque(int elements)
{
   if(rear==size-1)
   {
   	cout<<"Queue [D] is full"<<endl;
   }
   else {
      if (front==-1)
      {
      front=0;
      }
      rear++;
      D[rear]=elements;
   }
}
void store_elements()
{
	int i=front+1;
    for(i;i!=(rear+1)%size;i=(i+1)%size)
		{
	    	if(i==3)
	    	{		
	    		Q[i]=D[i+1];
			}
			else if(i==4)
			{
	     		Q[i]=D[i-1];
        	}
        	else
        	{	
        		Q[i]=D[i];
			}	
	    }
    
    i=front+1;
    while(i!=(rear+1)%size)
	{
		D[i]=Q[i];
	    i=(i+1)%size;
	}
}

void display()
{
   if (front==-1)
   {
   	cout<<"Queue [D] is empty."<<endl;
   }
   else
   {
      cout<<"Queue[D] elements are: ";
      for(int i=front;i<=rear;i++)
      {
      	cout<<D[i]<<" ";
	  }
	  cout<<endl;
   }
}

int main()
{
	enque(1);
	enque(2);
	enque(3);
	enque(4);
	enque(5);
	enque(6);
	enque(7);
	enque(8);
    cout<<"Elements inserted in D"<<endl;
	display();
	
	cout<<"After swapping ";
	store_elements();
	display();
    cout<<endl;
    
    return 0;
}
