//První hodina - stromeček

#include <iostream>

using namespace std;

int main()
{

	int x;
	int b;
	int a;


	cout << "Zadej velikost stromu: " << endl;
	cin >> x;

	int y = 1;
	b = x;


	cout << "Zadej velikost kmene: " << endl;
	cin >> a;

	int x1;
	int y1 = 3;
	x1 = x - 1;


	for(int j = 1; j <= b; j++)
	{
	   for(int i = 1; i <= x; i++)
	   {
	      cout << " ";
	   }
       x--;

	   for(int i = 1; i <= y; i++)
	   {
		  cout << "*";
	   }
	   y += 2;

	   cout << endl;
	}

	for (int i = 1; i <= a; i++)
	{
		for (int i = 1; i <= x1; i++)
		{
			cout << " ";
		}

		for (int i = 1; i <= y1; i++)
		{
			cout << "|";
		}
		

		cout << endl;
	}
}




