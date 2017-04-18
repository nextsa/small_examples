#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void out_matr(vector <vector <int> > &matr)
{
	for (int i = 0; i < matr.size(); i++)
	{
		for (int j = 0; j < matr[i].size(); j++)
		{
			cout<<matr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	ifstream infile;
    infile.open("ex7-1.txt");
		
	int n = 0;
	int m = 0; 
		
	infile>>n>>m;
	vector <vector <int> > matr;
	
	for (int i = 0; i < n; ++i)
	{
		vector<int> v1;
		for (int j = 0; j < m; ++j)
		{
			int num = 0;
			infile>>num;
			v1.push_back(num);
		}
		matr.push_back(v1);
	}
	out_matr(matr);
	cout<<endl;
	return 0;
}
