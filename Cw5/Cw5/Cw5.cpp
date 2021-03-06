// Cw5.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

#include "Lista.h"

using namespace std;

/*********************************************************************************/
template <class T>
T suma(const T &a, const T &b)
{
	return a + b;
}
///////////////////////////////////////////////////////////////////////////////////
const char* suma(const char *a, const char *b)
{
	char *buf = new char[strlen(a) + strlen(b) + 1];
	strcpy(buf, a);
	strcat(buf, b);
	return buf;
}
/*********************************************************************************/
int main()
{
	cout << "Suma 2 + 3: " << suma(2, 3) << endl;
	cout << "Suma const char*: " << suma("Ala ma", "kota") << endl;

	lista<int> list;
	int a = 5;
	int b = 6;
	list.add(a);
	list.add(b);
	cout << "List ostream: " << list << endl;
	for (int i = 0; i < 3; i++)
	{
		try
		{
			list.del();
		}
		catch(Exception e)
		{
			cout << "Exception message: " << e.getMessage() << endl;
		}
	}


	char x;
	cin >> x;
    return 0;
}

