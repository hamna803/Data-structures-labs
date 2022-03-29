#include<iostream>
using namespace std;
int  palindrome(int num,int reverse)
{
     if(num==0)
     {
     	return reverse;
     }
     
        int remainder;
        remainder=num%10;
        reverse=reverse*10+remainder;
        int x;
        x=num/10;
        return palindrome(x,reverse);
   	
   }
   
int main()
{
	int num, reverse=0;
	cout<<"Enter a number: ";
	cin>>num;

	reverse=palindrome(num,reverse); 
	cout<<"reverse"<<reverse;
	if(reverse==num)
	{
		cout<<"The number is palindrome";
	}
	else
	{
		cout<<"Number is not a palindrome";
	}
	
}
