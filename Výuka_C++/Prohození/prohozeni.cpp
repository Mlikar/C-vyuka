#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 1;
    int value;

    value = a;
    a = b;
    b = value;

    cout << a << " " << b;

}