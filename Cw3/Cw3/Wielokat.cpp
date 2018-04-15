#include "stdafx.h"
#include <iostream>
#include "Wielokat.h"

using namespace std;

Wielokat::Wielokat() : capacity(3), size(0)
{
	tab = new Punkt[capacity];
}

Wielokat::Wielokat(int Capacity) : capacity(Capacity)
{
	tab = new Punkt[Capacity];
}

Wielokat::Wielokat(const Wielokat & wielokat) //copy constructor
{
	capacity = wielokat.capacity;
	size = wielokat.size;

	tab = new Punkt[capacity];

	for (int i = 0; i < size; i++)
	{
		tab[i] = wielokat.tab[i];
	}
}

Wielokat::Wielokat(Wielokat && wielokat) //move constructor
{
	capacity = wielokat.capacity;
	size = wielokat.size;

	wielokat.capacity = 0;
	wielokat.size = 0;
	tab = wielokat.tab;
	wielokat.tab = NULL;
}

Wielokat & Wielokat::operator=(const Wielokat & wielokat) //copy assignment
{
	if (&wielokat == this)
	{
		return *this;
	}

	if (tab != NULL) 
	{
		delete[] tab; 
		//tab = NULL;
	}

	capacity = wielokat.capacity;
	size = wielokat.size;

	tab = new Punkt[capacity];

	for (int i = 0; i < size; i++)
	{
		tab[i] = wielokat.tab[i];
	}

	return *this;
}

Wielokat & Wielokat::operator=(Wielokat && wielokat) //move assignment
{
	if (this != &wielokat)
	{
		capacity = wielokat.capacity;
		size = wielokat.size;
		delete[] tab;
		tab = wielokat.tab;

		wielokat.capacity = 0;
		wielokat.size = 0;
		wielokat.tab = NULL;
	}

	return *this;
}


void Wielokat::addElement(Punkt punkt)
{
	if (size >= capacity) {  
		throw exception("No more space in array");
	}
	tab[size++] = punkt;
}

void Wielokat::show() const
{
	if (size == 0)
	{
		cout << "Empty shape\n";
		return;
	}
	for (int i = 0; i < (size < capacity ? size : capacity) ; i++)
	{
		tab[i].show();
	}
}
