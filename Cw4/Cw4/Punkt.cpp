#include "stdafx.h"
#include "Punkt.h"

namespace lib
{

	Punkt::Punkt(const float& _x, const float& _y) : x(_x), y(_y)
	{
	}

	bool Punkt::zapisz(ostream & os) const
	{
		os << "Punkt (" << x << ", " << y << ")";
		if (!os) return false;
		return true;
	}

	bool Punkt::wczytaj(istream & is)
	{
		is >> x >> y;
		if (!is) return false;
		return true;
	}

	string Punkt::opis() const
	{
		return "(" + to_string(x) + ", " + to_string(y) + ")";
	}

	Punkt::~Punkt()
	{
	}

	void Punkt::setX(const float & _x)
	{
		x = _x;
	}

	void Punkt::setY(const float & _y)
	{
		y = _y;
	}

	ostream & operator<<(ostream & os, const Punkt & punkt)
	{
		os << "Punkt (" << punkt.x << ", " << punkt.y << ")";
		return os;
	}

}