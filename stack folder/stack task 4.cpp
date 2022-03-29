#include<iostream>
using namespace std;
class stack
{
    int *arr;
    int size;
    int top;
    public:   
    stack() 
    {
        top=-1;
        size=0;   
    }
    void push(int n1)
    {
        if(isEmpty())
        {
            size++;
            arr=new int[size];
            top++;
            arr[top]=n1;       
        }
        else
        {
            top++;
            int *temp=new int[size];
            for (int i=0;i<size;i++)
            {
                temp[i]=arr[i];
            }
            size++;
            arr=new int[size];
            for (int i=0;i<size-1;i++)
            {   
               arr[i]=temp[i];
            }
            arr[top]=n1;
            delete temp;
        }
        
    }
    int pop()
    {        
        if(isEmpty())
        {
            cout<<"Stack Underflow. Stack is EMPTY!\n";
            return 0;
        }
        int n1=arr[top];
        int *temp=new int[size];
        for (int i=0;i<size;i++)
        {
           temp[i]=arr[i];
        }
        size--;
        arr=new int[size];
        for (int i=0;i<size;i++)
        {
           arr[i]=temp[i];
        }    
        top--;
        delete temp;
        return n1;
    }

    bool isEmpty()
    {
        if(top<0){
            return true;
        }
        return false;
    }
    
    int gettop()
    {
        return arr[top];
    }
    int getsize()
    {
        return size;
    }
    void display()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow. Stack is EMPTY!\n";
            return;
        }
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    	void reverseStack(stack &otherstack)
	{
		int t;
		while(top!=-1)
		{
			t=pop();
			otherstack.push(t);
		}
		otherstack.display();
	}
};

	

int main()
{
	stack stack1, stack2;
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.display();
	cout<<endl;	
	stack2.reverseStack(stack1);

}
