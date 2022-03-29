#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	char arr[str.length()];
	char arr1[str.length()];
	char arr2[str.length()];
	string pattern;
	cout<<"Enter a string to check whether it matches with the given pattern or not: ";
	cin>>str;
	cout<<"Enter a pattern";
	cin>>pattern;
    for(int i=0;i<4;i++) {
        arr[i]=str[i];
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=4;i<9;i++) {
        arr1[i]=str[i];
        cout<<arr1[i];
    }
    cout<<endl;
     for(int i=9;i<13;i++) {
        arr1[i]=str[i];
        cout<<arr2[i];
    }
    cout<<endl;
    if(pattern=="XYX" && arr[0]=='c' && arr[1]=='o'&& arr[2]=='d'&& arr[3]=='e'&&arr1[0]=='s'&&arr1[1]=='l'&&arr1[2]=='e'&&arr1[3]=='e'&&arr1[4]=='p' &&  arr2[0]=='c' && arr2[1]=='o'&& arr2[2]=='d'&& arr2[3]=='e' )
    {
    	cout<<"Pattern matched! ";
    	cout<<"X=code";
    	cout<<"Y=sleep";
	}
	else
	{
		cout<<"Not matched";
	}
    

	
	
	
}
