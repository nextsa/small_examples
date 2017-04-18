#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    ifstream in;
    in.open("ex8-1.txt");
    
    int size=0;
    in>>size;
    vector <int> arr(size);
    
    for (int i=0; i<size; ++i)
    {
        in>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    in.close();

    for (int i=0; i<size/2; ++i)
    {
        swap (arr[i], arr[size - i - 1]);
        cout<<arr[i]<<" ";
    }
    for (int i=size/2; i<size; ++i)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}

