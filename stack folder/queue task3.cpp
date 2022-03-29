#include<iostream>
#include<queue>
using namespace std;
#define size 20
void nonrepeatingchar(char streamofchar[])
{
	queue<char>q1;
	int i;
	int count[size]={0,0};
	cout<<"Output: ";
	for(i=0;i<streamofchar[i];i++)
	{
		q1.push(streamofchar[i]);
		char ch2=q1.front()-'a';
		count[streamofchar[i]-'a']++;
		
		while(!q1.empty())
		{ 
        if(count[ch2]<=1) 
        {
        cout<<q1.front();
        break; 
        }
        if(count[ch2]>1) 
		{ 
        q1.pop();
        } 
        } 
    if(q1.empty()) 
    {
    cout<<-1; 
    }
}
  cout << endl; 
}
int main()
{
	char streamofchar[]="aac";
	cout<<"Input: "<<streamofchar<<endl;
	nonrepeatingchar(streamofchar);
}
