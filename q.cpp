#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <vector <int> > matr(n, vector<int>(n));

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin>>matr[i][j];
			cout<<matr[i][j]<<" ";
		}
		cout<<endl;
	}

return 0;
}
