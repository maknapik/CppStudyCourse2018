#ifndef CW6_OBIECT_H
#define CW6_OBIECT_H
/*************************************************/
#include <iostream>
/*************************************************/
#include "random.h"
/*************************************************/
using namespace std;
/*************************************************/
const string imiona[] = {"Ares", "Reksio", "Bonifacy", "Kleofas", "Tiger"};
const string gatunki[] = {"kot", "pies", "mysz", "malpa", "wieloryb"};
const int sizei = (sizeof(imiona) / sizeof(imiona[0]));
const int sizeg = (sizeof(gatunki) / sizeof(gatunki[0]));
/*************************************************/
class Zwierze {
    private:
        string imie;
        string gatunek;
        int wiek;
    public:
        Zwierze();
        friend ostream &operator<<(ostream &output, const Zwierze &o);
        string hash() const;
        bool operator<(const Zwierze &o) const;
        double getWiek() const { return wiek; }
        string getGatunek() const { return gatunek; }
        void addWiek(double amount) { wiek += amount; }
};
/*************************************************/
#endif //CW6_OBIECT_H
