#include <iostream>
#include <ctime>
#include "random.h"
/*************************************************/
using namespace std;
/*************************************************/
double randomDouble(double low, double high)
{
    double f = (double)rand() / RAND_MAX;
    return low + f * (high - low);
}
/*************************************************/
int randomInt(int low, int high)
{
    return rand() % (high - low + 1) + low;
}
/*************************************************/

