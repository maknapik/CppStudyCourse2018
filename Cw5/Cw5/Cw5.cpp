// Cw5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "Template.h"

using namespace std;

/*********************************************************************************/
template <class T>
bool rowne(const T &a, const T &b, const T &c)
{
	if (a == b && b == c)
	{
		return true;
	}
	return false;
}
///////////////////////////////////////////////////////////////////////////////////
bool rowne(const char *a, const char *b, const char *c)
{
	if (strcmp(a, b) == 0 && strcmp(b, c) == 0)
	{
		return true;
	}
	return false;
}
/*********************************************************************************/
int main()
{
	if (rowne('a' , 'a', 'a')) cout << "3 elementy rowne\n";
	if (rowne("rr", "rr", "rr")) cout << "3 elementy rowne\n";

	TreeBST<int> tree;

	tree.insert(4);
	for (int i = 0; i < 5; i++)
	{
		try
		{
			tree.insert(i);
		}
		catch (Exception &e)
		{
			cout << "Exception message: " << e.getMessage() << endl;
		}
	}

	if (tree.contains(4)) cout << "Tree contains element 4\n";

	tree.print();

	cout << "Tree ostream: " << tree << endl;

	NodeBST<int> n1(5);
	n1.insert(3);
	cout << "node1: " << n1 << endl;

	char x;
	cin >> x;
    return 0;
}

