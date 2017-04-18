#include <iostream>

using namespace std;

double fact(int n)
{
	if (n < 0)
	{
		return 0;
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main()
{
	int a = 0,
		b = 0;
	cout<<"Введите два числа: ";
	cin>>a>>b;
	
	cout<<"Выберите необходимое действие (нажмите 1, или 2):"<<endl
		<<"1) вычислить количество перестановок;"<<endl
		<<"2) вычислить количество сочетаний."<<endl;

	int choise= 0;
	cin>>choise;

	int d = 0,
		e = 0,
		p = 0;

	if ((a - b) == 0)
	{
		cout<<"Деление на 0!"<<endl;
	}
	else
	{
		p = fact(a)/fact(a - b);
	}

	if (choise == 1)
	{
		cout<<"Kоличество перестановок = "<<p<<endl;
	}
	else if (choise == 2)
	{
		int g = 0;
		g = p/fact(b);
		cout<<"Kоличество сочетаний = "<<g<<endl;
	}
	else
	{
		cout<<"Ошибка! Неверный ввод!"<<endl;
	}

	return 0;
}


