// Cw4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Pojazd.h"

using namespace std;
using namespace lib;

int main()
{
	Osoba os1 = Osoba("Roman", "Polanski", 1956);
	Pojazd p1 = Pojazd(os1, 120000, 100.0f);
	cout << p1.opis();

	char x;
	cin >> x;
    return 0;
}

