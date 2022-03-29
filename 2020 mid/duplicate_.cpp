#include <iostream>
#include <string>
using namespace std;


		void check(string str)
		{
			int c=0;
			int count=str.length();
			for(int i=0;i<count-1;i++)
			{
				if(str[i]== ')' && str[i+1]==')')
				{
					cout << "duplicate () is found in ";
					c++;
				}
			}
			if(c==0)
			{
				cout << "No duplicate () is found\n";
			}
			int j=0;
			if(c>0)
			{
				
				while(str[j] != ')' && str[j+1] != ')')
				{
					cout << str[j];
					j++;
				}
				
				cout<< str[j] << str[j+1] << str[j+2];
			}

		}

int main()
{
	
	check("((x+y))+z)");
}
