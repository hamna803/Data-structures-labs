#include<iostream>
#include<cmath>
using namespace std;
class Quadratic_equation{
	public:
		double b;
		double c;
		double a;
		
	public:
		Quadratic_equation(double x,double y,double z)
		{
			cout<<"Enter value of a: ";
			a=x;
			cin>>a;
			cout<<"Enter value of b: ";
			b=y;
			cin>>b;
			cout<<"Enter value of c: ";
			c=z;
			cin>>c;
		}
		double geta()
		{
			return a;
		}
			double getb()
		{
			return b;
		}
			double getc()
		{
			return c;
		}
	double calculate(double x, double y,double z)
	{
		
		double d,sq,ans1,ans2;
	    geta();
	    getb();
	    getc();
		d=(getb()*getb())-(4*geta()*getc());
		sq=sqrt(d);
		ans1=-getb()+sq;
		ans2=-getb()-sq;
		cout<<"x1= "<<ans1/(2*geta())<<" , x2= "<<ans2/(2*geta());
	
	}
	
};
int main()
{
	double x,y,z;
	Quadratic_equation obj(x,y,z);
	obj.calculate(x,y,z);
	
}
