#include "stdafx.h"
#include <iostream>
#include "Punkt.h"

Punkt::Punkt(float X, float Y)
{
	x = X;
	y = Y;
}

Punkt & Punkt::operator=(const Punkt & punkt)
{
	if (&punkt == this)
	{
		return *this;
	}

	x = punkt.x;
	y = punkt.y;

	return *this;
}

void Punkt::show()
{
	cout << "X: " << x << ", y: " << y << endl;
}
