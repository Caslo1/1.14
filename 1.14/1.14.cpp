#include <iostream>

using namespace std;

int main()
{
	unsigned int Quantity;
	unsigned int Value;

	cout << "Enter quantity in massive ";
	cin >> Quantity;
	auto* Massive{ new int[Quantity] };

	for (int i{}; i < Quantity; i++)
	{
		cout << "Enter Value ";
		cin >> Value;
		*(Massive + i) = Value * Value;
	}

	int Sum{};

	for (int i{}; i < Quantity; i++)
	{
		Sum += Massive[i];
	}

	cout << "Sum massive " << Sum << endl;

	delete[]Massive;
}