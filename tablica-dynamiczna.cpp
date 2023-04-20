#include <iostream>
using namespace std;

int main()
{
	int* tab;

	tab = new int[4];

	for (int i = 0; i < 4; i++)
	{
		tab[i] = i + 4;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << tab[i] << " ";
	}

	delete[]tab;
}