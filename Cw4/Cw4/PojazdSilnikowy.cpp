#include "stdafx.h"
#include "PojazdSilnikowy.h"

namespace lib
{

	PojazdSilnikowy::PojazdSilnikowy(const Osoba & _wlasciciel, int _przebieg, float _pojemnosc, int _moc_kw) : Pojazd(_wlasciciel, _przebieg, _moc_kw), pojemnosc(_pojemnosc), moc_km(_moc_kw / 1.40f)
	{
	}

	PojazdSilnikowy::~PojazdSilnikowy()
	{
	}

	float PojazdSilnikowy::pobierzPojemnosc()
	{
		return pojemnosc;
	}

	string PojazdSilnikowy::opis() const
	{
		return Pojazd::opis() + ", moc KM: " + to_string(moc_km);
	}

	float PojazdSilnikowy::mocKW() const
	{
		return 0.0f;
	}

	bool PojazdSilnikowy::zapisz(ostream & os) const
	{
		return false;
	}

	bool PojazdSilnikowy::wczytaj(istream & is)
	{
		return false;
	}
}