#include <iostream>

int main()
{
    using namespace std;

    int n = 10;
    int *pn = &n;
    int **ppn = &pn;

    cout << "Value of n:\n"
         << "direct value: " << n << endl
         << "indirect value: " << *pn << endl
         << "doubly indirect value: " << **ppn << endl
         << "address of n: " << pn << endl
         << "address of n via indirection: " << *ppn << endl;

    return 0;
}
