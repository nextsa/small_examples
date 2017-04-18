#include<iostream>
using namespace std;

int main()
{
	int a[10];

	for (int i=0; i<10; i++)
	{
		cout<<"["<<i+1<<"]"<<":";
		cin>>a[i];
	}

	cout<<"Massive:";

	for (int i=0; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	int min = a[0];
	int max = a[0];

	for (int i=1; i<10; i++)
	{
		if (a[i] < min)
		{	
			min = a[i];
		}
		if (a[i] > max)
		{
			max=a[i];
		}
	}

	cout<<"\nMin= "<<min;
	cout<<"\nMax= "<<max;

	cout<<endl;

	return 0;
}
