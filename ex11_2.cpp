#include <iostream>
#include <vector>
#include <string>

using namespace std;

void vecout (const string  &s,const vector <int>& arr);

void conv(vector <string>& arr, vector <int>& arr2)
{
	for (int i = 0; i<arr.size(); i++)
	{
		int num = atoi(arr.at(i).c_str());
		arr2.push_back(num);
	}
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

int main()
{
	vector<string> arr = {"Mon", "Tue", "Wed", "Thur", "Fri", "Sat", "Sun"};
		
	vector <int> arr2;
	conv(arr, arr2);	
	vecout("StrToInt: ", arr2);

	return 0;
}
