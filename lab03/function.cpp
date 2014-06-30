#include <iostream>
#include <string>

void says(std::string name, char repeat = '.', int times = 10)
{
    using namespace std;

    string words(times, repeat);
    cout << name << " says: " << words << endl;
}

void says(std::string name, std::string words)
{
    using namespace std;

    cout << name << " says: " << words << endl;
}

int main()
{
    says("Bill", "Morning");
    says("Mike", "Good morning!");
    says("Nicole", "Bye");
    says("John");
    says("Tom", 'z', 20);

    return 0;
}
