#include <iostream>

using namespace std;


void result(int cislo)
{
    int res = 1;
	for (int i = 2; i <= cislo; i++)
    {
        res *= i;
    }

    cout << res;
    
}

int main()
{
    result(2);
    return 0;
}