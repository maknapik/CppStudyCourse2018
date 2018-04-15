#ifndef POJAZD_H
#define POJAZD_H

#include <string>
#include <iostream>

#include "Osoba.h"

using namespace std;

namespace lib
{
	class Pojazd
	{
	public:
		Pojazd(const Osoba& _wlasciciel, int _przebieg);
		virtual ~Pojazd();
		virtual string opis() const; /// zwraca napis z wszystkimi atrybutami (np. "wlasciciel: Jan Kowalski 1970, przebieg: 120000")
		virtual float mocKW() const;
		virtual bool zapisz(ostream & os) const;
		virtual bool wczytaj(istream & is);
	protected:
		Osoba wlasciciel;
		int przebieg;
		float moc_kw;
	};
}
#endif