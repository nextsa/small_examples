#include<iostream>
using namespace std;

int main()
{
	int num;
    cout<<"Enter array's size: ";
    cin>>num;

    int *arr = new int[num]; 
    for (int i = 0; i < num; i++) 
	{
        arr[i] = i;
        cout<<"Value of "<<i<<" element is "<<arr[i]<<endl;
    }
    
	int min = arr[0];
	int max = arr[0];

	for (int i=1; i < num; i++)
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
	
	delete [] arr; 

	cout<<endl;

	return 0;
}
