#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    int len = strlen("Hello World!");
    char hello[36] = "Hello World! Good morning World!";

    cout << hello << endl;

    hello[len] = '\0';

    cout << hello << endl;

    hello[len] = '!';

    cout << hello << endl;

    return 0;
}
