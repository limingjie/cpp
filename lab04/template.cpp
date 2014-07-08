#include <iostream>

using std::string;
using std::cout;
using std::endl;

template <typename T>
void swapAny(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

template void swapAny<int>(int &a, int &b);
template void swapAny<string>(string &a, string &b);

int main()
{
    int ia = 10;
    int ib = 20;

    cout << "Before swap: " << ia << ' ' << ib << endl;
    swapAny<int>(ia, ib);
    cout << "After swap: " << ia << ' ' << ib << endl;

    string sa = "hello";
    string sb = "world";

    cout << "Before swap: " << sa << ' ' << sb << endl;
    swapAny<string>(sa, sb);
    cout << "After swap: " << sa << ' ' << sb << endl;

    return 0;
}
