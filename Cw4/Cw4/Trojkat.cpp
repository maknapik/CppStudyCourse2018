#include "stdafx.h"
#include "Trojkat.h"

namespace lib
{
	Trojkat::Trojkat(const Punkt & punkt, const string & etykieta, const Punkt & p1, const Punkt & p2, const Punkt & p3) :
		Figura(punkt, etykieta), P1(p1), P2(p2), P3(p3)
	{
	}

	Trojkat::~Trojkat()
	{
	}

	string Trojkat::opis() const
	{
		return Figura::opis() + ", punkty: " + P1.opis() + ", " + P2.opis() + ", " + P3.opis();
	}

	float Trojkat::pole() const
	{
		float a = sqrt((P2.getX() - P1.getX())*(P2.getX() - P1.getX()) + (P2.getY() - P1.getY())*(P2.getY() - P1.getY()));
		float b = sqrt((P3.getX() - P1.getX())*(P3.getX() - P1.getX()) + (P3.getY() - P1.getY())*(P3.getY() - P1.getY()));
		float c = sqrt((P3.getX() - P1.getX())*(P3.getX() - P2.getX()) + (P3.getY() - P2.getY())*(P3.getY() - P2.getY()));
		float p = (a + b + c) / 2.0f;
		return sqrt(p*(p - a)*(p - b)*(p - c));
	}

	bool Trojkat::zapisz(ostream & os) const
	{
		Figura::zapisz(os);
		os << ", punkt1: " << P1 << ", punkt2: " << P2 << ", punkt3: " << P3;
		if (!os) return false;
		return true;
	}

	bool Trojkat::wczytaj(istream & is)
	{
		Figura::wczytaj(is);
		P1.wczytaj(is);
		P2.wczytaj(is);
		P2.wczytaj(is);
		if (!is) return false;
		return true;
	}
}
