#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int b_y = 0;
	cin >> b_y;
	cout << endl;
	cout << b_y << "\t(decimal) - 10\n"
		 << hex << b_y << "\t(hexadecimal) - 16\n"
		 << oct << b_y << "\t(octal) - 8\n" << endl;
	cout << dec << 2017 - b_y << endl;
	cout << endl;

	int a, b, c, d;
	cin >> a
		>> oct >> b
		>> hex >> c >> d;
	cout << a << '\t' << b<< '\t' << c << '\t' << d << '\n' << endl;

	cout << 1234567.89 << '\t'
		 << defaultfloat << 1234567.89 << '\t'
		 << fixed << 1234567.89 << '\t'
		 << scientific << 1234567.89 << endl;
	cout<<endl;

	cout << "Friends" << endl 
		 << setw(12) << "Hoiefuhe" << '|'
		 << setw(9) << "OKIoics" << '|'
		 << setw(10) << "0435978521" << '|'
		 << setw(15) << "str. Jpoiud, 8" << endl
		 << setw(12) << "Khnusioia" << '|'
		 << setw(9) << "Pkduneus" << '|'
		 << setw(10) << "093586560" << '|'
		 << setw(15) << "str. Pjvj, 1" << endl
	 	 << setw(12) << "Pkjdy" << '|'
		 << setw(9) << "Pin" << '|'
		 << setw(10) << "845845581" << '|'
		 << setw(15) << "str. Topsu, 34" << endl;

	return 0;
}
