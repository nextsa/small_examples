#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream f("ex4.txt");
		int n = 0;
	string line;
	while (true)
	{
		int el = -999;
		f>>el;
		if (f.good())
		{
			n++;
			cout<<el<<" ";
		}
		else 
		{
			break;
		}
	}
	
	cout<<n<<endl;
	return 0;
}
