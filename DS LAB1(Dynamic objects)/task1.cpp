#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Student{
	public:
		string name;
		string roll;
		int courses;
		string major;
		double cgpa;
		int credit_hrs;
		
	public:
		Student()
		{	
		}
		
		Student(string n,string r,int c,string m,double cgpa_ ,int ch)
		{
			name=n;
			roll=r;
			courses=c;
			major=m;
			cgpa=cgpa_;
			credit_hrs=ch;
		}
	public:
	void setname(string n)
	{
		cout<<endl<<"Enter name:";
		name=n;
		cin>>name;
	}
	void setroll(string r)
	{
		cout<<"Enter Roll No: ";
		roll=r;
		cin>>roll;
	}
		void setmajor(string m)
	{
		cout<<"Enter major: ";
		major=m;
		cin>>major;
	}
	void setcourses(int c)
	{
		cout<<"Enter the number of courses: ";
		courses=c;
		cin>>courses;
		
	}
		void setcredits(int ch)
	{
		cout<<"Enter the total number of credit hours : ";
		credit_hrs=ch;
		cin>>credit_hrs;
		
	}
	    
	void setcgpa(double cgpa_)
	{
		cout<<"Enter cgpa: ";
		cgpa=cgpa_;
		cin>>cgpa;
	}
	string getname()
	{
		return name;
	}
	string getroll()
	{
		return roll;
	}
	string getmajor()
	{
		return major;
	}
	int getcourses()
	{
		return courses;
	}
	int getcredithrs()
	{
		return credit_hrs;
	}
	double getcgpa()
	{
		return cgpa;
	}
	
    bool operator<(const Student &obj) {
	  if(name<obj.name)
	  {
	  	return true;
	  }
	  else{
	  	return false;
	   }
}
 


	void display()
	{
		cout<<endl<<"Name: ";
		getname();
		cout<<endl<<"Roll no:";
		getroll();
		cout<<endl<<"Courses: ";
	 	getcourses();
	 	cout<<endl<<"Credit Hours: ";
	 	getcredithrs();
		cout<<endl<<"Cgpa: ";
		getcgpa();
		
	}

		
};
int main()
{
	Student *arr_ptr,*temp;
	arr_ptr=new Student[5];
	temp=new Student[5];
	string n,r,m;
	int c,ch;
	double cgpa_;
	for(int i=0;i<5;i++)
	{
        cout<<"Student "<<i;
		arr_ptr[i].setname(n);
		arr_ptr[i].setroll(r);
		arr_ptr[i].setmajor(m);
		arr_ptr[i].setcourses(c);
		arr_ptr[i].setcredits(ch);
		arr_ptr[i].setcgpa(cgpa_);
		cout<<endl;
		
	}
	for(int i=0;i<5;i++)
   {
   	    cout<<"Student "<<i<<endl;
     	cout<<endl<<"Name: "<<arr_ptr[i].getname();
		cout<<endl<<"Roll no:"<<arr_ptr[i].getroll();
		cout<<endl<<"Major:"<<arr_ptr[i].getmajor();
		cout<<endl<<"Cgpa: "<<arr_ptr[i].getcgpa();
		cout<<endl<<"Courses:"<<arr_ptr[i].getcourses();
		cout<<endl<<"Credit Hours: "<<arr_ptr[i].getcredithrs();
		cout<<endl<<"Cgpa: "<<arr_ptr[i].getcgpa()<<endl;;
	
	}
  
	 for (int i = 0; i <= 5; ++i) {        //sorting
        for (int j = 0; j < 5- i; ++j) {
            if (arr_ptr[j] < arr_ptr[j + 1] )
			{
                *temp=arr_ptr[j];
                arr_ptr[j]=arr_ptr[j + 1];
                arr_ptr[j + 1] = *temp;
            }
        }

   }

  for(int i=0;i<5;i++)
   {
   	    cout<<"Student "<<i<<endl;
     	cout<<endl<<"Name: "<<arr_ptr[i].getname();
		cout<<endl<<"Roll no:"<<arr_ptr[i].getroll();
		cout<<endl<<"Major:"<<arr_ptr[i].getmajor();
		cout<<endl<<"Cgpa: "<<arr_ptr[i].getcgpa();
		cout<<endl<<"Courses:"<<arr_ptr[i].getcourses();
		cout<<endl<<"Credit Hours: "<<arr_ptr[i].getcredithrs();
		cout<<endl<<"Cgpa: "<<arr_ptr[i].getcgpa()<<endl;;
	
	}
delete [] arr_ptr;
}




