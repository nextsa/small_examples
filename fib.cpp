#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	vector<unsigned int> fib(100);
	fib[0] = 1;
	fib[1] = 1;
	//cout<<fib[0]<<" "<<fib[2]<<" ";
	for (int i=2; i<=100; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		//cout<<fib[i]<<" ";
	}
	
	for (int i=0; i<=100; i++)
	{
		
		if (fib[i] > 2147483647u)
		{
			int a = fib[i-1];
			cout<<a<<" выходит за пределы диапазона int"<<endl;
			break;
		}
	}
	
	return 0;
}
