#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	const int sz = 7;
	int matr[sz][sz];
	ifstream infile;
    infile.open("ex7.txt");
	
	for (int i=0; i<sz; i++)
	{
		for (int j=0; j<sz; j++)
		{
			infile>>matr[i][j];
			cout<<matr[i][j]<<" ";
		}
		cout<<endl;
	}

	int sum = 0;
	for (int i=0; i<sz; i++)
	{
		sum += matr[i][i] + matr[i][sz - i - 1];
	}
	sum -= matr[3][3];
	cout<<sum<<endl;
	return 0;
}

