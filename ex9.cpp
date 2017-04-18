#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int iret = -1;
	try
	{
		vector<int> arr = {1, 2, 3};
		cout<<arr.at(8);
		iret = 0;
		
	}
	
	catch (...)
	{
		cout<<"Неверное количество элементов!"<<endl;
		iret = 1;
	}
	return iret;
}
