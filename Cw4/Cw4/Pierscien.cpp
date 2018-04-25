#include "stdafx.h"
#include "Pierscien.h"

namespace lib
{
	Pierscien::Pierscien(const Punkt & p, string etykieta, float r, float ir) : Kolo(p, etykieta, r), promien_wewn(ir)
	{
	}

	Pierscien::~Pierscien()
	{
	}

	string Pierscien::opis() const
	{
		return Kolo::opis() + ", promien wewn.: " + to_string(promien_wewn);
	}

	float Pierscien::pole() const
	{
		return (promien * promien - promien_wewn * promien_wewn) * 3.14;
	}

	bool Pierscien::wczytaj(istream & is)
	{
		Kolo::wczytaj(is);
		is >> promien_wewn;
		if (!is) return false;
		return true;
	}

	bool Pierscien::zapisz(ostream & os) const
	{
		Kolo::zapisz(os);
		os << ", promien wewn.: " << promien_wewn;
		if (!os) return false;
		return true;
	}
}