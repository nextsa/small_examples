#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
float avr (vector<int> &arr)
{
    int n = 0;
	float sum = 0.;
    vector<int>::iterator it;
    
    
    for (it=arr.begin(); it!=arr.end(); ++it)
    {        
        sum += *it;
        n++;
    }
        
    float res = sum/n;    
    return res;
}

int main()
{
    ifstream infile;
    infile.open("ex4.txt");
    
	int n=0;
	infile>>n;
	vector<int> arr;
    
    for (int i=0; i<n; ++i)
    {               
        int num = -999;
		infile>>num;
        cout<<num<<" ";
		arr.push_back(num);
    }
    cout<<endl;
        
  	float res = avr(arr);
    cout<<"average = "<<res<<endl;
    return 0;
}

