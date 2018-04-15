#include "stdafx.h"
#include "PojazdSilnikowy.h"

namespace lib
{

	PojazdSilnikowy::PojazdSilnikowy(const Osoba & _wlasciciel, int _przebieg, float _pojemnosc, int _moc_km) : Pojazd(_wlasciciel, _przebieg), pojemnosc(_pojemnosc), moc_km(_moc_km)
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