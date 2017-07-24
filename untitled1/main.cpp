#include <QCoreApplication>
#include <iostream>
#include <string>
#include <list>

using std::cout;
using std::endl;
using std::string;

class HomeForSale
{
public:
    HomeForSale(const string& street, const int& price) :
            mStreet(street),
            mPrice(price)
    {}
    ~HomeForSale() {}
protected:
    string mStreet;
    int mPrice;
//	HomeForSale(const HomeForSale&);
//	HomeForSale& operator=(const HomeForSale&);
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Effective C++. Third edition. Item 6. Bad code" << endl;
    HomeForSale h1("abc", 123);
    HomeForSale h2("bcd", 451);
    HomeForSale h3(h1);
    h1 = h2;

    cout << h1.mStreet << " " <<endl;
    return a.exec();
}

