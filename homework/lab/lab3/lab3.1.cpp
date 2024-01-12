#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Which number do you want to test:\n";
    cin >> input;
    if (input % 2)
    {
        cout << "number" << input << '\t' << "is odd";
    }
    else
    {
        cout << "number" << input << '\t' << "is even";
    }
    return 0;

}