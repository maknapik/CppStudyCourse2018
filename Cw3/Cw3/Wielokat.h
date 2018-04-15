#ifndef WIELOKAT_H_
#define WIELOKAT_H_

#include "Punkt.h"

class Wielokat
{
	private:
		Punkt* tab;
		int capacity; //max size
		int size; //actual size
	public:
		Wielokat();
		Wielokat(int Capacity);
		Wielokat(const Wielokat &wielokat); //copy constructor
		Wielokat(Wielokat &&wielokat); //move constructor

		Wielokat& operator=(const Wielokat &wielokat); //copy assignment
		Wielokat& operator=(Wielokat &&wielokat); //move assignment;

		int getSize() const { return size; }

		void addElement(Punkt punkt);

		void show() const;

		~Wielokat() { delete[] tab; }
};
#endif

