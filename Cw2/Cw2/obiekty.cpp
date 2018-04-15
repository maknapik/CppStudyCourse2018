#include "stdafx.h"
#include "obiekty.h"

//////////////////////WEKTOR////////////////////////////////////////////
ostream &operator<<(ostream &stream, Wektor &p) //wypisanie do strumienia
{
	stream << "Wektor [" << p.x << ", " << p.y << ", " << p.z << "]\n";
	return stream;
}
Wektor& Wektor::operator+=(const Wektor &w) //dodawanie do wektora
{
	x += w.x;
	y += w.y;
	z += w.z;
	return *this;
}
Wektor Wektor::operator+(const Wektor &w) //dodawanie dwoch wektorow
{
	Wektor tmp;
	tmp.x = x + w.x;
	tmp.y = y + w.y;
	tmp.z = z + w.z;
	return tmp;
}
Wektor operator*(const Wektor &w, float f) //mnozenie wektora przez liczbe
{
	Wektor tmp;
	tmp.x = w.x * f;
	tmp.y = w.y * f;
	tmp.z = w.z * f;
	return tmp;
}
Wektor operator*(float f, const Wektor &w) //mnozenie wektora przez liczbe
{
	Wektor tmp;
	tmp.x = w.x * f;
	tmp.y = w.y * f;
	tmp.z = w.z * f;
	return tmp;
}
Wektor& Wektor::operator-() // zmiana znaku
{
	x *= -1;
	y *= -1;
	z *= -1;
	return *this;
}
bool Wektor::operator>(const Wektor &w) //porownanie dwoch wektorow
{
	if (x*x + y * y + z * z > w.x*w.x + w.y*w.y + w.z*w.z) return true;
	return false;
}
float& Wektor::operator[](unsigned int index) //operator []
{
	switch (index)
	{
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		default:
			return x;
	}
}
Wektor::operator float() //rzutowanie
{
	return sqrt(x*x + y * y + z * z);
}
////////////////////PUNKT////////////////////////////////////////////////
ostream & operator<<(ostream & stream, Punkt & p) //wypisanie do strumienia
{
	stream << "Punkt [" << p.x << ", " << p.y << ", " << p.z << "]\n";
	return stream;
}
Punkt Punkt::operator+(const Wektor &w) //przesuniecie punktu o wektor
{
	x += w.x;
	y += w.y;
	z += w.z;
	return *this;
}
Punkt& Punkt::operator++() //preinkrementacja  
{
	x++;
	y++;
	z++;
	return *this;
}
Punkt Punkt::operator++(int) //postinkrementacja
{
	Punkt tmp = *this;
	x++;
	y++;
	z++;
	return tmp;
}

