#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    ifstream in;
    ofstream out;

    in.open("input.txt");
    out.open("output.txt");

    vector <int> arr;
    int d;
    while (in>>d)
    {
        out<<d<<" ";
    }
    return 0;
}

