#ifndef Figura_H
#define Figura_H

#include <string>
#include <iostream>
#include <sstream>

#include "Punkt.h"

using namespace std;

namespace lib
{
	class Figura
	{
	public:
		Figura(const Punkt& _punkt, string _etykieta);
		virtual ~Figura();
		void setEtykieta(const string& _etykieta) { etykieta = _etykieta; }
		virtual string opis() const;
		virtual float pole() const { return 0; }
		virtual bool zapisz(ostream & os) const;
		virtual bool wczytaj(istream & is);
	protected:
		Punkt srodek;
		string etykieta;
	};
}
#endif