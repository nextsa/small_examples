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

    for (int i=1; i<size; i+=2)
    {
        int a = arr[i - 1];
        arr[i - 1] = arr[i];
        arr[i] = a;
        
    }
    for (int i=0; i<size; ++i)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}

