#include <iostream>

using namespace std;

void prohozeni(int* a, int* b)
{
    int promena = *a;
    *a = *b;
    *b = promena;
}

int main()
{
/*    int a = 2;
    int b = 1;
    int value;

    value = a;
    a = b;
    b = value;

    cout << a << " " << b;


    int a = 1;
    int b = 0;

    int* _a = &a;
    int* _b = &b;

    int value = *_a;
    *_a = *_b;
    *_b = value;

    cout << a << " " << b;
*/
int a, b;

int* c = &a;
int* d = &b;

prohozeni(c, d);
}