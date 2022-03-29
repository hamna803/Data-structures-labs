#include<iostream>
#include<stack>
using namespace std;
 
int main()
{
stack<char>s1;
int x=1;
string strng;
cout<<"Enter a String: ";
cin>>strng;

for(int i=0;i<strng.size();i++)
{
if( (strng.at(i)>='0' && strng.at(i)<='9') ||strng.at(i)=='+' ||strng.at(i)=='-' ||strng.at(i)=='/'||strng.at(i)=='*' ||strng.at(i)==' ' )
{
continue;
}
if(strng.at(i)=='{' ||strng.at(i)=='(' )
{
s1.push(strng.at(i));
}
else if(!s1.empty() && ((s1.top()=='{' && strng.at(i)=='}') || (s1.top()=='(' && strng.at(i)==')')))
{
s1.pop();
}
else
{
x=0;
break;
} } 
 
if(!s1.empty())
{
cout<<"Does not match"<<"\n";
}
else
{
if(x==1)
{
cout<<"Matching grouping symbols"<<"\n";
}
else
{
cout<<"Does not match"<<"\n";
}
return 0;
}
}
