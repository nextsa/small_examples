#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
	int sz = 4;
	int a = 0,
		b = 0,
		c = 0,
		d = 0;
	vector<int> arr(sz);
	
	for (int i=0; i<sz; i++)
	{
		arr[i] = rand()%10;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int kor = 0,
		bik = 0;
	while (bik<4 || kor<4)
	{
		cin>>a>>b>>c>>d;
		kor = 0;	bik = 0;
		if (a==arr[0])
		{
			bik++;
		}
		if (b==arr[1])
		{
			bik++;
		}
		if (c==arr[2])
		{
			bik++;
		}
		if (d==arr[3])
		{
			bik++;
		}
		for (int i=0; i<sz; i++)
		{
			if (a == arr[i])
			{
				kor++;
			}
			else if (b == arr[i])
			{
				kor++;
			}
			else if (c == arr[i])
			{
				kor++;
			}
			else if (d == arr[i])
			{
				kor++;
			}
		}
		cout<<bik<<" бык"<<" и "<<kor<<" корова"<<endl;
	}

	cout<<endl;
	return 0;
}
