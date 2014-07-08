#include <iostream>

using std::string;
using std::cout;
using std::endl;

void swapInt(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void swapString(string &a, string &b)
{
    string t = a;
    a = b;
    b = t;
}

int main()
{
    int ia = 10;
    int ib = 20;

    cout << "Before swap: " << ia << ' ' << ib << endl;
    swapInt(ia, ib);
    cout << "After swap: " << ia << ' ' << ib << endl;

    string sa = "hello";
    string sb = "world";

    cout << "Before swap: " << sa << ' ' << sb << endl;
    swapString(sa, sb);
    cout << "After swap: " << sa << ' ' << sb << endl;

    return 0;
}
