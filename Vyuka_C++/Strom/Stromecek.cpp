#include <iostream>

using namespace std;

void udelej_korunu(int vyska)
{
    for(int i = 0; i < vyska; i++)
    {
        for(int j = 0; j < vyska-1-i; j++)
        {
            cout<<" ";
        }
        for(int k = 0; k < 2*i-1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void udelej_kmen(int vyska, int sirka, int vyska_stromu)
{
    for(int i = 0; i < vyska; i++)
    {
        for (int k = 0; k < vyska_stromu-sirka/2; k++)
        {
            cout << " ";
        }

        for(int j = 0; j < sirka; j++)
        {
          cout << "#" << endl;  
        }
        cout << endl;
    }
    
}

int main()
{
    udelej_korunu(2);
    udelej_kmen(3,3,3);
    return 0;
}