#ifndef MEXCEPTION_H_
#define MEXCEPTION_H_

#include "stdafx.h"
#include <iostream>

using namespace std;

class Exception
{
	private:
		string msg;
	public:
		Exception(const string &_msg) : msg(_msg) {}
		~Exception() {}
		string getMessage() const { return msg; }
};

#endif
