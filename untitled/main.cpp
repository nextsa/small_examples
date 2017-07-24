#include <QCoreApplication>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

/*
    char c;
    cout << "Input c:" << endl;
    cin >> c;
    cout << &c << endl;
*/
    vector<int> v = {1, 2, 3, 4, 5, 7};
    cout << v.capacity() << endl;

    vector<int> v1(v);
    vector<int> v2;
    v2 = v1;

    for(auto c:v2)
    {
        cout << c << " ";
    }
    cout << endl;

    return a.exec();
}

