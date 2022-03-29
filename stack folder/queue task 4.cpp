#include<iostream> 
using namespace std;
#define size 4;

class circle 
{ 
  public:
  int amount; 
  int distance;

}; 

class tour:public circle
{
public:
int front;
int rear;

public:
tour()
{
	 front=0;
	 rear=1;
}

int firstpoint(class circle pairs[]) 
{ 
    int petrol=pairs[front].amount-pairs[front].distance; 
    do
    { 
        while(petrol<0&&front!=rear) 
        { 
            petrol-=petrol;
            front=(front+1)%size; 
            if(front==0) 
            {
              return -1;
			}
        } 
	petrol+=petrol; 
    rear=(rear+1)%size; 	
    }while(rear!=front||petrol<0) ;
    return front; 
}};

int main() 
{ 
    circle pairs[]={{4,6}, {6,5}, {7, 3},{4,5}}; 
    tour obj;
    int start=obj.firstpoint(pairs); 
     if(start==-1)
     {
     	cout<<"Solution doesn't exist.";
	 }
	 else
	 {
	 	cout<<"Start= "<<start;
	 }
} 
