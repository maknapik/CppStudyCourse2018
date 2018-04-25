#ifndef PIERSCIEN_H_
#define PIERSCIEN_H_

#include "Kolo.h"

namespace lib
{
	class Pierscien : public Kolo
	{
		public:
			Pierscien(const Punkt& p, string etykieta, float r, float ir);
			~Pierscien();

			string opis() const;
			float pole() const;

			bool wczytaj(istream &is);
			bool zapisz(ostream &os) const;
		protected:
			float promien_wewn;
	};
}

#endif

