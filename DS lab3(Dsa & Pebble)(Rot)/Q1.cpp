#include<iostream>
#include<string>
using namespace std;
const int index_limit=7;
class DSA{

	public:
		int *elements;
		int no_of_elements;
		
    public:
		DSA()
		{}	
        
        void set_no_of_elements(int n)
        {
        cout<<"Enter how many elements you want to add. ";
        no_of_elements=n;
		cin>> no_of_elements;	
		}
		
		int get_no_of_el()
		{
			return  no_of_elements;
		}
		
		DSA(const DSA& obj1)
		{
		cout <<"copy constructor is called" << endl;
		no_of_elements=obj1.no_of_elements;
		elements= new int[ obj1.no_of_elements];
		copy(obj1.elements, obj1.elements + no_of_elements, this->elements);
	    }
		

		void insertion(const int &obj2)
			{
				this->elements=new int [ no_of_elements];
				if( no_of_elements<0 ||  no_of_elements>=index_limit)
				{
					cout<<"0ut of bounds.You can't add more than 6 elements. "<<endl;
					exit(1);
				}
				else
				{
				cout<<"Enter array elements: ";
				for(int i=0;i<no_of_elements;i++)
				{
					cout<<"Element["<<i<<"] -> ";
					elements[i]=obj2;
					cin>>elements[i];
				}
					
				}
			}
		
		void searching()
		{
			int search_element;
			cout<<"Enter the element you want to find"<<endl;
			cin>>search_element;
			for(int i=0;i< no_of_elements;i++)
			{
				if(elements[i]==search_element)
				{
					cout<<"Search element is  found at index "<<(i) ;
					break;
					
				}
				if(i+1==no_of_elements)
				{
					cout<<"Search element not found "<<endl;
				}
			}
		}

	void display()
	{ 
		for(int i=0;i< no_of_elements;i++)
		{
			cout<<elements[i]<<" , ";
		}
		cout<<endl;
		
	}
	
	~DSA()
	{
		delete[] elements;
		
	}

	
	
};
class ODSA:public DSA
{
	public:
    	UDSA()
		{
		}
		
	UDSA(const ODSA& obj_odsa)
	{
	  cout <<"copy constructor is called" << endl;
	  no_of_elements=obj_odsa.no_of_elements;
	  elements= new int[ obj_odsa.no_of_elements];
	  copy(obj_odsa.elements, obj_odsa.elements + no_of_elements, this->elements);
	}
	    

	
	void insertion_ordered(const int &obj6)
	{
		int temp;
		this->elements=new int [ no_of_elements];
		if( no_of_elements<0 ||  no_of_elements>=index_limit)
		{
			cout<<"0ut of bounds.You can't add more than 6 elements. "<<endl;
			exit(1);
		}
		else
		{
		    cout<<"Enter array elements: ";
			for(int i=0;i<no_of_elements;i++)
			{
			  cout<<"Element["<<i<<"] -> ";
			  elements[i]=obj6;
			  cin>>elements[i];
			}
			
			for(int i=0;i<no_of_elements;i++)
			{
			  for(int j=i+1;j<no_of_elements;j++)
			  {
			  	if(elements[i]>elements[j])
			  	{
			  		temp=elements[i];
			  		elements[i]=elements[j];
			  		elements[j]=temp;
				  }
			  }
			  
			}
					
			}
	}

    	~ODSA()
	{
	delete[] elements;	
	}
		

};
class UDSA: public DSA
{
	public:
		UDSA()
		{
		}
		
		UDSA(const UDSA& obj_udsa)
		{
		cout <<"copy constructor is called" << endl;
		no_of_elements=obj_udsa.no_of_elements;
		elements= new int[ obj_udsa.no_of_elements];
		copy(obj_udsa.elements, obj_udsa.elements + no_of_elements, this->elements);
	    }
	    
	~UDSA()
	{
	delete[] elements;	
	}


};
int main()
{

   int values1,values2,i,n;
   DSA *obj;
   obj=new DSA;
   
   cout<<"Dynamic Safe Array :"<<endl;
   obj->set_no_of_elements(n);
   obj->get_no_of_el();
   obj->insertion(values1);
   cout<<"Array Elements ----> ";
   obj->display();
   obj->searching();
   cout<<endl<<"-------------------------"<<endl;
   cout<<endl;
  
  
   ODSA *obj3=new ODSA;
   cout<<"Ordered Dynamic Safe Array:"<<endl;
   obj3->set_no_of_elements(n);
   obj3->get_no_of_el();
   obj3->insertion_ordered(values2);
   cout<<"Ordered Array Elements ----> ";
   obj3->display();
   obj3->searching();
   cout<<endl<<"-------------------------"<<endl;
   cout<<endl;
   
   
   UDSA *obj4=new UDSA;
   cout<<"Unordered Dynamic Safe Array:"<<endl;
   obj4->set_no_of_elements(n);
   obj4->get_no_of_el();
   obj4->insertion(values2);
   obj4->searching();
   cout<<"Unordered Array Elements ----> ";
   obj4->display();
   cout<<endl<<"-------------------------"<<endl;
   cout<<endl;


  

}
