#include "stdafx.h"
#include "Osoba.h"

namespace lib
{

	Osoba::Osoba(const string& _imie, const string& _nazwisko, int _rok_ur) : imie(_imie), nazwisko(_nazwisko), rok_ur(_rok_ur)
	{
	}

	Osoba::Osoba(const Osoba & osoba)
	{
		imie = osoba.imie;
		nazwisko = osoba.nazwisko;
		rok_ur = osoba.rok_ur;
	}

	void Osoba::ustawImie(const string & im)
	{
		imie = im;
	}

	string Osoba::pobierzImie() const
	{
		return string();
	}

	bool Osoba::zapisz(ostream & os) const
	{
		os << imie << " " << nazwisko << " " << rok_ur;
		if (!os) return false;
		return true;
	}

	bool Osoba::wczytaj(istream & is)
	{
		is >> imie >> nazwisko >> rok_ur;
		if (!is) return false;
		return true;
	}

	Osoba::~Osoba()
	{
	}

	ostream & operator<<(ostream & os, const Osoba & osoba)
	{
		os << osoba.imie << " " << osoba.nazwisko << " " << osoba.rok_ur;
		return os;
	}

}