#ifndef OSOBA_H
#define OSOBA_H

#include <string>
#include <iostream>

using namespace std;

namespace lib
{
	class Osoba
	{
		public:
			Osoba(const string& _imie, const string& _nazwisko, int _rok_ur);
			Osoba(const Osoba& osoba);
			virtual ~Osoba();
			void ustawImie(const string& im);
			string pobierzImie() const;
			bool zapisz(ostream & os) const; /// zapisuje atrybuty do strumienia
			bool wczytaj(istream & is); /// wczytuje atrybuty ze strumienia
			friend ostream& operator<<(ostream &os, const Osoba &osoba);
		private:
			string imie;
			string nazwisko;
			int	rok_ur;
	};
}

#endif