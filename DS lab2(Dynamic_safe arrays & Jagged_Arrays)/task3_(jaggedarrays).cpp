#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int elements=0, row_size=0,rows;
	vector<vector<int> >vec1;
	cout<<"Enter the total number of rows: ";
	cin>>rows;
	for(int i=0;i<rows;i++)
	{
		vector <int> vec2;
		cout<<"Enter row size of row "<<i<<" :";
		cin>>row_size;
		for(int j=0;j<row_size;j++)
		{
			cout<<"Enter row elements: "<<endl;
			cin>>elements;
			vec2.push_back(elements);
		}
		vec1.push_back(vec2);
	}
	
	for(int i=0;i<vec1.size();i++)
	{
		vector <int>vec2;
		cout<<"Row "<<i<<" :";
		cout<<"Elements: ";
		for(int j=0;j<vec1[i].size();j++)
		{
			cout<<vec1[i][j];
			cout<<" , ";
		}
		cout<<endl;
	}
	return 0;
}
