#ifndef OSOBA_H
#define OSOBA_H

#include <string>
#include <iostream>

using namespace std;

namespace lib
{
	class Punkt
	{
		public:
			Punkt(const float& _x, const float& _y);
			virtual ~Punkt();
			void setX(const float& _x);
			void setY(const float& _y);
			float getX() const { return x; }
			float getY() const { return y; }
			bool zapisz(ostream & os) const; /// zapisuje atrybuty do strumienia
			bool wczytaj(istream & is); /// wczytuje atrybuty ze strumienia
			friend ostream& operator<<(ostream &os, const Punkt &osoba);
			string opis() const;
		private:
			float x, y;
	};
}

#endif