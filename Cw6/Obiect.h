#ifndef CW6_OBIECT_H
#define CW6_OBIECT_H
/*************************************************/
#include <iostream>
/*************************************************/
#include "random.h"
/*************************************************/
using namespace std;
/*************************************************/
const string gatunki[] = {"dab", "orzech", "sosna", "brzoza", "swierk"};
const int size = (sizeof(gatunki) / sizeof(gatunki[0]));
/*************************************************/
class Obiect {
    private:
        string gatunek;
        double srednica;
        int wiek;
    public:
        Obiect();
        friend ostream &operator<<(ostream &output, const Obiect &o);
        string hash() const;
        bool operator<(const Obiect &o) const;
        double getSrednica() const { return srednica; }
        string getGatunek() const { return gatunek; }
        void addSrednica(double amount) { srednica += amount; }
};
/*************************************************/
#endif //CW6_OBIECT_H
