#ifndef OBIEKTY_H_
#define OBIEKTY_H_

#include <iostream>
using namespace std;

class Wektor
{
	friend class Punkt;
private:
	float x, y, z;
public:
	Wektor(float X = 0, float Y = 0, float Z = 0) : x(X), y(Y), z(Z) {}
	//////////////////////////////////////////////////
	friend ostream &operator<<(ostream &stream, Wektor &p);
	friend Wektor operator*(const Wektor &w, float f);
	friend Wektor operator*(float f, const Wektor &w);
	Wektor& operator+=(const Wektor &w); //dodawanie do wektora
	Wektor operator+(const Wektor &w) const; //dodawanie dwóch wektorów
	Wektor& operator-() const; // zmiana znaku
	bool operator>(const Wektor &w); //porownanie dwoch wektorow
	float& operator[](unsigned int index); //operator []
	operator float(); //rzutowanie
};
///////////////////////////////////////////////////////
class Punkt
{
	private:
		float x, y, z;
	public:
		Punkt(float X = 0, float Y = 0, float Z = 0) : x(X), y(Y), z(Z) {}
		//////////////////////////////////////////////////
		friend ostream &operator<<(ostream &stream, Punkt &p);
		Punkt& operator++(); //preinkrementacja  
		Punkt operator++(int); //postinkrementacja
		Punkt operator+(const Wektor &w);
};


#endif
