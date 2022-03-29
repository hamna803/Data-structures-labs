#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	private:
		int age;
		int experience;
		double working_hours;
   
		
		public:
			double salary;
			Employee()
			{
			}
			Employee(int a,int e,double wh)
			{
				age=a;
				experience=e;
				working_hours=wh;
				
			}
			
	void setage(int a)
	{
	  cout<<endl<<"Enter age of employee: ";
	  age=a;
      cin>>age;	
	}
	
	void setexp(int e)
	{
	  cout<<"Enter the number of working experience years: ";
	  experience=e;
	  cin>>experience;
				
	}
	void setworking_hrs(double wh)
	{
		cout<<"Enter the working hrs: ";
		working_hours=wh;
		cin>>working_hours;
	}
	int getage()
	{
		return age;
	}
    double getsalary()
    {
    	return salary;
	}
	
	int getexp()
	{
		return experience;
	}
	double getworking_hours()
	{
		return working_hours;
	}	
	
	   void display()
   {
   

   	cout<<endl <<"Age: "<<getage();
	cout<<"   "<<"Year:"<<getexp();
	cout<<"   "<<"Working Hours: "<<getworking_hours();
	cout<<"   "<<"Salary: "<<getsalary();
	cout<<endl;
   }
	
};
int main()
{
	int n,a,e,hwr;
	double wh,s;
	cout<<"Enter how many employee's salary you want to calculate: ";
	cin>>n;
	Employee *obj2;
	obj2=new Employee[n];

	for(int i=0;i<n;i++)
	{
	(obj2+i)->setage(a);
	(obj2+i)->setexp(e);
	(obj2+i)->setworking_hrs(wh);
	(obj2+i)->getage();
	(obj2+i)->getexp();
	(obj2+i)->getworking_hours();

	 {
	 (obj2+i)->salary=(obj2+i)->getsalary();
	 if((obj2+i)->getage()>50 && (obj2+i)->getexp()>10 && (obj2+i)->getworking_hours()>240)
	 {
	 hwr=500;
	(obj2+i)->salary=(obj2+i)->getworking_hours() *hwr;
	cout<<"The salary of the employee is "<<(obj2+i)->salary<<endl;
	(obj2+i)->display();
	 }
	else if(((obj2+i)->getage()<=50 && (obj2+i)->getage()>40) && ((obj2+i)->getexp()<=10 && (obj2+i)->getexp()>6) && ((obj2+i)->getworking_hours()>200 && (obj2+i)->getworking_hours()<=240))	
    {
	 hwr=425; 
	(obj2+i)->salary=(obj2+i)->getworking_hours() *hwr;
	cout<<"The salary of the employee is "<<(obj2+i)->salary<<endl;
	(obj2+i)->display();
	 }
     else if(( (obj2+i)->getage()<=40 && (obj2+i)->getage()>30) && ((obj2+i)->getexp()<=6 && (obj2+i)->getexp()>3) && ((obj2+i)->getworking_hours()>160 && (obj2+i)->getworking_hours()<=200))	
	{
	hwr=375;
	(obj2+i)->salary=(obj2+i)->getworking_hours() *hwr;
	cout<<"The salary of the employee is "<<(obj2+i)->salary<<endl;
	(obj2+i)->display();
	}
	else if(((obj2+i)->getage()<=30 && (obj2+i)->getage()>22) && ((obj2+i)->getexp()<=3 && (obj2+i)->getexp()>1) && ((obj2+i)->getworking_hours()>120 && (obj2+i)->getworking_hours()<=160))
	{
	hwr=300;
	(obj2+i)->salary=(obj2+i)->getworking_hours() *hwr;
	cout<<"The salary of the employee is "<<(obj2+i)->salary<<endl;
	(obj2+i)->display();
	}
	else
	{
		cout<<"Invalid Parameters";
	} 
	 cout<<"----------------------------------------------------------------------"<<endl;	
    }
   }

 delete [] obj2;
   
}
