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
	for (int i=0; i<a; ++i)
	{
		if (infile.eof()==eof)
		{
			cout<<"Error!";
			exit(0);
		}
		else
		{
			infile>>arr[i];
		}	
	}
		
	cout<<endl;
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
