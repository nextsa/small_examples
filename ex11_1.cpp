#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void func1(vector <string>& arr, vector <int>& arr2)
{
	for (int i = 0; i < arr.size(); i++)
	{
		//int n = arr[i].length();
		arr2.push_back(arr[i].length());
	}
}

/*int shortest(vector <int>& arr2)
{
	int min = arr2[1];
	for (int i = 0; i < arr2.size(); i++)
	{
		if (arr2[i] < min) 
		{
			min = arr2[i];
		}
	}
	return min;
}

int longest(vector <int>& arr2)
{
	int max = arr2[1];
	for (int i = 0; i < arr2.size(); i++)
	{
		if (arr2[i] > max) 
		{
			max = arr2[i];
		}
	}
	return max;
}*/

void vecout (const string  &s, vector <int>& arr)
{
	cout<<s;
	for (int i = 0; i<arr.size(); i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
} 

void vecout (const string  &s, vector <string>& arr)
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
	vector<string> arr = {"Monday0", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	/*srtarr.push_back("Mon");	srtarr.push_back("Tue");	srtarr.push_back("Wed");	srtarr.push_back("Thur");	srtarr.push_back("Fri");	srtarr.push_back("Sat");	srtarr.push_back("Sun");
	*/
	

	vecout("input vector: ", arr);

	vector <int> arr2;
	func1(arr, arr2);	
	vecout("arr1: ", arr2);

	int min = strlen(arr[1].c_str());
	string minw = arr[1];
	int max = strlen(arr[1].c_str());
	string maxw = arr[1];
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i].length() < min)
		{
			min = arr[i].length();
			minw = arr[i];
		}
		if (arr[i].length() > max)
		{
			max = arr[i].length();
			maxw = arr[i];
		}
	}
	
	cout<<"min = "<<minw<<";` "<<"max = "<<maxw;
	cout<<endl;

//	min = shortest(arr2);
	//max = longest(arr2);
	return 0;
}
