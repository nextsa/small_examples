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
int kol = 0;
    for (int i=0; i<size; i++)
    {
        
        if (arr[i] % 2 == 1)
        {
            kol++;
        }
        
    }

    cout<<kol<<endl;

    return 0;
}

