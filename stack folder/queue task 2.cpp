#include<iostream>
using namespace std;


class mindeque
{
public:
	int rear=-1;
	int front=-1;
	int size=6;
	int max;
	int queue[6];

	
void addlast(int elements)
{
   if(rear==size-1)
   {
   	cout<<"Queue is full"<<endl;
   }
   else {
      if (front==-1)
      {
      front=0;
      }
      rear++;
      queue[rear]=elements;
   }
}
void addfirst(int elements)
{
 
        if(front==-1)
        {
            front=0;
            queue[++rear]=elements;
        }
        if(front!=0)
        {
            queue[--front]=elements;
 
        }
       
 
}
void removefirst()
{
{
    if(front==-1)
    {
        cout<<"dequeue is empty";
        return;
    }
    else
    {
    	cout<<"First element deleted";
        if(front==rear)
        {
            front=rear=-1;
            return;
        }
        else
        {
        front=front+1;	
		}   
}
}
}

void removelast()
{
    if(front==-1)
    {
          cout<<"dequeue is empty";
           return;
    }
        else
        {
        	cout<<"Element deleted from last."<<endl;
            if(front==rear)
            {
                front=rear=-1;
            }
            else
                rear=rear-1;
    }
}

void size_()
{
	if (front==-1)
   {
   	cout<<"Queue is empty."<<endl;
   }
   else
   {
   	int count=0;
      for(int i=front;i<=rear;i++)
      {
        count++;
	  }
	  cout<<"size="<<count;
	  cout<<endl;
   }

}

void min()
{
	int minimum=queue[0];
	if (front==-1)
   {
   	cout<<"Queue is empty."<<endl;
   }
   else
   {
   	
      for(int i=front;i<=rear;i++)
      {
      	if(queue[i]<minimum ) 
        {
           minimum=queue[i];
}
   }
   cout<<"minimum="<<minimum;
   cout<<endl;
}
}

void display()
{
   if (front==-1)
   {
   	cout<<"Queue is empty."<<endl;
   }
   else
   {
      cout<<"Queue elements are: ";
      for(int i=front;i<=rear;i++)
      {
      	cout<<queue[i]<<" ";
	  }
	  cout<<endl;
   }
}
};
int main()
{
	mindeque ob;
	cout<<"Adding from front"<<endl;
	ob.addfirst(4);
	ob.addfirst(5);
	ob.display();
	
	cout<<endl<<"Adding from last"<<endl;
	ob.addlast(1);
	ob.addlast(2);
	ob.addlast(3);
	ob.display();
   cout<<endl;
	ob.size_();
    cout<<"Elements inserted "<<endl;
	ob.display();
	cout<<endl;
	ob.size_();
	cout<<endl;
	ob.min();
	cout<<endl;
	ob.removelast();
	ob.display();
	cout<<endl;
	ob.removefirst();
	ob.display();

    cout<<endl;
    
    return 0;
}
