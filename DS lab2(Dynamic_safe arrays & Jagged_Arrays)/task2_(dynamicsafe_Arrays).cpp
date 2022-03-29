
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
const int limit=7;
class Student{
	int arr[limit];
	private:
		string ID;
		int Batch;
		string Discipline;
		int expec_graduation_year;
		string *courses;
		int total_courses;
		
    public:
		Student()
		{
			}	
		void set_ID(string id)
		{
		cout<<"Enter Id: ";
		ID=id;
	    cin>>ID;	
		}
		void set_Batch(int b)
		{
		cout<<"Enter the Batch Number: ";
		Batch=b;
		cin>>Batch;
		}
		
		void set_Discipline(string d)
		{
			cout<<"Enter the discipline: ";
			Discipline=d;
			cin>>Discipline;
		}
		void set_year(int grad_year)
		{
		cout<<"Enter the expected graduation year: ";
		expec_graduation_year=grad_year;
		cin>>expec_graduation_year;	
		}
		
		void set_totalcourses(int totalcourses)
		{
			cout<<"Enter the number of Current Courses: ";
			total_courses=totalcourses;
			cin>>total_courses;
		}
		string get_Id()
		{
			return ID;
		}
		int get_Batch()
		{
		 return Batch;	
		}
		string get_Discipline()
		{
			return Discipline;
		}
		int get_year()
		{
			return 	expec_graduation_year;
		}
		int get_totalcourses()
		{
			return total_courses;
		}
		void setcourses(const string &subjs)
			{
				this->courses=new string[total_courses];
				if(total_courses<=6)
				{
				
				for(int i=0;i< total_courses;i++)
				{
					courses[i]=subjs;
					cin>>courses[i];
				}
			}
			else
			{
				cout<<"Out of bound. The limit for the courses to be enrolled is 6"<<endl;
			}
				
			}

	void display()
	{
		cout<<"ID: "<<ID<<endl;
		cout<<"Batch: "<<Batch<<endl;
		cout<<"Discipline: "<<Discipline<<endl;
		cout<<"Expected Graduation year: "<<expec_graduation_year<<endl;
		cout<<"Total Courses: "<<total_courses<<endl;
		cout<<"Courses: ";
		for(int i=0;i<total_courses;i++)
		{
			cout<<courses[i]<<endl;
		}
		cout<<endl;
	}
	
/*	int& operator [](int index)
	{
		if (index<0 || index>=limit)
		{
			cout<<"Out of Bounds. Index not found !!!"<<endl;
			exit(1);
		}
	   return arr[index];
	}*/
	
};
int main()
{
	string id,d;
	int i, b,grad_year,totalcourses;
	string subjects;
	int in;
	int n;
	cout<<"Enter how many students information you want to eneter : ";
	cin>>n;
   Student *obj;
   
   obj=new Student[n];
   
   for(int i=0;i<n;i++)
   {
   	(obj+i)->set_ID(id);
   	(obj+i)->set_Batch(b);
   	(obj+i)->set_Discipline(d);
   	(obj+i)->set_year(grad_year);
   	(obj+i)->set_totalcourses(totalcourses);
   	(obj+i)->setcourses(subjects);
   
   }

  for(int i=0;i<n;i++)
  {
  	cout<<"Student "<<i<<endl;
  	(obj+i)->display();
  }
  
}
