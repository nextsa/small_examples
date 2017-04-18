#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> fib(8);
	fib[0] = 1;
	fib[1] = 1;
	//cout<<fib[0]<<" "<<fib[2]<<" ";
	for (int i=2; i<=8; i++)
	{
			
		fib[i] = fib[i-1] + fib[i-2];
		//cout<<fib[i]<<" ";
	}
	for (int i=0; i<=8; i++)
	{
		cout<<fib[i]<<" ";
	}
	cout<<endl;
	return 0;
}
