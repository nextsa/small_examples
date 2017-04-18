#include <fstream>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
double average(vector <double> &arr, int size)
{
    double sum = 0;
    for (int i=0; i<size; i++)
    {
        sum +=arr[i];
    }
    double res = sum/size;
    return res;
}

int main()
{
    ifstream in;
    in.open("ex8-4.txt");
    
    int size=0;
    in>>size;
    vector <double> arr(size);
    
    for (int i=0; i<size; ++i)
    {
        in>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    in.close();
    
    
    double res = average(arr, size);
    cout<<res<<endl;
    double a = 0.0;
    for (int i=0; i<size; i++)
    {
        
        a = abs(arr[i] - res);
        cout<<a<<" ";
        
    }

    cout<<endl;

    return 0;
}

