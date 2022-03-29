#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int pebble_values=0, pebbles=0;
	vector<vector<int> >vec1;
	for(int i=0;i<5;i++)
	{
		vector <int> vec2;
		cout<<"Enter the number of pebbles of Friend  "<<i+1<<" :";
		cin>>pebbles;
		cout<<"Enter the values written on pebbles: "<<endl;
		for(int j=0;j<pebbles;j++)
		{
			cout<<"Pebble ["<<j+1<<"]";
			cin>>pebble_values;
			vec2.push_back(pebble_values);
		}
		vec1.push_back(vec2);
	}
	
	for(int i=0;i<vec1.size();i++)
	{
		int sum=0;
		vector <int>vec2;
		cout<<"Friend "<<i+1<<"->  ";
		cout<<"Pebbles: ";
		for(int j=0;j<vec1[i].size();j++)
		{
			cout<<vec1[i][j];
			
			cout<<" , ";
			sum+=vec1[i][j];
		}
		cout<<" Sum = "<<sum;
		sum=0;
		cout<<endl;
	}
	return 0;
}
