#include <iostream>

// Never using namespace globally
// using namespace std;

int main()
{
    using namespace std;

    cout << "Hello World!\nPrint Enter to continue..." << endl;
    cin.ignore();

    return 0;
}
