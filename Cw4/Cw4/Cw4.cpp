// Cw4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Figura.h"
#include "Punkt.h"
#include "Pierscien.h"
#include "Kolo.h"
#include "Trojkat.h"

using namespace std;
using namespace lib;

int main()
{
	Figura *tab[5];

	Punkt p(0, 0);
	Punkt p1(1, 2);
	Punkt p2(3, 4);
	Punkt p3(5, 6);

	cout << "Wczytaj srodek figury: ";
	p.wczytaj(cin);
	cout << "Wczytano: " << p.opis() << endl;

	tab[0] = new Figura(p, "Figura");
	tab[1] = new Kolo(p, "Kolo", 2.0f);
	tab[2] = new Pierscien(p, "Pierscien", 3.0f, 1.5f);
	tab[3] = new Trojkat(p, "Trojkat", p1, p2, p3);

	for (int i = 0; i < 4; i++)
	{
		cout << tab[i]->opis() << endl;
	}

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		tab[i]->zapisz(cout);
		cout << endl;
	}

	cout << "Pole trojkata: " << tab[3]->pole() << endl;

	Figura *pierscien = new Pierscien(p3, "Pierscien2", 0.0f, 0.0f);
	cout << "Wczytaj pierscien: ";
	pierscien->wczytaj(cin);
	cout << "Wczytano: ";
	pierscien->zapisz(cout);

	char x;
	cin >> x;
    return 0;
}

