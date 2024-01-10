
//
// AoC 2020 day1
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int result;

	fstream myFile;

	vector<int> cisla;

	myFile.open("aoc.txt", ios::in);
	if (myFile.is_open())
	{
		string radek;
		while (getline(myFile, radek))
		{
			cisla.push_back(stoi(radek));
		}
		myFile.close();

	}

	for (int i = 0; i < cisla.size(); i++)
	{
		for (int j = 0; j < cisla.size(); j++)
		{
			for(int k = 0; k < cisla.size(); k++)
			{
				if (cisla[i] + cisla[j] + cisla[k] == 2020)
				{
					cout << "Prvni cast: " << endl;
					cout << cisla[i] << " + " << cisla[j] << " + " << cisla[k] << " = 2020" << endl;
					//result = cisla[i] * cisla[j];
					//cout << "Vysledek je: " << result;
				}
			}

		}
	}

	

	return 0;
}