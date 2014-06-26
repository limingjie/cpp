#include <iostream>

int main()
{
    int   isum = 0;
    float fsum = 0;
    float base = 0.1f;

    for (size_t size = 100; size >= 0; --size)
    {
        isum = (base + base * size) * 10;
        fsum = (base + base * size) * 10;

        if (isum != fsum)
        {
            std::cout << "(" << base << " + " << base * size << ") * 10 = " << isum << std::endl;
        }
    }

    return 0;
}
