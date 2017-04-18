#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
	ifstream infile;
	infile.open("ex4.txt");
	
	int a=0;
	infile>>a;
	vector<int> arr(a);
	int n = 0;

	while (arr.good())
	{
		infile>>arr[i];
		n++;
	}
	
	
	cout<<n<<endl;
	infile.close();
	
	vector<int>::iterator it;
	sort (arr.begin(), arr.end());
	
	for (it=arr.begin(); it!=arr.end(); ++it)
		{		
			cout<<*it<<" ";
		}

	cout<<endl;
	return 0;
}
