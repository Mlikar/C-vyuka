#include <iostream>
using namespace std;

// rekurzíva
unsigned long long factorial(int n) //
{
    if (n == 0 || n == 1) 
    {
        return 1;
    }
    else 
    {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num;
    cout << "Vložte číslo: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Nelze počítat" << endl;
    }
    else 
    {
        unsigned long long fact = factorial(num);
        cout << "Faktoriaál " << num << " je: " << fact << endl;
    }

    return 0;
}