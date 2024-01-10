#include <iostream>

using namespace std;

int main()
{
/*    int a = 2;
    int b = 1;
    int value;

    value = a;
    a = b;
    b = value;

    cout << a << " " << b;
*/

    int a = 2;
    int b = 1;

    int* _a = &a;
    int* _b = &b;

    int value = *_a;
    *_a = *_b;
    *_b = value;

    cout << a << " " << b;

}