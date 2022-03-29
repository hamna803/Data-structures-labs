#include <iostream>

using namespace std;
static int Bill = 500;
struct node
{
	int data;
	node*  next;
};
class Queue
{
	node *front,*rear;
	public:
		Queue()
		{
			front = NULL;
			rear = NULL;
		}
		
		void insertion(int n)
		{
			node* tmp = new node;
			tmp->data = n;
			tmp->next = NULL;
			if(front == NULL)
			{
				front = tmp;
				rear = tmp;
			}
			else
			{
				rear->next = tmp;
				rear = rear->next;
			}
			
		}
		
		void deletion()
		{
			node* tmp = front;
			front = front->next;
			delete (tmp);
		}
		
		
		int count()
		{
			int c=0;
			node *tmp = front;
			while(tmp)
			{
				c++;
				tmp=tmp->next;
			}
			return c;
		}
			
		void display()
		{
			node *tmp = front;
			while(tmp)
			{
				cout << tmp->data << "\t";
				tmp=tmp->next;
			}
		}
	
};

	int check(Queue &q4)
		{
			int c = q4.count();
			if(c<4)
			{
				q4.insertion(c+1);
			}
			else
			return 0;
		}
		
		bill(Queue &q5)
		{
			cout << "your Bill is : " << Bill;
			Bill=Bill+50;
			q5.deletion();
		}
		
int main()
{
	Queue q1,q2,q3;
	q1.insertion(1);
	q1.insertion(2);
	q1.insertion(3);
	q2.insertion(1);
	q2.insertion(2);
	q3.insertion(1);
	q3.insertion(2);
	q3.insertion(3);
	q3.insertion(4);
	int counter;
	
	cout << "Enter Counter number:\n1,2,3\n";
	cin >> counter;
	switch(counter)
	{
		case 1:
			{
				int c = q1.count();
				if(c<4)
				{
					q1.insertion(c+1);
					break;
				}
				else
				{
					cout << "\n\ncounter 1 is full";
					int n = check(q2);
					if(n==0)
					{
						
						int a = check(q3);
						if(a==0)
						{
							cout << "\nAll counters are Full.....";
							cout << "\nplease Wait\n";
						}
						else
						{
							cout << "\nmove to Counter 3:";
						}
					}
					else
						{
							cout << "\nmove to Counter 2:";
						}
				}
				break;
			}
			case 2:
			{
				int c = q2.count();
				if(c<4)
				{
					q2.insertion(c+1);
					break;
				}
				else
				{
					cout << "\n\ncounter 2 is full";
					int n = check(q1);
					if(n==0)
					{
						int a = check(q3);
						if(a==0)
						{
							cout << "\nAll counters are Full.....";
							cout << "\nplease Wait\n";
						}
						else
						{
							cout << "\nmove to Counter 3:";
						}
					}
					else
						{
							cout << "\nmove to Counter 1:";
						}
				}
				break;
			}
			case 3:
			{
				int c = q3.count();
				if(c<4)
				{
					q3.insertion(c+1);
					break;
				}
				else
				{
					cout << "\n\ncounter 3 is full";
					int n = check(q2);
					if(n==0)
					{
						int a = check(q1);
						if(a==0)
						{
							cout << "\nAll counters are Full.....";
							cout << "\nplease Wait\n";
						}
						else
						{
							cout << "\nmove to Counter 1:";
						}
					}
					else
					{
						cout << "\nmove to Counter 3:";
					}
				}
				break;
			}
			default:
				{
					cout << "\nWrong choice:";
					break;
				}
				
	}
	
	
	
	cout << "\n\nAre you done with buying?(y/n):\n";
	string opt;
	cin >> opt;
	if(opt == "y")
	{
		cout << "Enter Your Counter Number:";
		int x; 
		cin >> x;
		if(x==1)
		{
			bill(q1);
		}
		else if(x==2)
		{
			bill(q2);
		}
		else if(x==3)
		{
			bill(q3);
		}
		else
		{
			cout << "\n\nWrong Choice\n";
		}
	}
	
	
	
	cout <<"\n\nCounter 1:\n";
	q1.display();
	
	cout <<"\n\nCounter 2:\n";
	q2.display();
	
	cout <<"\n\nCounter 3:\n";
	q3.display();
	
	if(q1.count() == 0 && q2.count() == 0 && q3.count()==0)
	{
		cout << "Cleared and Closed:";
	}
}
	
	
	
	
