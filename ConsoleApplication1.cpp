
#include "stdafx.h" 
#include <iostream> 
#include <windows.h> 
#include <conio.h> 
#include <locale.h> 
#include <cstdio> 
#include <cmath> 
#include <string.h> 
#include <stdio.h> 
#include <cstdlib>
using namespace std;

void Summa(int a, int b)
{
	int c = a + b;
	cout << c << endl;
}

void Raznost(int a, int b)
{
	int c = a - b;
	cout << c << endl;
}

void Umnozhenie(int a, int b)
{
	int c = a * b;
	cout << c << endl;
}

void Delenie(int a, int b)
{
	float c = a / b;
	cout << c << endl;
}

void Menu()
{
	int a, b;
	bool exit = true;
	int input;
	cout << "1 chislo: ";
	cin >> a;
	cout << endl;
	cout << "2 chislo: ";
	cin >> b;
	cout << endl;
	while (exit)
	{
		cout << "1. Summa." << endl;
		cout << "2. Raznost." << endl;
		cout << "3. Umnozhenie." << endl;
		cout << "4. Delenie." << endl;
		cout << "5. Vihod." << endl;
		cout << "Vvedite menu: ";
		cin >> input;
		switch (input)
		{
		case 1:
			Summa(a, b);
			cout << endl;
			break;

		case 2:
			Raznost(a, b);
			cout << endl;
			break;

		case 3:
			Umnozhenie(a, b);
			cout << endl;
			break;

		case 4:
			Delenie(a, b);
			cout << endl;
			break;

		case 5:
			exit = false;
			break;
		}
	}
}

int main()
{
	Menu();
	return 0;
}

