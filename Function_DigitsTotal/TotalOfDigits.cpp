/*
In this code, we will calculate total of digits for three digits numbers.

Developer = Barış Someroğlu
Date = 25.03.2024 / 00:30 a.m.
*/

#include <iostream>

using namespace std;

// prototype declaration for functions
int OnesDigit(int);
int TensDigit(int);
int HundredDigit(int);
int TotalOfDigits(int, int, int);

int main()
{
	int Number;

	cout << "Please Enter the Number: ";
	cin >> Number;

	cout << "\n";

	if (Number > 0 && (Number / 10 >= 10 && Number / 10 <= 99)) // checking conditions for the number
	{
		// with this 3 line we will find digits
		int Ones = OnesDigit(Number);
		int Tens = TensDigit(Number);
		int Hundred = HundredDigit(Number);

		int Total = TotalOfDigits(Ones, Tens, Hundred); // calculating total of digits 

		cout << "Total of Digits = " << Total << endl;
	}

	else
	{
		cout << "Please Enter a Correct Number!" << endl;
	}

	return 0;
}

// functions to find the digits and the total

int OnesDigit(int Number)
{
	int Ones = Number % 10;

	return Ones;
}

int TensDigit(int Number)
{
	 Number = Number / 10;

	int Tens = Number % 10;

	return Tens;
}

int HundredDigit(int Number)
{
	int Hundred = Number / 100;

	return Hundred;
}

int TotalOfDigits(int Ones, int Tens, int Hundred)
{
	int Total = Ones + Tens + Hundred;

	return Total;
}