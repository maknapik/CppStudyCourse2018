#ifndef TROJKAT_H_
#define TROJKAT_H_

#include "Figura.h"
#include "Punkt.h"

namespace lib
{
	class Trojkat : public Figura
	{
		public:
			Trojkat(const Punkt& punkt, const string& etykieta, const Punkt& p1, const Punkt& p2, const Punkt& p3);
			~Trojkat();

			string opis() const;
			float pole() const;
			bool zapisz(ostream & os) const;
			bool wczytaj(istream & is);
		protected:
			Punkt P1, P2, P3;
	};
}
#endif

