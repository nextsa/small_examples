#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a = 0,
		b = 0,
		c = 0;
	cout<<"a*x^2 + b*x + c = 0"<<endl<<"Введите коэффициенты a, b, c:"<<endl;
	cin>>a>>b>>c;
	try
	{
		int x1 = 0;
		int x2 = 0;
		int d = (b*b - 4*a*c);
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		
		if (d<0)
		{
			throw d;
		}
		cout<<"x1 = "<<x1<<" "<<"x2 = "<<x2<<endl;
	}
	
	catch (int d)
	{
		cout<<"Отрицательный D = "<<d<<endl;
	}

	catch (...)
	{
		cout<<"Неизвестное прерывание"<<endl;
	}
	return 0;
}
