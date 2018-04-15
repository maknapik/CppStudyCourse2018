#include "stdafx.h"
#include "Pojazd.h"

namespace lib
{
	Pojazd::Pojazd(const Osoba& _wlasciciel, int _przebieg) : wlasciciel(_wlasciciel), przebieg(_przebieg)
	{
	}

	Pojazd::~Pojazd()
	{
	}

	string Pojazd::opis() const
	{
		return "Wlasciciel: " + wlasciciel.opis() + ", przebieg: " + to_string(przebieg) + ", moc KW: " + to_string(moc_kw);
	}

	float Pojazd::mocKW() const
	{
		return moc_kw;
	}

	bool Pojazd::zapisz(std::ostream & os) const
	{
		wlasciciel.zapisz(os);
		os << "\nPrzebieg: " << przebieg << ", moc KW: " << moc_kw;
		if (!os) return false;
		return true;
	}

	bool Pojazd::wczytaj(std::istream & is)
	{
		wlasciciel.wczytaj(is);
		is >> przebieg >> moc_kw;
		if (!is) return false;
		return true;
	}
}