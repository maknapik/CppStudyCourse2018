#ifndef POJAZDSILNIKOWY_H_
#define POJAZDSILNIKOWY_H_

#include <string>
#include <iostream>
#include "Pojazd.h"

using namespace std;

namespace lib
{
	class PojazdSilnikowy : public Pojazd
	{
		protected:
			float pojemnosc;
			int moc_km;
		public:
			PojazdSilnikowy(const Osoba& _wlasciciel, int _przebieg, float _pojemnosc, int _moc_km);
			~PojazdSilnikowy();
			float pobierzPojemnosc();
			string opis() const;
			float mocKW() const;
			bool zapisz(ostream &os) const;
			bool wczytaj(istream &is);
	};
}
#endif

