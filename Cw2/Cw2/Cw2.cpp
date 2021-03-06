// Cw2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "obiekty.h"

using namespace std;

int main()
{
	Punkt p(3.0f, 4.0f, 5.0f);
	Wektor w1(1.0f, 2.0f, 3.0f);
	Wektor w2(4.0f, 5.0f, 6.0f);

	cout << "Start:\n" << p << w1 << w2;

	Wektor w3 = w1 + w2;
	cout << "\nDodawanie wektorow:\n" << w3;
	w1 += w2;
	cout << "\nDodanie wektora do wektora:\n" << w1;

	w3 = w1 * 2.0f;
	cout << "\nMnozenie wektora " << w1 << "przez liczbe 2.0 :\n" << w3;

	p = p + w1;

	cout << "\nPrzesuniecie punktu o wektor:\n" << p;
	cout << "\nPreinkrementacja punktu:\n" << ++p;

	cout << "\nZmieniony znak wektora:\n" << -w1;

	cout << "\nx z wektora: " << w1[0] << endl;

	cout << "\nDlugosc wektora: " << (float)w1 << endl;
	int x;
	cin >> x;
    return 0;
}

