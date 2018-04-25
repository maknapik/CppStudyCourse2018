#include "stdafx.h"
#include "Kolo.h"

namespace lib
{
	Kolo::Kolo(const Punkt& p, string etykieta, float r) : Figura(p, etykieta), promien(r)
	{
	}

	Kolo::~Kolo()
	{
	}

	string Kolo::opis() const
	{
		return Figura::opis() + ", promien: " + to_string(promien);
	}

	bool Kolo::wczytaj(istream &is)
	{
		Figura::wczytaj(is);
		is >> promien;
		if (!is) return false;
		return true;
	}

	bool Kolo::zapisz(ostream & os) const
	{
		Figura::zapisz(os);
		os << ", promien: " << promien;
		if (!os) return false;
		return true;
	}
}
