#include <iostream>
#include <typeinfo>

int main()
{
    using namespace std;

    // Partially initialized 2 dimensional array
    int ia[3][5] = {
        {0, 1, 2, 3},
        {5, 6, 7, 8},
        {10, 11, 12}
    };

    // Pointer to 2 dimensional array
    int *pia = &ia[0][0];

    for (size_t y = 0; y < 3; ++y)
    {
        for (size_t x = 0; x < 5; ++x)
        {
            cout << "ia[" << y << "][" << x << "] = " << ia[y][x] << '\t'
                 << "*pia++ = " << *pia++ << endl;
        }
    }

    return 0;
}
