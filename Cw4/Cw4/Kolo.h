#ifndef KOLO_H_
#define KOLO_H_

#include <iostream>

#include "Figura.h"
#include "Punkt.h"

namespace lib
{
	class Kolo : public Figura
	{
		public:
			Kolo(const Punkt& p, string etykieta, float r);
			~Kolo();

			string opis() const;
			float pole() const { return promien * promien * 3.14f; }

			virtual bool wczytaj(istream & is);
			virtual bool zapisz(ostream & os) const;
		protected:
			float promien;
	};
}

#endif

