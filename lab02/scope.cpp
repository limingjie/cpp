#include <iostream>
#include <iomanip>

int i = 0;

void PrintInt(int i, std::string str)
{
    std::cout << std::setw(16) << std::left << str << "==> i = " << i << std::endl;
}

void PrintI()
{
    PrintInt(i, "PrintI()");
}

void PrintStatic()
{
    static int i = 1000;
    PrintInt(i++, "PrintStatic()");
}

int main()
{
    int i = 10;

    PrintInt(i, "Print in main()");
    PrintI();

    for (int temp = 0; temp < 10; temp++)
    {
        int i = 100 + temp;
        PrintInt(i, "Print in loop");
        PrintStatic();
    }

    return 0;
}
