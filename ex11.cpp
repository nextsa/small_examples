#include <iostream>
#include <vector>
#include <string>

using namespace std;
void vecout (const string  &s,const vector <int>& arr);

int func1(const vector <int>& arr, vector <int>& arr2)
{
	for (int i = arr.size() - 1; i>=0; i--)
	{
		arr2.push_back(arr[i]);
	}
	
	return 0;
}

void vecout (const string  &s,const vector <int>& arr)
{
	cout<<s;
	for (int i = 0; i<arr.size(); i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
} 

void func2(vector <int>& arr)
{
	int n = arr.size();
	for (int i = 0; i<n/2; i++)
	{
		iter_swap(arr.begin() + i, arr.begin() + n - i - 1);
	}
	cout<<endl;
}	

int main()
{
	vector <int> arr;
	int n;
	while (cin>>n)
	{
		arr.push_back(n);
	}
	
	vecout("input vector: ", arr);

	vector <int> arr2;
	func1(arr, arr2);	
	vecout("arr1: ", arr2);

	func2(arr);	
	vecout("arr2: ", arr);

	cout<<endl;
	return 0;
}
