// Cw3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Punkt.h"
#include "Wielokat.h"

using namespace std;

int main()
{
	Punkt p1 = Punkt(10, 10);
	Punkt p2 = Punkt(20, 20);
	Punkt p3 = Punkt(30, 30);
	Punkt p4 = Punkt(60, 60);

	Wielokat wielokat;

	//Adding element and throwing exception//
	cout << "Adding elements, test of throwing exception\n";
	try
	{
		wielokat.addElement(p1);
		wielokat.addElement(p2);
		wielokat.addElement(p3);
		wielokat.addElement(p4); //exception
	}
	catch (const exception &e)
	{
		cout << "Something went wrong... Exception message: " << e.what() << endl;
	}
	cout << "Wielokat 1:\n";
	wielokat.show();

	cout << "\nNumber of elements of Wielokat 1\n";
	cout << "Size: " << wielokat.getSize() << endl;

	//Copy constructor//
	cout << "\nCopy constructor Wielokat 1 -> Wielokat 2:\n";
	Wielokat wielokat2 = Wielokat(wielokat); //copy constructor
	cout << "Wielokat 2:\n";
	wielokat2.show();
	cout << "Wielokat 1:\n";
	wielokat.show();

	//Move constructor//
	cout << "\nMove constructor Wielokat 2 -> Wielokat 3:\n";
	Wielokat wielokat3 = Wielokat(move(wielokat2)); //move constructor
	cout << "Wielokat 3\n";
	wielokat3.show();
	cout << "Wielokat 2:\n";
	wielokat2.show();

	//Copy assignment//
	cout << "\nCopy assignment Wielokat 1 -> Wielokat 3:\n";
	wielokat3 = wielokat; //copy assignment
	cout << "Wielokat 3\n";
	wielokat3.show();
	cout << "Wielokat 1:\n";
	wielokat.show();

	//Move assignment//
	cout << "\nMove assignment Wielokat 1 -> Wielokat 2:\n";
	wielokat2 = move(wielokat); //move assignment
	cout << "Wielokat 2\n";
	wielokat2.show();
	cout << "Wielokat 1:\n";
	wielokat.show();

	char x;
	cin >> x;
    return 0;
}

