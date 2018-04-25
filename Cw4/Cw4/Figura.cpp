#include "stdafx.h"
#include "Figura.h"

namespace lib
{
	Figura::Figura(const Punkt& _srodek, string _etykieta) : srodek(_srodek), etykieta(_etykieta)
	{
	}

	Figura::~Figura()
	{
	}

	string Figura::opis() const
	{
		return "Figura: " + etykieta + " , srodek: (" + to_string(srodek.getX()) + "," + to_string(srodek.getY()) + ")";
	}

	bool Figura::zapisz(std::ostream & os) const
	{
		srodek.zapisz(os);
		os << ", etykieta: " << etykieta << " ";
		if (!os) return false;
		return true;
	}

	bool Figura::wczytaj(std::istream & is)
	{
		srodek.wczytaj(is);
		is >> etykieta;
		if (!is) return false;
		return true;
	}
}