#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr(10);
	for (int i=0; i<10; ++i)
	{
		arr[i]=i;		
		cout<<arr[i]<<" ";
		
	}
	
	int min = arr[0];
	int max = arr[0];

	for (int i=1; i < 10; i++)
	{
		if (arr[i] < min)
		{	
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max=arr[i];
		}
	}

	cout<<"\nMin= "<<min;
	cout<<"\nMax= "<<max;
	for (int i=1; i < 10; i++)
	{
		int a = min;
		min = max;
		max = a;
		for (int i=0; i<10; ++i)
	{
		arr[i]=i;		
		cout<<arr[i]<<" ";
		
	}

	}

	cout<<endl;
	return 0;
}
