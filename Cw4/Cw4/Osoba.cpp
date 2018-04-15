#include "stdafx.h"
#include "Osoba.h"

namespace lib
{

	Osoba::Osoba(const string& _imie, const string& _nazwisko, int _rok_ur)
	{
	}

	void Osoba::ustawImie(const string & im)
	{
		imie = im;
	}

	string Osoba::pobierzImie() const
	{
		return string();
	}

	string Osoba::opis() const
	{
		return imie + " " + nazwisko + ", " + to_string(rok_ur);
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

}