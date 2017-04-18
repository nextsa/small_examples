#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void out_matr(int n, int m, int **matr)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
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
	int **matr = new int *[n];
	
	for (int i = 0; i < n; ++i)
	{
		matr[i] = new int [m];
		for (int j = 0; j < m; ++j)
		{
			infile>>matr[i][j];
		}
	
	}
	out_matr(n, m, matr);
	
	for (int i = 0; i < n; i++)
	{
		delete[] matr[i];
	}
	delete[] matr;
	return 0;
}
