#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	int matr[7][7];
	ifstream infile;
    infile.open("ex7.txt");
	
	for (int i=0; i<7; i++)
	{
		for (int j=0; j<7; j++)
		{
			infile>>matr[i][j];
			cout<<matr[i][j]<<" ";
		}
		cout<<endl;
	}

	int sum = 0;
	for (int i=0; i<7; i++)
	{
		for (int j=0; j<7; j++)
		{
			if (i == j)
			{
				sum += matr[i][j];
			}
		}
	}
	cout<<sum<<endl;;
	int n = 7;
	int pob = 0;
	for (int i=0; i<7; i++)
	{
		for (int j=0; j<7; j++)
		{
			if (j == n-i-1)
			{
				pob += matr[i][j];
			}
		}
	}
	int res = sum + pob - matr[3][3];
	cout<<res<<endl;
	return 0;
}


