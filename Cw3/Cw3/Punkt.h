#ifndef PUNKT_H_
#define PUNKT_H_

#include <string>

using namespace std;

class Punkt
{
	private:
		float x;
		float y;
	public:
		Punkt() : x(0), y(0) {}
		Punkt(float x, float y);
		~Punkt() {}

		Punkt& operator=(const Punkt &punkt); //copy assignment

		void show();
};
#endif

